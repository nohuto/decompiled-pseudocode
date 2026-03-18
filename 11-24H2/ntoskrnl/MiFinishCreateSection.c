/*
 * XREFs of MiFinishCreateSection @ 0x140941784
 * Callers:
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140940F58 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x140941160 (MiCreateSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x1408E2120 (MiFindEmptyAddressRangeDownTree.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     ObCheckActiveHandles @ 0x140A3ED84 (ObCheckActiveHandles.c)
 *     MiCreatePerSessionProtos @ 0x140A4FE70 (MiCreatePerSessionProtos.c)
 *     MiDereferenceFailedControlArea @ 0x140A822F8 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiFinishCreateSection(int *a1)
{
  __int64 *v1; // r14
  bool v3; // si
  __int64 v4; // r15
  unsigned int v5; // edx
  int v6; // ecx
  bool v7; // zf
  int v8; // r8d
  __int64 v9; // r8
  char v10; // bp
  int v11; // r9d
  int v12; // r10d
  __int64 *v13; // rax
  int v14; // r12d
  PVOID v15; // rcx
  int v17; // edx
  unsigned __int64 v18; // r15
  int EmptyAddressRangeDownTree; // r14d
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int PerSessionProtos; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v26; // rax
  signed __int8 v27; // cf
  _QWORD *v28; // r14
  __int64 v29; // rdx
  _QWORD *v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp+10h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v3 = 0;
  v39 = 0LL;
  Object = 0LL;
  v4 = *v1;
  *((_QWORD *)a1 + 15) = v1;
  v5 = v1[7] & 0xFFF7FFFF;
  v6 = a1[35] & 0x7FFFFFFF;
  a1[34] = v5;
  v7 = (a1[4] & 0x1000000) == 0;
  a1[35] = v6;
  if ( !v7 )
  {
    v20 = *a1;
    v21 = v5;
    if ( (*a1 & 0x200) == 0 )
    {
      v21 = v5 | 0x80000;
      a1[34] = v5 | 0x80000;
    }
    v5 = v21;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v20 & 0x40000) == 0 )
      a1[35] = v6 | 0x80000000;
  }
  v8 = *((_DWORD *)v1 + 14);
  if ( (v8 & 0x8000000) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos(v1, (unsigned int)a1[42]);
    if ( PerSessionProtos >= 0 )
    {
      a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
LABEL_35:
    MiDereferenceFailedControlArea(a1);
    return (unsigned int)PerSessionProtos;
  }
  if ( !*((_QWORD *)a1 + 6) && (a1[7] & 0x44) != 0 && (v8 & 0x20) == 0 )
  {
    if ( v1[8] )
    {
      a1[34] = v5 | 0x10000000;
      _InterlockedAdd((volatile signed __int32 *)v1 + 23, 1u);
      if ( !(unsigned __int8)ObCheckActiveHandles(*((_QWORD *)a1 + 7)) )
      {
        _InterlockedAdd((volatile signed __int32 *)v1 + 23, 0xFFFFFFFF);
        ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
        PerSessionProtos = -1073741788;
        goto LABEL_35;
      }
    }
  }
LABEL_7:
  v9 = *((_QWORD *)a1 + 7);
  v10 = 0;
  if ( v9 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
      v10 = 1;
    else
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
  }
  v11 = 128;
  if ( (v1[7] & 0x20) == 0 && v1[8] )
  {
    v12 = 0;
    v11 = 152 * (*((_DWORD *)v1 + 72) + 1);
  }
  else
  {
    v12 = 8 * *(_DWORD *)(v4 + 8) + 64;
    v13 = v1 + 16;
    do
    {
      v13 = (__int64 *)v13[2];
      v11 += 56;
    }
    while ( v13 );
  }
  v14 = ObCreateObjectEx(
          *((_BYTE *)a1 + 72),
          MmSectionObjectType,
          *((_QWORD *)a1 + 1),
          *((_BYTE *)a1 + 72),
          v37,
          64,
          v12,
          v11,
          &Object,
          0LL);
  if ( v14 < 0 )
  {
    if ( (a1[34] & 0x10000000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)v1 + 23, 0xFFFFFFFF);
    }
    else if ( (v1[7] & 0x8000000) != 0 )
    {
      MiDereferencePerSessionProtos(v1);
    }
    if ( v10 )
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
    PerSessionProtos = v14;
    goto LABEL_35;
  }
  v15 = Object;
  *(_OWORD *)Object = *((_OWORD *)a1 + 5);
  *((_OWORD *)v15 + 1) = *((_OWORD *)a1 + 6);
  *((_OWORD *)v15 + 2) = *((_OWORD *)a1 + 7);
  *((_OWORD *)v15 + 3) = *((_OWORD *)a1 + 8);
  *((_QWORD *)v15 + 3) = 0LL;
  if ( v10 )
  {
    v22 = *((_QWORD *)a1 + 7);
    *((_QWORD *)v15 + 5) = v22;
    if ( (v1[7] & 0x20) != 0 )
      v23 = v22 | 1;
    else
      v23 = v22 | 2;
    *((_QWORD *)v15 + 5) = v23;
  }
  if ( (*a1 & 1) != 0 )
    goto LABEL_17;
  v17 = *((_DWORD *)v15 + 14) | 0x10000;
  *((_DWORD *)v15 + 14) = v17;
  if ( (a1[4] & 0x400000) != 0 )
  {
    v17 |= 0x4000u;
    *((_DWORD *)v15 + 14) = v17;
  }
  if ( (a1[4] & 0x200000) == 0 )
    goto LABEL_17;
  *((_DWORD *)v15 + 14) = v17 | 0x40;
  v18 = *((_QWORD *)v15 + 6);
  if ( v18 > qword_140E2D430 )
  {
    EmptyAddressRangeDownTree = -1073741801;
LABEL_23:
    ObfDereferenceObjectWithTag(v15, 0x43536D4Du);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v26 = KeAbPreAcquire((__int64)&qword_140E2CC10, 0LL);
  v27 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CC10, 0LL);
  v28 = v26;
  if ( v27 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2CC10, (__int64)v26, (__int64)&qword_140E2CC10);
  if ( v28 )
    *((_BYTE *)v28 + 10) = 1;
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                &qword_140E2CC08,
                                v18,
                                0x10000uLL,
                                0LL,
                                0x10000uLL,
                                qword_140E2D430,
                                &v39);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
    KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v29);
    v15 = Object;
    goto LABEL_23;
  }
  v30 = Object;
  v31 = v39 >> 12;
  *((_QWORD *)Object + 3) = v39 >> 12;
  v30[4] = v31 + ((v18 + 4095) >> 12) - 1;
  v32 = qword_140E2CC08;
  v33 = v30[3];
  if ( !qword_140E2CC08 )
    goto LABEL_62;
  while ( v33 <= (*(unsigned int *)(v32 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 33) << 32))
       && v33 < (*(unsigned int *)(v32 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 32) << 32)) )
  {
    v34 = *(_QWORD *)v32;
    if ( !*(_QWORD *)v32 )
      goto LABEL_62;
LABEL_70:
    v32 = v34;
  }
  v34 = *(_QWORD *)(v32 + 8);
  if ( v34 )
    goto LABEL_70;
  v3 = 1;
LABEL_62:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2CC08, v32, v3, v30);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CC10);
  KeAbPostRelease((ULONG_PTR)&qword_140E2CC10);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v36, v35);
  v15 = Object;
LABEL_17:
  *((_QWORD *)a1 + 18) = v15;
  return (unsigned int)v14;
}
