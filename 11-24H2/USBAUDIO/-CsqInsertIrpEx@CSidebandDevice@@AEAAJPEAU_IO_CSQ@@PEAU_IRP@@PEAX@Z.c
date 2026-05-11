/*
 * XREFs of ?CsqInsertIrpEx@CSidebandDevice@@AEAAJPEAU_IO_CSQ@@PEAU_IRP@@PEAX@Z @ 0x14000B9F0
 * Callers:
 *     ?staticCsqInsertIrpEx@CSidebandDevice@@SAJPEAU_IO_CSQ@@PEAU_IRP@@PEAX@Z @ 0x14000B9D0 (-staticCsqInsertIrpEx@CSidebandDevice@@SAJPEAU_IO_CSQ@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::CsqInsertIrpEx(
        CSidebandDevice *this,
        struct _IO_CSQ *a2,
        struct _IRP *a3,
        struct _LIST_ENTRY *a4)
{
  void **p_Flink; // rax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r8

  p_Flink = (void **)&a4->Blink->Flink;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&a3->Tail.Overlay.ListEntry;
  if ( *p_Flink != a4 )
    __fastfail(3u);
  p_ListEntry->ListEntry.Flink = a4;
  p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)p_Flink;
  *p_Flink = p_ListEntry;
  a4->Blink = &p_ListEntry->ListEntry;
  KeReleaseSemaphore((PRKSEMAPHORE)((char *)this + 200), 0, 1, 0);
  return 259LL;
}
