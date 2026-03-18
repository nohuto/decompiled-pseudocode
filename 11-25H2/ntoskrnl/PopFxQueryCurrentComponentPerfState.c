/*
 * XREFs of PopFxQueryCurrentComponentPerfState @ 0x1405CD0EC
 * Callers:
 *     PoFxQueryCurrentComponentPerfState @ 0x1405CBC20 (PoFxQueryCurrentComponentPerfState.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1405CD7C0 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  _BYTE *result; // rax

  v6 = *(_QWORD *)(a2 + 424);
  v8 = *(_QWORD *)(v6 + 152) + 32LL * a3;
  if ( *(_BYTE *)(v6 + 73) && (v9 = *(_QWORD *)(a1 + 64)) != 0 )
  {
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(34LL) )
      PopFxBugCheck(0x605uLL, 0x22uLL, v9, 0LL);
    *a5 = 0LL;
    if ( *(_QWORD *)(v8 + 8) )
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
