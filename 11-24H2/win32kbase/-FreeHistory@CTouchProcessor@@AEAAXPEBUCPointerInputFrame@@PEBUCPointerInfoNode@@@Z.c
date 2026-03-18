/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1401FBEBC
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x1401FC59C (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14018536C (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FC6F8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1401FEB50 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x14020547C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208EB4 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v6; // rcx
  unsigned int HistoryCount; // ebp
  CTouchProcessor *v8; // rsi
  unsigned int v9; // r12d
  bool v10; // zf
  char *v11; // r14
  __int64 v12; // rdi
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  CTouchProcessor *v16; // [rsp+28h] [rbp-50h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11415);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v6, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11417);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11420);
  v8 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v9 = *((_DWORD *)a3 + 86);
  v16 = (CTouchProcessor *)(this + 6);
  if ( v8 == (CTouchProcessor *)(this + 6) )
  {
LABEL_23:
    v10 = HistoryCount == 1;
  }
  else
  {
    while ( 1 )
    {
      v10 = HistoryCount == 1;
      if ( HistoryCount <= 1 )
        break;
      v11 = (char *)v8 - 8;
      v8 = *(CTouchProcessor **)v8;
      if ( *((_QWORD *)v11 + 8) == *((_QWORD *)a2 + 8) )
      {
        if ( v9 >= *((_DWORD *)v11 + 12) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11439);
        v12 = *((_QWORD *)v11 + 30) + 480LL * v9;
        v13 = (_DWORD *)(v12 + 172);
        if ( (*(_DWORD *)v12 & 0x2000) != 0 || !*v13 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11441);
        if ( *(_WORD *)v13 != *((_WORD *)a3 + 86) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11443);
        if ( *(_QWORD *)(v12 + 16) != *((_QWORD *)a3 + 2) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11444);
        v14 = 2LL;
        if ( (*(_DWORD *)v12 & 2) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11445);
        v15 = *(_DWORD *)(v12 + 344);
        CTouchProcessor::ReferenceFrameInt(v14, v11);
        CTouchProcessor::FreePointerInfoNodeInt(this, v11, v9);
        CTouchProcessor::UnreferenceFrameInt(this, v11);
        --HistoryCount;
        v9 = v15;
      }
      if ( v8 == v16 )
        goto LABEL_23;
    }
  }
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11463);
}
