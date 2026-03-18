/*
 * XREFs of NVMeCleanUpSqCqMapping @ 0x14001BD1C
 * Callers:
 *     IoSqToIoCqMapping @ 0x14001AEE8 (IoSqToIoCqMapping.c)
 * Callees:
 *     GetMaxDedicatedSqPerCqCount @ 0x140019FD4 (GetMaxDedicatedSqPerCqCount.c)
 *     NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x14001C538 (NVMeCompletionQueuesDedicatedSubmissionQueuesInit.c)
 *     NVMeCompletionQueuesSubmissionQueuesInit @ 0x14001C5D0 (NVMeCompletionQueuesSubmissionQueuesInit.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeCleanUpSqCqMapping(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v5; // si
  unsigned int v6; // edi
  __int64 v7; // rdx
  char v8; // al
  int v9; // eax
  unsigned int v10; // edx
  unsigned __int8 v11; // si
  unsigned int v12; // edi
  __int64 v13; // rdx
  int MaxDedicatedSqPerCqCount; // r9d
  int v15; // r10d
  unsigned int v16; // r9d

  result = *(unsigned __int16 *)(a1 + 332);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)result )
  {
    do
    {
      v7 = *(_QWORD *)(a1 + 944) + 392LL * v6;
      *(_DWORD *)(v7 + 244) &= 0xFFFFFFF0;
      if ( *(_DWORD *)(v7 + 180) )
      {
        NVMeCompletionQueuesSubmissionQueuesInit(a1, v7, a3, 0LL);
        v8 = v5;
        if ( !v5 )
          v8 = 1;
        v5 = v8;
      }
      a3 = *(unsigned __int16 *)(a1 + 332);
      ++v6;
    }
    while ( v6 < (unsigned int)a3 );
    result = (unsigned __int16)a3;
    if ( v5 )
    {
      v9 = *(unsigned __int16 *)(a1 + 330);
      if ( (unsigned __int16)v9 >= *(_WORD *)(a1 + 234) )
        v9 = *(unsigned __int16 *)(a1 + 234);
      v10 = (8 * (unsigned int)a3 * (unsigned __int16)((v9 - 1) / (int)a3 + 1)) >> 2;
      if ( v10 )
      {
        memset(*(void **)(*(_QWORD *)(a1 + 944) + 192LL), 0, 4LL * v10);
        a3 = *(unsigned __int16 *)(a1 + 332);
      }
      result = (unsigned __int16)a3;
    }
  }
  v11 = 0;
  v12 = 0;
  if ( (_WORD)result )
  {
    do
    {
      result = v12;
      v13 = *(_QWORD *)(a1 + 944) + 392LL * v12;
      if ( *(_DWORD *)(v13 + 212) )
      {
        NVMeCompletionQueuesDedicatedSubmissionQueuesInit(a1, v13, a3, 0LL);
        result = v11;
        if ( !v11 )
          result = 1LL;
        v11 = result;
      }
      ++v12;
    }
    while ( v12 < *(unsigned __int16 *)(a1 + 332) );
    if ( v11 )
    {
      MaxDedicatedSqPerCqCount = (unsigned __int16)GetMaxDedicatedSqPerCqCount((unsigned __int16 *)a1);
      result = *(_QWORD *)(a1 + 944);
      v16 = (unsigned int)(8 * v15 * MaxDedicatedSqPerCqCount) >> 2;
      if ( v16 )
        return (__int64)memset(*(void **)(result + 224), 0, 4LL * v16);
    }
  }
  return result;
}
