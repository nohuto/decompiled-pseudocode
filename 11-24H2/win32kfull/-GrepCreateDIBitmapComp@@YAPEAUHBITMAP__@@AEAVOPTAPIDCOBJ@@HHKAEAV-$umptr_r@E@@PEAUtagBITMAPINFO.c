/*
 * XREFs of ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401B8D54
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14017AF20 (NtGdiCreateDIBitmapInternal.c)
 * Callees:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140028C4C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1401B8EE8 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepCreateDIBitmapComp(
        struct OPTAPIDCOBJ *this,
        unsigned int a2,
        int a3,
        char a4,
        _QWORD *a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  unsigned int v12; // esi
  __int64 CompatibleBitmap; // rbx
  int v14; // r8d
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v17[96]; // [rsp+60h] [rbp-A8h] BYREF

  if ( a7 <= 2 && (!a6 || *a6 < 0x28u || (unsigned int)(a6[4] - 4) > 1) )
  {
    v12 = -a3;
    if ( a3 >= 0 )
      v12 = a3;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v17);
    CompatibleBitmap = GrepCreateCompatibleBitmap(this, a2, v12, 0, 0LL, 0LL);
    if ( CompatibleBitmap )
    {
      if ( (a4 & 4) == 0
        || !*a5
        || !a6
        || (unsigned int)GrepSetDIBits((_DWORD)this, CompatibleBitmap, v14, v12, (__int64)a5, (__int64)a6, a7, a8, a9) )
      {
        goto LABEL_7;
      }
      SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v16);
      GreDeleteObject(CompatibleBitmap);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v16);
    }
    CompatibleBitmap = 0LL;
LABEL_7:
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v17);
    return CompatibleBitmap;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
