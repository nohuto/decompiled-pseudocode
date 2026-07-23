/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140837F48
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140A0F8B4 (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140837AF0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x14083A308 (EtwpCopySchematizedFilters.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E8008 (EtwpUpdateGuidFilterData.c)
 *     EtwpGetSchematizedFilterSize @ 0x1409E9380 (EtwpGetSchematizedFilterSize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, ULONG_PTR a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  char *v9; // rax
  char *v10; // r14
  char v11; // si
  unsigned int i; // r14d
  signed __int64 v13; // rax
  signed __int64 v14; // rdx
  __int64 v15; // rtt
  __int64 v17; // rax
  ULONG_PTR v18; // rdx
  int v19; // r11d
  unsigned __int8 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // r8
  _QWORD *v25; // r12
  unsigned __int8 v26; // al
  unsigned __int16 v27; // r13
  __int64 v28; // r14
  struct _KTHREAD *v29; // rax
  unsigned __int64 *v30; // r15
  char *v31; // rax
  char *v32; // r13
  unsigned __int16 *v33; // rdx
  unsigned __int16 v34; // cx
  int SchematizedFilterSize; // eax
  int v36; // r13d
  unsigned int v37; // r15d
  signed __int64 *v38; // r14
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  signed __int64 v41; // rtt
  __int64 Pool2; // rax
  char v43; // [rsp+28h] [rbp-E0h]
  int v45; // [rsp+2Ch] [rbp-DCh]
  unsigned __int16 v46; // [rsp+30h] [rbp-D8h]
  __int64 v47; // [rsp+38h] [rbp-D0h]
  int v48; // [rsp+40h] [rbp-C8h]
  __int128 v50; // [rsp+48h] [rbp-C0h]
  __int128 v51; // [rsp+58h] [rbp-B0h]
  _BYTE v52[112]; // [rsp+78h] [rbp-90h] BYREF
  __int128 Source2; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v54; // [rsp+F8h] [rbp-10h]

  Source2 = 0LL;
  v54 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a2 + 664);
  v43 = 0;
  v45 = 0;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  v9 = (char *)KeAbPreAcquire(a2 + 664, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  v11 = 1;
  if ( v10 )
    v10[10] = 1;
  *(_QWORD *)(a2 + 672) = KeGetCurrentThread();
  v48 = *(unsigned __int16 *)(a2 + 88);
  if ( v48 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x10 )
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
  v50 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0LL;
  v22 = -1LL;
  v23 = 16LL;
  do
  {
    if ( *(_DWORD *)(v18 - 4) )
    {
      v26 = v20;
      LODWORD(v50) = 1;
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
  *((_QWORD *)&v51 + 1) = v22;
  BYTE4(v50) = v20;
  DWORD2(v50) = v19;
  *(_QWORD *)&v51 = v21;
  *(_OWORD *)(a2 + 96) = v50;
  *(_OWORD *)(a2 + 112) = v51;
  memset_0(v52, 0, 0x68uLL);
  LOBYTE(v24) = 1;
  EtwpUpdateGuidFilterData(a2, i, v24, v52);
  v25 = *(_QWORD **)(a2 + 56);
  if ( v25 == (_QWORD *)(a2 + 56) )
  {
    v8 = 0;
    goto LABEL_12;
  }
  v27 = ~(unsigned __int16)(1 << i);
  v46 = v27;
  do
  {
    if ( a3 )
    {
      v28 = (__int64)(v25 - 2);
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v30 = (unsigned __int64 *)(v25[2] + 664LL);
      v31 = (char *)KeAbPreAcquire((__int64)v30, 0LL);
      v32 = v31;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
        ExfAcquirePushLockExclusiveEx(v30, v31, (__int64)v30);
      if ( v32 )
        v32[10] = 1;
      v33 = (unsigned __int16 *)v25 + 43;
      v27 = v46;
      v43 = 1;
      *(_QWORD *)(v25[2] + 672LL) = KeGetCurrentThread();
    }
    else
    {
      v28 = (__int64)v25;
      v33 = (unsigned __int16 *)v25 + 50;
    }
    v34 = *v33;
    v25 = (_QWORD *)*v25;
    *v33 &= v27;
    if ( (*(_BYTE *)(v28 + 98) & 8) != 0 && v48 != a1 || (v34 & v27) == v34 )
    {
      v8 = v45;
    }
    else
    {
      EtwpComputeRegEntryEnableInfo(v28, (__int64)&Source2);
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(unsigned __int16 *)(v28 + 100));
      v36 = SchematizedFilterSize;
      v37 = 120;
      if ( SchematizedFilterSize )
        v37 = SchematizedFilterSize + 136;
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 4) == v37 && RtlCompareMemory((const void *)(v7 + 72), &Source2, 0x20uLL) == 32 )
          goto LABEL_43;
        EtwpUnreferenceDataBlock((volatile signed __int32 *)v7);
      }
      v7 = 0LL;
      Pool2 = ExAllocatePool2(0x100uLL, v37, 0x44777445u);
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 8) = 1;
        v7 = Pool2;
        *(_DWORD *)Pool2 = 3;
        *(_DWORD *)(Pool2 + 4) = v37;
        *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(*(_QWORD *)(v28 + 32) + 40LL);
        *(_OWORD *)(Pool2 + 72) = Source2;
        *(_OWORD *)(Pool2 + 88) = v54;
        *(_DWORD *)(Pool2 + 112) = *(_BYTE *)(a2 + 91) & 1;
        LOWORD(v47) = *(_WORD *)(a2 + 88);
        WORD1(v47) = *(unsigned __int8 *)(a2 + 90);
        HIDWORD(v47) = *(_DWORD *)(a2 + 80);
        *(_QWORD *)(Pool2 + 104) = v47;
        if ( v36 )
        {
          *(_DWORD *)(Pool2 + 132) = 0x80000000;
          *(_DWORD *)(Pool2 + 128) = v36;
          *(_QWORD *)(Pool2 + 120) = 136LL;
          EtwpCopySchematizedFilters((void *)(Pool2 + 136));
          *(_DWORD *)(v7 + 116) = 1;
        }
        else
        {
          *(_DWORD *)(Pool2 + 116) = 0;
        }
LABEL_43:
        v27 = v46;
        v8 = EtwpSendDataBlock(v28, v7);
        v45 = v8;
        goto LABEL_44;
      }
      v27 = v46;
      v8 = -1073741801;
      v45 = -1073741801;
    }
