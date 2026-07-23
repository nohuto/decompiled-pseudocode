/*
 * XREFs of MiFinishCreateSection @ 0x14098B9F0
 * Callers:
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14098B1B8 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140918CD0 (MiFindEmptyAddressRangeDownTree.c)
 *     MiDereferenceFailedControlArea @ 0x140989CB0 (MiDereferenceFailedControlArea.c)
 *     ObCheckActiveHandles @ 0x140989DE4 (ObCheckActiveHandles.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiFinishCreateSection(__int64 a1)
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
  char *v26; // rax
  signed __int8 v27; // cf
  char *v28; // r14
  _QWORD *v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp+10h] BYREF

  v1 = *(__int64 **)(a1 + 64);
  v3 = 0;
  v36 = 0LL;
  Object = 0LL;
  v4 = *v1;
  *(_QWORD *)(a1 + 120) = v1;
  v5 = v1[7] & 0xFFF7FFFF;
  v6 = *(_DWORD *)(a1 + 140) & 0x7FFFFFFF;
  *(_DWORD *)(a1 + 136) = v5;
  v7 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  *(_DWORD *)(a1 + 140) = v6;
  if ( !v7 )
  {
    v20 = *(_DWORD *)a1;
    v21 = v5;
    if ( (*(_DWORD *)a1 & 0x200) == 0 )
    {
      v21 = v5 | 0x80000;
      *(_DWORD *)(a1 + 136) = v5 | 0x80000;
    }
    v5 = v21;
    if ( *(_BYTE *)(a1 + 24) <= 1u && (v20 & 0x40000) == 0 )
      *(_DWORD *)(a1 + 140) = v6 | 0x80000000;
  }
  v8 = *((_DWORD *)v1 + 14);
  if ( (v8 & 0x8000000) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos(v1, *(unsigned int *)(a1 + 168));
    if ( PerSessionProtos >= 0 )
    {
      *(_DWORD *)(a1 + 140) ^= (*(_DWORD *)(a1 + 140) ^ (*(_DWORD *)(a1 + 168) << 12)) & 0x7FFFF000;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x43536D4Du);
LABEL_35:
    MiDereferenceFailedControlArea((int *)a1);
    return (unsigned int)PerSessionProtos;
  }
  if ( !*(_QWORD *)(a1 + 48) && (*(_DWORD *)(a1 + 28) & 0x44) != 0 && (v8 & 0x20) == 0 )
  {
    if ( v1[8] )
    {
      *(_DWORD *)(a1 + 136) = v5 | 0x10000000;
      _InterlockedAdd((volatile signed __int32 *)v1 + 23, 1u);
      if ( !ObCheckActiveHandles(*(_QWORD *)(a1 + 56)) )
      {
        _InterlockedAdd((volatile signed __int32 *)v1 + 23, 0xFFFFFFFF);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x43536D4Du);
        PerSessionProtos = -1073741788;
        goto LABEL_35;
      }
    }
  }
LABEL_7:
  v9 = *(_QWORD *)(a1 + 56);
  v10 = 0;
  if ( v9 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
      v10 = 1;
    else
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x43536D4Du);
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
          *(_BYTE *)(a1 + 72),
          MmSectionObjectType,
          *(_QWORD *)(a1 + 8),
          *(_BYTE *)(a1 + 72),
          v34,
          64,
          v12,
          v11,
          &Object,
          0LL);
  if ( v14 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 136) & 0x10000000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)v1 + 23, 0xFFFFFFFF);
    }
    else if ( (v1[7] & 0x8000000) != 0 )
    {
      MiDereferencePerSessionProtos(v1);
    }
    if ( v10 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x43536D4Du);
    PerSessionProtos = v14;
    goto LABEL_35;
  }
  v15 = Object;
  *(_OWORD *)Object = *(_OWORD *)(a1 + 80);
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a1 + 96);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(a1 + 112);
  *((_OWORD *)v15 + 3) = *(_OWORD *)(a1 + 128);
  *((_QWORD *)v15 + 3) = 0LL;
  if ( v10 )
  {
    v22 = *(_QWORD *)(a1 + 56);
    *((_QWORD *)v15 + 5) = v22;
    if ( (v1[7] & 0x20) != 0 )
      v23 = v22 | 1;
    else
      v23 = v22 | 2;
    *((_QWORD *)v15 + 5) = v23;
  }
  if ( (*(_DWORD *)a1 & 1) != 0 )
    goto LABEL_17;
  v17 = *((_DWORD *)v15 + 14) | 0x10000;
  *((_DWORD *)v15 + 14) = v17;
  if ( (*(_DWORD *)(a1 + 16) & 0x400000) != 0 )
  {
    v17 |= 0x4000u;
    *((_DWORD *)v15 + 14) = v17;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200000) == 0 )
    goto LABEL_17;
  *((_DWORD *)v15 + 14) = v17 | 0x40;
  v18 = *((_QWORD *)v15 + 6);
  if ( v18 > qword_140E2D570 )
  {
    EmptyAddressRangeDownTree = -1073741801;
LABEL_23:
    ObfDereferenceObjectWithTag(v15, 0x43536D4Du);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v26 = (char *)KeAbPreAcquire((__int64)&qword_140E2CD50, 0LL);
  v27 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2CD50, 0LL);
  v28 = v26;
  if ( v27 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2CD50, v26, (__int64)&qword_140E2CD50);
  if ( v28 )
    v28[10] = 1;
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                &qword_140E2CD48,
                                v18,
                                0x10000uLL,
                                0LL,
                                0x10000uLL,
                                qword_140E2D570,
                                &v36);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
    KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v15 = Object;
    goto LABEL_23;
  }
  v29 = Object;
  v30 = v36 >> 12;
  *((_QWORD *)Object + 3) = v36 >> 12;
  v29[4] = v30 + ((v18 + 4095) >> 12) - 1;
  v31 = qword_140E2CD48;
  v32 = v29[3];
  if ( !qword_140E2CD48 )
    goto LABEL_62;
  while ( v32 <= (*(unsigned int *)(v31 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v31 + 33) << 32))
       && v32 < (*(unsigned int *)(v31 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v31 + 32) << 32)) )
  {
    v33 = *(_QWORD *)v31;
    if ( !*(_QWORD *)v31 )
      goto LABEL_62;
LABEL_70:
    v31 = v33;
  }
  v33 = *(_QWORD *)(v31 + 8);
  if ( v33 )
    goto LABEL_70;
  v3 = 1;
LABEL_62:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2CD48, v31, v3, v29);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2CD50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2CD50);
  KeAbPostRelease((ULONG_PTR)&qword_140E2CD50);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v15 = Object;
LABEL_17:
  *(_QWORD *)(a1 + 144) = v15;
  return (unsigned int)v14;
}
