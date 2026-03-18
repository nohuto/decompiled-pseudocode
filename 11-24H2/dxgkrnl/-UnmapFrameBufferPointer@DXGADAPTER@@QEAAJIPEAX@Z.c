/*
 * XREFs of ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x140196450
 * Callers:
 *     DxgkUnmapFrameBufferPointerCB @ 0x140073FC0 (DxgkUnmapFrameBufferPointerCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::UnmapFrameBufferPointer(DXGADAPTER *this, unsigned int a2, void *a3)
{
  __int64 v3; // rbx

  if ( a2 < *((_DWORD *)this + 74) )
  {
    MmUnmapViewInSystemSpace(a3);
    return 0LL;
  }
  else
  {
    v3 = a2;
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 11731;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"UnmapFrameBufferPointer Invalid physical adapter index. Index=%u",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
