/*
 * XREFs of NtUnlockVirtualMemory @ 0x1402333D0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiUnlockVa @ 0x1402C7B34 (MiUnlockVa.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiVadPagesTradable @ 0x1403FE990 (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1408E8A30 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1409E3730 (MiLockUnlockCommon.c)
 */

__int64 __fastcall NtUnlockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 result; // rax
  char *v6; // rsi
  unsigned __int64 v7; // r12
  int v8; // ebx
  ULONG_PTR v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r11
  _QWORD *v18; // r12
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 ProcessorFlushList; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 NextVad; // rax
  unsigned __int64 valid; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 Address; // rax
  __int64 v32; // rdx
  char v33; // [rsp+40h] [rbp-D8h]
  int v34; // [rsp+44h] [rbp-D4h]
  char v35; // [rsp+48h] [rbp-D0h]
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-B0h]
  ULONG_PTR v40; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-A0h]
  __int64 v42; // [rsp+80h] [rbp-98h]
  unsigned __int64 v43; // [rsp+88h] [rbp-90h]
  _QWORD *v44; // [rsp+90h] [rbp-88h]
  unsigned __int64 *v45; // [rsp+98h] [rbp-80h]
  _BYTE v46[48]; // [rsp+A0h] [rbp-78h] BYREF

  v44 = a3;
  v45 = a2;
  v4 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  Object = 0LL;
  memset(v46, 0, sizeof(v46));
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v38, (__int64)&v37, (__int64)&Object);
  v34 = result;
  if ( (int)result < 0 )
    return result;
  v6 = (char *)Object + 1024;
  v7 = 0LL;
  v41 = 0LL;
  v8 = (unsigned int)MiVmAccessLoggingEnabled((char *)Object + 1024) != 0 ? 8 : 0;
  v35 = v8;
  v10 = (v38 + v37 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v43 = v10;
  v11 = v38 & 0xFFFFFFFFFFFFF000uLL;
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess(v9);
    v8 |= 2u;
    v35 = v8;
  }
  v37 = 0LL;
  v12 = MiLockVadRange(Object, v11, v10, 0LL);
  v42 = v12;
  if ( !v12 )
    goto LABEL_23;
  v13 = 0LL;
  v33 = MiLockWorkingSetShared(v6);
  if ( v11 <= v10 )
  {
    v17 = 0xFFFFF68000000000uLL;
    do
    {
      if ( (((unsigned __int8)(v11 >> 12) + 1) & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended(v6, 0LL)
          || v13 && (unsigned int)MiPageTableLockIsContended(v6, v13)
          || KeShouldYieldProcessor() )
        {
          if ( v4 )
          {
            if ( *(_DWORD *)(v4 + 28) )
              MiFreeWsleList(v6, v4, 0LL);
            ((void (*)(void))MiReleaseProcessorFlushList)();
            v4 = 0LL;
          }
          if ( v13 )
          {
            MiUnlockPageTableInternal(v6, v13);
            v13 = 0LL;
          }
          LOBYTE(v14) = v33;
          MiUnlockWorkingSetShared(v6, v14);
          MiLockWorkingSetShared(v6);
        }
        v17 = 0xFFFFF68000000000uLL;
      }
      v16 = v37;
      if ( v11 > v7 || !v37 )
      {
        if ( v37 )
          NextVad = MiGetNextVad(v37);
        else
          NextVad = MiLocateAddress(v11);
        v16 = NextVad;
        v37 = NextVad;
        v8 &= ~4u;
        v35 = v8;
        if ( (*(_DWORD *)(NextVad + 48) & 0x70) == 0x40 )
        {
          v8 |= 4u;
          v35 = v8;
        }
        else if ( !(unsigned int)MiVadPagesTradable(NextVad) )
        {
          break;
        }
        v41 = (*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12;
      }
      v18 = (_QWORD *)(v17 + ((v11 >> 9) & 0x7FFFFFFFF8LL));
      v15 = (v11 >> 18) & 0x3FFFFFF8;
      v39 = v15 - 0x904C0000000LL;
      if ( v13 != v15 - 0x904C0000000LL )
      {
        if ( v13 )
        {
          if ( v4 )
          {
            if ( *(_DWORD *)(v4 + 28) )
              MiFreeWsleList(v6, v4, 0LL);
            MiReleaseProcessorFlushList(v15, v14, v16);
            v4 = 0LL;
          }
          MiUnlockPageTableInternal(v6, v13);
        }
        valid = MiLockLowestValidPageTableEx((__int64)v6, (ULONG_PTR)v18, &v40, 0);
        v13 = valid;
        if ( valid != v39 )
        {
          MiUnlockPageTableInternal(v6, valid);
          v13 = 0LL;
          v17 = 0xFFFFF68000000000uLL;
          v15 = 0LL;
          v11 = (__int64)(((v11 & 0xFFFFFFE00000LL) << 7) - 0x980000000000000LL + 0x10000000) >> 16 << 25 >> 16;
          v34 = -1073741782;
          goto LABEL_14;
        }
      }
      if ( (*v18 & 1) != 0 )
      {
        v19 = 48 * ((*v18 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v39 = v19;
        v20 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
        v40 = v20;
        if ( (v8 & 4) != 0 )
        {
          if ( (unsigned int)MiRotatedToFrameBuffer(v18) )
            goto LABEL_13;
          v19 = v39;
          v20 = v40;
        }
        if ( (*(_QWORD *)(v19 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v19 + 8) > 0 )
          MiDemoteCombinedPte(v6, v18, v20);
        if ( (MiGetWsleContents(v19, v11) & 0xF) == 8 )
          goto LABEL_13;
        if ( (v8 & 8) != 0 )
          MI_WSLE_LOG_ACCESS(v6, v18);
        if ( !v4 )
        {
          ProcessorFlushList = MiGetProcessorFlushList(v15, v14);
          v4 = ProcessorFlushList + 4136;
          MiInitializeTbFlushList(ProcessorFlushList + 4136, (_DWORD)v6, *(_DWORD *)(ProcessorFlushList + 4148), 2, 1);
        }
        MiInsertTbFlushEntry(v4, v11, 1LL);
        if ( *(_DWORD *)(v4 + 28) == *(_DWORD *)(v4 + 12) )
        {
          MiFreeWsleList(v6, v4, 0LL);
          MiReleaseProcessorFlushList(v23, v22, v24);
          v4 = 0LL;
        }
      }
      v34 = -1073741782;
LABEL_13:
      v17 = 0xFFFFF68000000000uLL;
      v11 += 4096LL;
LABEL_14:
      v7 = v41;
    }
    while ( v11 <= v10 );
  }
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 28) )
      MiFreeWsleList(v6, v4, 0LL);
    MiReleaseProcessorFlushList(v15, v14, v16);
  }
  if ( v13 )
  {
    MiUnlockPageTableInternal(v6, v13);
    v13 = 0LL;
  }
  if ( v34 == -1073741782 )
  {
    LOBYTE(v14) = v33;
    MiUnlockWorkingSetShared(v6, v14);
    v12 = v42;
LABEL_23:
    MiUnlockVadRange(Object, v38, v12, 0LL);
    if ( (v8 & 2) != 0 )
      KiUnstackDetachProcess(v46, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return 3221225514LL;
  }
  v27 = v38 & 0xFFFFFFFFFFFFF000uLL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (v38 & 0xFFFFFFFFFFFFF000uLL) <= v10 )
  {
    do
    {
      if ( v27 > v28 || !v29 )
      {
        if ( v29 )
          Address = MiGetNextVad(v29);
        else
          Address = MiLocateAddress(v27);
        v29 = Address;
        if ( !(unsigned int)MiVadPagesTradable(Address) )
          break;
        v28 = (*(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32)) << 12;
      }
      if ( v13 != ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        if ( v13 )
          MiUnlockPageTableInternal(v6, v13);
        v13 = MiLockLowestValidPageTableEx((__int64)v6, ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v40, 0);
      }
      MiUnlockVa(v6, v27);
      v27 += 4096LL;
      if ( (v27 & 0xF000) == 0
        && ((unsigned int)MiWorkingSetIsContended(v6, 0LL)
         || (unsigned int)MiPageTableLockIsContended(v6, v13)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTableInternal(v6, v13);
        v13 = 0LL;
        LOBYTE(v32) = v33;
        MiUnlockWorkingSetShared(v6, v32);
        MiLockWorkingSetShared(v6);
      }
      v10 = v43;
    }
    while ( v27 <= v43 );
    LOBYTE(v8) = v35;
  }
  if ( v13 )
    MiUnlockPageTableInternal(v6, v13);
  LOBYTE(v14) = v33;
  MiUnlockWorkingSetShared(v6, v14);
  MiUnlockVadRange(Object, v38, v42, 0LL);
  if ( (v8 & 2) != 0 )
    KiUnstackDetachProcess(v46, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  v30 = v38;
  *v44 = v10 - (v38 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  *v45 = v30 & 0xFFFFFFFFFFFFF000uLL;
  return 0LL;
}
