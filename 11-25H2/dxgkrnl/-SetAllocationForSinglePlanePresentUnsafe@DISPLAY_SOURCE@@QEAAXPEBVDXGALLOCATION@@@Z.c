/*
 * XREFs of ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x140314560
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x140314430 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x14004FE90 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x140314C18 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x140315254 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1403153AC (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x140315444 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x140315A64 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x140315C1C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 */

void __fastcall DISPLAY_SOURCE::SetAllocationForSinglePlanePresentUnsafe(
        DISPLAY_SOURCE *this,
        const struct DXGALLOCATION *a2)
{
  char *v4; // rdi
  int v5; // r9d
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int NextConfigIndex; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  unsigned int i; // ecx
  __int64 v16; // rax
  unsigned int v17; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  int v19; // eax
  _DWORD *v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct tagRECT v26; // [rsp+D0h] [rbp-38h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9538;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9538LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9590;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9590LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9591;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!Enabled || pAllocation != NULL",
      9591LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 936)
    && !IsDisplayPlaneConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 1128))
    && (v4 = (char *)this + 80 * *((int *)this + 282) + 1136) != 0LL
    && (v5 = *((_DWORD *)v4 + 2), (v5 & 0x10) == 0)
    && (v5 & 0x20) == 0
    && (v6 = *((_DWORD *)this + 172), *((_DWORD *)v4 + 3) == v6)
    && (v7 = *((_DWORD *)this + 174), *((_DWORD *)v4 + 5) == v7)
    && (v8 = *((_DWORD *)this + 173), *((_DWORD *)v4 + 4) == v8)
    && (v9 = *((_DWORD *)this + 175), *((_DWORD *)v4 + 6) == v9)
    && *((_DWORD *)v4 + 7) == v6
    && *((_DWORD *)v4 + 9) == v7
    && *((_DWORD *)v4 + 8) == v8
    && *((_DWORD *)v4 + 10) == v9
    && *((_DWORD *)v4 + 11) == v6
    && *((_DWORD *)v4 + 13) == v7
    && *((_DWORD *)v4 + 12) == v8
    && *((_DWORD *)v4 + 14) == v9
    && *((_DWORD *)v4 + 15) == 1
    && (v5 & 4) == 0
    && !*((_DWORD *)v4 + 16)
    && !*((_DWORD *)v4 + 17) )
  {
    if ( !*((_DWORD *)this + 936) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9599;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_MaxPlanesUsed > PlaneIndex", 9599LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_DWORD *)v4 + 2) |= 3u;
    *(_QWORD *)v4 = a2;
  }
  else
  {
    if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10037;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_DisplayCore->IsDisplayStateMutexOwner()",
        10037LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 282));
    v11 = *((_DWORD *)this + 283);
    v12 = NextConfigIndex;
    *((_DWORD *)this + 282) = NextConfigIndex;
    if ( NextConfigIndex == v11 || v11 == -1 )
      *((_DWORD *)this + 283) = GetNextConfigIndex(v11);
    v13 = 10 * v12;
    *((_DWORD *)this + 2 * v13 + 286) = 3;
    *((_QWORD *)this + v13 + 142) = a2;
    *(_OWORD *)((char *)this + 8 * v13 + 1148) = *((_OWORD *)this + 43);
    *(_OWORD *)((char *)this + 8 * v13 + 1164) = *((_OWORD *)this + 43);
    v14 = *((_OWORD *)this + 43);
    *((_QWORD *)this + v13 + 150) = 0LL;
    *((_DWORD *)this + 2 * v13 + 299) = 1;
    *(_OWORD *)((char *)this + 8 * v13 + 1180) = v14;
    *((_DWORD *)this + 2 * v13 + 302) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
        *((unsigned int *)this + 174),
        *((unsigned int *)this + 173),
        *((unsigned int *)this + 172),
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
        *((_DWORD *)this + 4),
        0,
        1,
        0,
        *((_DWORD *)this + 172),
        *((_DWORD *)this + 173),
        *((_DWORD *)this + 174),
        *((_DWORD *)this + 175),
        *((_DWORD *)this + 172),
        *((_DWORD *)this + 173),
        *((_DWORD *)this + 174),
        *((_DWORD *)this + 175),
        *((_DWORD *)this + 172),
        *((_DWORD *)this + 173),
        *((_DWORD *)this + 174),
        *((_DWORD *)this + 175),
        0,
        0,
        0);
    if ( !*((_DWORD *)this + 936) )
      *((_DWORD *)this + 936) = 1;
  }
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10169;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10169LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 3752) )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
    if ( *((_DWORD *)this + 936) > 1u )
    {
      v17 = 1;
      do
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v17);
        if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        {
          if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 10037;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"m_DisplayCore->IsDisplayStateMutexOwner()",
              10037LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v19 = GetNextConfigIndex(*((_DWORD *)this + 42 * v17 + 282));
          v21 = v20[1];
          v22 = v19;
          *v20 = v19;
          if ( v19 == v21 || v21 == -1 )
          {
            v23 = GetNextConfigIndex(v21);
            v20[1] = v23;
          }
          v24 = 10 * v22;
          v20[2 * v24 + 4] = 0;
          *(_QWORD *)&v20[2 * v24 + 2] = 0LL;
          *(_OWORD *)&v20[2 * v24 + 5] = 0uLL;
          *(_QWORD *)&v20[2 * v24 + 18] = 0LL;
          *(_OWORD *)&v20[2 * v24 + 9] = 0uLL;
          v20[2 * v24 + 17] = 1;
          *(_OWORD *)&v20[2 * v24 + 13] = 0uLL;
          v20[2 * v24 + 20] = 0;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
              v24,
              (__int64)v20,
              v22,
              *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
              *((_DWORD *)this + 4),
              v17,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0,
              0);
        }
        ++v17;
      }
      while ( v17 < *((_DWORD *)this + 936) );
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
    if ( LatestPostCompositionConfigInternal && *(_BYTE *)LatestPostCompositionConfigInternal )
    {
      v26 = 0LL;
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, 0, &v26, &v26);
    }
    *((_BYTE *)this + 3752) = 0;
  }
  for ( i = 0; i < *((_DWORD *)this + 937); *((_BYTE *)this + v16 + 2888) = 0 )
    v16 = i++;
  *((_DWORD *)this + 937) = 0;
  *((_BYTE *)this + 3704) = 0;
}
