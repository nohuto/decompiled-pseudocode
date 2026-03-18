/*
 * XREFs of ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14032F0A0
 * Callers:
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x140022CC8 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetAllocationsForAllPlanes(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned int a4)
{
  struct _EX_RUNDOWN_REF *v4; // rsi
  __int64 v5; // rdi
  struct _KTHREAD **v7; // rcx
  __int64 v10; // r12
  unsigned int v11; // r14d
  int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  struct _EX_RUNDOWN_REF *v15; // rbx
  struct DXGTHREAD *DxgThread; // rax
  int *v17; // rbx
  struct _KTHREAD **v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+58h] [rbp-8h]
  struct DXGTHREAD *v21; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = a2;
  v20 = 0;
  v7 = (struct _KTHREAD **)((char *)this + 624);
  v19 = v7;
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
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v19);
  v10 = *((_QWORD *)this + 16) + 4024 * v5;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v10 + 8) + 648LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9832;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9832LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = 0;
  if ( *(_DWORD *)(v10 + 3784) < a4 )
    a4 = *(_DWORD *)(v10 + 3784);
  if ( a4 )
  {
    v12 = (int *)(v10 + 1168);
    do
    {
      if ( v11 < *(_DWORD *)(v10 + 3784) )
      {
        if ( *v12 == -1 && v12[1] != -1 )
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
        v13 = *v12;
        if ( (_DWORD)v13 != -1 )
        {
          v14 = v10 + 168 * (v11 + 7LL) + 80 * v13;
          if ( v14 )
          {
            if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
            {
              v15 = *(struct _EX_RUNDOWN_REF **)v14;
              v4 = v15;
              if ( v15 )
              {
                if ( !ExAcquireRundownProtection(v15 + 11) )
                {
                  WdLogSingleEntry5(0LL, 275LL, 38LL, v15, 0LL, 0LL);
                  WdLogGlobalForLineNumber = 14135;
                }
              }
            }
          }
        }
      }
      if ( *a3 )
        ExReleaseRundownProtection(*a3 + 11);
      *a3 = v4;
      v4 = 0LL;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
      {
        v21 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v21) >= 0 )
        {
          DxgThread = v21;
          if ( v21 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v21 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
            {
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
              WdLogGlobalForLineNumber = 73;
            }
          }
        }
      }
      ++v11;
      v12 += 42;
      ++a3;
    }
    while ( v11 < a4 );
  }
  if ( v20 )
  {
    v17 = (int *)v19;
    v20 = 0;
    if ( v19[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v19, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( v17[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v17[8]-- == 1 )
    {
      *((_QWORD *)v17 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v17 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
