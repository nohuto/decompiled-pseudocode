/*
 * XREFs of ?Blt@BLTENTRY@@QEAAJXZ @ 0x1403A2E50
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x140283898 (-WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1403A2F5C (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 */

__int64 __fastcall BLTENTRY::Blt(BLTENTRY *this)
{
  struct DXGDEVICE *v2; // r8
  int v3; // eax
  __int64 v4; // rsi
  int v6; // eax

  *((LARGE_INTEGER *)this + 68) = KeQueryPerformanceCounter(0LL);
  if ( (*((_DWORD *)this + 16) & 8) != 0 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v2 = (struct DXGDEVICE *)*((_QWORD *)this + 71);
    if ( !v2
      || (v6 = BLTQUEUE::WaitFence(*((BLTQUEUE **)this + 3), *((_QWORD *)this + 70), v2),
          *((_QWORD *)this + 71) = 0LL,
          LODWORD(v4) = v6,
          v6 >= 0) )
    {
      v3 = BLTQUEUE::PresentDisplayOnly(*((_QWORD *)this + 3), (char *)this + 72, *((unsigned int *)this + 15), 0LL);
      v4 = v3;
      if ( v3 < 0 )
      {
        WdLogSingleEntry2(2LL, v3, this);
        WdLogGlobalForLineNumber = 644;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DdiPresentDisplayOnly return 0x%I64x for 0x%I64x",
          v4,
          (__int64)this,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  *((LARGE_INTEGER *)this + 69) = KeQueryPerformanceCounter(0LL);
  return (unsigned int)v4;
}
