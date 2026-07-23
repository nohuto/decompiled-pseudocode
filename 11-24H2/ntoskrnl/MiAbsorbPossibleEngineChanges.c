/*
 * XREFs of MiAbsorbPossibleEngineChanges @ 0x140690174
 * Callers:
 *     MiInitializeZeroEngines @ 0x1407FFB34 (MiInitializeZeroEngines.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiInitializeDpcGroupAffinity @ 0x140271B88 (MiInitializeDpcGroupAffinity.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x140690674 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     MiDrainEngineDescriptors @ 0x1406907E0 (MiDrainEngineDescriptors.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406919E4 (MiAllocateAcceleratorDescriptor.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiInitializeZeroingDomains @ 0x1407FFCC4 (MiInitializeZeroingDomains.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiAbsorbPossibleEngineChanges(int *a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdx
  void **v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  int v12; // r13d
  ULONG_PTR v13; // r9
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 PoolMm; // rax
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // r8
  void *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 *v27; // r8
  __int64 v28; // rbp
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // r10
  __int64 v32; // rcx
  void *v33; // rcx
  int *v34; // r14
  KIRQL v35; // al
  int *v36; // rdx
  int **v37; // r8
  int **v38; // rcx
  void *v39; // r14
  volatile LONG *v40; // rcx
  KIRQL v41; // al
  __int64 v42; // r8
  unsigned __int8 v43; // bp
  unsigned int i; // r9d
  __int64 v45; // r11
  __int64 v46; // rdx
  __int64 **v47; // rcx
  __int64 *v48; // rax
  __int64 *v49; // r8
  __int64 v50; // r8
  __int64 **v51; // r10
  __int64 v52; // rcx
  __int64 v53; // [rsp+20h] [rbp-58h]
  __int64 v54; // [rsp+28h] [rbp-50h]
  int *v55; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v56; // [rsp+88h] [rbp+10h]
  int v57; // [rsp+90h] [rbp+18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+98h] [rbp+20h]

  memset_0(a2, 0, 0x50uLL);
  InitializeSListHead((PSLIST_HEADER)a2 + 3);
  v4 = *((_QWORD *)a1 + 22);
  v5 = *a1;
  v6 = *(unsigned int *)(v4 + 56);
  *((_DWORD *)a2 + 4) = v6;
  v54 = *(_QWORD *)(v4 + 48);
  v7 = *(_QWORD *)(384 * v6 + qword_140E2DC38 + 376);
  if ( (*(_DWORD *)(v7 + 36) & 1) != 0 && (_DWORD)v5 )
  {
    *((_BYTE *)a1 + 36) = 1;
    v8 = &Src;
    a2[2] = 1;
  }
  else
  {
    v8 = *(void ***)(384 * v6 + qword_140E2DC38 + 376);
  }
  SpinLock = (PEX_SPIN_LOCK)(v7 + 64);
  LOBYTE(v9) = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 64));
  *((_DWORD *)a2 + 1) = *((unsigned __int16 *)v8 + 8);
  if ( *((unsigned __int16 *)v8 + v5 + 9) >= (unsigned int)KeNumberProcessors_0 )
    v11 = KeNumberProcessors_0;
  else
    v11 = *((unsigned __int16 *)v8 + v5 + 9);
  if ( *((unsigned __int16 *)v8 + v5 + 12) >= (unsigned int)KeNumberProcessors_0 )
    v56 = KeNumberProcessors_0;
  else
    v56 = *((unsigned __int16 *)v8 + v5 + 12);
  MiReleaseSpinLockShared(SpinLock, v9, v9, v10);
  while ( 1 )
  {
    if ( v11 > (unsigned int)KeNumberProcessors_0 )
      v11 = KeNumberProcessors_0;
    if ( v11 == a1[42] && (_DWORD)v5 )
      goto LABEL_37;
    v12 = *((_DWORD *)a2 + 1);
    v13 = (unsigned int)v6;
    *a2 = 1;
    LODWORD(v13) = v6 | 0x80000000;
    v14 = *((_DWORD *)v8 + 2);
    *((_DWORD *)a2 + 3) = v14;
    v15 = (unsigned int)(3 * v12);
    v16 = (unsigned int)(v14 * v12);
    v53 = 16 * v15;
    PoolMm = ExAllocatePoolMm(0x40uLL, 16 * v15 + 16 * ((unsigned int)(2 * v16) + 3 * v16), 1666869581, v13);
    *((_QWORD *)a2 + 3) = PoolMm;
    if ( !PoolMm )
      return;
    v18 = ExAcquireSpinLockShared(SpinLock);
    v21 = *((unsigned __int16 *)v8 + 8);
    LOBYTE(v55) = v18;
    if ( *((_DWORD *)a2 + 1) == v21
      && (*((unsigned __int16 *)v8 + v5 + 9) >= (unsigned int)KeNumberProcessors_0
        ? (v22 = KeNumberProcessors_0)
        : (v22 = *((unsigned __int16 *)v8 + v5 + 9)),
          v11 == v22) )
    {
      v23 = *((unsigned int *)a2 + 1);
      v57 = 0;
      v24 = (void *)(*((_QWORD *)a2 + 3) + 16LL * (unsigned int)(2 * v23));
      *((_QWORD *)a2 + 4) = v24;
      memmove(v24, *v8, 16 * v23);
    }
    else
    {
      *((_DWORD *)a2 + 1) = *((unsigned __int16 *)v8 + 8);
      v11 = *((unsigned __int16 *)v8 + v5 + 9);
      v56 = *((unsigned __int16 *)v8 + v5 + 12);
      v57 = 1;
    }
    MiReleaseSpinLockShared(SpinLock, (unsigned __int8)v55, v19, v20);
    if ( !v57 )
      break;
    ExFreePoolWithTag(*((PVOID *)a2 + 3), 0);
  }
  if ( v56 > (unsigned int)KeNumberProcessors_0 )
    v56 = KeNumberProcessors_0;
  v25 = *((_QWORD *)a2 + 3);
  v26 = *((_DWORD *)a2 + 1);
  v27 = (__int64 *)(v25 + v53);
  v28 = v25 + 16LL * v26;
  v29 = v25 + v53 + 48 * v16;
  *((_DWORD *)a2 + 2) = v11;
  *((_QWORD *)a2 + 5) = v25 + v53;
  if ( (_DWORD)v16 )
  {
    v30 = v27 + 2;
    v31 = (unsigned int)v16;
    do
    {
      v30[1] = v30;
      *v30 = v30;
      *v27 = v29;
      v27 += 6;
      v32 = 16LL * *((unsigned int *)a2 + 1) + v29;
      *(v30 - 1) = v32;
      v30 += 6;
      v29 = 16LL * *((unsigned int *)a2 + 1) + v32;
      --v31;
    }
    while ( v31 );
    v26 = *((_DWORD *)a2 + 1);
  }
  MiInitializeDpcGroupAffinity(*((_OWORD **)a2 + 3), *((_QWORD *)a2 + 4), v26, v5);
  MiInitializeZeroingDomains(a2, (unsigned int)v5);
  if ( !(_DWORD)v5 )
  {
    v55 = 0LL;
    MiDrainEngineDescriptors(a1);
    if ( !(unsigned int)MiAllocateAcceleratorDescriptor(a1, (unsigned int)v6, 0LL, &v55) )
    {
      v33 = (void *)*((_QWORD *)a2 + 3);
LABEL_56:
      ExFreePoolWithTag(v33, 0);
      return;
    }
    v34 = v55;
    if ( !v55 )
    {
      ExFreePoolWithTag(*((PVOID *)a2 + 3), 0);
LABEL_37:
      a2[1] = 1;
      return;
    }
    v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*((_QWORD *)a1 + 26) + 15280LL));
    v36 = a1 + 30;
    do
    {
      v37 = (int **)*((_QWORD *)a1 + 16);
      v38 = (int **)v34;
      v34 = *(int **)v34;
      if ( *v37 != v36 )
LABEL_58:
        __fastfail(3u);
      *v38 = v36;
      v38[1] = (int *)v37;
      *v37 = (int *)v38;
      *((_QWORD *)a1 + 16) = v38;
    }
    while ( v34 );
    MiReleaseSpinLockExclusive((_DWORD *)(*((_QWORD *)a1 + 26) + 15280LL), v35);
  }
  v39 = (void *)*((_QWORD *)a1 + 18);
  v40 = (volatile LONG *)(*((_QWORD *)a1 + 26) + 15280LL);
  a1[42] = v11;
  *((_QWORD *)a1 + 19) = v28;
  a1[28] = *((_DWORD *)a2 + 16);
  v41 = ExAcquireSpinLockExclusive(v40);
  v42 = *((_QWORD *)a1 + 17);
  v43 = v41;
  *((_QWORD *)a1 + 18) = *((_QWORD *)a2 + 3);
  if ( v42 )
  {
    for ( i = 0; i < *((_DWORD *)a2 + 3); ++i )
    {
      v45 = *((_QWORD *)a2 + 5);
      v46 = 48LL * i;
      v47 = (__int64 **)(v42 + v46 + 16);
      if ( *v47 )
      {
        while ( 1 )
        {
          v48 = *v47;
          if ( *v47 == (__int64 *)v47 )
            break;
          if ( (__int64 **)v48[1] != v47 )
            goto LABEL_58;
          v49 = (__int64 *)*v48;
          if ( *(__int64 **)(*v48 + 8) != v48 )
            goto LABEL_58;
          *v47 = v49;
          v49[1] = (__int64)v47;
          v50 = v46 + v45 + 16;
          v51 = *(__int64 ***)(v50 + 8);
          if ( *v51 != (__int64 *)v50 )
            goto LABEL_58;
          *v48 = v50;
          v48[1] = (__int64)v51;
          *v51 = v48;
          *(_QWORD *)(v50 + 8) = v48;
          ++*(_DWORD *)(v46 + v45 + 32);
        }
        v42 = *((_QWORD *)a1 + 17);
      }
    }
  }
  v52 = *((_QWORD *)a1 + 26);
  *((_QWORD *)a1 + 17) = *((_QWORD *)a2 + 5);
  *((_QWORD *)a1 + 20) = *((_QWORD *)a2 + 4);
  a1[5] = *((_DWORD *)a2 + 1);
  a1[43] = v56;
  MiReleaseSpinLockExclusive((_DWORD *)(v52 + 15280), v43);
  if ( !*((_QWORD *)a1 + 37) )
    *((_QWORD *)a1 + 37) = MiAllocateZeroPageDecisionTraceBuffer(v54, (unsigned int)v6);
  a2[1] = 1;
  if ( v39 )
  {
    v33 = v39;
    goto LABEL_56;
  }
}
