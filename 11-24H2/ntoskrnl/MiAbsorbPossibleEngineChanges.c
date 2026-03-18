/*
 * XREFs of MiAbsorbPossibleEngineChanges @ 0x14068F0A4
 * Callers:
 *     MiInitializeZeroEngines @ 0x1407FF3F0 (MiInitializeZeroEngines.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExAllocatePoolMm @ 0x1402ACBC0 (ExAllocatePoolMm.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiInitializeDpcGroupAffinity @ 0x140415D28 (MiInitializeDpcGroupAffinity.c)
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x14068F5A4 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiDrainEngineDescriptors @ 0x14068F710 (MiDrainEngineDescriptors.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140690914 (MiAllocateAcceleratorDescriptor.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiInitializeZeroingDomains @ 0x1407FF580 (MiInitializeZeroingDomains.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiAbsorbPossibleEngineChanges(int *a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdx
  void **v8; // r14
  KIRQL v9; // r8
  unsigned int v10; // r15d
  int v11; // r13d
  ULONG_PTR v12; // r9
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 PoolMm; // rax
  KIRQL v17; // al
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // r8
  void *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 *v24; // r8
  __int64 v25; // rbp
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rcx
  void *v30; // rcx
  int *v31; // r14
  KIRQL v32; // al
  int *v33; // rdx
  int **v34; // r8
  int **v35; // rcx
  void *v36; // r14
  volatile LONG *v37; // rcx
  KIRQL v38; // al
  __int64 v39; // r8
  unsigned __int8 v40; // bp
  unsigned int i; // r9d
  __int64 v42; // r11
  __int64 v43; // rdx
  __int64 **v44; // rcx
  __int64 *v45; // rax
  __int64 *v46; // r8
  __int64 v47; // r8
  __int64 **v48; // r10
  __int64 v49; // rcx
  __int64 v50; // [rsp+20h] [rbp-58h]
  __int64 v51; // [rsp+28h] [rbp-50h]
  int *v52; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v53; // [rsp+88h] [rbp+10h]
  int v54; // [rsp+90h] [rbp+18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+98h] [rbp+20h]

  memset_0(a2, 0, 0x50uLL);
  InitializeSListHead((PSLIST_HEADER)a2 + 3);
  v4 = *((_QWORD *)a1 + 22);
  v5 = *a1;
  v6 = *(unsigned int *)(v4 + 56);
  *((_DWORD *)a2 + 4) = v6;
  v51 = *(_QWORD *)(v4 + 48);
  v7 = *(_QWORD *)(384 * v6 + qword_140E2DAF8 + 376);
  if ( (*(_DWORD *)(v7 + 36) & 1) != 0 && (_DWORD)v5 )
  {
    *((_BYTE *)a1 + 36) = 1;
    v8 = &Src;
    a2[2] = 1;
  }
  else
  {
    v8 = *(void ***)(384 * v6 + qword_140E2DAF8 + 376);
  }
  SpinLock = (PEX_SPIN_LOCK)(v7 + 64);
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 64));
  *((_DWORD *)a2 + 1) = *((unsigned __int16 *)v8 + 8);
  if ( *((unsigned __int16 *)v8 + v5 + 9) >= (unsigned int)KeNumberProcessors_0 )
    v10 = KeNumberProcessors_0;
  else
    v10 = *((unsigned __int16 *)v8 + v5 + 9);
  if ( *((unsigned __int16 *)v8 + v5 + 12) >= (unsigned int)KeNumberProcessors_0 )
    v53 = KeNumberProcessors_0;
  else
    v53 = *((unsigned __int16 *)v8 + v5 + 12);
  MiReleaseSpinLockShared(SpinLock, v9);
  while ( 1 )
  {
    if ( v10 > (unsigned int)KeNumberProcessors_0 )
      v10 = KeNumberProcessors_0;
    if ( v10 == a1[42] && (_DWORD)v5 )
      goto LABEL_37;
    v11 = *((_DWORD *)a2 + 1);
    v12 = (unsigned int)v6;
    *a2 = 1;
    LODWORD(v12) = v6 | 0x80000000;
    v13 = *((_DWORD *)v8 + 2);
    *((_DWORD *)a2 + 3) = v13;
    v14 = (unsigned int)(3 * v11);
    v15 = (unsigned int)(v13 * v11);
    v50 = 16 * v14;
    PoolMm = ExAllocatePoolMm(0x40uLL, 16 * v14 + 16 * ((unsigned int)(2 * v15) + 3 * v15), 1666869581, v12);
    *((_QWORD *)a2 + 3) = PoolMm;
    if ( !PoolMm )
      return;
    v17 = ExAcquireSpinLockShared(SpinLock);
    v18 = *((unsigned __int16 *)v8 + 8);
    LOBYTE(v52) = v17;
    if ( *((_DWORD *)a2 + 1) == v18
      && (*((unsigned __int16 *)v8 + v5 + 9) >= (unsigned int)KeNumberProcessors_0
        ? (v19 = KeNumberProcessors_0)
        : (v19 = *((unsigned __int16 *)v8 + v5 + 9)),
          v10 == v19) )
    {
      v20 = *((unsigned int *)a2 + 1);
      v54 = 0;
      v21 = (void *)(*((_QWORD *)a2 + 3) + 16LL * (unsigned int)(2 * v20));
      *((_QWORD *)a2 + 4) = v21;
      memmove(v21, *v8, 16 * v20);
    }
    else
    {
      *((_DWORD *)a2 + 1) = *((unsigned __int16 *)v8 + 8);
      v10 = *((unsigned __int16 *)v8 + v5 + 9);
      v53 = *((unsigned __int16 *)v8 + v5 + 12);
      v54 = 1;
    }
    MiReleaseSpinLockShared(SpinLock, (unsigned __int8)v52);
    if ( !v54 )
      break;
    ExFreePoolWithTag(*((PVOID *)a2 + 3), 0);
  }
  if ( v53 > (unsigned int)KeNumberProcessors_0 )
    v53 = KeNumberProcessors_0;
  v22 = *((_QWORD *)a2 + 3);
  v23 = *((_DWORD *)a2 + 1);
  v24 = (__int64 *)(v22 + v50);
  v25 = v22 + 16LL * v23;
  v26 = v22 + v50 + 48 * v15;
  *((_DWORD *)a2 + 2) = v10;
  *((_QWORD *)a2 + 5) = v22 + v50;
  if ( (_DWORD)v15 )
  {
    v27 = v24 + 2;
    v28 = (unsigned int)v15;
    do
    {
      v27[1] = v27;
      *v27 = v27;
      *v24 = v26;
      v24 += 6;
      v29 = 16LL * *((unsigned int *)a2 + 1) + v26;
      *(v27 - 1) = v29;
      v27 += 6;
      v26 = 16LL * *((unsigned int *)a2 + 1) + v29;
      --v28;
    }
    while ( v28 );
    v23 = *((_DWORD *)a2 + 1);
  }
  MiInitializeDpcGroupAffinity(*((_OWORD **)a2 + 3), *((_QWORD *)a2 + 4), v23, v5);
  MiInitializeZeroingDomains(a2, (unsigned int)v5);
  if ( !(_DWORD)v5 )
  {
    v52 = 0LL;
    MiDrainEngineDescriptors(a1);
    if ( !(unsigned int)MiAllocateAcceleratorDescriptor(a1, (unsigned int)v6, 0LL, &v52) )
    {
      v30 = (void *)*((_QWORD *)a2 + 3);
LABEL_56:
      ExFreePoolWithTag(v30, 0);
      return;
    }
    v31 = v52;
    if ( !v52 )
    {
      ExFreePoolWithTag(*((PVOID *)a2 + 3), 0);
LABEL_37:
      a2[1] = 1;
      return;
    }
    v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*((_QWORD *)a1 + 26) + 15280LL));
    v33 = a1 + 30;
    do
    {
      v34 = (int **)*((_QWORD *)a1 + 16);
      v35 = (int **)v31;
      v31 = *(int **)v31;
      if ( *v34 != v33 )
LABEL_58:
        __fastfail(3u);
      *v35 = v33;
      v35[1] = (int *)v34;
      *v34 = (int *)v35;
      *((_QWORD *)a1 + 16) = v35;
    }
    while ( v31 );
    MiReleaseSpinLockExclusive((_DWORD *)(*((_QWORD *)a1 + 26) + 15280LL), v32);
  }
  v36 = (void *)*((_QWORD *)a1 + 18);
  v37 = (volatile LONG *)(*((_QWORD *)a1 + 26) + 15280LL);
  a1[42] = v10;
  *((_QWORD *)a1 + 19) = v25;
  a1[28] = *((_DWORD *)a2 + 16);
  v38 = ExAcquireSpinLockExclusive(v37);
  v39 = *((_QWORD *)a1 + 17);
  v40 = v38;
  *((_QWORD *)a1 + 18) = *((_QWORD *)a2 + 3);
  if ( v39 )
  {
    for ( i = 0; i < *((_DWORD *)a2 + 3); ++i )
    {
      v42 = *((_QWORD *)a2 + 5);
      v43 = 48LL * i;
      v44 = (__int64 **)(v39 + v43 + 16);
      if ( *v44 )
      {
        while ( 1 )
        {
          v45 = *v44;
          if ( *v44 == (__int64 *)v44 )
            break;
          if ( (__int64 **)v45[1] != v44 )
            goto LABEL_58;
          v46 = (__int64 *)*v45;
          if ( *(__int64 **)(*v45 + 8) != v45 )
            goto LABEL_58;
          *v44 = v46;
          v46[1] = (__int64)v44;
          v47 = v43 + v42 + 16;
          v48 = *(__int64 ***)(v47 + 8);
          if ( *v48 != (__int64 *)v47 )
            goto LABEL_58;
          *v45 = v47;
          v45[1] = (__int64)v48;
          *v48 = v45;
          *(_QWORD *)(v47 + 8) = v45;
          ++*(_DWORD *)(v43 + v42 + 32);
        }
        v39 = *((_QWORD *)a1 + 17);
      }
    }
  }
  v49 = *((_QWORD *)a1 + 26);
  *((_QWORD *)a1 + 17) = *((_QWORD *)a2 + 5);
  *((_QWORD *)a1 + 20) = *((_QWORD *)a2 + 4);
  a1[5] = *((_DWORD *)a2 + 1);
  a1[43] = v53;
  MiReleaseSpinLockExclusive((_DWORD *)(v49 + 15280), v40);
  if ( !*((_QWORD *)a1 + 37) )
    *((_QWORD *)a1 + 37) = MiAllocateZeroPageDecisionTraceBuffer(v51, (unsigned int)v6);
  a2[1] = 1;
  if ( v36 )
  {
    v30 = v36;
    goto LABEL_56;
  }
}
