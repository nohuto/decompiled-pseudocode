/*
 * XREFs of DxgkSetIndirectDisplayHostProcess @ 0x1401A0A78
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 DxgkSetIndirectDisplayHostProcess()
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v1; // rdi

  Current = DXGPROCESS::GetCurrent();
  v1 = Current;
  if ( Current )
  {
    DXGFASTMUTEX::Acquire((struct DXGPROCESS *)((char *)Current + 104));
    *((_DWORD *)v1 + 102) |= 0x4000u;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v1 + 13);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 215;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Could not get DXGPROCESS for IndirectDisplay host process",
      215LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
}
