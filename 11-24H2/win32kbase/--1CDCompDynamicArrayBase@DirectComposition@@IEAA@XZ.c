/*
 * XREFs of ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780
 * Callers:
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140070018 (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x140070088 (--1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1400700E8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x140070B10 (--1CInkMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14015B070 (--_ECInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x14019DF20 (--1CChannelGroup@DirectComposition@@QEAA@XZ.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401CB320 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(char **this)
{
  char *v1; // rcx

  v1 = *this;
  if ( v1 )
    GreDeleteFastMutex(v1);
}
