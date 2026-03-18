/*
 * XREFs of ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x140359640
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404233E0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateIndependentFlipState(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  struct _KTHREAD **v11; // [rsp+50h] [rbp-28h] BYREF
  char v12; // [rsp+58h] [rbp-20h]

  v5 = a3;
  v6 = a2;
  v11 = (struct _KTHREAD **)((char *)this + 616);
  v12 = 0;
  if ( this == (ADAPTER_DISPLAY *)-616LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v11[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11);
  v8 = *((_QWORD *)this + 16) + 3984 * v6;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v8 + 8) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9775;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9775LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(v8 + 3744) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9776;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"PlaneIndex < m_MaxPlanesUsed", 9776LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = 168 * v5;
  if ( *(_DWORD *)(168 * v5 + v8 + 1128) == -1 )
  {
    if ( *(_DWORD *)(v9 + v8 + 1132) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9334;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9334LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v9 + v8 + 1128) == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9777;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!IsDisplayPlaneConfigQueueEmpty(&m_PlaneConfigurationQueue[PlaneIndex])",
        9777LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (unsigned int)v5 < *(_DWORD *)(v8 + 3744) )
  {
    if ( *(_DWORD *)(v9 + v8 + 1128) != -1 )
      goto LABEL_12;
    if ( *(_DWORD *)(v9 + v8 + 1132) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9334;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9334LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v9 + v8 + 1128) != -1 )
    {
LABEL_12:
      _mm_lfence();
      v10 = v8 + v9 + 80LL * *(int *)(168 * v5 + v8 + 1128) + 1136;
      if ( v10 )
        *(_DWORD *)(v10 + 8) ^= ((unsigned __int8)*(_DWORD *)(v10 + 8) ^ (unsigned __int8)(8 * a4)) & 8;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v11);
}
