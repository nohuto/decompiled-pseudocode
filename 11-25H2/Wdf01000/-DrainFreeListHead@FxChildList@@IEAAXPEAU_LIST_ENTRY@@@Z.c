/*
 * XREFs of ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140019AD4
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1400181BC (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x140018D14 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140019204 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x14004AB2C (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x140072B48 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x140072D30 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x14007AF34 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x14007BE38 (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14007F1FC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x14008C614 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x14008C7E0 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x14003D074 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ??1FxDeviceDescriptionEntry@@QEAA@XZ @ 0x140081050 (--1FxDeviceDescriptionEntry@@QEAA@XZ.c)
 *     ?CleanupDescriptions@FxChildList@@IEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x140083610 (-CleanupDescriptions@FxChildList@@IEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WD.c)
 */

void __fastcall FxChildList::DrainFreeListHead(FxChildList *this, _LIST_ENTRY *FreeListHead, unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *Blink; // rcx

  while ( 1 )
  {
    Flink = FreeListHead->Flink;
    if ( FreeListHead->Flink == FreeListHead )
      break;
    if ( Flink->Blink != FreeListHead || (v6 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    FreeListHead->Flink = v6;
    v6->Blink = FreeListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    if ( this->m_StaticList && (LODWORD(Flink[1].Flink) == 1 || LODWORD(Flink[3].Blink) == 5) )
    {
      Blink = Flink[1].Blink->Blink;
      if ( LODWORD(Flink[3].Blink) == 5 )
        LODWORD(Flink[3].Blink) = 0;
      LODWORD(Flink[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, a3);
    }
    else
    {
      FxChildList::CleanupDescriptions(
        this,
        (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Flink[1].Blink,
        (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)Flink[2].Flink);
      FxDeviceDescriptionEntry::~FxDeviceDescriptionEntry((FxDeviceDescriptionEntry *)Flink);
      FxStump::operator delete(Flink);
    }
  }
}
