/*
 * XREFs of ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18003CF04
 * Callers:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18003CD84 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 * Callees:
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180005404 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSecondaryWindowRepresentationToPrimary@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@@Z @ 0x18003D084 (-AddSecondaryWindowRepresentationToPrimary@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003D11C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003DE4C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Initialize(
        struct CSecondaryWindowRepresentation *a1,
        int a2,
        __int64 a3,
        CWindowData *a4,
        int a5,
        int a6)
{
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  HWND v11; // rdx
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  CMILRefCountBase *v17; // rcx
  int v19; // eax
  CMILRefCountBase *v20; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)a1 + 41) = a5;
  *((_DWORD *)a1 + 30) = a6;
  *((_DWORD *)a1 + 10) = a2;
  *((_QWORD *)a1 + 4) = a4;
  *((_QWORD *)a1 + 21) = a3;
  if ( (a2 & 1) != 0 && (v19 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(a1), v9 = v19, v19 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x8Du, 0LL);
  }
  else
  {
    v8 = CWindowData::AddSecondaryWindowRepresentationToPrimary(a4, a1);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x90u, 0LL);
    }
    else
    {
      *((_BYTE *)a1 + 160) = 1;
      v10 = CSecondaryWindowRepresentation::OnRepresentationUpdated(a1);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x98u, 0LL);
      }
      else if ( (*((_DWORD *)a1 + 10) & 0x400) != 0 )
      {
        v11 = (HWND)*((_QWORD *)a4 + 5);
        v20 = 0LL;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                    *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                    v11,
                    &v20) >= 0 )
        {
          if ( *((_BYTE *)v20 + 316) )
          {
            v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 30) + 32LL) + 56LL)
                - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 30) + 32LL) + 48LL);
            v13 = 0;
            v14 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)a1 + 4) + 48LL);
            v15 = 0;
            if ( v14 >= 0 )
              v13 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 56LL) - *(_DWORD *)(*((_QWORD *)a1 + 4) + 48LL);
            if ( v12 >= 0 )
              v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 30) + 32LL) + 56LL)
                  - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 30) + 32LL) + 48LL);
            if ( v15 == v13 )
            {
              v16 = 0;
              if ( v12 >= 0 )
                v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 30) + 32LL) + 56LL)
                    - *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 30) + 32LL) + 48LL);
              if ( v14 < 0 )
                v14 = 0;
              if ( v16 == v14 )
              {
                v17 = v20;
                *((_QWORD *)a1 + 51) = v20;
                CMILRefCountBase::AddRef(v17);
                *((_BYTE *)a1 + 161) = 1;
              }
            }
          }
        }
      }
    }
  }
  return v9;
}
