/*
 * XREFs of ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AA114
 * Callers:
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B60C0 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 * Callees:
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x18008B45C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_18008B45C.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B6B84 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x180214C2C (-HandleMigrationRotation@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4S.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x1805AA0E0 (-CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z.c)
 *     ?DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA?AW4ExtendRectFlags@1@W4SnapRegion@@@Z @ 0x1805AA314 (-DetermineExtendRectFlagsFromRegion@SnapLayoutHelpers@@YA-AW4ExtendRectFlags@1@W4SnapRegion@@@Z.c)
 *     ?ExtendRectToContainer@SnapLayoutHelpers@@YA?AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z @ 0x1805AA88C (-ExtendRectToContainer@SnapLayoutHelpers@@YA-AUCRect@Geometry@@AEBU23@0W4ExtendRectFlags@1@@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::ComputeMigrationInfo(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        unsigned int *a4,
        unsigned int nNumerator)
{
  int v9; // ebx
  __int128 v10; // xmm6
  unsigned int v11; // r15d
  int v12; // esi
  int v13; // edi
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // eax
  __int128 v27; // [rsp+30h] [rbp-88h] BYREF
  __int128 v28; // [rsp+40h] [rbp-78h] BYREF

  v9 = MulDiv(5, nNumerator, 96);
  v10 = 0LL;
  v11 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a2, a3, v9);
  v27 = 0LL;
  SnapLayoutHelpers::HandleMigrationRotation((__int64)&v28, v11, a2, a3, a4, v9);
  v12 = 3;
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v28) )
  {
    v10 = v28;
    goto LABEL_9;
  }
  if ( v11 != 9 )
  {
    if ( v11 != 10 || (unsigned int)MulDiv(a4[3] - a4[1], 96, nNumerator) >= 0x738 )
      goto LABEL_4;
LABEL_7:
    v12 = 1;
    goto LABEL_9;
  }
  if ( !SnapLayoutHelpers::CanFitColumnLayouts((SnapLayoutHelpers *)a4, (const struct Geometry::CRect *)nNumerator) )
    goto LABEL_7;
LABEL_4:
  v13 = *a4 + MulDiv(*a2 - *a3, a4[2] - *a4, a3[2] - *a3);
  v14 = a3[3] - a3[1];
  v15 = a4[3] - a4[1];
  v16 = a2[1] - a3[1];
  LODWORD(v27) = v13;
  v17 = a4[1] + MulDiv(v16, v15, v14);
  v18 = a3[2] - *a3;
  v19 = a4[2] - *a4;
  v20 = a2[2] - *a2;
  DWORD1(v27) = v17;
  v21 = MulDiv(v20, v19, v18);
  v22 = a3[3] - a3[1];
  v23 = a4[3] - a4[1];
  v24 = a2[3] - a2[1];
  DWORD2(v27) = v13 + v21;
  HIDWORD(v27) = v17 + MulDiv(v24, v23, v22);
  v25 = SnapLayoutHelpers::DetermineExtendRectFlagsFromRegion(v11);
  v10 = *(_OWORD *)SnapLayoutHelpers::ExtendRectToContainer(&v28, a4, &v27, v25);
LABEL_9:
  *(_OWORD *)a1 = v10;
  *(_DWORD *)(a1 + 16) = v12;
  return a1;
}
