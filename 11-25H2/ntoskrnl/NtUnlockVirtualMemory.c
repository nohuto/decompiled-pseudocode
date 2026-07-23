/*
 * XREFs of NtUnlockVirtualMemory @ 0x1403875B0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiVadPagesTradable @ 0x1402CA000 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x1402CC790 (MiUnlockVa.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1409EAC40 (MiLockUnlockCommon.c)
 */

NTSTATUS __cdecl NtUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  ULONG_PTR v5; // r15
  NTSTATUS result; // eax
  char *v7; // rsi
  unsigned __int64 v8; // r12
  int v9; // ebx
  _KPROCESS *v10; // r9
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r11
  _QWORD *v16; // r12
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 NextVad; // rax
  __int64 v22; // r8
  unsigned __int64 valid; // rax
  __int64 *ProcessorFlushList; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r15
  __int64 v28; // rdi
  __int64 Address; // rax
  unsigned __int8 v30; // [rsp+40h] [rbp-D8h]
  NTSTATUS v31; // [rsp+44h] [rbp-D4h]
  char v32; // [rsp+48h] [rbp-D0h]
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-B0h]
  ULONG_PTR v37; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-A0h]
  __int64 v39; // [rsp+80h] [rbp-98h]
  unsigned __int64 v40; // [rsp+88h] [rbp-90h]
  PSIZE_T v41; // [rsp+90h] [rbp-88h]
  PVOID *v42; // [rsp+98h] [rbp-80h]
  _BYTE v43[48]; // [rsp+A0h] [rbp-78h] BYREF

  v41 = RegionSize;
  v42 = BaseAddress;
  v5 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  Object = 0LL;
  memset(v43, 0, sizeof(v43));
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v35, (__int64)&v34, (__int64)&Object);
  v31 = result;
  if ( result < 0 )
    return result;
  v7 = (char *)Object + 1024;
  v8 = 0LL;
  v38 = 0LL;
  v9 = (unsigned int)MiVmAccessLoggingEnabled((__int64)Object + 1024) != 0 ? 8 : 0;
  v32 = v9;
  v11 = (v35 + v34 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v40 = v11;
  v12 = v35 & 0xFFFFFFFFFFFFF000uLL;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess(v10, 0, (__int64)v43);
    v9 |= 2u;
    v32 = v9;
  }
  v34 = 0LL;
  v13 = MiLockVadRange(Object, v12, v11, 0LL);
  v39 = v13;
  if ( !v13 )
    goto LABEL_23;
  v14 = 0LL;
  v30 = MiLockWorkingSetShared((__int64)v7);
  if ( v12 <= v11 )
  {
    v15 = 0xFFFFF68000000000uLL;
    do
    {
      if ( (((unsigned __int8)(v12 >> 12) + 1) & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)v7, 0)
          || v14 && (unsigned int)MiPageTableLockIsContended((__int64)v7, v14)
          || KeShouldYieldProcessor() )
        {
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 + 28) )
              MiFreeWsleList((__int64)v7, v5, 0);
            MiReleaseProcessorFlushList();
            v5 = 0LL;
          }
          if ( v14 )
          {
            MiUnlockPageTable((__int64)v7, v14);
            v14 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)v7, v30);
          MiLockWorkingSetShared((__int64)v7);
        }
        v15 = 0xFFFFF68000000000uLL;
      }
      if ( v12 > v8 || !v34 )
      {
        if ( v34 )
          NextVad = MiGetNextVad(v34);
        else
          NextVad = (__int64)MiLocateAddress(v12);
        v22 = NextVad;
        v34 = NextVad;
        v9 &= ~4u;
        v32 = v9;
        if ( (*(_DWORD *)(NextVad + 48) & 0x70) == 0x40 )
        {
          v9 |= 4u;
          v32 = v9;
        }
        else if ( !MiVadPagesTradable(NextVad) )
        {
          break;
        }
        v38 = (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) << 12;
      }
      v16 = (_QWORD *)(v15 + ((v12 >> 9) & 0x7FFFFFFFF8LL));
      v36 = ((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( v14 != v36 )
      {
        if ( v14 )
        {
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 + 28) )
              MiFreeWsleList((__int64)v7, v5, 0);
            MiReleaseProcessorFlushList();
            v5 = 0LL;
          }
          MiUnlockPageTable((__int64)v7, v14);
        }
        valid = MiLockLowestValidPageTableEx((__int64)v7, (ULONG_PTR)v16, &v37, 0);
        v14 = valid;
        if ( valid != v36 )
        {
          MiUnlockPageTable((__int64)v7, valid);
          v14 = 0LL;
          v15 = 0xFFFFF68000000000uLL;
          v12 = (__int64)(((v12 & 0xFFFFFFE00000LL) << 7) - 0x980000000000000LL + 0x10000000) >> 16 << 25 >> 16;
          v31 = -1073741782;
          goto LABEL_14;
        }
      }
      if ( (*v16 & 1) != 0 )
      {
        v17 = 48 * ((*v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v36 = v17;
        v18 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
        v37 = v18;
        if ( (v9 & 4) != 0 )
        {
          if ( (unsigned int)MiRotatedToFrameBuffer(v16) )
            goto LABEL_13;
          v17 = v36;
          v18 = v37;
        }
        if ( (*(_QWORD *)(v17 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v17 + 8) > 0 )
          MiDemoteCombinedPte((__int64)v7, (ULONG_PTR)v16, v18);
        if ( (MiGetWsleContents(v17, v12) & 0xF) == 8 )
          goto LABEL_13;
        if ( (v9 & 8) != 0 )
          MI_WSLE_LOG_ACCESS(v7, v16, v19, v20);
        if ( !v5 )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          v5 = (ULONG_PTR)(ProcessorFlushList + 517);
          MiInitializeTbFlushList(
            (_DWORD)ProcessorFlushList + 4136,
            (_DWORD)v7,
            *((_DWORD *)ProcessorFlushList + 1037),
            2,
            1);
        }
        MiInsertTbFlushEntry(v5, v12, 1LL, 0);
        if ( *(_DWORD *)(v5 + 28) == *(_DWORD *)(v5 + 12) )
        {
          MiFreeWsleList((__int64)v7, v5, 0);
          MiReleaseProcessorFlushList();
          v5 = 0LL;
        }
      }
      v31 = -1073741782;
LABEL_13:
      v15 = 0xFFFFF68000000000uLL;
      v12 += 4096LL;
LABEL_14:
      v8 = v38;
    }
    while ( v12 <= v11 );
  }
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 28) )
      MiFreeWsleList((__int64)v7, v5, 0);
    MiReleaseProcessorFlushList();
  }
  if ( v14 )
  {
    MiUnlockPageTable((__int64)v7, v14);
    v14 = 0LL;
  }
  if ( v31 == -1073741782 )
  {
    MiUnlockWorkingSetShared((__int64)v7, v30);
    v13 = v39;
LABEL_23:
    MiUnlockVadRange(Object, v35, v13, 0LL);
    if ( (v9 & 2) != 0 )
      KiUnstackDetachProcess((__int64)v43, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741782;
  }
  v25 = v35 & 0xFFFFFFFFFFFFF000uLL;
  v26 = 0LL;
  v27 = 0LL;
  if ( (v35 & 0xFFFFFFFFFFFFF000uLL) <= v11 )
  {
    do
    {
      if ( v25 > v26 || !v27 )
      {
        if ( v27 )
          Address = MiGetNextVad(v27);
        else
          Address = (__int64)MiLocateAddress(v25);
        v27 = Address;
        if ( !MiVadPagesTradable(Address) )
          break;
        v26 = (*(unsigned int *)(v27 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 33) << 32)) << 12;
      }
      if ( v14 != ((v25 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        if ( v14 )
          MiUnlockPageTable((__int64)v7, v14);
        v14 = MiLockLowestValidPageTableEx((__int64)v7, ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v37, 0);
      }
      MiUnlockVa((__int64)v7, v25);
      v25 += 4096LL;
      if ( (v25 & 0xF000) == 0
        && ((unsigned int)MiWorkingSetIsContended((__int64)v7, 0)
         || (unsigned int)MiPageTableLockIsContended((__int64)v7, v14)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTable((__int64)v7, v14);
        v14 = 0LL;
        MiUnlockWorkingSetShared((__int64)v7, v30);
        MiLockWorkingSetShared((__int64)v7);
      }
      v11 = v40;
    }
    while ( v25 <= v40 );
    LOBYTE(v9) = v32;
  }
  if ( v14 )
    MiUnlockPageTable((__int64)v7, v14);
  MiUnlockWorkingSetShared((__int64)v7, v30);
  MiUnlockVadRange(Object, v35, v39, 0LL);
  if ( (v9 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v43, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  v28 = v35;
  *v41 = v11 - (v35 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v42 = (PVOID)(v28 & 0xFFFFFFFFFFFFF000uLL);
  return 0;
}
