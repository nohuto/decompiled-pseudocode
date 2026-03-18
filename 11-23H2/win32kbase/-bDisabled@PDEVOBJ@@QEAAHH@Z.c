/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00182FC
 * Callers:
 *     DrvDisableMDEV @ 0x1C001A570 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001A7D8 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154F90 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0160E5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00183CC (-SETFLAG@@YAXHAECKK@Z.c)
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x400u);
  v4 = *(_QWORD *)this;
  if ( a2 || _bittest((const signed __int32 *)(v4 + 40), 0x11u) )
  {
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 )
    {
      if ( _bittest((const signed __int32 *)(v5 + 40), 0x11u) )
      {
        if ( !*(_QWORD *)(v4 + 32) )
        {
          v15 = *(_QWORD *)(**(_QWORD **)(v5 + 1768) + 48LL);
          if ( v4 != v15 )
            *(_QWORD *)(v4 + 32) = v15;
        }
      }
    }
  }
  v6 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore();
  v8 = 0;
  v16 = 0LL;
  while ( 1 )
  {
    LOBYTE(v7) = 1;
    v8 = HmgSafeNextObjt(v8, v7, &v16);
    if ( !v8 )
      break;
    if ( !*(_DWORD *)(v16 + 32) && *(_QWORD *)(v16 + 48) == v6 )
    {
      v11 = *(_DWORD *)(v16 + 36);
      if ( a2 )
        v12 = v11 | 0x1000;
      else
        v12 = v11 & 0xFFFFEFFF;
      *(_DWORD *)(v16 + 36) = v12;
    }
  }
  v13 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400;
  GreReleaseHmgrSemaphore(v9, v7, v10, 0LL);
  return v13;
}
