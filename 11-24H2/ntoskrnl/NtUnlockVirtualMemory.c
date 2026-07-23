/*
 * XREFs of NtUnlockVirtualMemory @ 0x140213FA0
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiUnlockVa @ 0x1403DB604 (MiUnlockVa.c)
 *     MiVadPagesTradable @ 0x1403DD010 (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1409DE190 (MiLockUnlockCommon.c)
 */

NTSTATUS __cdecl NtUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  __int64 v5; // r15
  NTSTATUS result; // eax
  char *v7; // rsi
  unsigned __int64 v8; // r12
  int v9; // ebx
  ULONG_PTR v10; // r9
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  _QWORD *v17; // r12
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 ProcessorFlushList; // rax
  __int64 NextVad; // rax
  __int64 v24; // r8
  __int64 valid; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 Address; // rax
  __int64 v31; // rdx
  char v32; // [rsp+40h] [rbp-D8h]
  NTSTATUS v33; // [rsp+44h] [rbp-D4h]
  char v34; // [rsp+48h] [rbp-D0h]
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-A0h]
  __int64 v41; // [rsp+80h] [rbp-98h]
  unsigned __int64 v42; // [rsp+88h] [rbp-90h]
  PSIZE_T v43; // [rsp+90h] [rbp-88h]
  PVOID *v44; // [rsp+98h] [rbp-80h]
  _BYTE v45[48]; // [rsp+A0h] [rbp-78h] BYREF

  v43 = RegionSize;
  v44 = BaseAddress;
  v5 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  Object = 0LL;
  memset(v45, 0, sizeof(v45));
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v37, (__int64)&v36, (__int64)&Object);
  v33 = result;
  if ( result < 0 )
    return result;
  v7 = (char *)Object + 1024;
  v8 = 0LL;
  v40 = 0LL;
  v9 = (unsigned int)MiVmAccessLoggingEnabled((char *)Object + 1024) != 0 ? 8 : 0;
  v34 = v9;
  v11 = (v37 + v36 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v42 = v11;
  v12 = v37 & 0xFFFFFFFFFFFFF000uLL;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess(v10);
    v9 |= 2u;
    v34 = v9;
  }
  v36 = 0LL;
  v13 = MiLockVadRange(Object, v12, v11, 0LL);
  v41 = v13;
  if ( !v13 )
    goto LABEL_23;
  v14 = 0LL;
  v32 = MiLockWorkingSetShared(v7);
  if ( v12 <= v11 )
  {
    v16 = 0xFFFFF68000000000uLL;
    do
    {
      if ( (((unsigned __int8)(v12 >> 12) + 1) & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended(v7, 0LL)
          || v14 && (unsigned int)MiPageTableLockIsContended(v7, v14)
          || KeShouldYieldProcessor() )
        {
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 + 28) )
              MiFreeWsleList(v7, v5, 0LL);
            MiReleaseProcessorFlushList();
            v5 = 0LL;
          }
          if ( v14 )
          {
            MiUnlockPageTableInternal(v7, v14);
            v14 = 0LL;
          }
          LOBYTE(v15) = v32;
          MiUnlockWorkingSetShared(v7, v15);
          MiLockWorkingSetShared(v7);
        }
        v16 = 0xFFFFF68000000000uLL;
      }
      if ( v12 > v8 || !v36 )
      {
        if ( v36 )
          NextVad = MiGetNextVad(v36);
        else
          NextVad = MiLocateAddress(v12);
        v24 = NextVad;
        v36 = NextVad;
        v9 &= ~4u;
        v34 = v9;
        if ( (*(_DWORD *)(NextVad + 48) & 0x70) == 0x40 )
        {
          v9 |= 4u;
          v34 = v9;
        }
        else if ( !(unsigned int)MiVadPagesTradable(NextVad) )
        {
          break;
        }
        v40 = (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12;
      }
      v17 = (_QWORD *)(v16 + ((v12 >> 9) & 0x7FFFFFFFF8LL));
      v38 = ((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v14 != v38 )
      {
        if ( v14 )
        {
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 + 28) )
              MiFreeWsleList(v7, v5, 0LL);
            MiReleaseProcessorFlushList();
            v5 = 0LL;
          }
          MiUnlockPageTableInternal(v7, v14);
        }
        valid = MiLockLowestValidPageTableEx(v7, v17, &v39, 0LL);
        v14 = valid;
        if ( valid != v38 )
        {
          MiUnlockPageTableInternal(v7, valid);
          v14 = 0LL;
          v16 = 0xFFFFF68000000000uLL;
          v12 = (__int64)(((v12 & 0xFFFFFFE00000LL) << 7) - 0x980000000000000LL + 0x10000000) >> 16 << 25 >> 16;
          v33 = -1073741782;
          goto LABEL_14;
        }
      }
      if ( (*v17 & 1) != 0 )
      {
        v18 = 48 * ((*v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v38 = v18;
        v19 = *(_QWORD *)(v18 + 8) | 0x8000000000000000uLL;
        v39 = v19;
        if ( (v9 & 4) != 0 )
        {
          if ( (unsigned int)MiRotatedToFrameBuffer((unsigned __int64)v17) )
            goto LABEL_13;
          v18 = v38;
          v19 = v39;
        }
        if ( (*(_QWORD *)(v18 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v18 + 8) > 0 )
          MiDemoteCombinedPte(v7, v17, v19);
        if ( (MiGetWsleContents(v18, v12) & 0xF) == 8 )
          goto LABEL_13;
        if ( (v9 & 8) != 0 )
          MI_WSLE_LOG_ACCESS(v7, v17);
        if ( !v5 )
        {
          ProcessorFlushList = MiGetProcessorFlushList(v20, v15, v21);
          v5 = ProcessorFlushList + 4136;
          MiInitializeTbFlushList(ProcessorFlushList + 4136, (_DWORD)v7, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
        }
        MiInsertTbFlushEntry(v5, v12, 1LL, 0);
        if ( *(_DWORD *)(v5 + 28) == *(_DWORD *)(v5 + 12) )
        {
          MiFreeWsleList(v7, v5, 0LL);
          MiReleaseProcessorFlushList();
          v5 = 0LL;
        }
      }
      v33 = -1073741782;
LABEL_13:
      v16 = 0xFFFFF68000000000uLL;
      v12 += 4096LL;
LABEL_14:
      v8 = v40;
    }
    while ( v12 <= v11 );
  }
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 28) )
      MiFreeWsleList(v7, v5, 0LL);
    MiReleaseProcessorFlushList();
  }
  if ( v14 )
  {
    MiUnlockPageTableInternal(v7, v14);
    v14 = 0LL;
  }
  if ( v33 == -1073741782 )
  {
    LOBYTE(v15) = v32;
    MiUnlockWorkingSetShared(v7, v15);
    v13 = v41;
LABEL_23:
    MiUnlockVadRange(Object, v37, v13, 0LL);
    if ( (v9 & 2) != 0 )
      KiUnstackDetachProcess(v45, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741782;
  }
  v26 = v37 & 0xFFFFFFFFFFFFF000uLL;
  v27 = 0LL;
  v28 = 0LL;
  if ( (v37 & 0xFFFFFFFFFFFFF000uLL) <= v11 )
  {
    do
    {
      if ( v26 > v27 || !v28 )
      {
        if ( v28 )
          Address = MiGetNextVad(v28);
        else
          Address = MiLocateAddress(v26);
        v28 = Address;
        if ( !(unsigned int)MiVadPagesTradable(Address) )
          break;
        v27 = (*(unsigned int *)(v28 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 33) << 32)) << 12;
      }
      if ( v14 != ((v26 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        if ( v14 )
          MiUnlockPageTableInternal(v7, v14);
        v14 = MiLockLowestValidPageTableEx(v7, ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v39, 0LL);
      }
      MiUnlockVa(v7, v26);
      v26 += 4096LL;
      if ( (v26 & 0xF000) == 0
        && ((unsigned int)MiWorkingSetIsContended(v7, 0LL)
         || (unsigned int)MiPageTableLockIsContended(v7, v14)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTableInternal(v7, v14);
        v14 = 0LL;
        LOBYTE(v31) = v32;
        MiUnlockWorkingSetShared(v7, v31);
        MiLockWorkingSetShared(v7);
      }
      v11 = v42;
    }
    while ( v26 <= v42 );
    LOBYTE(v9) = v34;
  }
  if ( v14 )
    MiUnlockPageTableInternal(v7, v14);
  LOBYTE(v15) = v32;
  MiUnlockWorkingSetShared(v7, v15);
  MiUnlockVadRange(Object, v37, v41, 0LL);
  if ( (v9 & 2) != 0 )
    KiUnstackDetachProcess(v45, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  v29 = v37;
  *v43 = v11 - (v37 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v44 = (PVOID)(v29 & 0xFFFFFFFFFFFFF000uLL);
  return 0;
}
