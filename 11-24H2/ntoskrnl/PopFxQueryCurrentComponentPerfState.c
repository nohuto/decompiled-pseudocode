/*
 * XREFs of PopFxQueryCurrentComponentPerfState @ 0x1405CF08C
 * Callers:
 *     PoFxQueryCurrentComponentPerfState @ 0x1405CDA90 (PoFxQueryCurrentComponentPerfState.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405CF760 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

_BYTE *__fastcall PopFxQueryCurrentComponentPerfState(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _BYTE *a6)
{
  __int64 v6; // rax
  __int64 v8; // rbx
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *result; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]
  unsigned int v15; // [rsp+2Ch] [rbp-1Ch]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v6 = *(_QWORD *)(a2 + 424);
  v8 = *(_QWORD *)(v6 + 152) + 32LL * a3;
  if ( *(_BYTE *)(v6 + 73) && (v9 = *(_QWORD *)(a1 + 64)) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 72);
    v16 = 0LL;
    v13 = v10;
    v14 = *(_DWORD *)(a2 + 16);
    v15 = a3;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(34LL, &v13) )
      PopFxBugCheck(0x605uLL, 0x22uLL, v9, 0LL);
    v11 = (unsigned int)v16;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 28LL) )
      v11 = v16;
    *a5 = v11;
    if ( v11 != *(_QWORD *)(v8 + 8) )
    {
      *(_QWORD *)(v8 + 16) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 24) = a4;
      *(_QWORD *)(v8 + 8) = *a5;
      result = a6;
      if ( a6 )
        *a6 = 1;
      return result;
    }
  }
  else
  {
    *a5 = *(_QWORD *)(v8 + 8);
  }
  result = a6;
  if ( a6 )
    *a6 = 0;
  return result;
}
