/*
 * XREFs of ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z @ 0x140054E8C
 * Callers:
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@AEAPEBG@Z @ 0x140054DC0 (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMm.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x14001FFE0 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 *     ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJPEBG@Z @ 0x140054F98 (-RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJPEBG@Z.c)
 */

__int64 __fastcall CLocalMmcssWorkQueue::RuntimeClassInitialize(DWORD *this, const unsigned __int16 *a2)
{
  DWORD *v2; // rbx
  HRESULT WorkQueue; // eax
  unsigned int v6; // edi
  int v8; // eax
  HRESULT v9; // eax
  DWORD v10; // ecx
  int v11; // ecx
  __int64 v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD taskId; // [rsp+40h] [rbp+8h] BYREF

  v2 = this + 4;
  WorkQueue = RtwqAllocateWorkQueue(RTWQ_MULTITHREADED_WORKQUEUE, this + 4);
  v6 = WorkQueue;
  if ( WorkQueue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)WorkQueue);
    return v6;
  }
  v8 = CLocalMmcssWorkQueue::RegisterWorkQueueWithMmcss((CLocalMmcssWorkQueue *)this, a2);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v8);
    v9 = RtwqUnlockWorkQueue(*v2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFA,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v9);
    *v2 = 0;
    return v6;
  }
  v10 = *v2;
  taskId = 0;
  RtwqGetWorkQueueMMCSSTaskId(v10, &taskId);
  if ( (byte_1400C45C1 & 8) != 0 )
  {
    LODWORD(v12) = taskId;
    McTemplateU0pqq_EtwEventWriteTransfer(v11, (int)&AudioCore_Pump_CreateLocalWorkQueue, (__int64)this, *v2, v12);
  }
  return 0LL;
}
