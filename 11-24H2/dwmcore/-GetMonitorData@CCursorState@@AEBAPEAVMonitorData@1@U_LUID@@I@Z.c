/*
 * XREFs of ?GetMonitorData@CCursorState@@AEBAPEAVMonitorData@1@U_LUID@@I@Z @ 0x18026C038
 * Callers:
 *     ?ForceSoftwareCursor@COverlayContext@@AEAAXXZ @ 0x18026A168 (-ForceSoftwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?IsCursorVisibleInSoftware@COverlayContext@@AEBA_NXZ @ 0x18026C58C (-IsCursorVisibleInSoftware@COverlayContext@@AEBA_NXZ.c)
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

struct CCursorState::MonitorData *__fastcall CCursorState::GetMonitorData(
        CCursorState *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  unsigned int v5; // ecx
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  struct CCursorState::MonitorData *result; // rax

  v3 = *((_QWORD *)this + 11);
  v4 = *((_QWORD *)this + 12) - v3;
  v5 = 0;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * (v4 >> 5);
  if ( !v6 )
    return 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    result = (struct CCursorState::MonitorData *)(v3 + 160 * v7);
    if ( *(_DWORD *)result == a2.LowPart && *(_QWORD *)((char *)result + 4) == __PAIR64__(a3, a2.HighPart) )
      break;
    v7 = ++v5;
    if ( v5 >= v6 )
      return 0LL;
  }
  return result;
}
