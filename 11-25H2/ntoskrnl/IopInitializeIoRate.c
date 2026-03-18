/*
 * XREFs of IopInitializeIoRate @ 0x14059F30C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExRegisterHost @ 0x1407B0F4C (ExRegisterHost.c)
 */

__int64 __fastcall IopInitializeIoRate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall **v4)(int, int, int, int, __int64, __int64, __int64, __int64); // [rsp+28h] [rbp-38h]
  _QWORD v5[6]; // [rsp+30h] [rbp-30h] BYREF

  v5[0] = 65542LL;
  v4 = &IopIoRateHostTable;
  v5[2] = 512LL;
  v5[1] = &v3;
  v3 = 1;
  v5[3] = 0LL;
  v5[4] = 0LL;
  result = ExRegisterHost(&IopIoRateExtensionHost, a2, v5);
  if ( (int)result < 0 )
    IopIoRateExtensionHost = 0LL;
  return result;
}
