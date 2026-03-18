/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401F8908
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1401FA134 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ApiSetEditionDelQEntry @ 0x1400C118C (ApiSetEditionDelQEntry.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400DF354 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1400ED340 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1400ED3A0 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1400F23A8 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x140104B7C (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x140105A34 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14018536C (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1401F707C (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1401F84B4 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1401FBA64 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1401FEA6C (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  unsigned int v5; // r13d
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v12; // r14
  unsigned int v13; // ecx
  unsigned int CanCoalesceNodeWithPrevious; // ebx
  const struct CPointerInfoNode *v15; // rsi
  int v16; // r12d
  struct tagQ *v17; // rdx
  int v18; // r8d
  struct tagQMSG *NodeQueuedMessage; // rbx
  unsigned int v20; // edx
  unsigned int v21; // r12d
  unsigned __int64 v22; // rsi
  unsigned int v23; // ebx
  __int64 v24; // r13
  struct tagQ *v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+44h] [rbp-Ch]
  struct tagQ *v28; // [rsp+48h] [rbp-8h] BYREF
  int v30; // [rsp+A0h] [rbp+50h] BYREF
  struct CPointerInputFrame *v31; // [rsp+A8h] [rbp+58h]

  v31 = a4;
  v5 = 0;
  v28 = 0LL;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15494);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15496);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, (__int64)a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15497);
  if ( (*((_DWORD *)a3 + 35) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15498);
  if ( (*((_DWORD *)a3 + 35) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15499);
  if ( (*((_DWORD *)a3 + 35) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15500);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15501);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v12 = (__int64)result;
  if ( !result )
    return result;
  v13 = *((_DWORD *)a2 + 12);
  v30 = 1;
  CanCoalesceNodeWithPrevious = 1;
  v15 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v16 = 0;
  if ( !v13 )
  {
LABEL_71:
    v30 = 19;
LABEL_72:
    CanCoalesceNodeWithPrevious = 0;
    goto LABEL_73;
  }
  do
  {
    if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15529);
    if ( *((_DWORD *)v15 + 2) != *(_DWORD *)a3 )
      goto LABEL_35;
    if ( (*(_DWORD *)v15 & 0x2000) == 0 && !CPointerInfoNode::IsFullyReleased(v15) )
    {
      v28 = v17;
      NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v15, v18, &v28);
      if ( NodeQueuedMessage )
      {
        if ( *((_QWORD *)NodeQueuedMessage + 1) )
        {
          if ( !v28 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15598);
          if ( v5 < *(_DWORD *)(v12 + 4) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15599);
          if ( *(_DWORD *)(v12 + 4) >= *(_DWORD *)v12 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15600);
          *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * *(unsigned int *)(v12 + 4)) = v28;
          *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v12 + 4))++ + 8) = NodeQueuedMessage;
          if ( *(_DWORD *)(v12 + 4) > *(_DWORD *)v12 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15604);
          CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                          this,
                                          v31,
                                          v15,
                                          NodeQueuedMessage,
                                          a3,
                                          (enum CPointerCoalesce *)&v30);
          if ( !CanCoalesceNodeWithPrevious )
            goto LABEL_73;
          v16 = 1;
          goto LABEL_35;
        }
        v30 = 18;
      }
      else
      {
        v30 = 15;
      }
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_73;
    }
    if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v31, v15, (enum CPointerCoalesce *)&v30) )
    {
      if ( v30 != 3 && v30 != 20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15567);
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_73;
    }
LABEL_35:
    v13 = *((_DWORD *)a2 + 12);
    ++v5;
    v15 = (const struct CPointerInfoNode *)((char *)v15 + 480);
  }
  while ( v5 < v13 );
  if ( !v16 )
    goto LABEL_71;
  if ( *((_DWORD *)a3 + 34) != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
  {
    v30 = 17;
    goto LABEL_72;
  }
  if ( *(_DWORD *)(v12 + 4) > *((_DWORD *)a3 + 34) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15650);
  if ( v30 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15651);
  EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), 1LL);
  v20 = *((_DWORD *)a2 + 12);
  v21 = 0;
  v22 = *((_QWORD *)a2 + 30);
  if ( v20 )
  {
    v27 = CanCoalesceNodeWithPrevious;
    v23 = 0;
    do
    {
      if ( v22 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15661);
      if ( *(_DWORD *)(v22 + 8) == *(_DWORD *)a3
        && (*(_DWORD *)v22 & 0x2000) == 0
        && !CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v22) )
      {
        if ( v23 > v21 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15680);
        if ( v23 >= *(_DWORD *)(v12 + 4) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15681);
        v28 = *(struct tagQ **)(*(_QWORD *)(v12 + 8) + 16LL * v23);
        v24 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v23 + 8);
        if ( *(_QWORD *)(v22 + 16) != *(_QWORD *)(v24 + 40) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15684);
        CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v31, (struct CPointerInfoNode *)v22, v21, 1);
        if ( *(_QWORD *)(v22 + 16) == *(_QWORD *)(v24 + 40) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15692);
        InputTraceLogging::Delivery::CoalesceMessage(*(const struct tagQMSG **)(v24 + 8), *(_QWORD *)(v24 + 144));
        *(_QWORD *)(*(_QWORD *)(v24 + 8) + 144LL) = *(_QWORD *)(v24 + 144);
        v25 = v28;
        if ( *((_QWORD *)v28 + 11) == v24 )
        {
          *((_QWORD *)v28 + 11) = 0LL;
          v25 = v28;
        }
        ApiSetEditionDelQEntry((__int64)v25 + 24, v24);
        ++v23;
      }
      v20 = *((_DWORD *)a2 + 12);
      ++v21;
      v22 += 480LL;
    }
    while ( v21 < v20 );
    CanCoalesceNodeWithPrevious = v27;
  }
  EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a2 + 10), v20, 1LL);
LABEL_73:
  v26 = 2 * CanCoalesceNodeWithPrevious;
  *((_DWORD *)a3 + 35) = (4 * CanCoalesceNodeWithPrevious) ^ (v26 ^ (4 * CanCoalesceNodeWithPrevious)) & 0xFFFFFFFB ^ (*((_DWORD *)a3 + 35) ^ (2 * CanCoalesceNodeWithPrevious)) & 0xFFFFFFF9;
  CTouchProcessor::TrackCoalesceOnReassign(v26, (__int64)a3, v30);
  return (struct tagCPointerCoalesceInfo *)CanCoalesceNodeWithPrevious;
}