LABEL_44:
    if ( v43 )
    {
      *(_QWORD *)(*(_QWORD *)(v28 + 32) + 672LL) = 0LL;
      v38 = (signed __int64 *)(*(_QWORD *)(v28 + 32) + 664LL);
      _m_prefetchw(v38);
      v39 = *v38;
      v40 = *v38 - 16;
      if ( (*v38 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v40 = 0LL;
      if ( (v39 & 2) != 0 || (v41 = *v38, v41 != _InterlockedCompareExchange64(v38, v40, v39)) )
        ExfReleasePushLock(v38);
      KeAbPostRelease((ULONG_PTR)v38);
      KeLeaveCriticalRegion();
      v43 = 0;
    }
  }
  while ( v25 != (_QWORD *)(a2 + 56) );
  if ( v7 )
    EtwpUnreferenceDataBlock((volatile signed __int32 *)v7);
LABEL_12:
  *(_QWORD *)(a2 + 672) = 0LL;
  _m_prefetchw((const void *)(a2 + 664));
  v13 = *(_QWORD *)(a2 + 664);
  v14 = v13 - 16;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (v13 & 2) != 0
    || (v15 = *(_QWORD *)(a2 + 664),
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 664), v14, v13)) )
  {
    ExfReleasePushLock((_QWORD *)(a2 + 664));
  }
  KeAbPostRelease(a2 + 664);
  KeLeaveCriticalRegion();
  if ( v11 )
    EtwpUnreferenceGuidEntry(a2);
  return v8;
}
