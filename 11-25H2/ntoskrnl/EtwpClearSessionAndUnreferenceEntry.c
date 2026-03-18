/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1409E471C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1409E45FC (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpUnreferenceDataBlock @ 0x140896A38 (EtwpUnreferenceDataBlock.c)
 *     EtwpGetSchematizedFilterSize @ 0x140898F94 (EtwpGetSchematizedFilterSize.c)
 *     EtwpSendDataBlock @ 0x14089AEF8 (EtwpSendDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14089B4A0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x14089E8F4 (EtwpCopySchematizedFilters.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E5684 (EtwpUpdateGuidFilterData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 *v9; // rax
  __int64 *v10; // r14
  char v11; // si
  unsigned int i; // r14d
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  __int64 v15; // rtt
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r11d
  unsigned __int8 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // r8
  _QWORD *v25; // r12
  unsigned __int8 v26; // al
  char v27; // r13
  __int64 v28; // r14
  struct _KTHREAD *v29; // rax
  unsigned __int64 *v30; // r15
  __int64 *v31; // rax
  __int64 *v32; // r13
  char *v33; // rdx
  char v34; // cl
  char v35; // al
  int SchematizedFilterSize; // eax
  int v37; // r13d
  int v38; // r15d
  signed __int64 *v39; // r14
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  signed __int64 v42; // rtt
  __int64 Pool2; // rax
  char v44; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+2Ch] [rbp-DCh]
  char v47; // [rsp+30h] [rbp-D8h]
  __int64 v48; // [rsp+38h] [rbp-D0h]
  int v49; // [rsp+40h] [rbp-C8h]
  __int128 v51; // [rsp+48h] [rbp-C0h]
  __int128 v52; // [rsp+58h] [rbp-B0h]
  _BYTE v53[112]; // [rsp+78h] [rbp-90h] BYREF
  __int128 Source2; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v55; // [rsp+F8h] [rbp-10h]

  Source2 = 0LL;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a2 + 408);
  v44 = 0;
  v46 = 0;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  v9 = KeAbPreAcquire(a2 + 408, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  v11 = 1;
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v49 = *(unsigned __int16 *)(a2 + 88);
  if ( v49 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 8 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    if ( *(unsigned __int16 *)(32LL * i + a2 + 134) == a1 )
    {
      v17 = 32 * (i + 4LL);
      if ( *(_DWORD *)(v17 + a2) )
        break;
    }
  }
  *(_DWORD *)(v17 + a2) = 0;
  v18 = a2 + 132;
  v51 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0LL;
  v22 = -1LL;
  v23 = 8LL;
  do
  {
    if ( *(_DWORD *)(v18 - 4) )
    {
      v26 = v20;
      LODWORD(v51) = 1;
      if ( v20 <= *(_BYTE *)v18 )
        v26 = *(_BYTE *)v18;
      v21 |= *(_QWORD *)(v18 + 12);
      v22 &= *(_QWORD *)(v18 + 20);
      v20 = v26;
      v19 |= *(_DWORD *)(v18 + 4);
    }
    v18 += 32LL;
    --v23;
  }
  while ( v23 );
  *((_QWORD *)&v52 + 1) = v22;
  BYTE4(v51) = v20;
  DWORD2(v51) = v19;
  *(_QWORD *)&v52 = v21;
  *(_OWORD *)(a2 + 96) = v51;
  *(_OWORD *)(a2 + 112) = v52;
  memset_0(v53, 0, 0x68uLL);
  LOBYTE(v24) = 1;
  EtwpUpdateGuidFilterData(a2, i, v24, v53);
  v25 = *(_QWORD **)(a2 + 56);
  if ( v25 == (_QWORD *)(a2 + 56) )
  {
    v8 = 0;
    goto LABEL_12;
  }
  v27 = ~(unsigned __int8)(1 << i);
  v47 = v27;
  do
  {
    if ( a3 )
    {
      v28 = (__int64)(v25 - 2);
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v30 = (unsigned __int64 *)(v25[2] + 408LL);
      v31 = KeAbPreAcquire((__int64)v30, 0LL);
      v32 = v31;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
        ExfAcquirePushLockExclusiveEx(v30, v31, (__int64)v30);
      if ( v32 )
        *((_BYTE *)v32 + 10) = 1;
      v33 = (char *)v25 + 85;
      v27 = v47;
      v44 = 1;
      *(_QWORD *)(v25[2] + 416LL) = KeGetCurrentThread();
    }
    else
    {
      v28 = (__int64)v25;
      v33 = (char *)v25 + 100;
    }
    v34 = *v33;
    v25 = (_QWORD *)*v25;
    v35 = *v33 & v27;
    *v33 = v35;
    if ( (*(_BYTE *)(v28 + 98) & 8) != 0 && v49 != a1 || v35 == v34 )
    {
      v8 = v46;
    }
    else
    {
      EtwpComputeRegEntryEnableInfo(v28, (__int64)&Source2);
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v28 + 100));
      v37 = SchematizedFilterSize;
      v38 = 120;
      if ( SchematizedFilterSize )
        v38 = SchematizedFilterSize + 136;
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 4) == v38 && RtlCompareMemory((const void *)(v7 + 72), &Source2, 0x20uLL) == 32 )
          goto LABEL_43;
        EtwpUnreferenceDataBlock((volatile signed __int32 *)v7);
      }
      v7 = 0LL;
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 8) = 1;
        v7 = Pool2;
        *(_DWORD *)Pool2 = 3;
        *(_DWORD *)(Pool2 + 4) = v38;
        *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(*(_QWORD *)(v28 + 32) + 40LL);
        *(_OWORD *)(Pool2 + 72) = Source2;
        *(_OWORD *)(Pool2 + 88) = v55;
        *(_DWORD *)(Pool2 + 112) = *(_BYTE *)(a2 + 91) & 1;
        LOWORD(v48) = *(_WORD *)(a2 + 88);
        WORD1(v48) = *(unsigned __int8 *)(a2 + 90);
        HIDWORD(v48) = *(_DWORD *)(a2 + 80);
        *(_QWORD *)(Pool2 + 104) = v48;
        if ( v37 )
        {
          *(_DWORD *)(Pool2 + 132) = 0x80000000;
          *(_DWORD *)(Pool2 + 128) = v37;
          *(_QWORD *)(Pool2 + 120) = 136LL;
          EtwpCopySchematizedFilters((char *)(Pool2 + 136), a2, *(_BYTE *)(v28 + 100));
          *(_DWORD *)(v7 + 116) = 1;
        }
        else
        {
          *(_DWORD *)(Pool2 + 116) = 0;
        }
