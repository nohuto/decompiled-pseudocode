/*
 * XREFs of ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1402C3554
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::GetDDIEnabledPlanes(ADAPTER_DISPLAY *this, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v3; // rdi
  struct _KTHREAD **v5; // rcx
  __int64 v7; // r14
  unsigned int v8; // edi
  int *v9; // rbx
  unsigned __int8 v10; // si
  int *v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct _KTHREAD **v15; // [rsp+50h] [rbp-38h] BYREF
  char v16; // [rsp+58h] [rbp-30h]

  v3 = a2;
  v16 = 0;
  v5 = (struct _KTHREAD **)((char *)this + 624);
  v15 = v5;
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v5 = 0LL;
  }
  if ( v5[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
  v7 = *((_QWORD *)this + 16) + 4024 * v3;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v7 + 8) + 648LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9865;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9865LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = 0;
  v9 = (int *)(v7 + 1168);
  do
  {
    v10 = 0;
    if ( v8 < *(_DWORD *)(v7 + 3784) )
    {
      if ( *v9 == -1 && v9[1] != -1 )
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
      v13 = *v9;
      if ( (_DWORD)v13 != -1 )
      {
        v14 = v7 + 168 * (v8 + 7LL) + 80 * v13;
        if ( v14 )
        {
          if ( (*(_BYTE *)(v14 + 8) & 2) != 0 )
            v10 = 1;
        }
      }
    }
    *a3 = v10;
    ++v8;
    ++a3;
    v9 += 42;
  }
  while ( v8 < 0xA );
  if ( v16 )
  {
    v11 = (int *)v15;
    v16 = 0;
    if ( v15[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( v11[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v11[8]-- == 1 )
    {
      *((_QWORD *)v11 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
