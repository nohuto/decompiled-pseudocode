/*
 * XREFs of ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140013DBC (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     IsDwmActive @ 0x1400845E4 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087714 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088FB4 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8C68 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140143918 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     IsGrepAcquirePublicPFTSemaphoreExSupported @ 0x14014F5C8 (IsGrepAcquirePublicPFTSemaphoreExSupported.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401C660C (_DrvUpdateDisplayModeInMdev_--_2_--_lambda_1_--operator().c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev(struct _MDEV *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  HSEMAPHORE v6; // rsi
  __int64 DxgkWin32kInterface; // rax
  unsigned int (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rcx
  struct _ERESOURCE **v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void (*v17)(void); // rax
  void (*v18)(void); // rax
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  void (*v25)(void); // rax
  void (*v26)(void); // rax
  int v27; // r8d
  struct _ERESOURCE *v28; // rbx
  struct _GRETHREAD *v29; // rax
  bool v30; // zf
  struct _ERESOURCE *v31; // rbx
  struct _GRETHREAD *v32; // rax
  struct _ERESOURCE *v33; // rbx
  struct _GRETHREAD *v34; // rax
  struct _ERESOURCE *v35; // rbx
  struct _GRETHREAD *v36; // rax
  __int64 v38; // rcx
  __int64 v39; // [rsp+20h] [rbp-30h] BYREF
  __int64 v40; // [rsp+28h] [rbp-28h] BYREF
  HSEMAPHORE v41; // [rsp+30h] [rbp-20h] BYREF
  HSEMAPHORE v42; // [rsp+38h] [rbp-18h] BYREF
  HSEMAPHORE v43[2]; // [rsp+40h] [rbp-10h] BYREF
  HSEMAPHORE v44; // [rsp+80h] [rbp+30h] BYREF
  HSEMAPHORE v45; // [rsp+88h] [rbp+38h] BYREF

  if ( !(unsigned int)IsDwmActive((__int64)a1, (__int64)a2) )
  {
    WdLogSingleEntry1(4LL, 5LL);
    WdLogGlobalForLineNumber = 29073;
    return 0LL;
  }
  if ( *((_DWORD *)a1 + 5) != 1 )
  {
    WdLogSingleEntry1(4LL, 5LL);
    WdLogGlobalForLineNumber = 29082;
    return 0LL;
  }
  if ( !a2 )
  {
    v5 = 29088;
    WdLogSingleEntry1(4LL, 29088LL);
LABEL_7:
    WdLogGlobalForLineNumber = v5;
    return 0LL;
  }
  if ( *((_WORD *)a2 + 10) != 1 )
  {
    v5 = 29093;
    WdLogSingleEntry1(4LL, 29093LL);
    goto LABEL_7;
  }
  v44 = *(HSEMAPHORE *)a1;
  v6 = v44;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 440))(
          *(_QWORD *)(*((_QWORD *)v6 + 321) + 232LL),
          *(unsigned int *)(*((_QWORD *)v6 + 321) + 248LL)) )
  {
    WdLogSingleEntry1(4LL, 7LL);
    WdLogGlobalForLineNumber = 29101;
    return 0LL;
  }
  v8 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)v6 + 333);
  if ( !v8 || !v8(*((_QWORD *)v6 + 223)) )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 29110;
    return 0LL;
  }
  v10 = *(struct _ERESOURCE ***)(W32GetSessionState(v9) + 88);
  SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v42, (__int64)&v44);
  SEMOBJ<6>::SEMOBJ<6>(&v41, v10);
  SEMOBJ<7>::SEMOBJ<7>(&v40, v10);
  SEMOBJ<8>::SEMOBJ<8>(&v39, (__int64)&v44);
  SEMOBJ<10>::SEMOBJ<10>(&v45, v10);
  SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v44, v10);
  if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported(v12, v11) < 0 )
  {
    SEMOBJ<20>::SEMOBJ<20>(v43, v10);
    v20 = DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(v38, (__int64)a1, a2);
    SEMOBJ<20>::vUnlock(v43);
  }
  else
  {
    v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 24);
    v17 = *(void (**)(void))(v16 + 1888);
    if ( v17 )
      v17();
    v18 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 24) + 1936LL);
    if ( v18 )
      v18();
    SEMOBJ<20>::SEMOBJ<20>(v43, v10);
    v20 = DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(v19, (__int64)a1, a2);
    SEMOBJ<20>::vUnlock(v43);
    v24 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 24);
    v25 = *(void (**)(void))(v24 + 1952);
    if ( v25 )
      v25();
    v26 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 24) + 1904LL);
    if ( v26 )
      v26();
  }
  v28 = (struct _ERESOURCE *)v44;
  if ( v44 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v44, v27);
    v29 = GreGetCurrentThreadCrossSessionCheck();
    if ( v29 )
    {
      v30 = (*((_BYTE *)v29 + 21))-- == 1;
      if ( v30 )
        *(_QWORD *)v29 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v28);
  }
  v31 = (struct _ERESOURCE *)v45;
  if ( v45 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v45, v27);
    v32 = GreGetCurrentThreadCrossSessionCheck();
    if ( v32 )
    {
      v30 = (*((_BYTE *)v32 + 18))-- == 1;
      if ( v30 )
        *(_QWORD *)v32 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v31);
  }
  if ( v39 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v39);
  if ( v40 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v40,
      v27);
  v33 = (struct _ERESOURCE *)v41;
  if ( v41 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v41, v27);
    v34 = GreGetCurrentThreadCrossSessionCheck();
    if ( v34 )
    {
      v30 = (*((_BYTE *)v34 + 14))-- == 1;
      if ( v30 )
        *(_QWORD *)v34 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v33);
  }
  v35 = (struct _ERESOURCE *)v42;
  if ( v42 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v42, v27);
    v36 = GreGetCurrentThreadCrossSessionCheck();
    if ( v36 )
    {
      v30 = (*((_BYTE *)v36 + 12))-- == 1;
      if ( v30 )
        *(_QWORD *)v36 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v35);
  }
  return v20;
}
