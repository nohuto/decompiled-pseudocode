/*
 * XREFs of ??0CDWMDisplaySet@@QEAA@XZ @ 0x180029148
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180028E80 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     <none>
 */

CDWMDisplaySet *__fastcall CDWMDisplaySet::CDWMDisplaySet(CDWMDisplaySet *this)
{
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 5) = (char *)this + 72;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_DWORD *)this + 14) = 4;
  *(_QWORD *)((char *)this + 60) = 4LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
