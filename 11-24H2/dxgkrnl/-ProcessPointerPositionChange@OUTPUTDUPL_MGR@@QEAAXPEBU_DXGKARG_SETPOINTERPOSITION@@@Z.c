/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B3E00
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x140296DA0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B42B0 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B5C6C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B5C8C (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2)
{
  __int64 VidPnSourceId; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  OUTPUTDUPL_CONTEXT **v8; // rdi
  int v9; // r14d
  unsigned int i; // ebp
  OUTPUTDUPL_CONTEXT *v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rbx
  OUTPUTDUPL_MGR *v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  char v19; // [rsp+58h] [rbp-20h]

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
    WdLogGlobalForLineNumber = 1242;
  }
  else
  {
    v5 = *((_QWORD *)this + 2);
    v19 = 0;
    v6 = v5 + 72 * VidPnSourceId;
    v7 = v6;
    v18 = v6;
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v7 = 0LL;
    }
    if ( *(struct _KTHREAD **)(v7 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
    v8 = *(OUTPUTDUPL_CONTEXT ***)(v6 + 48);
    v9 = 1;
    for ( i = 0; i < *((_DWORD *)this + 2); ++i )
    {
      v11 = *v8;
      if ( *v8 && *((_DWORD *)v11 + 79) )
      {
        if ( v9 )
        {
          if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
          {
            OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v15, a2);
            v11 = *v8;
          }
          v9 = 0;
        }
        v16 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(v11, a2);
        if ( v16 < 0 )
        {
          v12 = v16;
          WdLogSingleEntry3(2LL, a2->VidPnSourceId, i, v16);
          v17 = a2->VidPnSourceId;
          WdLogGlobalForLineNumber = 1272;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Process pointer position failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
            v17,
            i,
            v12,
            0LL,
            0LL);
          break;
        }
      }
      ++v8;
    }
    if ( v19 )
    {
      v13 = v18;
      v19 = 0;
      if ( *(struct _KTHREAD **)(v18 + 24) != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v18, 0LL, 0LL);
        WdLogGlobalForLineNumber = 568;
      }
      if ( *(int *)(v13 + 32) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 571;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*(_DWORD *)(v13 + 32))-- == 1 )
      {
        *(_QWORD *)(v13 + 24) = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 8, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
}
