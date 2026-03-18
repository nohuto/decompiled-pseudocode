/*
 * XREFs of ExAtsSvmSecureDevicePowerCallback @ 0x140658740
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExpAtsConfigureSecureDevice @ 0x140657EFC (ExpAtsConfigureSecureDevice.c)
 */

__int64 __fastcall ExAtsSvmSecureDevicePowerCallback(__int64 a1, int a2, ULONG_PTR a3)
{
  bool v5; // si
  __int64 result; // rax

  v5 = a2 == 1;
  result = ExpAtsConfigureSecureDevice(a3, a2 == 1);
  if ( a2 != 1 && (int)result < 0 )
    KeBugCheckEx(0x159u, 0x3202uLL, (int)result, a3, v5);
  return result;
}
