/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401D67D4
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018E474 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1403369A0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, unsigned int a2)
{
  ULONG v2; // ebx
  struct _RTL_BITMAP *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x400 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4005;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Ordinal < MAX_ADAPTERS_CEILING",
      4005LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 816));
  if ( v2 < DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
  {
    v4 = (struct _RTL_BITMAP *)((char *)this + 864);
  }
  else
  {
    v2 -= DXGGLOBAL::GetMaximumGlobalAdapterCount(this);
    v4 = (struct _RTL_BITMAP *)((char *)this + 880);
  }
  RtlClearBits(v4, v2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 102);
}
