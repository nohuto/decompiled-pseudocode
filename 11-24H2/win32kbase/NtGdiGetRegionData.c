/*
 * XREFs of NtGdiGetRegionData @ 0x140018290
 * Callers:
 *     <none>
 * Callees:
 *     FreeTmpBuffer @ 0x14001A2D0 (FreeTmpBuffer.c)
 *     GreGetRegionData @ 0x14002B770 (GreGetRegionData.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     AllocFreeTmpBuffer @ 0x140068090 (AllocFreeTmpBuffer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtGdiGetRegionData(HRGN a1, unsigned int a2, volatile void *a3)
{
  unsigned int v5; // esi
  _BYTE *v6; // rdi
  unsigned int RegionData; // eax
  _BYTE v9[448]; // [rsp+30h] [rbp-1F8h] BYREF

  v5 = 1;
  v6 = 0LL;
  if ( a3 )
  {
    if ( a2 > 0x1C0 )
    {
      if ( a2 <= 0x2710000 )
        v6 = (_BYTE *)AllocFreeTmpBuffer(a2);
    }
    else
    {
      v6 = v9;
    }
    if ( !v6 )
    {
      EngSetLastError(0x57u);
      v5 = 0;
    }
  }
  if ( v5 )
  {
    RegionData = GreGetRegionData(a1);
    v5 = RegionData;
    if ( a3 )
    {
      if ( RegionData )
      {
        ProbeForWrite(a3, RegionData, 4u);
        memmove((void *)a3, v6, v5);
      }
    }
  }
  if ( v6 && v6 != v9 )
    FreeTmpBuffer(v6);
  return v5;
}
