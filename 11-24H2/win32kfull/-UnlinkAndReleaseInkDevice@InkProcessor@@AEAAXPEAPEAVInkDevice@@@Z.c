/*
 * XREFs of ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1402EA9B8
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EA648 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402EA8E4 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140264714 (-Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??_EInkDevice@@UEAAPEAXI@Z @ 0x1402EA710 (--_EInkDevice@@UEAAPEAXI@Z.c)
 */

void __fastcall InkProcessor::UnlinkAndReleaseInkDevice(InkProcessor *this, struct _LIST_ENTRY *a2)
{
  ListEntry::Unlink((ListEntry ***)&a2->Flink[5].Blink, a2);
  if ( a2->Flink )
    InkDevice::`vector deleting destructor'((InkDevice *)a2->Flink, 1);
  a2->Flink = 0LL;
}
