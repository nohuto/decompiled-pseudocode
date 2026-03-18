/*
 * XREFs of ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x140045C68
 * Callers:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x14000DC00 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x140026CA0 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x140027830 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14002C940 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140044FC0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1400454D4 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140045980 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1400468BC (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::TraceDroppedEvent(FxObject *this, unsigned int Event)
{
  const void *v2; // r8

  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    v2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v2 = 0LL;
    WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v2, this->m_ObjectState, Event);
  }
}
