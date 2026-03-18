/*
 * XREFs of MiFinishCreateSection @ 0x14093CE8C
 * Callers:
 *     MmCreateSectionEx @ 0x14093C3AC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14093C698 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14093C8A0 (MiCreateSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140900480 (MiFindEmptyAddressRangeDownTree.c)
 *     MiCreatePerSessionProtos @ 0x1409046C4 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     ObCheckActiveHandles @ 0x140A3AAA4 (ObCheckActiveHandles.c)
 *     MiDereferenceFailedControlArea @ 0x140A7EC78 (MiDereferenceFailedControlArea.c)
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
  __int64 *v26; // rax
  signed __int8 v27; // cf
  __int64 *v28; // r14
  _QWORD *v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp+10h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v3 = 0;
  v36 = 0LL;
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
    PerSessionProtos = MiCreatePerSessionProtos(v1, a1[42]);
    if ( PerSessionProtos >= 0 )
    {
      a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
LABEL_36:
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
        goto LABEL_36;
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
          v34,
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
      MiDereferencePerSessionProtos(v1, ((unsigned int)a1[35] >> 12) & 0x7FFFF);
    }
    if ( v10 )
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
    PerSessionProtos = v14;
    goto LABEL_36;
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
    goto LABEL_19;
  v17 = *((_DWORD *)v15 + 14) | 0x10000;
  *((_DWORD *)v15 + 14) = v17;
  if ( (a1[4] & 0x400000) != 0 )
  {
    v17 |= 0x4000u;
    *((_DWORD *)v15 + 14) = v17;
  }
  if ( (a1[4] & 0x200000) == 0 )
    goto LABEL_19;
  *((_DWORD *)v15 + 14) = v17 | 0x40;
  v18 = *((_QWORD *)v15 + 6);
  if ( v18 > qword_140E2D1F0 )
  {
    EmptyAddressRangeDownTree = -1073741801;
LABEL_25:
    ObfDereferenceObjectWithTag(v15, 0x43536D4Du);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v26 = KeAbPreAcquire((__int64)&qword_140E2C9D0, 0LL);
  v27 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2C9D0, 0LL);
  v28 = v26;
  if ( v27 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2C9D0, v26, (__int64)&qword_140E2C9D0);
  if ( v28 )
    *((_BYTE *)v28 + 10) = 1;
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                &qword_140E2C9C8,
                                v18,
                                0x10000uLL,
                                0LL,
                                0x10000uLL,
                                qword_140E2D1F0,
                                &v36);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2C9D0);
    KeAbPostRelease((ULONG_PTR)&qword_140E2C9D0);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v15 = Object;
    goto LABEL_25;
  }
  v29 = Object;
  v30 = v36 >> 12;
  *((_QWORD *)Object + 3) = v36 >> 12;
  v29[4] = v30 + ((v18 + 4095) >> 12) - 1;
  v31 = qword_140E2C9C8;
  v32 = v29[3];
  if ( !qword_140E2C9C8 )
    goto LABEL_63;
  while ( v32 <= (*(unsigned int *)(v31 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v31 + 33) << 32))
       && v32 < (*(unsigned int *)(v31 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v31 + 32) << 32)) )
  {
    v33 = *(_QWORD *)v31;
    if ( !*(_QWORD *)v31 )
      goto LABEL_63;
LABEL_71:
    v31 = v33;
  }
  v33 = *(_QWORD *)(v31 + 8);
  if ( v33 )
    goto LABEL_71;
  v3 = 1;
LABEL_63:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2C9C8, v31, v3, v29);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2C9D0);
  KeAbPostRelease((ULONG_PTR)&qword_140E2C9D0);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v15 = Object;
LABEL_19:
  *((_QWORD *)a1 + 18) = v15;
  return (unsigned int)v14;
}
