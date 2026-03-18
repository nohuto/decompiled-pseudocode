/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x14000FDA0 (GreSelectVisRgnShared.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 * Callees:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x140021A94 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x140025A90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreSetRegionOwner @ 0x14002DBC0 (GreSetRegionOwner.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x14002E480 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1400364AC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GreGetObjectOwner @ 0x1400BA870 (GreGetObjectOwner.c)
 *     ??$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C2210 (--$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vStamp@REGION@@AEAAXXZ @ 0x1400CA620 (-vStamp@REGION@@AEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CFEF8 (--$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x140173EA0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C2DFC (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401CD320 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  REGION *v5; // rbx
  unsigned int v6; // esi
  _QWORD *v7; // r14
  __int64 v8; // r13
  int v9; // r12d
  int v10; // edx
  unsigned int sizeScan; // eax
  int v12; // eax
  REGION *v15; // [rsp+28h] [rbp-58h] BYREF
  struct REGION *v16[7]; // [rsp+30h] [rbp-50h] BYREF
  struct _RECTL v17; // [rsp+68h] [rbp-18h] BYREF

  v5 = 0LL;
  W32GetSessionState();
  if ( !*a1 )
    return 0;
  v7 = *(_QWORD **)(W32GetSessionState() + 88);
  v8 = *v7 + 1248LL;
  GreAcquireSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v8);
  v9 = 1;
  v6 = 1;
  DC::vReleaseRao(*a1);
  if ( a2 )
  {
    GreSetRegionOwner(a2, 0LL);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, a2, 0, 0);
    if ( !v16[0] )
    {
      v5 = (REGION *)v7[520];
      goto LABEL_30;
    }
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1LL) != -2147483630
      && !GrepValidateVisRgn(*a1, v16[0], (struct ERECTL *)&v17) )
    {
      RGNOBJ::vSet((RGNOBJ *)v16, &v17);
    }
    v10 = a3;
    switch ( a3 )
    {
      case 1:
        v5 = v16[0];
        v12 = RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v16);
        v10 = 1;
        if ( v12 )
          v16[0] = 0LL;
        else
          v6 = 0;
        break;
      case 2:
        sizeScan = REGION_CORE::get_sizeScan((struct REGION *)((char *)v16[0] + 24));
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15, sizeScan);
        v5 = v15;
        if ( v15 )
          RGNOBJ::vCopy((RGNOBJ *)&v15, (struct RGNOBJ *)v16);
        else
          v5 = (REGION *)v7[520];
LABEL_16:
        v10 = a3;
        break;
      case 4:
        DC::AcquireDcVisRgnExclusive(*a1);
        v5 = (REGION *)*((_QWORD *)*a1 + 142);
        if ( v5 )
        {
          if ( v5 != (REGION *)v7[520] )
          {
            v15 = (REGION *)*((_QWORD *)*a1 + 142);
            RGNOBJAPI::bSwap((RGNOBJAPI *)v16, (struct RGNOBJ *)&v15);
            v5 = v15;
            v9 = 0;
LABEL_14:
            if ( LOBYTE(v17.right) )
              CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)&v17.left + 1112LL));
            goto LABEL_16;
          }
        }
        else
        {
          v5 = (REGION *)v7[520];
        }
        v6 = 0;
        goto LABEL_14;
    }
    if ( !v6 && v10 == 1 )
    {
LABEL_33:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
      goto LABEL_35;
    }
    if ( !v9 )
    {
LABEL_31:
      DC::AcquireDcVisRgnExclusive(*a1);
      *((_QWORD *)*a1 + 142) = v5;
      REGION::vStamp(v5);
      if ( LOBYTE(v17.right) )
        CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)&v17.left + 1112LL));
      goto LABEL_33;
    }
LABEL_30:
    DC::vReleaseVis(*a1);
    goto LABEL_31;
  }
  DC::vReleaseVis(*a1);
  DC::bSetDefaultRegion(*a1);
LABEL_35:
  if ( v8 )
    GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v8);
  return v6;
}
