/*
 * XREFs of NtGdiGetCurrentDpiInfo @ 0x140010B60
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfo @ 0x140010BFC (DrvGetCurrentDpiInfo.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtGdiGetCurrentDpiInfo(__int64 a1, void *a2)
{
  int CurrentDpiInfo; // ebx
  _BYTE Src[96]; // [rsp+20h] [rbp-78h] BYREF

  memset(Src, 0, sizeof(Src));
  CurrentDpiInfo = DrvGetCurrentDpiInfo(a1, Src);
  if ( CurrentDpiInfo >= 0 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, Src, 0x60uLL);
  }
  return (unsigned int)CurrentDpiInfo;
}
