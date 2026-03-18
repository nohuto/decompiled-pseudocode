/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x140040B24
 * Callers:
 *     ACPITableLoad @ 0x14004A4E0 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1400683A0 (ACPITableUnload.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     AMLIIterateSiblingsNext @ 0x140040EE4 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x140040FA0 (AMLIGetFirstChild.c)
 *     ACPIVectorBuildVectorMasks @ 0x140056420 (ACPIVectorBuildVectorMasks.c)
 *     ACPIGpeInstallRemoveIndex @ 0x140060F98 (ACPIGpeInstallRemoveIndex.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  int v1; // eax
  _QWORD *i; // rax
  __int64 v3; // rax
  int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // al
  ULONG_PTR v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v1 = AMLIGetNameSpaceObject("\\_GPE", 0LL, &v11, 0);
  if ( v1 >= 0 )
  {
    for ( i = (_QWORD *)AMLIGetFirstChild(v11); ; i = (_QWORD *)AMLIIterateSiblingsNext(v10) )
    {
      v10 = i;
      if ( !i )
        goto LABEL_20;
      v3 = *i;
      if ( *(_WORD *)(*v10 + 66LL) == 8 && *(_BYTE *)(v3 + 40) == 95 )
      {
        v4 = *(_DWORD *)(v3 + 40) >> 8;
        v5 = (HIWORD(*(_DWORD *)(v3 + 40)) | *(_DWORD *)(v3 + 40) & 0xFF0000u) >> 8;
        v6 = (HIWORD(*(_DWORD *)(v3 + 40)) | *(_DWORD *)(v3 + 40) & 0xFF0000u) >> 16;
        if ( (unsigned __int8)(v6 - 48) > 9u )
        {
          if ( (unsigned __int8)(v6 - 65) > 5u )
            goto LABEL_17;
          LOBYTE(v6) = v6 - 55;
        }
        v7 = 16 * v6;
        v8 = HIBYTE(*(_DWORD *)(v3 + 40)) - 48;
        if ( (unsigned __int8)(v5 - 48) > 9u )
        {
          if ( (unsigned __int8)(v5 - 65) > 5u )
          {
LABEL_17:
            LOBYTE(v11) = 0;
            continue;
          }
          v8 = v5 - 55;
        }
        v9 = v8 | (unsigned int)v7;
        LOBYTE(v11) = 1;
        if ( (_BYTE)v4 == 76 || (_BYTE)v4 == 69 )
          ACPIGpeInstallRemoveIndex(v9);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0xAu,
      (__int64)&WPP_1219ceb08a59382993486227e101cade_Traceguids,
      v1);
LABEL_20:
  ACPIVectorBuildVectorMasks();
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
