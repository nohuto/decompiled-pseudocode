/*
 * XREFs of ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x140336B04
 * Callers:
 *     NtGdiRemoveFontResourceW @ 0x140198E10 (NtGdiRemoveFontResourceW.c)
 *     NtGdiAddFontResourceW @ 0x140198FD0 (NtGdiAddFontResourceW.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall ProbeAndReadDesignVector(struct tagDESIGNVECTOR *a1, struct tagDESIGNVECTOR *a2)
{
  struct tagDESIGNVECTOR *v2; // rsi
  unsigned int v4; // eax
  unsigned int v6; // ebx
  const void *v7; // rdx

  v2 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (struct tagDESIGNVECTOR *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a1, a2, 8uLL);
  v4 = *((_DWORD *)a1 + 1);
  if ( v4 > 0x10 )
    return 0LL;
  v6 = 4 * v4 + 8;
  if ( v4 )
  {
    v7 = (char *)v2 + 8;
    if ( (unsigned __int64)v2 + 8 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory((char *)a1 + 8, v7, 4 * v4);
  }
  return v6;
}
