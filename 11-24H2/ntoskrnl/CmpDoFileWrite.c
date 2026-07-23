/*
 * XREFs of CmpDoFileWrite @ 0x140A466A0
 * Callers:
 *     CmpWriteOffsetArrayToFile @ 0x1407DCE8C (CmpWriteOffsetArrayToFile.c)
 *     CmpFileWrite @ 0x140A46660 (CmpFileWrite.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpSetRespectIoPriorityThread @ 0x140482D84 (CmpSetRespectIoPriorityThread.c)
 *     CmpSetIoPriorityThread @ 0x1404A8898 (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x1404ACE08 (CmpSetPriorityThread.c)
 *     Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledDeviceUsageNoInline @ 0x140666C04 (Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     CmpCreateEvent @ 0x140932EC0 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileWrite(void *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  ULONG v7; // esi
  __int64 Pool; // rbx
  int Event; // edi
  unsigned int v10; // r13d
  unsigned int v11; // eax
  _DWORD *v12; // r14
  char *Buffer; // rdi
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // r12
  void *v17; // rdx
  ULONG Length; // r15d
  unsigned int v19; // ecx
  int *v20; // rax
  ULONG v21; // edx
  ULONG v22; // ecx
  int *v23; // rax
  unsigned int v24; // ebp
  HANDLE *v25; // rsi
  int v27; // [rsp+50h] [rbp-58h]
  int v28; // [rsp+54h] [rbp-54h]
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-50h] BYREF
  char *v30; // [rsp+60h] [rbp-48h]
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-40h]
  char v33; // [rsp+B8h] [rbp+10h]
  char v35; // [rsp+D8h] [rbp+30h]

  ByteOffset.QuadPart = 0LL;
  v33 = 0;
  v28 = 0;
  v27 = 0;
  v7 = 0;
  Pool = CmpAllocatePool(0x40uLL, 0x1400uLL, 0x77624D43u);
  if ( Pool )
  {
    if ( (a5 & 1) != 0 )
    {
      v27 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0);
      v28 = CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread(), 4);
      v33 = 1;
    }
    v35 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v10 = 0;
    if ( a4 )
    {
      v11 = a4;
      v12 = (_DWORD *)(a3 + 16);
      while ( 1 )
      {
        Buffer = (char *)*((_QWORD *)v12 - 1);
        v14 = *v12;
        ByteOffset.QuadPart = (unsigned int)*(v12 - 4);
        v30 = Buffer;
        if ( v14 )
          break;
LABEL_25:
        ++v10;
        v12 += 6;
        if ( v10 >= v11 )
          goto LABEL_26;
      }
      while ( 1 )
      {
        v15 = v7;
        v16 = Pool + 8LL * v7;
        if ( !*(_QWORD *)v16 )
        {
          Event = CmpCreateEvent(SynchronizationEvent, (HANDLE *)(Pool + 8LL * v7), (PVOID *)(v16 + 512));
          if ( Event < 0 )
            goto LABEL_32;
          Buffer = v30;
          v15 = v7;
        }
        v17 = *(void **)v16;
        Length = 0x100000;
        if ( v14 < 0x100000 )
          Length = v14;
        IoStatusBlock = (PIO_STATUS_BLOCK)(Pool + 16 * (v15 + 256));
        if ( ZwWriteFile(a1, v17, 0LL, 0LL, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL) < 0 )
        {
          Length = 0x10000;
          if ( v14 < 0x10000 )
            Length = v14;
          Event = ZwWriteFile(
                    a1,
                    *(HANDLE *)(Pool + 8LL * v7),
                    0LL,
                    0LL,
                    IoStatusBlock,
                    Buffer,
                    Length,
                    &ByteOffset,
                    0LL);
          if ( Event < 0 )
            goto LABEL_32;
          Buffer = v30;
        }
        v14 -= Length;
        ByteOffset.QuadPart += Length;
        Buffer += Length;
        ++v7;
        v30 = Buffer;
        if ( v7 == 64 )
          break;
LABEL_23:
        if ( !v14 )
        {
          v11 = a4;
          goto LABEL_25;
        }
      }
      KeWaitForMultipleObjects(0x40u, (PVOID *)(Pool + 512), WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(Pool + 1024));
      v19 = 0;
      v20 = (int *)(Pool + 4096);
      v7 = 0;
      while ( 1 )
      {
        Event = *v20;
        if ( *v20 < 0 )
          break;
        ++v19;
        v20 += 4;
        if ( v19 >= 0x40 )
        {
          Buffer = v30;
          goto LABEL_23;
        }
      }
    }
    else
    {
LABEL_26:
      if ( (unsigned int)Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledDeviceUsageNoInline()
        && v7 )
      {
        KeWaitForMultipleObjects(v7, (PVOID *)(Pool + 512), WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(Pool + 1024));
        v21 = v7;
        v22 = 0;
        v7 = 0;
        v23 = (int *)(Pool + 4096);
        while ( 1 )
        {
          Event = *v23;
          if ( *v23 < 0 )
            break;
          ++v22;
          v23 += 4;
          if ( v22 >= v21 )
            goto LABEL_31;
        }
      }
      else
      {
LABEL_31:
        Event = 0;
LABEL_32:
        if ( v7 )
          KeWaitForMultipleObjects(
            v7,
            (PVOID *)(Pool + 512),
            WaitAll,
            Executive,
            0,
            0,
            0LL,
            (PKWAIT_BLOCK)(Pool + 1024));
      }
    }
    if ( v33 )
    {
      CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v27);
      CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread(), v28);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v35);
    v24 = 0;
    v25 = (HANDLE *)Pool;
    do
    {
      if ( !*v25 )
        break;
      ObfDereferenceObject(v25[64]);
      ZwClose(*v25);
      ++v24;
      ++v25;
    }
    while ( v24 < 0x40 );
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
