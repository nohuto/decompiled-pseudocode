/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1401C96B4
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x14004F730 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x14004F83C (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x14008A7FC (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 */

__int64 __fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  unsigned int v3; // r15d
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  _QWORD *i; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v3 = (*(_QWORD *)(v2 + 1096) != *(_QWORD *)(v2 + 1192)) + 1;
  v4 = (*(_QWORD *)(v2 + 1096) != *(_QWORD *)(v2 + 1192)) + 3;
  v15 = v4;
  do
  {
    v5 = 0LL;
    if ( (v3 & 1) != 0 )
    {
      v6 = *(_QWORD *)(v2 + 1200);
      v7 = *(_QWORD *)(v2 + 1184);
    }
    else
    {
      v6 = *(_QWORD *)(v2 + 1208);
      v7 = *(_QWORD *)(v2 + 1192);
    }
    *(_QWORD *)(v2 + 1096) = v7;
    *(_QWORD *)(v2 + 1104) = v6;
    if ( v7 )
    {
      do
      {
        v8 = *(_QWORD *)(v7 + 128);
        if ( v1 && v1 == *(_QWORD *)(v7 + 144) )
        {
          GreAcquireSemaphore<19,>((struct _ERESOURCE **)v2);
          for ( i = *(_QWORD **)(v2 + 3848); i; i = (_QWORD *)*i )
          {
            if ( i[321] == v7 )
              i[321] = 0LL;
          }
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            *(_QWORD *)v2);
          if ( v7 == *(_QWORD *)(v2 + 1096) )
          {
            *(_QWORD *)(v2 + 1096) = v8;
          }
          else if ( v5 )
          {
            *(_QWORD *)(v5 + 128) = v8;
          }
          if ( v7 == *(_QWORD *)(v2 + 1104) )
            *(_QWORD *)(v2 + 1104) = v5;
          if ( (*(_DWORD *)(v7 + 160) & 0x800000) != 0 )
          {
            v11 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v10) + 88) + 3648LL);
            OPM::CMutex::Lock((void **)(v11 + 56));
            OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
              v11 + 24,
              (_DWORD *)(v7 + 240),
              v11 + 48);
            OPM::CMutex::Unlock((struct _KMUTANT **)(v11 + 56));
            DrvRemoveAdapterLuid(*(struct _LUID *)(v7 + 240));
            v1 = a1;
          }
          DrvCleanupOneGraphicsDevice(v7);
          v7 = v5;
        }
        v5 = v7;
        v7 = v8;
      }
      while ( v8 );
      v4 = v15;
    }
    result = *(_QWORD *)(v2 + 1096);
    v13 = *(_QWORD *)(v2 + 1104);
    if ( (v3 & 1) != 0 )
    {
      *(_QWORD *)(v2 + 1184) = result;
      *(_QWORD *)(v2 + 1200) = v13;
    }
    else
    {
      *(_QWORD *)(v2 + 1192) = result;
      *(_QWORD *)(v2 + 1208) = v13;
    }
    ++v3;
  }
  while ( v3 < v4 );
  return result;
}
