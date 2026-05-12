/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x140019940
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x140018080 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x140018740 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x14001A200 (RaidBusEnumeratorProbeLunZero.c)
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B8B44 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140017930 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidCreateUnit @ 0x140026194 (RaidCreateUnit.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x140072570 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1401B5C80 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // r15
  void *v5; // rcx
  char v8; // bp
  IRP *v9; // rcx
  void *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  __int64 v14; // r15
  KIRQL CurrentIrql; // al
  int v16; // r12d
  __int64 *v17; // r13
  __int64 **v18; // r15
  __int64 *i; // rsi
  _QWORD *UnitAtDirql; // rbp
  _QWORD *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // edx
  int v27; // r8d
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  KIRQL v31; // al
  __int64 *v32; // r15
  unsigned int (__fastcall *v33)(__int64); // rbx
  KIRQL v34; // r13
  __int64 (__fastcall *v35)(_QWORD); // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  _QWORD *k; // r12
  __int64 **v39; // rax
  __int64 v40; // rdi
  unsigned int v41; // ebx
  struct _KINTERRUPT *v42; // rcx
  __int64 result; // rax
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 *v48; // r15
  __int64 **v49; // rsi
  __int64 *j; // r8
  PKINTERRUPT *v51; // rsi
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 v58; // rax
  PMDL Mdl; // rax
  void *MappedSystemVa; // rcx
  struct _MDL *v61; // rdx
  __int64 Pool2; // rax
  unsigned __int8 v63; // si
  PIRP Irp; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  __int64 (__fastcall *v66)(_QWORD); // [rsp+C0h] [rbp+8h] BYREF
  int v67; // [rsp+C8h] [rbp+10h]
  __int64 (__fastcall *v68)(__int64, __int64); // [rsp+D8h] [rbp+20h]

  v67 = a2;
  v3 = *a1;
  v5 = (void *)a1[3];
  v8 = 1;
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
    goto LABEL_3;
  }
  if ( *(_DWORD *)v3 == 1314275652 )
  {
    v44 = v3 + 274;
  }
  else if ( *(_DWORD *)v3 == 1094997074 )
  {
    v44 = v3 + 482;
  }
  else
  {
    v44 = 98LL;
  }
  v45 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)v44 == 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 184LL, 1918067026LL);
    v46 = Pool2;
    if ( !Pool2 && v45 )
    {
      RaidLogAllocationFailure(v45, 64, 184, 1918067026, 0x80000000);
      a1[3] = 0LL;
      return 3221225495LL;
    }
    if ( Pool2 )
    {
      *(_WORD *)Pool2 = 8;
      *(_BYTE *)(Pool2 + 2) = 40;
      *(_DWORD *)(Pool2 + 8) = 1397899864;
      *(_DWORD *)(Pool2 + 12) = 1;
      *(_QWORD *)(Pool2 + 16) = 184LL;
      *(_WORD *)(Pool2 + 36) = 2;
      *(_DWORD *)(Pool2 + 52) = 128;
      *(_DWORD *)(Pool2 + 56) = 1;
      *(_WORD *)(Pool2 + 128) = 1;
      *(_DWORD *)(Pool2 + 132) = 4;
      *(_DWORD *)(Pool2 + 120) = 144;
      a1[3] = Pool2;
      goto LABEL_3;
    }
  }
  else
  {
    v46 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( !v46 && v45 )
      RaidLogAllocationFailure(v45, 64, 88, 1918067026, 0x80000000);
  }
  a1[3] = v46;
  if ( !v46 )
    return 3221225495LL;
LABEL_3:
  if ( !a1[4] )
  {
    v57 = *(_QWORD *)(v3 + 8);
    v58 = ExAllocatePool2(64LL, 18LL, 1314087250LL);
    if ( !v58 && v57 )
    {
      RaidLogAllocationFailure(v57, 64, 18, 1314087250, 0x80000000);
      a1[4] = 0LL;
      return 3221225495LL;
    }
    a1[4] = v58;
    if ( !v58 )
      return 3221225495LL;
    v8 = 0;
  }
  v9 = (IRP *)a1[1];
  if ( v9 )
  {
    IoReuseIrp(v9, -1073741823);
  }
  else
  {
    Irp = IoAllocateIrp(1, 0);
    a1[1] = Irp;
    if ( !Irp )
      return 3221225495LL;
  }
  v10 = (void *)a1[5];
  if ( !v10 )
  {
    *((_DWORD *)a1 + 12) = 512;
    v55 = *(_QWORD *)(v3 + 8);
    v56 = ExAllocatePool2(64LL, 512LL, 842096978LL);
    v10 = (void *)v56;
    if ( v56 || !v55 )
    {
      a1[5] = v56;
      if ( v56 )
        goto LABEL_7;
    }
    else
    {
      RaidLogAllocationFailure(v55, 64, 512, 842096978, 0x80000000);
      a1[5] = 0LL;
    }
    *((_DWORD *)a1 + 12) = 0;
    return 3221225495LL;
  }
