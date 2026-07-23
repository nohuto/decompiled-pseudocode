/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x140A120D4
 * Callers:
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14020DEDC (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     SmKmStoreReferenceEx @ 0x1402F5F30 (SmKmStoreReferenceEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(char *a1, size_t Size, _DWORD *a3, char a4)
{
  size_t v5; // r15
  __int64 v7; // rcx
  __int64 ProcessPartition; // rsi
  volatile signed __int64 *v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rax
  char *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned int i; // edi
  __int64 v17; // rax
  int v18; // ebx
  int StoreStats; // ebx
  char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // [rsp+38h] [rbp-690h] BYREF
  __int128 Src; // [rsp+40h] [rbp-688h] BYREF
  __int128 v25; // [rsp+50h] [rbp-678h]
  __int128 v26; // [rsp+60h] [rbp-668h] BYREF
  __int64 v27; // [rsp+70h] [rbp-658h]
  _DWORD *v28; // [rsp+78h] [rbp-650h]
  _BYTE v29[12]; // [rsp+80h] [rbp-648h] BYREF
  unsigned int v30; // [rsp+8Ch] [rbp-63Ch]
  unsigned int v31; // [rsp+A0h] [rbp-628h]
  unsigned int v32; // [rsp+A4h] [rbp-624h]
  char v33; // [rsp+ACh] [rbp-61Ch] BYREF

  v28 = a3;
  v5 = (unsigned int)Size;
  memset_0(v29, 0, 0x600uLL);
  v23 = 0LL;
  Src = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (unsigned int)v5 < 0x28 )
  {
    v18 = -1073741306;
    goto LABEL_27;
  }
  if ( a4 )
  {
    if ( v5 - 1 > 0xFFE )
    {
      ProbeForWrite(a1, (unsigned int)v5, 8u);
    }
    else
    {
      if ( ((unsigned __int8)a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a1;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + v5 - 1) = *(_BYTE *)(v7 + v5 - 1);
    }
  }
  Src = *(_OWORD *)a1;
  v25 = *((_OWORD *)a1 + 1);
  *(_QWORD *)&v26 = *((_QWORD *)a1 + 4);
  if ( (unsigned int)(unsigned __int8)Src - 3 > 1 )
  {
    v18 = -1073741735;
    goto LABEL_27;
  }
  if ( (_DWORD)v5 != 48 && (unsigned __int8)Src == 4 || (unsigned __int8)Src == 3 && (_DWORD)v5 != 40 )
  {
    v18 = -1073741820;
    goto LABEL_27;
  }
  memmove((char *)&v26 + 8, a1 + 40, (unsigned int)(v5 - 40));
  if ( (Src & 0xFFFFFF00) != 0 )
  {
    v18 = -1073741811;
    goto LABEL_27;
  }
  if ( *((_QWORD *)&v26 + 1) )
  {
    v18 = PsReferencePartitionByHandle(*((ULONG_PTR *)&v26 + 1), 1, a4, 0x52516D53u, &v23);
    if ( v18 < 0 )
      goto LABEL_27;
    ProcessPartition = *(_QWORD *)(v23 + 24);
    if ( !ProcessPartition )
      goto LABEL_47;
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v9 = (volatile signed __int64 *)(ProcessPartition + 2152);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (char *)KeAbPreAcquire(ProcessPartition + 2152, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(ProcessPartition + 2152), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(ProcessPartition + 2152), v11, ProcessPartition + 2152);
  if ( v12 )
    v12[10] = 1;
  v13 = *(_QWORD *)(ProcessPartition + 2168);
  if ( !v13 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 2152));
    KeAbPostRelease(ProcessPartition + 2152);
    KeLeaveCriticalRegion();
LABEL_47:
    v18 = -1073741399;
    goto LABEL_27;
  }
  DWORD1(Src) = *(_DWORD *)(v13 + 464);
  *((_QWORD *)&Src + 1) = *(_QWORD *)(v13 + 1160) << 12;
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 2152));
  KeAbPostRelease(ProcessPartition + 2152);
  KeLeaveCriticalRegion();
  v14 = 0LL;
  v15 = 0LL;
  v25 = 0uLL;
  for ( i = 0; i < 0x400; ++i )
  {
    v17 = SmKmStoreReferenceEx(ProcessPartition, i);
    v27 = v17;
    if ( v17 )
    {
      StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v17);
      SmKmStoreDereference(ProcessPartition, *(_DWORD *)(v27 + 6832));
      if ( StoreStats >= 0 )
      {
        v21 = &v33;
        v22 = 8LL;
        do
        {
          v14 += v30 * (unsigned __int64)*(unsigned int *)v21;
          *((_QWORD *)&v25 + 1) = v14;
          v21 += 8;
          --v22;
        }
        while ( v22 );
        v15 += (unsigned __int64)v31 << 12;
        *(_QWORD *)&v25 = v15;
        *(_QWORD *)&v26 = ((unsigned __int64)v32 << 12) + v26;
      }
    }
  }
  v18 = 0;
  memmove(a1, &Src, v5);
  *v28 = v5;
LABEL_27:
  if ( v23 )
    PsDereferencePartition(v23);
  return (unsigned int)v18;
}
