/*
 * XREFs of ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1402B5CD4
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::GetDDIEnabledPlanes(ADAPTER_DISPLAY *this, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  unsigned int v7; // esi
  int *v8; // rbx
  unsigned __int8 v9; // bp
  int *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _KTHREAD **v14; // [rsp+50h] [rbp-38h] BYREF
  char v15; // [rsp+58h] [rbp-30h]

  v3 = a2;
  v15 = 0;
  v14 = (struct _KTHREAD **)((char *)this + 616);
  if ( this == (ADAPTER_DISPLAY *)-616LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v14[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
  v6 = *((_QWORD *)this + 16) + 3984 * v3;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v6 + 8) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9720;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9720LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = 0;
  v8 = (int *)(v6 + 1128);
  do
  {
    v9 = 0;
    if ( v7 < *(_DWORD *)(v6 + 3744) )
    {
      if ( *v8 == -1 && v8[1] != -1 )
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
      v12 = *v8;
      if ( (_DWORD)v12 != -1 )
      {
        v13 = 168LL * v7 + 80 * v12 + v6 + 1136;
        if ( v13 )
        {
          if ( (*(_BYTE *)(v13 + 8) & 2) != 0 )
            v9 = 1;
        }
      }
    }
    *a3 = v9;
    ++v7;
    ++a3;
    v8 += 42;
  }
  while ( v7 < 0xA );
  if ( v15 )
  {
    v10 = (int *)v14;
    v15 = 0;
    if ( v14[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v14, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( v10[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v10[8]-- == 1 )
    {
      *((_QWORD *)v10 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v10 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
