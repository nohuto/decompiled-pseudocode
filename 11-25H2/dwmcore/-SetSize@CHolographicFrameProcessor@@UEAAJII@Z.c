/*
 * XREFs of ?SetSize@CHolographicFrameProcessor@@UEAAJII@Z @ 0x1802DFA80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicFrameProcessor::SetSize(CHolographicFrameProcessor *this, int a2, int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  CHolographicInteropTaskQueue *v6; // rcx

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
  {
    *((_DWORD *)this + 17) = a2;
    *((_DWORD *)this + 18) = a3;
    AcquireSRWLockExclusive((PSRWLOCK)(v3 + 104));
    v6 = *(CHolographicInteropTaskQueue **)(v3 + 48);
    if ( v6 && *(_BYTE *)(v3 + 240) )
      CHolographicInteropTaskQueue::PostMessageW(
        v6,
        33,
        (struct _SLIST_ENTRY *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    ReleaseSRWLockExclusive((PSRWLOCK)(v3 + 104));
  }
  else
  {
    v4 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0xF8u, 0LL);
  }
  return v4;
}
