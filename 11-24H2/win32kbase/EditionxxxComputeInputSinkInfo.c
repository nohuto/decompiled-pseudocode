/*
 * XREFs of EditionxxxComputeInputSinkInfo @ 0x140135F20
 * Callers:
 *     HandleMITWakeSignal @ 0x1400EFF98 (HandleMITWakeSignal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall EditionxxxComputeInputSinkInfo(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7528LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
