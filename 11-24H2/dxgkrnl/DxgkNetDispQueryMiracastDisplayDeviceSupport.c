/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1403C4A80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceSupport(void *a1)
{
  int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  __int64 Src; // [rsp+38h] [rbp-20h] BYREF
  int v7; // [rsp+40h] [rbp-18h]

  Src = 0LL;
  v7 = 0;
  v4 = 0LL;
  v5 = 0;
  v2 = DxgkMiracastQueryMiracastSupportInternal(&v4);
  if ( v2 >= 0 )
  {
    HIDWORD(Src) = DWORD1(v4);
    LOBYTE(Src) = v4;
    LOBYTE(v7) = BYTE8(v4);
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a1, &Src, 0xCuLL);
  }
  return (unsigned int)v2;
}
