/*
 * XREFs of CmpDoFileWrite @ 0x14091083C
 * Callers:
 *     CmpWriteOffsetArrayToFile @ 0x1407CD17C (CmpWriteOffsetArrayToFile.c)
 *     CmpFileWrite @ 0x140910590 (CmpFileWrite.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpSetRespectIoPriorityThread @ 0x14048800C (CmpSetRespectIoPriorityThread.c)
 *     CmpSetIoPriorityThread @ 0x1404AC948 (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x1404B1590 (CmpSetPriorityThread.c)
 *     ZwWriteFile @ 0x14069B240 (ZwWriteFile.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     CmpCreateEvent @ 0x140910BA8 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileWrite(void *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  ULONG v7; // esi
  __int64 Pool; // rbx
  unsigned int i; // r12d
  void *v10; // rax
  unsigned int v11; // r14d
  HANDLE *v12; // r15
  NTSTATUS Event; // edi
  char *v14; // r13
  ULONG Length; // ebp
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rdi
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  HANDLE *v19; // rsi
  int v21; // [rsp+50h] [rbp-68h]
  int v22; // [rsp+54h] [rbp-64h]
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-60h] BYREF
  PVOID Buffer; // [rsp+60h] [rbp-58h]
  char v26; // [rsp+C8h] [rbp+10h]
  char v29; // [rsp+E8h] [rbp+30h]

  v5 = a3;
  ByteOffset.QuadPart = 0LL;
  v26 = 0;
  v6 = a4;
  v22 = 0;
  v21 = 0;
  v7 = 0;
  Pool = CmpAllocatePool(0x40uLL);
  if ( Pool )
  {
    if ( (a5 & 1) != 0 )
    {
      v21 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0);
      v22 = CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread(), 4);
      v26 = 1;
    }
    v29 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    for ( i = 0; i < v6; ++i )
    {
      v10 = *(void **)(v5 + 24LL * i + 8);
      v11 = *(_DWORD *)(v5 + 24LL * i + 16);
      ByteOffset.QuadPart = *(unsigned int *)(v5 + 24LL * i);
      Buffer = v10;
      while ( v11 )
      {
        v12 = (HANDLE *)(Pool + 8LL * v7);
        if ( !*v12 )
        {
          Event = CmpCreateEvent(SynchronizationEvent);
          if ( Event < 0 )
            goto LABEL_20;
        }
        v14 = (char *)Buffer;
        Length = 0x100000;
        if ( v11 < 0x100000 )
          Length = v11;
        IoStatusBlock = (struct _IO_STATUS_BLOCK *)(Pool + 16 * (v7 + 256LL));
        if ( ZwWriteFile(a1, *v12, 0LL, 0LL, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL) < 0 )
        {
          Length = 0x10000;
          if ( v11 < 0x10000 )
            Length = v11;
          Event = ZwWriteFile(a1, *(HANDLE *)(Pool + 8LL * v7), 0LL, 0LL, IoStatusBlock, v14, Length, &ByteOffset, 0LL);
          if ( Event < 0 )
            goto LABEL_20;
        }
        ++v7;
        ByteOffset.QuadPart += Length;
        v11 -= Length;
        Buffer = &v14[Length];
        if ( v7 == 64 )
        {
          KeWaitForMultipleObjects(
            0x40u,
            (PVOID *)(Pool + 512),
            WaitAll,
            Executive,
            0,
            0,
            0LL,
            (PKWAIT_BLOCK)(Pool + 1024));
          v17 = 0;
          v7 = 0;
          while ( v17 < 0x40 )
          {
            Event = *(_DWORD *)(Pool + 16 * (v17 + 256LL));
            if ( Event < 0 )
              goto LABEL_22;
            ++v17;
          }
        }
      }
      v5 = a3;
      v6 = a4;
    }
    Event = 0;
LABEL_20:
    if ( v7 )
      KeWaitForMultipleObjects(v7, (PVOID *)(Pool + 512), WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(Pool + 1024));
LABEL_22:
    if ( v26 )
    {
      CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v21);
      CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread(), v22);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v29);
    v18 = 0;
    v19 = (HANDLE *)Pool;
    do
    {
      if ( !*v19 )
        break;
      ObfDereferenceObject(v19[64]);
      ZwClose(*v19);
      ++v18;
      ++v19;
    }
    while ( v18 < 0x40 );
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
