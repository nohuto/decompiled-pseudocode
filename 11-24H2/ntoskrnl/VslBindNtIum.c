/*
 * XREFs of VslBindNtIum @ 0x140C1B9F4
 * Callers:
 *     HvlEnableVsmCalls @ 0x140C1B930 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslBindNtIum()
{
  __int16 v0; // sp
  __int64 result; // rax
  _QWORD BaseAddress[21]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v3; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v4[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v5; // [rsp+E8h] [rbp-18h]
  __int64 v6; // [rsp+F0h] [rbp-10h]
  __int64 v7; // [rsp+F8h] [rbp-8h]
  __int64 v8; // [rsp+100h] [rbp+0h]

  v3 = 0x8000LL;
  memset_0(v4, 0, 0x68uLL);
  BaseAddress[2] = 0LL;
  BaseAddress[14] = 0LL;
  v5 = BaseAddress;
  BaseAddress[0] = 53376LL;
  BaseAddress[1] = 384LL;
  BaseAddress[3] = 52992LL;
  BaseAddress[4] = 7LL;
  BaseAddress[5] = 37864LL;
  BaseAddress[6] = 208LL;
  BaseAddress[7] = 209LL;
  BaseAddress[8] = 36LL;
  BaseAddress[9] = 68LL;
  BaseAddress[10] = 1744LL;
  BaseAddress[11] = 39904LL;
  BaseAddress[12] = 5LL;
  BaseAddress[13] = 1944LL;
  BaseAddress[15] = 1216LL;
  BaseAddress[16] = 484LL;
  BaseAddress[17] = 486LL;
  BaseAddress[18] = 152LL;
  BaseAddress[19] = 796LL;
  BaseAddress[20] = 120LL;
  v6 = 176LL;
  v7 = (unsigned int)((unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12);
  if ( (unsigned __int64)((v0 + 48) & 0xFFF) + 176 > 0x1000 )
    v8 = (unsigned int)((unsigned __int64)MmGetPhysicalAddress((char *)&v3 + 7).QuadPart >> 12);
  result = VslpEnterIumSecureMode(2u, 0x100u, 0, (__int64)v4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x6Fu, (int)result, 0xFFuLL, 0LL, 0LL);
  return result;
}
