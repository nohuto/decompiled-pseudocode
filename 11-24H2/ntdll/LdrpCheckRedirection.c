/*
 * XREFs of LdrpCheckRedirection @ 0x180072128
 * Callers:
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     LdrpCompareRedirectedFunction @ 0x1800F02C0 (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800F0854 (LdrpHashAsciizString.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpCheckRedirection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // ebp
  __int128 v9; // xmm0
  unsigned __int64 i; // rbx
  unsigned int v11; // esi
  wchar_t *v12; // r8
  int v13; // edi
  int v14; // eax
  char *v15; // rax
  __int64 v16; // rdx
  char v17; // cl
  bool v18; // sf
  unsigned __int64 v19; // rax
  _QWORD **v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rcx
  int Format; // [rsp+20h] [rbp-78h]
  _UNICODE_STRING RedirectionDllName; // [rsp+50h] [rbp-48h] BYREF
  __int128 v26; // [rsp+60h] [rbp-38h]

  *(_QWORD *)&RedirectionDllName.Length = 0LL;
  v5 = -4530927LL;
  v6 = LdrpHashAsciizString(a3, a2, a3, a2);
  v8 = *(_DWORD *)(v7 + 264);
  v9 = *(_OWORD *)(v7 + 88);
  i = LdrpRedirectionTree;
  v11 = v6;
  *(_QWORD *)&RedirectionDllName.Length = __PAIR64__(v8, v6);
  RedirectionDllName.Buffer = v12;
  v26 = v9;
  if ( (qword_1801D2608 & 1) != 0 && LdrpRedirectionTree )
    i = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
  v13 = qword_1801D2608 & 1;
  while ( i )
  {
    v14 = *(_DWORD *)(i + 24) - v11;
    if ( v14 )
      goto LABEL_11;
    v14 = *(_DWORD *)(i + 28) - v8;
    if ( v14 )
      goto LABEL_11;
    v15 = *(char **)(i + 32);
    v16 = a3 - (_QWORD)v15;
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 != v15[v16] )
        break;
      ++v15;
      if ( !v17 )
      {
        v14 = 0;
        goto LABEL_9;
      }
    }
    v14 = (unsigned __int8)*v15 < (unsigned __int8)v15[v16] ? -1 : 1;
LABEL_9:
    v18 = v14 < 0;
    if ( !v14 )
    {
      LOBYTE(Format) = 1;
      v14 = RtlCompareUnicodeStrings(
              *(_QWORD *)(i + 48),
              (unsigned __int64)*(unsigned __int16 *)(i + 40) >> 1,
              *((_QWORD *)&v26 + 1),
              (unsigned __int64)(unsigned __int16)v26 >> 1,
              Format);
LABEL_11:
      v18 = v14 < 0;
    }
    if ( v18 )
    {
      v19 = *(_QWORD *)i;
    }
    else
    {
      if ( v14 <= 0 )
        break;
      v19 = *(_QWORD *)(i + 8);
    }
    if ( v13 && v19 )
      i ^= v19;
    else
      i = v19;
  }
  while ( i && !(unsigned int)LdrpCompareRedirectedFunction(&RedirectionDllName, i) )
  {
    if ( !LdrpRedirectionByFunctionCalloutFunc
      || (unsigned __int8)LdrpRedirectionByFunctionCalloutFunc(*(_QWORD *)(a1 + 80), *(unsigned int *)(i + 64)) )
    {
      v5 = *(_QWORD *)(i + 56);
      RedirectionDllName = NtCurrentPeb()->ProcessParameters->RedirectionDllName;
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrredirect.c",
        296,
        (__int64)"LdrpCheckRedirection",
        2,
        "Import Redirection: %wZ %wZ!%s redirected to %wZ\n",
        a1 + 88);
      return v5;
    }
    v21 = *(_QWORD ***)(i + 8);
    v22 = i;
    if ( v21 )
    {
      v23 = *v21;
      for ( i = *(_QWORD *)(i + 8); v23; v23 = (_QWORD *)*v23 )
        i = (unsigned __int64)v23;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v22 )
          break;
        v22 = i;
      }
    }
  }
  return v5;
}
