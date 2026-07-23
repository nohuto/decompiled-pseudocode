/*
 * XREFs of LdrpCheckRedirection @ 0x18008EA08
 * Callers:
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     LdrpCompareRedirectedFunction @ 0x1800EAF40 (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800EB4D4 (LdrpHashAsciizString.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpCheckRedirection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebp
  __int64 v9; // r12
  __int128 v10; // xmm0
  unsigned __int64 Root; // rbx
  unsigned int v12; // esi
  wchar_t *v13; // r8
  int v14; // edi
  LONG v15; // eax
  char *v16; // rax
  __int64 v17; // rdx
  char v18; // cl
  bool v19; // sf
  unsigned __int64 v20; // rax
  _QWORD **v22; // rax
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rcx
  _UNICODE_STRING RedirectionDllName; // [rsp+50h] [rbp-48h] BYREF
  PCWCH String2[2]; // [rsp+60h] [rbp-38h]

  *(_QWORD *)&RedirectionDllName.Length = 0LL;
  v5 = -4530927LL;
  v6 = LdrpHashAsciizString(a3, a2, a3, a2);
  v8 = *(_DWORD *)(v7 + 264);
  v9 = v7 + 88;
  v10 = *(_OWORD *)(v7 + 88);
  Root = (unsigned __int64)LdrpRedirectionTree.Root;
  v12 = v6;
  *(_QWORD *)&RedirectionDllName.Length = __PAIR64__(v8, v6);
  RedirectionDllName.Buffer = v13;
  *(_OWORD *)String2 = v10;
  if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 && LdrpRedirectionTree.Root )
    Root = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
  v14 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
  while ( Root )
  {
    v15 = *(_DWORD *)(Root + 24) - v12;
    if ( v15 )
      goto LABEL_11;
    v15 = *(_DWORD *)(Root + 28) - v8;
    if ( v15 )
      goto LABEL_11;
    v16 = *(char **)(Root + 32);
    v17 = a3 - (_QWORD)v16;
    while ( 1 )
    {
      v18 = *v16;
      if ( *v16 != v16[v17] )
        break;
      ++v16;
      if ( !v18 )
      {
        v15 = 0;
        goto LABEL_9;
      }
    }
    v15 = (unsigned __int8)*v16 < (unsigned __int8)v16[v17] ? -1 : 1;
LABEL_9:
    v19 = v15 < 0;
    if ( !v15 )
    {
      v15 = RtlCompareUnicodeStrings(
              *(PCWCH *)(Root + 48),
              (unsigned __int64)*(unsigned __int16 *)(Root + 40) >> 1,
              String2[1],
              (unsigned __int64)LOWORD(String2[0]) >> 1,
              1u);
LABEL_11:
      v19 = v15 < 0;
    }
    if ( v19 )
    {
      v20 = *(_QWORD *)Root;
    }
    else
    {
      if ( v15 <= 0 )
        break;
      v20 = *(_QWORD *)(Root + 8);
    }
    if ( v14 && v20 )
      Root ^= v20;
    else
      Root = v20;
  }
  while ( Root && !(unsigned int)LdrpCompareRedirectedFunction(&RedirectionDllName, Root) )
  {
    if ( !LdrpRedirectionByFunctionCalloutFunc
      || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(*(_QWORD *)(a1 + 80), *(unsigned int *)(Root + 64)) )
    {
      v5 = *(_QWORD *)(Root + 56);
      RedirectionDllName = NtCurrentPeb()->ProcessParameters->RedirectionDllName;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrredirect.c",
        296,
        (__int64)"LdrpCheckRedirection",
        2,
        "Import Redirection: %wZ %wZ!%s redirected to %wZ\n",
        a1 + 88,
        v9,
        a3,
        &RedirectionDllName);
      return v5;
    }
    v22 = *(_QWORD ***)(Root + 8);
    v23 = Root;
    if ( v22 )
    {
      v24 = *v22;
      for ( Root = *(_QWORD *)(Root + 8); v24; v24 = (_QWORD *)*v24 )
        Root = (unsigned __int64)v24;
    }
    else
    {
      while ( 1 )
      {
        Root = *(_QWORD *)(Root + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Root || *(_QWORD *)Root == v23 )
          break;
        v23 = Root;
      }
    }
  }
  return v5;
}
