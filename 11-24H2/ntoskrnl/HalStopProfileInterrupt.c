/*
 * XREFs of HalStopProfileInterrupt @ 0x140545060
 * Callers:
 *     KiStopProfileTarget @ 0x1403C8500 (KiStopProfileTarget.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalStopProfileInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdx
  __int64 result; // rax

  v4 = (_DWORD *)(HalpProfileTimeInfo + 16LL * KeGetPcr()->Prcb.Number);
  if ( (_DWORD)a1
    || (result = (unsigned int)*v4, (_DWORD)result) && (result = (unsigned int)(result - 1), (*v4 = result) == 0) )
  {
    result = guard_dispatch_icall_no_overrides(a1, 0LL, a3, a4);
    _InterlockedDecrement(&dword_140FC1D8C);
  }
  return result;
}
