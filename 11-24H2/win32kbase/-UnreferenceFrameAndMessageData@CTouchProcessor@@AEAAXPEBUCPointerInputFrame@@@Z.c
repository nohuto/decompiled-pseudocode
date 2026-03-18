/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140208BB8
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z @ 0x1401FA310 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEAUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140208F70 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400DE5D0 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DEA6C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x1401FC59C (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FC6F8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1401FEB50 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x140200878 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(PERESOURCE *this, const struct CPointerInputFrame *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned __int64 i; // rbx
  int v13; // ebp
  struct CPointerMsgData *PrevMsgId; // rax
  unsigned __int64 v15; // rsi
  int (*v16)(void); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (__fastcall *v19)(const struct CPointerInputFrame *); // rax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8375);
  if ( !IsInputThread(v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8382);
  v7 = (unsigned __int64)PtiCurrent(v5);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8383);
  v10 = *((unsigned int *)a2 + 12);
  v11 = 0;
  for ( i = *((_QWORD *)a2 + 30); v11 < (unsigned int)v10; i += 480LL )
  {
    v7 = *((_QWORD *)a2 + 30) + 480 * v10;
    if ( i >= v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8397);
    if ( (unsigned int)(*((_DWORD *)a2 + 56) - 1) <= 1 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8414);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) > 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8415);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8416);
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v11);
      }
    }
    else if ( !(unsigned int)IsCurrentProcessDwm(v7, v6, v8, v9)
           || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(i + 16)
        || (v7 = *((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                     (CTouchProcessor *)v7,
                                     a2,
                                     (const struct CPointerInfoNode *)i)
                 + 35),
            (v7 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
          CTouchProcessor::FreePointerInfoNode(this, v6, *((_DWORD *)a2 + 10), v11);
      }
      else
      {
        v13 = *(_DWORD *)(i + 180) & 2;
        if ( (*(_DWORD *)(i + 180) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId((CTouchProcessor *)v7, *(_QWORD *)(i + 16));
          v15 = (unsigned __int64)PrevMsgId;
          if ( PrevMsgId )
          {
            v7 = *((unsigned int *)CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)v7, (__int64)PrevMsgId) + 9);
            if ( (v7 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData((__int64)this, v15, 1);
          }
        }
        if ( !v13 )
          CTouchProcessor::UnreferenceMsgData((__int64)this, *(_QWORD *)(i + 16), 1);
      }
    }
    v10 = *((unsigned int *)a2 + 12);
    ++v11;
  }
  v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 6704LL);
  if ( v16 )
  {
    if ( v16() >= 0 )
    {
      v19 = *(void (__fastcall **)(const struct CPointerInputFrame *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17)
                                                                                 + 48)
                                                                     + 6712LL);
      if ( v19 )
        v19(a2);
    }
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a2);
}
