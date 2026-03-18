/*
 * XREFs of ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14034087C
 * Callers:
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x140013628 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetAllocationsForAllPlanes(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned int a4)
{
  struct _EX_RUNDOWN_REF *v4; // r14
  __int64 v5; // rdi
  __int64 v9; // rdi
  unsigned int v10; // r15d
  int *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  struct _EX_RUNDOWN_REF *v14; // rbx
  struct DXGTHREAD *DxgThread; // rax
  int *v16; // rbx
  struct _KTHREAD **v18; // [rsp+50h] [rbp-10h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  struct DXGTHREAD *v20; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = a2;
  v19 = 0;
  v18 = (struct _KTHREAD **)((char *)this + 616);
  if ( this == (ADAPTER_DISPLAY *)-616LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v18[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
  v9 = *((_QWORD *)this + 16) + 3984 * v5;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v9 + 8) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9687;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9687LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = 0;
  if ( *(_DWORD *)(v9 + 3744) < a4 )
    a4 = *(_DWORD *)(v9 + 3744);
  if ( a4 )
  {
    v11 = (int *)(v9 + 1128);
    do
    {
      if ( v10 < *(_DWORD *)(v9 + 3744) )
      {
        if ( *v11 == -1 && v11[1] != -1 )
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
        v12 = *v11;
        if ( (_DWORD)v12 != -1 )
        {
          v13 = 168LL * v10 + v9 + 80 * v12 + 1136;
          if ( v13 )
          {
            if ( (*(_DWORD *)(v13 + 8) & 1) != 0 )
            {
              v14 = *(struct _EX_RUNDOWN_REF **)v13;
              v4 = v14;
              if ( v14 )
              {
                if ( !ExAcquireRundownProtection(v14 + 11) )
                {
                  WdLogSingleEntry5(0LL, 275LL, 38LL, v14, 0LL, 0LL);
                  WdLogGlobalForLineNumber = 14069;
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
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
      {
        v20 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v20) >= 0 )
        {
          DxgThread = v20;
          if ( v20 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v20 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
            {
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
              WdLogGlobalForLineNumber = 73;
            }
          }
        }
      }
      ++v10;
      v11 += 42;
      ++a3;
    }
    while ( v10 < a4 );
  }
  if ( v19 )
  {
    v16 = (int *)v18;
    v19 = 0;
    if ( v18[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v18, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( v16[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v16[8]-- == 1 )
    {
      *((_QWORD *)v16 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v16 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