LABEL_7:
  v11 = a1[2];
  if ( !v11 )
  {
    Mdl = IoAllocateMdl(v10, *((_DWORD *)a1 + 12), 0, 0, 0LL);
    a1[2] = Mdl;
    if ( Mdl )
    {
      if ( (Mdl->MdlFlags & 0x20) == 0 )
        goto LABEL_9;
      MappedSystemVa = Mdl->MappedSystemVa;
      v61 = Mdl;
LABEL_105:
      MmUnmapLockedPages(MappedSystemVa, v61);
      goto LABEL_9;
    }
    return 3221225495LL;
  }
  if ( (*(_BYTE *)(v11 + 10) & 0x20) != 0 )
  {
    v61 = (struct _MDL *)a1[2];
    MappedSystemVa = *(void **)(v11 + 24);
    goto LABEL_105;
  }
LABEL_9:
  v12 = a1[4];
  if ( v12 && v8 )
  {
    *(_OWORD *)v12 = 0LL;
    *(_WORD *)(v12 + 16) = 0;
  }
  v13 = (void *)a1[5];
  if ( v13 )
    memset_0(v13, 0, *((unsigned int *)a1 + 12));
  v14 = *a1;
  CurrentIrql = KeGetCurrentIrql();
  v16 = BYTE2(v67);
  if ( CurrentIrql )
  {
    if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v14 + 856) )
    {
      UnitAtDirql = RaidAdapterFindUnitAtDirql(v14, a2);
    }
    else
    {
      v63 = RaidAdapterAcquireInterruptLock(v14);
      UnitAtDirql = RaidAdapterFindUnitAtDirql(v14, a2);
      RaidAdapterReleaseInterruptLock(v14, v63);
    }
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v17 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 136), &LockHandle);
    v18 = (__int64 **)(v14 + 144);
    for ( i = *v18; i != (__int64 *)v18; i = (__int64 *)*i )
    {
      v17 = i - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)i + 10)) | ((((unsigned __int8)*((_DWORD *)i + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)i + 10))) << 8)) == (v16 | ((BYTE1(v67) | ((unsigned __int8)a2 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    UnitAtDirql = 0LL;
    if ( i != (__int64 *)v18 )
      UnitAtDirql = v17;
  }
  v66 = (__int64 (__fastcall *)(_QWORD))UnitAtDirql;
  v21 = UnitAtDirql;
  if ( UnitAtDirql )
    goto LABEL_21;
  v47 = *a1;
  v48 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v47 + 216), &LockHandle);
  v49 = (__int64 **)(v47 + 224);
  for ( j = *v49; j != (__int64 *)v49; j = (__int64 *)*j )
  {
    v48 = j - 8;
    if ( ((unsigned __int8)BYTE2(*((_DWORD *)j + 10)) | ((((unsigned __int8)*((_DWORD *)j + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)j + 10))) << 8)) == (v16 | ((BYTE1(v67) | ((unsigned __int8)a2 << 8)) << 8)) )
      break;
  }
  UnitAtDirql = 0LL;
  if ( j != (__int64 *)v49 )
    UnitAtDirql = v48;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v66 = (__int64 (__fastcall *)(_QWORD))UnitAtDirql;
  v21 = UnitAtDirql;
  if ( !UnitAtDirql )
  {
LABEL_21:
    if ( v21 )
      goto LABEL_43;
  }
  else
  {
    if ( (UnitAtDirql[63] & 4) != 0 )
      goto LABEL_43;
    v66 = 0LL;
  }
  UnitAtDirql = (_QWORD *)a1[7];
  v22 = *a1;
  if ( !UnitAtDirql )
  {
    result = RaidCreateUnit(*a1, &v66);
    if ( (int)result < 0 )
      return result;
    UnitAtDirql = v66;
    a1[7] = v66;
    *((_BYTE *)UnitAtDirql + 504) |= 8u;
    *((_BYTE *)UnitAtDirql + 757) = 0;
    RaUnitUnlockForwardIo(UnitAtDirql, 1LL);
    goto LABEL_32;
  }
  v23 = UnitAtDirql[3];
  if ( *(_DWORD *)v23 == 1314275652 )
  {
    v24 = v23 + 176;
  }
  else
  {
    if ( *(_DWORD *)v23 != 1094997074 )
      goto LABEL_32;
    v24 = v23 + 384;
  }
  if ( v24 )
  {
    v25 = *(_DWORD *)(v24 + 212);
    v26 = *(_DWORD *)(v24 + 208);
    v27 = *((_DWORD *)UnitAtDirql + 181);
    if ( v25 && v25 <= v26 )
    {
      *((_DWORD *)UnitAtDirql + 181) = v25;
      goto LABEL_30;
    }
    if ( v25 == v27 )
    {
LABEL_30:
      *((_DWORD *)UnitAtDirql + 232) = v26;
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zquuuqqqt_EtwWriteTransfer(
          v25,
          v26,
          v27,
          *(_QWORD *)(v23 + 48),
          *(_DWORD *)(v23 + 56),
          *((_BYTE *)UnitAtDirql + 104),
          *((_BYTE *)UnitAtDirql + 105),
          *((_BYTE *)UnitAtDirql + 106),
          v27,
          v25,
          v26,
          0);
    }
  }
