/*
 * XREFs of GreCreateDisplayDC @ 0x14000E640
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     NtGdiCreateMetafileDC @ 0x14000CE10 (NtGdiCreateMetafileDC.c)
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     UserGetDesktopDC @ 0x14000EDE0 (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14000D9F4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     HmgAllocateDcAttr @ 0x14001E2CC (HmgAllocateDcAttr.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     GreValidateVisrgn @ 0x140022F24 (GreValidateVisrgn.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x14002A6B0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1400346B8 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     HmgFreeDcAttr @ 0x1400BF91C (HmgFreeDcAttr.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C2438 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??$IsIsolatedTypeBusy@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z @ 0x1400CDF60 (--$IsIsolatedTypeBusy@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z.c)
 *     XDCOBJ_vSetDefaultFontWrap @ 0x1400DA678 (XDCOBJ_vSetDefaultFontWrap.c)
 *     IsXDCOBJ_vSetDefaultFontSupported @ 0x1400DE1F4 (IsXDCOBJ_vSetDefaultFontSupported.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140109048 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401307E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140175318 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x140175590 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C3128 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

HDC __fastcall GreCreateDisplayDC(HDEV a1, unsigned int a2, int a3)
{
  char v3; // r12
  HDC v6; // r15
  __int64 v7; // rcx
  bool v8; // al
  _QWORD *v10; // r13
  _QWORD *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  int v15; // edx
  BOOL v16; // ecx
  unsigned int v17; // eax
  int v18; // edx
  struct _DC_ATTR *DcAttr; // r14
  HDEV v20; // rdx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  __int64 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+50h] [rbp-68h]
  char v26; // [rsp+58h] [rbp-60h]
  DC *v27[5]; // [rsp+60h] [rbp-58h] BYREF
  int v28; // [rsp+88h] [rbp-30h]
  HDEV v29; // [rsp+C0h] [rbp+8h] BYREF
  int v30; // [rsp+D0h] [rbp+18h]
  HDEV v31; // [rsp+D8h] [rbp+20h] BYREF

  v30 = a3;
  v29 = a1;
  v3 = a3;
  v6 = 0LL;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v23);
  v31 = a1;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 48LL);
  if ( v7 )
    v8 = *(_BYTE *)(v7 + 36) == 0;
  else
    v8 = 0;
  if ( v8 && !(unsigned __int8)IsIsolatedTypeBusy<NSInstrumentation::CTypeIsolation<909312,3552>>(a1) )
  {
    GrepCaptureLiveMemoryDump(400LL, 46LL, 0LL);
LABEL_7:
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v23);
    return 0LL;
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 28) && ((_DWORD)a1[10] & 0x20400) == 0x20400 )
    goto LABEL_7;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v27, a1, a2, v3 & 1, v22);
  if ( v27[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v31);
    *(_DWORD *)((struct HDEV__ *)v27[0] + 18) = a1[452];
    *(_DWORD *)((struct HDEV__ *)v27[0] + 19) = a1[528];
    *((_QWORD *)v27[0] + 3) = *((_QWORD *)a1 + 223);
    *((_QWORD *)v27[0] + 8) = *((_QWORD *)a1 + 6);
    v10 = *(_QWORD **)(W32GetSessionState() + 88);
    if ( a2 == 1 )
    {
      v24 = 0x100000001LL;
      *((_QWORD *)v27[0] + 64) = 0x100000001LL;
    }
    else
    {
      v11 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v31);
      *((_QWORD *)v27[0] + 64) = *v11;
      if ( a2 )
        goto LABEL_29;
      v12 = *((_DWORD *)v27[0] + 9) | 0x200;
      if ( ((_BYTE)a1[10] & 1) == 0 )
        v12 = *((_DWORD *)v27[0] + 9) & 0xFFFFFDFF;
      *((_DWORD *)v27[0] + 9) = v12;
      v13 = *((_DWORD *)v27[0] + 9) | 1;
      if ( ((_BYTE)a1[10] & 1) == 0 )
        v13 = *((_DWORD *)v27[0] + 9) & 0xFFFFFFFE;
      *((_DWORD *)v27[0] + 9) = v13;
      v14 = *((_DWORD *)v27[0] + 9) | 0x1000;
      if ( ((_DWORD)a1[10] & 0x400) == 0 )
        v14 = *((_DWORD *)v27[0] + 9) & 0xFFFFEFFF;
      *((_DWORD *)v27[0] + 9) = v14;
      if ( (*((_DWORD *)a1 + 10) & 0x80u) != 0 )
        goto LABEL_29;
      DC::pSurface(v27[0], *((struct SURFACE **)a1 + 318));
      v15 = *((_DWORD *)v27[0] + 9);
      v16 = (v15 & 0x200) != 0 && (*(_DWORD *)(*((_QWORD *)a1 + 318) + 112LL) & 0x200) != 0;
      v17 = v15 & 0xFFFF7FFF;
      v18 = v15 | 0x8000;
      if ( !v16 )
        v18 = v17;
      *((_DWORD *)v27[0] + 9) = v18;
    }
    *((_QWORD *)v27[0] + 8) = *v10 + 1144LL;
LABEL_29:
    if ( (unsigned int)DC::bSetDefaultRegion(v27[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v27, (_DWORD)a1[10] & 1);
      DC::AcquireDcVisRgnShared(v27[0]);
      DC::vUpdate_VisRect(v27[0], *((struct REGION **)v27[0] + 142));
      if ( v26 )
        CPushLock::ReleaseLock((CPushLock *)(v25 + 1112));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      v24 = (__int64)DcAttr;
      if ( DcAttr )
      {
        if ( a1 == *(HDEV *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 48LL) )
          **((_DWORD **)v27[0] + 122) |= 2u;
        v28 = 1;
        if ( (v3 & 2) != 0 )
          *((_DWORD *)v27[0] + 9) |= 8u;
        SetupDCAttributes(v27[0], DcAttr);
        v29 = (HDEV)*((_QWORD *)a1 + 4);
        v20 = v29;
        *((_QWORD *)v27[0] + 7) = 0LL;
        if ( v20
          && ((_DWORD)a1[10] & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v31)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v29) )
        {
          *((_QWORD *)v27[0] + 7) = v21;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v29);
        }
        v6 = *(HDC *)v27[0];
      }
    }
    if ( v6 )
      GreValidateVisrgn(v6);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v27);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v23);
  return v6;
}
