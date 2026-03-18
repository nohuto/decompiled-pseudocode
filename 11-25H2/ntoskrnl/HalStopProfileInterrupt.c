/*
 * XREFs of HalStopProfileInterrupt @ 0x140542770
 * Callers:
 *     KiStopProfileTarget @ 0x140269F30 (KiStopProfileTarget.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalStopProfileInterrupt(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_DWORD *)(HalpProfileTimeInfo + 16LL * KeGetPcr()->Prcb.Number);
  if ( (_DWORD)a1
    || (result = (unsigned int)*v1, (_DWORD)result) && (result = (unsigned int)(result - 1), (*v1 = result) == 0) )
  {
    result = guard_dispatch_icall_no_overrides(a1);
    _InterlockedDecrement(&dword_140FC15EC);
  }
  return result;
}
