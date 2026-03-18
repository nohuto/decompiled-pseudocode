/*
 * XREFs of ACPIThermalActivateConstraint @ 0x140068654
 * Callers:
 *     ACPIThermalBuildConstraints @ 0x1400A7698 (ACPIThermalBuildConstraints.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x14001B414 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1400687F8 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x140068DD4 (ACPIThermalQueryCoolingInterfaces.c)
 */

void __fastcall ACPIThermalActivateConstraint(__int64 a1)
{
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdi
  KIRQL v13; // bl
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 200LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v4 = v2 + 176;
  v5 = *(_QWORD **)(v4 + 8);
  if ( *v5 != v4
    || (*(_QWORD *)a1 = v4,
        *(_QWORD *)(a1 + 8) = v5,
        v6 = (_QWORD *)(a1 + 16),
        *v5 = a1,
        *(_QWORD *)(v4 + 8) = a1,
        v7 = (_QWORD *)qword_140089C78,
        *(__int64 **)qword_140089C78 != &AcpiThermalUnclaimedConstraintList) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)(a1 + 24) = qword_140089C78;
  *v6 = &AcpiThermalUnclaimedConstraintList;
  *v7 = v6;
  qword_140089C78 = a1 + 16;
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
  v8 = *(_QWORD *)(a1 + 32);
  v14 = 0LL;
  v9 = AMLIGetNameSpaceObject((_BYTE *)(a1 + 56), *(__int64 **)(v8 + 760), &v14, 0);
  v10 = v14;
  if ( v9 >= 0 )
  {
    if ( !v14 )
      return;
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 104LL);
    if ( !v12 || (*(_BYTE *)(v12 + 8) & 4) != 0 )
    {
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 728));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
      ACPIThermalQueryCoolingInterfaces(v12);
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
      if ( *(_QWORD *)(v12 + 656) )
        ACPIThermalAssocaiteConstraint(v12, a1);
      KeReleaseSpinLock(&AcpiThermalConstraintLock, v13);
      ACPIInternalDecrementIrpReferenceCount(v12);
      v10 = v14;
    }
  }
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
}