LABEL_43:
        v27 = v47;
        v8 = EtwpSendDataBlock(v28, (_DWORD *)v7);
        v46 = v8;
        goto LABEL_44;
      }
      v27 = v47;
      v8 = -1073741801;
      v46 = -1073741801;
    }
LABEL_44:
    if ( v44 )
    {
      *(_QWORD *)(*(_QWORD *)(v28 + 32) + 416LL) = 0LL;
      v39 = (signed __int64 *)(*(_QWORD *)(v28 + 32) + 408LL);
      _m_prefetchw(v39);
      v40 = *v39;
      v41 = *v39 - 16;
      if ( (*v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v41 = 0LL;
      if ( (v40 & 2) != 0 || (v42 = *v39, v42 != _InterlockedCompareExchange64(v39, v41, v40)) )
        ExfReleasePushLock(v39);
      KeAbPostRelease((ULONG_PTR)v39);
      KeLeaveCriticalRegion();
      v44 = 0;
    }
  }
  while ( v25 != (_QWORD *)(a2 + 56) );
  if ( v7 )
    EtwpUnreferenceDataBlock((volatile signed __int32 *)v7);
LABEL_12:
  *(_QWORD *)(a2 + 416) = 0LL;
  _m_prefetchw((const void *)(a2 + 408));
  v13 = *(_QWORD *)(a2 + 408);
  v14 = v13 - 16;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (v13 & 2) != 0
    || (v15 = *(_QWORD *)(a2 + 408),
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 408), v14, v13)) )
  {
    ExfReleasePushLock((_QWORD *)(a2 + 408));
  }
  KeAbPostRelease(a2 + 408);
  KeLeaveCriticalRegion();
  if ( v11 )
    EtwpUnreferenceGuidEntry((volatile signed __int64 *)a2);
  return v8;
}