LABEL_32:
  v28 = UnitAtDirql[3];
  *((_DWORD *)UnitAtDirql + 26) = a2;
  *((_WORD *)UnitAtDirql + 48) = 1;
  *((_DWORD *)UnitAtDirql + 25) = 4;
  *((_WORD *)UnitAtDirql + 49) = *(_WORD *)(v28 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 136), &LockHandle);
  v29 = *(_QWORD **)(v22 + 152);
  v30 = UnitAtDirql + 8;
  if ( *v29 != v22 + 144 )
    goto LABEL_85;
  UnitAtDirql[9] = v29;
  *v30 = v22 + 144;
  *v29 = v30;
  *(_QWORD *)(v22 + 152) = v30;
  ++*(_DWORD *)(v22 + 160);
  v31 = RaidAdapterAcquireInterruptLock(v22);
  v32 = UnitAtDirql + 10;
  v33 = *(unsigned int (__fastcall **)(__int64))(v22 + 208);
  v34 = v31;
  v35 = *(__int64 (__fastcall **)(_QWORD))(v22 + 192);
  v68 = *(__int64 (__fastcall **)(__int64, __int64))(v22 + 200);
  v66 = v35;
  v36 = v35(UnitAtDirql + 10);
  v37 = *(_QWORD *)(v22 + 184) + 16LL * (v33(v36) % *(_DWORD *)(v22 + 172));
  for ( k = *(_QWORD **)v37; ; k = (_QWORD *)*k )
  {
    if ( k == (_QWORD *)v37 )
    {
      ++*(_DWORD *)(v22 + 168);
      v39 = *(__int64 ***)(v37 + 8);
      if ( *v39 == (__int64 *)v37 )
      {
        *v32 = v37;
        UnitAtDirql[11] = v39;
        *v39 = v32;
        *(_QWORD *)(v37 + 8) = v32;
        goto LABEL_37;
      }
LABEL_85:
      __fastfail(3u);
    }
    v52 = v66(UnitAtDirql + 10);
    v53 = v66(k);
    v54 = v68(v53, v52);
    if ( !v54 )
      goto LABEL_37;
    if ( v54 < 0 )
      break;
  }
  *v32 = (__int64)k;
  UnitAtDirql[11] = k[1];
  k[1] = v32;
  *(_QWORD *)UnitAtDirql[11] = v32;
  ++*(_DWORD *)(v22 + 168);
LABEL_37:
  if ( *(_BYTE *)(v22 + 4369) )
  {
    v40 = *(_QWORD *)(v22 + 4352);
    if ( *(_DWORD *)(v22 + 4336) == 2 )
    {
      v41 = *(_DWORD *)(v40 + 4) - 1;
      if ( *(_DWORD *)(v40 + 4) != 1 )
      {
        v51 = (PKINTERRUPT *)(v40 + 48LL * v41 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v51, *(_BYTE *)v40);
          v51 -= 6;
          --v41;
        }
        while ( v41 );
      }
    }
    v42 = *(struct _KINTERRUPT **)(v40 + 24);
LABEL_41:
    KeReleaseInterruptSpinLock(v42, v34);
  }
  else
  {
    v42 = *(struct _KINTERRUPT **)(v22 + 848);
    if ( v42 )
      goto LABEL_41;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_BYTE *)(a3 + 92) = 1;
LABEL_43:
  *(_QWORD *)(a3 + 8) = UnitAtDirql;
  *(_DWORD *)(a3 + 4) = *((_DWORD *)UnitAtDirql + 26);
  result = 0LL;
  *(_DWORD *)(a3 + 88) = 0;
  return result;
}
