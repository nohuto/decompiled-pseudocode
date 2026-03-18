/*
 * XREFs of ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x14034BF64
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateIndependentFlipState(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v6; // rsi
  struct _KTHREAD **v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  struct _KTHREAD **v12; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp-20h]

  v6 = a3;
  v7 = (struct _KTHREAD **)((char *)this + 624);
  v8 = a2;
  v12 = v7;
  v13 = 0;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v7 = 0LL;
  }
  if ( v7[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  v9 = *((_QWORD *)this + 16) + 4024 * v8;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v9 + 8) + 648LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9920;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9920LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 3784) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9921;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"PlaneIndex < m_MaxPlanesUsed", 9921LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = 168 * v6;
  if ( *(_DWORD *)(168 * v6 + v9 + 1168) == -1 )
  {
    if ( *(_DWORD *)(v10 + v9 + 1172) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9479;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9479LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v10 + v9 + 1168) == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9922;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!IsDisplayPlaneConfigQueueEmpty(&m_PlaneConfigurationQueue[PlaneIndex])",
        9922LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (unsigned int)v6 < *(_DWORD *)(v9 + 3784) )
  {
    if ( *(_DWORD *)(v10 + v9 + 1168) != -1 )
      goto LABEL_12;
    if ( *(_DWORD *)(v10 + v9 + 1172) != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9479;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9479LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)(v10 + v9 + 1168) != -1 )
    {
LABEL_12:
      _mm_lfence();
      v11 = v9 + 80LL * *(int *)(168 * v6 + v9 + 1168) + 168 * (v6 + 7);
      if ( v11 )
        *(_DWORD *)(v11 + 8) ^= ((unsigned __int8)*(_DWORD *)(v11 + 8) ^ (unsigned __int8)(8 * a4)) & 8;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
}
