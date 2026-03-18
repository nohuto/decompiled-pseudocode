/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01BD524
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01C1224 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ApiSetEditionDelQEntry @ 0x1C00C97FC (ApiSetEditionDelQEntry.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C0138B00 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C0139380 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BB090 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BB1C8 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01BCE74 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01BD0C8 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01C29C0 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01C6D44 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01CCAD8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C01CCB2C (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01D7CC8 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  unsigned int v4; // r13d
  __int64 v9; // rcx
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int CanCoalesceNodeWithPrevious; // ebx
  const struct CPointerInfoNode *v14; // rsi
  int v15; // r12d
  struct tagQ *v16; // rdx
  int v17; // r8d
  struct tagQMSG *NodeQueuedMessage; // rbx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // r12d
  unsigned __int64 v22; // rsi
  unsigned int v23; // ebx
  __int64 v24; // r13
  struct tagQ *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned int v28; // [rsp+44h] [rbp-Ch]
  struct tagQ *v29; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+50h] BYREF
  struct CPointerInputFrame *v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  v4 = 0;
  v29 = 0LL;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15316);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15318);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15319);
  if ( (*((_DWORD *)a3 + 35) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15320);
  if ( (*((_DWORD *)a3 + 35) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15321);
  if ( (*((_DWORD *)a3 + 35) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15322);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15323);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v11 = (__int64)result;
  if ( !result )
    return result;
  v12 = *((_DWORD *)a2 + 12);
  v31 = 1;
  CanCoalesceNodeWithPrevious = 1;
  v14 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v15 = 0;
  if ( !v12 )
  {
LABEL_71:
    v31 = 19;
LABEL_72:
    CanCoalesceNodeWithPrevious = 0;
    goto LABEL_73;
  }
  do
  {
    if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v12 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15351);
    if ( *((_DWORD *)v14 + 2) != *(_DWORD *)a3 )
      goto LABEL_35;
    if ( (*(_DWORD *)v14 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(v14) )
    {
      v29 = v16;
      NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v14, v17, &v29);
      if ( NodeQueuedMessage )
      {
        if ( *((_QWORD *)NodeQueuedMessage + 1) )
        {
          if ( !v29 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15420);
          if ( v4 < *(_DWORD *)(v11 + 4) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15421);
          if ( *(_DWORD *)(v11 + 4) >= *(_DWORD *)v11 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15422);
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * *(unsigned int *)(v11 + 4)) = v29;
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v11 + 4))++ + 8) = NodeQueuedMessage;
          if ( *(_DWORD *)(v11 + 4) > *(_DWORD *)v11 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15426);
          CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                          this,
                                          v32,
                                          v14,
                                          NodeQueuedMessage,
                                          a3,
                                          (enum CPointerCoalesce *)&v31);
          if ( !CanCoalesceNodeWithPrevious )
            goto LABEL_73;
          v15 = 1;
          goto LABEL_35;
        }
        v31 = 18;
      }
      else
      {
        v31 = 15;
      }
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_73;
    }
    if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v32, v14, (enum CPointerCoalesce *)&v31) )
    {
      if ( v31 != 3 && v31 != 20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15389);
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_73;
    }
LABEL_35:
    v12 = *((_DWORD *)a2 + 12);
    ++v4;
    v14 = (const struct CPointerInfoNode *)((char *)v14 + 480);
  }
  while ( v4 < v12 );
  if ( !v15 )
    goto LABEL_71;
  v19 = *((_DWORD *)a3 + 34);
  if ( v19 != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
  {
    v31 = 17;
    goto LABEL_72;
  }
  if ( *(_DWORD *)(v11 + 4) > v19 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15472);
  if ( v31 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15473);
  EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), 1LL);
  v20 = *((_DWORD *)a2 + 12);
  v21 = 0;
  v22 = *((_QWORD *)a2 + 30);
  if ( v20 )
  {
    v28 = CanCoalesceNodeWithPrevious;
    v23 = 0;
    do
    {
      if ( v22 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15483);
      if ( *(_DWORD *)(v22 + 8) == *(_DWORD *)a3
        && (*(_DWORD *)v22 & 0x2000) == 0
        && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v22) )
      {
        if ( v23 > v21 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15502);
        if ( v23 >= *(_DWORD *)(v11 + 4) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15503);
        v29 = *(struct tagQ **)(*(_QWORD *)(v11 + 8) + 16LL * v23);
        v24 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * v23 + 8);
        if ( *(_QWORD *)(v22 + 16) != *(_QWORD *)(v24 + 40) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15506);
        CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v32, (struct CPointerInfoNode *)v22, v21, 1);
        if ( *(_QWORD *)(v22 + 16) == *(_QWORD *)(v24 + 40) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15514);
        InputTraceLogging::Delivery::CoalesceMessage(*(const struct tagQMSG **)(v24 + 8));
        *(_QWORD *)(*(_QWORD *)(v24 + 8) + 136LL) = *(_QWORD *)(v24 + 136);
        v25 = v29;
        if ( *((_QWORD *)v29 + 11) == v24 )
        {
          *((_QWORD *)v29 + 11) = 0LL;
          v25 = v29;
        }
        ApiSetEditionDelQEntry((__int64)v25 + 24, v24);
        ++v23;
      }
      v20 = *((_DWORD *)a2 + 12);
      ++v21;
      v22 += 480LL;
    }
    while ( v21 < v20 );
    CanCoalesceNodeWithPrevious = v28;
  }
  EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a2 + 10), v20, 1LL);
LABEL_73:
  v26 = v31;
  v27 = *((_DWORD *)a3 + 35) & 0xFFFFFFF9 | (2
                                           * ((2 * (CanCoalesceNodeWithPrevious & 1)) | CanCoalesceNodeWithPrevious & 1));
  *((_DWORD *)a3 + 35) = v27;
  CTouchProcessor::TrackCoalesceOnReassign(v27, a3, v26);
  return (struct tagCPointerCoalesceInfo *)CanCoalesceNodeWithPrevious;
}
