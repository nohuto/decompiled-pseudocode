/*
 * XREFs of CmpDoFileWrite @ 0x140A4F8F0
 * Callers:
 *     CmpWriteOffsetArrayToFile @ 0x1407DC93C (CmpWriteOffsetArrayToFile.c)
 *     CmpFileWrite @ 0x140A4F8B0 (CmpFileWrite.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpSetRespectIoPriorityThread @ 0x140487D14 (CmpSetRespectIoPriorityThread.c)
 *     CmpSetIoPriorityThread @ 0x1404ADF88 (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x1404B2578 (CmpSetPriorityThread.c)
 *     Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledDeviceUsageNoInline @ 0x140668314 (Feature_Servicing_WaitForOutstandingWritesToComplete__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwWriteFile @ 0x1406A6510 (ZwWriteFile.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     CmpCreateEvent @ 0x140930D80 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileWrite(void *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  ULONG v7; // esi
  __int64 Pool; // rbx
  int Event; // edi
  __int64 v10; // r8
  unsigned int v11; // r13d
  unsigned int v12; // eax
  _DWORD *v13; // r14
  char *Buffer; // rdi
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // r12
  void *v18; // rdx
  ULONG Length; // r15d
  unsigned int v20; // ecx
  int *v21; // rax
  ULONG v22; // edx
  ULONG v23; // ecx
  int *v24; // rax
  __int64 v25; // r8
  unsigned int v26; // ebp
  HANDLE *v27; // rsi
  int v29; // [rsp+50h] [rbp-58h]
  int v30; // [rsp+54h] [rbp-54h]
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-50h] BYREF
  char *v32; // [rsp+60h] [rbp-48h]
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-40h]
  char v35; // [rsp+B8h] [rbp+10h]
  char v37; // [rsp+D8h] [rbp+30h]

  ByteOffset.QuadPart = 0LL;
  v35 = 0;
  v30 = 0;
  v29 = 0;
  v7 = 0;
  Pool = CmpAllocatePool(0x40uLL);
  if ( Pool )
  {
    if ( (a5 & 1) != 0 )
    {
      v29 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0);
      v30 = CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread(), 4, v10);
      v35 = 1;
    }
    v37 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v11 = 0;
    if ( a4 )
    {
      v12 = a4;
      v13 = (_DWORD *)(a3 + 16);
      while ( 1 )
      {
        Buffer = (char *)*((_QWORD *)v13 - 1);
        v15 = *v13;
        ByteOffset.QuadPart = (unsigned int)*(v13 - 4);
        v32 = Buffer;
        if ( v15 )
          break;
LABEL_25:
        ++v11;
        v13 += 6;
        if ( v11 >= v12 )
          goto LABEL_26;
      }
      while ( 1 )
      {
        v16 = v7;
        v17 = Pool + 8LL * v7;
        if ( !*(_QWORD *)v17 )
        {
          Event = CmpCreateEvent(SynchronizationEvent, (HANDLE *)(Pool + 8LL * v7), (PVOID *)(v17 + 512));
          if ( Event < 0 )
            goto LABEL_32;
          Buffer = v32;
          v16 = v7;
        }
        v18 = *(void **)v17;
        Length = 0x100000;
        if ( v15 < 0x100000 )
          Length = v15;
        IoStatusBlock = (PIO_STATUS_BLOCK)(Pool + 16 * (v16 + 256));
        if ( ZwWriteFile(a1, v18, 0LL, 0LL, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL) < 0 )
        {
          Length = 0x10000;
          if ( v15 < 0x10000 )
            Length = v15;
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
          Buffer = v32;
        }
        v15 -= Length;
        ByteOffset.QuadPart += Length;
        Buffer += Length;
        ++v7;
        v32 = Buffer;
        if ( v7 == 64 )
          break;
LABEL_23:
        if ( !v15 )
        {
          v12 = a4;
          goto LABEL_25;
        }
      }
      KeWaitForMultipleObjects(0x40u, (PVOID *)(Pool + 512), WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(Pool + 1024));
      v20 = 0;
      v21 = (int *)(Pool + 4096);
      v7 = 0;
      while ( 1 )
      {
        Event = *v21;
        if ( *v21 < 0 )
          break;
        ++v20;
        v21 += 4;
        if ( v20 >= 0x40 )
        {
          Buffer = v32;
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
        v22 = v7;
        v23 = 0;
        v7 = 0;
        v24 = (int *)(Pool + 4096);
        while ( 1 )
        {
          Event = *v24;
          if ( *v24 < 0 )
            break;
          ++v23;
          v24 += 4;
          if ( v23 >= v22 )
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
    if ( v35 )
    {
      CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v29);
      CmpSetPriorityThread((ULONG_PTR)KeGetCurrentThread(), v30, v25);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v37);
    v26 = 0;
    v27 = (HANDLE *)Pool;
    do
    {
      if ( !*v27 )
        break;
      ObfDereferenceObject(v27[64]);
      ZwClose(*v27);
      ++v26;
      ++v27;
    }
    while ( v26 < 0x40 );
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
