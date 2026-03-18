/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C0232520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngGetRemoteDeviceCount())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294588;
  if ( qword_1C0294588 )
    return (__int64 (*)(void))qword_1C0294588();
  return result;
}
