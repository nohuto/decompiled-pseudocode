/*
 * XREFs of ?RemoveDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14006C86C
 * Callers:
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1403A6020 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::RemoveDxgDevice(DXGK_VIRTUAL_GPU_PARAV *this, struct _LIST_ENTRY *a2)
{
  char *v2; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v2 = (char *)this + 288;
  DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
  Flink = a2->Flink;
  if ( a2->Flink )
  {
    if ( Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    a2->Blink = 0LL;
    a2->Flink = 0LL;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
