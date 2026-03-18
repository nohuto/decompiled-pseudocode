/*
 * XREFs of ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1400804DC
 * Callers:
 *     ??0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x140012EF8 (--0FxMemoryBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x140013954 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x14001FA10 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x140053288 (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x14005AC90 (imp_WdfMemoryCreatePreallocated.c)
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x14005D410 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 * Callees:
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x140096FCC (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 */

void __fastcall FxObject::AllocateTagTracker(FxObject *this, unsigned __int16 Type)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned int v5; // r8d
  FxDriverGlobalsDebugExtension *DebugExtension; // rcx
  FxObjectDebugInfo *ObjectDebugInfo; // rcx
  void *v8; // [rsp+28h] [rbp-10h]

  m_Globals = this->m_Globals;
  v5 = 0;
  DebugExtension = m_Globals->DebugExtension;
  if ( DebugExtension )
  {
    if ( m_Globals->FxVerifyTagTrackingEnabled )
    {
      ObjectDebugInfo = DebugExtension->ObjectDebugInfo;
      if ( ObjectDebugInfo )
      {
        while ( v5 < FxObjectsInfoCount )
        {
          if ( Type == ObjectDebugInfo[v5].ObjectType )
          {
            if ( (ObjectDebugInfo[v5].u.DebugFlags & 1) != 0 )
            {
              FxTagTracker::CreateAndInitialize(
                (FxTagTracker **)&this[-1].m_SpinLock.m_Lock,
                m_Globals,
                FxTagTrackerTypeHandle,
                0,
                this,
                v8);
              this->m_ObjectFlags |= 0x200u;
            }
            return;
          }
          if ( Type <= FxObjectsInfo[v5].ObjectType )
            return;
          ++v5;
        }
      }
    }
  }
}
