/*
 * XREFs of ACPIInitDeleteDeviceExtension @ 0x1400557B8
 * Callers:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInitRemoveDeviceExtension @ 0x14003C358 (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x14003C470 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInternalMoveList @ 0x14003DA40 (ACPIInternalMoveList.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x14003DD4C (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x14003DE14 (PnpiCleanupForceActiveBothInterrupts.c)
 *     ACPIInitRemovePowerNodes @ 0x14004B6CC (ACPIInitRemovePowerNodes.c)
 *     ACPIInitFreeDeviceExtensionInterfaceNames @ 0x140061708 (ACPIInitFreeDeviceExtensionInterfaceNames.c)
 *     AMLIFinalizeObject @ 0x14006AD6C (AMLIFinalizeObject.c)
 */

void __fastcall ACPIInitDeleteDeviceExtension(volatile signed __int32 *Entry)
{
  __int64 i; // rcx
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  const char *v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  volatile signed __int32 *v25; // rdi

  for ( i = 0LL; (unsigned int)i <= 4; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)&Entry[2 * i + 102] )
    {
      if ( (Entry[280] & 0x20000) == 0 && (Entry[2] & 0x800LL) != 0 )
      {
        ACPIInitReferenceDeviceExtension((__int64)Entry);
        v4 = Entry + 220;
        *((_DWORD *)Entry + 224) = *(_DWORD *)(**((_QWORD **)Entry + 95) + 40LL);
        v5 = (_QWORD *)qword_14008B148;
        if ( *(__int64 **)qword_14008B148 != &AcpiDevicesWhichMightNeedEnumerationList )
LABEL_49:
          __fastfail(3u);
        *v4 = &AcpiDevicesWhichMightNeedEnumerationList;
        *((_QWORD *)Entry + 111) = v5;
        *v5 = v4;
        qword_14008B148 = (__int64)(Entry + 220);
        _InterlockedOr64((volatile signed __int64 *)Entry + 140, v3);
        return;
      }
      break;
    }
  }
  ACPIInitRemovePowerNodes(Entry);
  PnpiCleanupForceActiveBothInterrupts((__int64)Entry);
  ACPIInternalInterruptPolarityCacheCleanup((__int64)Entry);
  while ( Entry )
  {
    v6 = Entry + 204;
    v7 = *((_QWORD *)Entry + 102);
    if ( *(volatile signed __int32 **)(v7 + 8) != Entry + 204 )
      goto LABEL_49;
    v8 = (_QWORD *)*((_QWORD *)Entry + 103);
    if ( (_QWORD *)*v8 != v6 )
      goto LABEL_49;
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_QWORD *)Entry + 103) = Entry + 204;
    *v6 = v6;
    ACPICleanDeviceDependenciesWithTreeLock((__int64)Entry);
    v9 = Entry + 212;
    v10 = *((_QWORD *)Entry + 106);
    if ( *(volatile signed __int32 **)(v10 + 8) != Entry + 212 )
      goto LABEL_49;
    v11 = (_QWORD *)*((_QWORD *)Entry + 107);
    if ( (_QWORD *)*v11 != v9 )
      goto LABEL_49;
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    v12 = Entry + 208;
    *((_QWORD *)Entry + 107) = Entry + 212;
    *v9 = v9;
    if ( (_QWORD *)*v12 != v12 )
      ACPIInternalMoveList(v12, (__int64)&AcpiUnresolvedEjectList);
    v13 = *((_QWORD *)Entry + 1);
    if ( (v13 & 0x80000000000LL) != 0 )
    {
      v14 = byte_140075488;
      v15 = byte_140075488;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)*((_QWORD *)Entry + 76);
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)*((_QWORD *)Entry + 77);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0xAu,
          (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
          *((_DWORD *)Entry + 190),
          (char)Entry,
          v14,
          v15);
      v16 = *((_QWORD *)Entry + 95);
      if ( v16 )
      {
        AMLIFinalizeObject(v16, 0LL);
        AMLIDereferenceHandleEx(*((_QWORD *)Entry + 95));
        *((_QWORD *)Entry + 95) = 0LL;
      }
    }
    if ( _bittest64((const signed __int64 *)Entry + 1, 0x2Du) )
    {
      v17 = (void *)*((_QWORD *)Entry + 76);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
    }
    if ( _bittest64((const signed __int64 *)Entry + 1, 0x2Eu) )
    {
      v18 = (void *)*((_QWORD *)Entry + 77);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
    }
    v19 = (void *)*((_QWORD *)Entry + 84);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    v20 = (void *)*((_QWORD *)Entry + 85);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    v21 = (void *)*((_QWORD *)Entry + 86);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( *((__int64 *)Entry + 1) < 0 )
    {
      v22 = (void *)*((_QWORD *)Entry + 23);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
    }
    if ( (Entry[2] & 0x8000000) != 0 )
    {
      v23 = (void *)*((_QWORD *)Entry + 25);
      if ( v23 )
      {
        ExFreePoolWithTag(v23, 0x54706341u);
        *((_QWORD *)Entry + 25) = 0LL;
      }
    }
    v24 = (void *)*((_QWORD *)Entry + 116);
    if ( v24 )
      ExFreePoolWithTag(v24, 0x4D706341u);
    ACPIInitFreeDeviceExtensionInterfaceNames(Entry);
    v25 = (volatile signed __int32 *)*((_QWORD *)Entry + 99);
    ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, (PVOID)Entry);
    if ( !v25 || _InterlockedExchangeAdd(v25 + 183, 0xFFFFFFFF) != 1 )
      break;
    Entry = v25;
  }
}
