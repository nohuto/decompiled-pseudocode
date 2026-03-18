/*
 * XREFs of ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F4428
 * Callers:
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F471C (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F50FC (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1400C7E10 (RIMFreeQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x1401079F0 (DrvGetWDDMAdapterInfo.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14012C644 (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x14013101C (--0CInputSpace@@QEAA@_N@Z.c)
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1401310C0 (--0CInputSpaceRegion@@QEAA@XZ.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x140131698 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14014A638 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1401F3E98 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1401F48AC (-_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputConfig::_CreateLegacyInputSpace(CInputConfig *this)
{
  unsigned int *v2; // rdi
  __int64 v3; // rcx
  _DWORD **v4; // rcx
  __int64 i; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int16 v8; // ax
  __int64 v9; // rcx
  int v10; // esi
  unsigned int j; // ebx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v12; // rsi
  CInputConfig *v13; // rcx
  struct CInputSpaceRegion *v14; // rcx
  _OWORD *v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  struct CInputSpaceRegion *v30[3]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-B8h] BYREF
  BOOL v32; // [rsp+68h] [rbp-A0h]
  __int16 v33; // [rsp+6Ch] [rbp-9Ch]
  __int16 v34; // [rsp+6Eh] [rbp-9Ah]
  _BYTE v35[8]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v36[688]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+328h] [rbp+220h] BYREF
  int v38; // [rsp+330h] [rbp+228h]

  if ( !CInputConfig::LockExclusivelyHeld((__int64)this) )
  {
    LODWORD(v30[0]) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 496);
  }
  CInputSpace::CInputSpace((CInputSpace *)&v37, 1);
  v37 = 0xFFFFFFFE00000000uLL;
  *(_OWORD *)&v30[1] = 0LL;
  v38 = 0;
  v2 = RIMGetQDCActivePathsData((unsigned int *)&v30[1]);
  v4 = *(_DWORD ***)(W32GetUserSessionState(v3) + 57008);
  if ( **v4 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4) + 57008) + 112LL); i; i = *(_QWORD *)(i + 56) )
    {
      v6 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
      {
        CInputSpaceRegion::CInputSpaceRegion((CInputSpaceRegion *)&v31[1]);
        *(_OWORD *)&v31[1] = *(_OWORD *)(v6 + 28);
        v32 = i == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7) + 57008) + 104LL);
        v8 = *(_WORD *)(i + 72);
        v33 = *(_WORD *)(*(_QWORD *)(i + 40) + 60LL);
        v9 = *(_QWORD *)(i + 88);
        v34 = v8;
        DrvGetWDDMAdapterInfo(v9, 1, (__int64)v35, (__int64)v36);
        v10 = CInputSpace::AddRegion((CInputSpace *)&v37, (const struct CInputSpaceRegion *)&v31[1], 0LL);
        if ( v10 < 0 )
          goto LABEL_20;
      }
    }
  }
  if ( v2 )
  {
    for ( j = 0; j < *v2; ++j )
    {
      v12 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)(*((_QWORD *)v2 + 1) + 216LL * j);
      InputTraceLogging::InputConfig::DisplayPath(v12);
      v30[0] = 0LL;
      if ( CInputConfig::_FindRegionForDisplay(
             v13,
             v12,
             (const struct CInputSpace *)&v37,
             (const struct tagQDC_DATA *)v2,
             v30) )
      {
        v14 = v30[0];
        if ( *((_BYTE *)v30[0] + 488) )
        {
          v15 = &v31[1];
          v16 = 5LL;
          do
          {
            v17 = *(_OWORD *)v14;
            v18 = *((_OWORD *)v14 + 1);
            v14 = (struct CInputSpaceRegion *)((char *)v14 + 128);
            *v15 = v17;
            v19 = *((_OWORD *)v14 - 6);
            v15[1] = v18;
            v20 = *((_OWORD *)v14 - 5);
            v15[2] = v19;
            v21 = *((_OWORD *)v14 - 4);
            v15[3] = v20;
            v22 = *((_OWORD *)v14 - 3);
            v15[4] = v21;
            v23 = *((_OWORD *)v14 - 2);
            v15[5] = v22;
            v24 = *((_OWORD *)v14 - 1);
            v15[6] = v23;
            v15 += 8;
            *(v15 - 1) = v24;
            --v16;
          }
          while ( v16 );
          v25 = *((_QWORD *)v14 + 8);
          v26 = *((_OWORD *)v14 + 1);
          *v15 = *(_OWORD *)v14;
          v27 = *((_OWORD *)v14 + 2);
          v15[1] = v26;
          v28 = *((_OWORD *)v14 + 3);
          v15[2] = v27;
          v15[3] = v28;
          *((_QWORD *)v15 + 8) = v25;
          CInputSpace::AddRegion((CInputSpace *)&v37, (const struct CInputSpaceRegion *)&v31[1], v30);
          v14 = v30[0];
        }
        if ( v14 )
          CInputSpaceRegion::MapToDisplayPath(v14, v12);
      }
    }
  }
  v10 = CInputConfig::_ConfigureInputSpace(this, (struct CInputSpace *)&v37);
LABEL_20:
  RIMFreeQDCActivePathsData((__int64)v2);
  if ( v10 < 0 )
    CInputSpace::FreeRegions((CInputSpace *)&v37);
  return 0LL;
}
