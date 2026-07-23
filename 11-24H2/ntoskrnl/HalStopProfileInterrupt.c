/*
 * XREFs of HalStopProfileInterrupt @ 0x140542920
 * Callers:
 *     KiStopProfileTarget @ 0x1403A55C0 (KiStopProfileTarget.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalStopProfileInterrupt(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_DWORD *)(HalpProfileTimeInfo + 16LL * KeGetPcr()->Prcb.Number);
  if ( (_DWORD)a1
    || (result = (unsigned int)*v1, (_DWORD)result) && (result = (unsigned int)(result - 1), (*v1 = result) == 0) )
  {
    result = guard_dispatch_icall_no_overrides(a1, 0LL);
    _InterlockedDecrement(&dword_140FC1FEC);
  }
  return result;
}
