/*
 * XREFs of NtGdiGetRgnBox @ 0x140100150
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x14002B0D0 (GreGetRgnBox.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetRgnBox(HRGN a1, void *a2)
{
  unsigned int RgnBox; // ebx
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF

  Src = 0LL;
  RgnBox = GreGetRgnBox(a1, (__int64)&Src);
  if ( RgnBox )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
  }
  return RgnBox;
}
