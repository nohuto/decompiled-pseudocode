/*
 * XREFs of VslpAddLiveDumpBufferChunk @ 0x14058EB30
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x14058A494 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslpAddLiveDumpBufferChunk(char *BaseAddress, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  int v7; // [rsp+28h] [rbp-80h]
  _QWORD v8[12]; // [rsp+30h] [rbp-78h]

  memset_0(v6, 0, 0x68uLL);
  result = 0LL;
  do
  {
    if ( !a2 )
      break;
    v5 = 0LL;
    do
    {
      --a2;
      v8[v5] = (unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12;
      BaseAddress += 4096;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 0xB && a2 );
    v7 = v5;
    result = VslpEnterIumSecureMode(2u, 60LL, 0, (__int64)v6);
  }
  while ( (int)result >= 0 );
  return result;
}
