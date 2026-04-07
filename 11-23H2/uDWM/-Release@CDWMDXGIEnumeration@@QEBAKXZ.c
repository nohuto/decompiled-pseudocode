/*
 * XREFs of ?Release@CDWMDXGIEnumeration@@QEBAKXZ @ 0x18002B448
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180028E80 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMDXGIEnumeration::Release(CDWMDXGIEnumeration *this)
{
  return (*(__int64 (__fastcall **)(CDWMDXGIEnumeration *))(*(_QWORD *)this + 8LL))(this);
}
