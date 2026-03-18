/*
 * XREFs of ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1400980C4
 * Callers:
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001E250 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020120 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140020544 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x14002C120 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140067EF8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall FxMdlAllocateDebug(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *Owner,
        void *VirtualAddress,
        ULONG Length,
        unsigned __int8 ChargeQuota,
        BOOLEAN CallersAddress,
        void *FxDriverGlobals_0)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  unsigned __int64 *p_AllocatedMdlsLock; // rbp
  __int64 *v13; // rdi
  __int64 p_AllocatedMdls; // rbx
  PMDL v15; // rsi
  KIRQL v16; // r14
  __int64 Pool2; // rax
  __int64 i; // rcx
  __int64 v19; // rdi
  PMDL Mdl; // rax

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( !DebugExtension )
    return IoAllocateMdl(VirtualAddress, Length, 0, CallersAddress, 0LL);
  p_AllocatedMdlsLock = &DebugExtension->AllocatedMdlsLock;
  v13 = 0LL;
  p_AllocatedMdls = (__int64)&DebugExtension->AllocatedMdls;
  v15 = 0LL;
  v16 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedMdlsLock);
  while ( p_AllocatedMdls )
  {
    if ( *(_DWORD *)(p_AllocatedMdls + 384) != 16 )
      goto LABEL_9;
    v13 = (__int64 *)(p_AllocatedMdls + 392);
    p_AllocatedMdls = *(_QWORD *)(p_AllocatedMdls + 392);
  }
  Pool2 = ExAllocatePool2(64LL, 400LL, FxDriverGlobals->Tag);
  p_AllocatedMdls = Pool2;
  if ( !Pool2 )
  {
    KeReleaseSpinLock(p_AllocatedMdlsLock, v16);
    return 0LL;
  }
  *v13 = Pool2;
LABEL_9:
  for ( i = 0LL; (unsigned int)i < 0x10; i = (unsigned int)(i + 1) )
  {
    v19 = 3 * i;
    if ( !*(_QWORD *)(p_AllocatedMdls + 24 * i) )
    {
      Mdl = IoAllocateMdl(VirtualAddress, Length, 0, CallersAddress, 0LL);
      v15 = Mdl;
      if ( Mdl )
      {
        *(_QWORD *)(p_AllocatedMdls + 8 * v19) = Mdl;
        *(_QWORD *)(p_AllocatedMdls + 8 * v19 + 8) = Owner;
        *(_QWORD *)(p_AllocatedMdls + 8 * v19 + 16) = FxDriverGlobals_0;
        ++*(_DWORD *)(p_AllocatedMdls + 384);
      }
      break;
    }
  }
  KeReleaseSpinLock(p_AllocatedMdlsLock, v16);
  return v15;
}
