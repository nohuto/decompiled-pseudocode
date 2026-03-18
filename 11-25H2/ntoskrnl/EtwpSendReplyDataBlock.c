/*
 * XREFs of EtwpSendReplyDataBlock @ 0x1409FB184
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseQueueEntry @ 0x1409FB268 (EtwpReleaseQueueEntry.c)
 *     EtwpQueueReply @ 0x1409FB2D0 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpSendReplyDataBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  __int64 v4; // rdi
  NTSTATUS v5; // ebx
  PVOID v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 24);
  Object = 0LL;
  v4 = *(unsigned int *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v5 = ObReferenceObjectByHandle(v3, 4u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v7 = Object;
    if ( (*((_BYTE *)Object + 98) & 2) != 0 )
    {
      if ( (unsigned int)v4 >= 4 )
      {
        v5 = -1073741811;
      }
      else
      {
        v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)Object + v4 + 6, 0LL);
        if ( v8 )
        {
          v9 = v8[4];
          if ( (*(_BYTE *)(v9 + 98) & 0x20) != 0 )
            v5 = -1073741055;
          else
            v5 = EtwpQueueReply(*(_QWORD *)(v9 + 48), a1);
          EtwpReleaseQueueEntry(v8);
        }
        else
        {
          v5 = -1073741811;
        }
        v7 = Object;
      }
    }
    else
    {
      v5 = -1073741816;
    }
    ObfDereferenceObject(v7);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
