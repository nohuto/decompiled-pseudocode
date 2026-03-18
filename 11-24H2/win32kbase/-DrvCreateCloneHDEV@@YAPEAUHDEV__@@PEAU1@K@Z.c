/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x140176B40
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     bSpEnableSprites @ 0x14000C41C (bSpEnableSprites.c)
 *     vEnableSynchronize @ 0x14000C458 (vEnableSynchronize.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400143F0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x140014680 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x14003C0B0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C0DB4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401C5C48 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C5C8C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvCreateCloneHDEV(HDEV a1)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int (*v14)(void); // rax
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rdx
  __int64 v17; // rdx
  _BYTE v19[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF
  struct _ERESOURCE *v22; // [rsp+C0h] [rbp+40h] BYREF
  HDEV v23; // [rsp+C8h] [rbp+48h] BYREF

  WdLogSingleEntry2(4LL, a1, 1LL);
  WdLogGlobalForLineNumber = 21403;
  SessionState = W32GetSessionState(v2);
  v23 = a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(SessionState + 88);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v19, (struct PDEVOBJ *)&v23);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v21, a1, v6);
  v7 = v21;
  if ( v21 )
  {
    v10 = PALLOCMEM(2128LL, 0x706D7447u);
    if ( v10 )
    {
      v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 24) + 912LL);
      if ( v11 )
      {
        if ( v11() >= 0 && (unsigned int)bSpEnableSprites(v7) )
        {
          v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 24) + 928LL);
          if ( v14 && v14() >= 0 )
            vEnableSynchronize(v7);
          *(_QWORD *)(v10 + 976) = v10 + 544;
          *(_DWORD *)(v10 + 728) = 0;
          *(_DWORD *)(*(_QWORD *)(v10 + 976) + 176LL) = 0xFFFFFF;
          *(_DWORD *)(v10 + 120) = 0;
          *(_QWORD *)(*(_QWORD *)(v10 + 976) + 248LL) = 0LL;
          v15 = HmgShareLockCheck(*(_QWORD *)(v5 + 56), 16);
          HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v20, v15);
          *(_QWORD *)(v7 + 1592) = 0LL;
          *(_QWORD *)(v7 + 1568) = 0LL;
          *(_DWORD *)(v7 + 1576) = 0;
          EBRUSHOBJ::vInitBrush(
            (unsigned int *)(v7 + 1560),
            v10,
            v20[0],
            *(_QWORD *)(v5 + 3768),
            *(_QWORD *)(*(_QWORD *)(v7 + 2544) + 128LL),
            *(_QWORD *)(v7 + 2544),
            1u);
          SEMOBJ<19>::SEMOBJ<19>(&v22, (struct _ERESOURCE **)v5);
          v16 = v22;
          --*((_DWORD *)a1 + 3);
          if ( v16 )
          {
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)v16);
            v22 = 0LL;
          }
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v23);
          PDEVOBJ::bDisabled((PDEVOBJ *)&v21, (_DWORD)a1[10] & 0x400);
          v4 = v7;
          HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v20);
          goto LABEL_13;
        }
      }
    }
    PDEVOBJ::vClearSurface((PDEVOBJ *)&v21);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v21);
    if ( v10 )
LABEL_13:
      GreDeleteFastMutex((char *)v10);
  }
  WdLogSingleEntry1(5LL, v4);
  WdLogGlobalForLineNumber = 21507;
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v19, v17);
  return v4;
}
