/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     GreSelectVisRgn @ 0x1C004EBC0 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C016B110 (GreSelectVisRgnShared.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003C6B0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     GreSetRegionOwner @ 0x1C003E590 (GreSetRegionOwner.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C00402A0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C00403FC (-vStamp@REGION@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0049F04 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C007D940 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C007DD10 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00C6CF4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D1650 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage @ 0x1C00D20DC (Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00D2BB8 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0050 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // r14
  int v10; // r12d
  struct _RECTL v12; // [rsp+50h] [rbp-29h] BYREF
  struct REGION *v13[14]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int *v14; // [rsp+E0h] [rbp+67h] BYREF
  HSEMAPHORE v15; // [rsp+F8h] [rbp+7Fh] BYREF

  v6 = 0LL;
  SGDGetSessionState(a1);
  if ( *a1 )
  {
    v9 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    v15 = *(HSEMAPHORE *)(v9 + 128);
    EngAcquireSemaphore(v15);
    v10 = 1;
    v8 = 1;
    DC::vReleaseRao(*a1);
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_34;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, a2, 0, 0);
    if ( !v13[0] )
    {
      v6 = *(unsigned int **)(v9 + 6400);
      goto LABEL_29;
    }
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1LL) != -2147483630
      && !GrepValidateVisRgn(*a1, v13[0], (struct ERECTL *)&v12) )
    {
      RGNOBJ::vSet((RGNOBJ *)v13, &v12);
    }
    if ( a3 == 1 )
    {
      v6 = (unsigned int *)v13[0];
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle(v13) )
      {
        v13[0] = 0LL;
      }
      else
      {
        Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage();
        v8 = 0;
        DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 39LL, a2, v6, v6[2], 0LL, 0LL, 0);
      }
      goto LABEL_24;
    }
    if ( a3 == 2 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14, *((_DWORD *)v13[0] + 12));
      v6 = v14;
      if ( v14 )
        RGNOBJ::vCopy((RGNOBJ *)&v14, (struct RGNOBJ *)v13);
      else
        v6 = *(unsigned int **)(v9 + 6400);
      goto LABEL_24;
    }
    if ( a3 != 4 )
      goto LABEL_24;
    DC::AcquireDcVisRgnExclusive(*a1);
    v6 = (unsigned int *)*((_QWORD *)*a1 + 142);
    if ( v6 )
    {
      if ( v6 != *(unsigned int **)(v9 + 6400) )
      {
        v14 = (unsigned int *)*((_QWORD *)*a1 + 142);
        RGNOBJAPI::bSwap(v13, (struct RGNOBJ *)&v14);
        v6 = v14;
        v10 = 0;
LABEL_14:
        if ( LOBYTE(v12.right) )
          CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)&v12.left + 1112LL));
LABEL_24:
        if ( !v8 && a3 == 1 )
        {
LABEL_32:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
LABEL_34:
          SEMOBJ::vUnlock((PERESOURCE *)&v15);
          return v8;
        }
        if ( !v10 )
        {
LABEL_30:
          DC::AcquireDcVisRgnExclusive(*a1);
          *((_QWORD *)*a1 + 142) = v6;
          REGION::vStamp((REGION *)v6);
          if ( LOBYTE(v12.right) )
            CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)&v12.left + 1112LL));
          goto LABEL_32;
        }
LABEL_29:
        DC::vReleaseVis(*a1);
        goto LABEL_30;
      }
    }
    else
    {
      v6 = *(unsigned int **)(v9 + 6400);
    }
    v8 = 0;
    goto LABEL_14;
  }
  return 0;
}
