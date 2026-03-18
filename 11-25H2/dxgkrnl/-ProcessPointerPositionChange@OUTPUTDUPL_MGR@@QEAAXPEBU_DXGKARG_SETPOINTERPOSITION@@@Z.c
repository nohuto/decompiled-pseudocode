/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FD190
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x14028A7D0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FD63C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402FEFEC (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FF00C (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2)
{
  __int64 VidPnSourceId; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  OUTPUTDUPL_CONTEXT **v7; // rdi
  int v8; // r14d
  unsigned int i; // ebp
  OUTPUTDUPL_CONTEXT *v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rbx
  OUTPUTDUPL_MGR *v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  char v18; // [rsp+58h] [rbp-20h]

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
    WdLogGlobalForLineNumber = 1236;
  }
  else
  {
    v5 = *((_QWORD *)this + 2);
    v18 = 0;
    v6 = v5 + 72 * VidPnSourceId;
    v17 = v6;
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _KTHREAD **)(v17 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v17);
    v7 = *(OUTPUTDUPL_CONTEXT ***)(v6 + 48);
    v8 = 1;
    for ( i = 0; i < *((_DWORD *)this + 2); ++i )
    {
      v10 = *v7;
      if ( *v7 && *((_DWORD *)v10 + 79) )
      {
        if ( v8 )
        {
          if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
          {
            OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v14, a2);
            v10 = *v7;
          }
          v8 = 0;
        }
        v15 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(v10, a2);
        if ( v15 < 0 )
        {
          v11 = v15;
          WdLogSingleEntry3(2LL, a2->VidPnSourceId, i, v15);
          v16 = a2->VidPnSourceId;
          WdLogGlobalForLineNumber = 1266;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Process pointer position failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
            v16,
            i,
            v11,
            0LL,
            0LL);
          break;
        }
      }
      ++v7;
    }
    if ( v18 )
    {
      v12 = v17;
      v18 = 0;
      if ( *(struct _KTHREAD **)(v17 + 24) != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v17, 0LL, 0LL);
        WdLogGlobalForLineNumber = 570;
      }
      if ( *(int *)(v12 + 32) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 573;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*(_DWORD *)(v12 + 32))-- == 1 )
      {
        *(_QWORD *)(v12 + 24) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 8, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
}
