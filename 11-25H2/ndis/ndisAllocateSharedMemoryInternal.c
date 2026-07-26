/*
 * XREFs of ndisAllocateSharedMemoryInternal @ 0x140078030
 * Callers:
 *     NdisAllocateSharedMemory @ 0x140077CD0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisAllocateSharedMemoryInternal(_QWORD *a1, __int64 a2, __int128 *a3, _QWORD *a4)
{
  KSPIN_LOCK *v4; // r15
  char v5; // bp
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // r12
  KSPIN_LOCK v10; // rdi
  __int64 Pool2; // rax
  char *v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int v16; // r14d
  __int128 v17; // xmm1
  USHORT HighestNodeNumber; // ax
  __int64 v19; // r9
  unsigned int v20; // edx
  __int64 (__fastcall *v21)(KSPIN_LOCK, __int128 *, char *); // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // edi
  KSPIN_LOCK v26; // rcx
  KIRQL v27; // r9
  _QWORD *v28; // rcx
  KSPIN_LOCK v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // r8
  __int64 *v33; // r13
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // r8
  __int64 v37; // rcx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  USHORT Count; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-70h]
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v4 = (KSPIN_LOCK *)a1[1];
  v5 = 0;
  v6 = a1[2];
  v7 = *((_DWORD *)a3 + 12) + 184;
  v8 = a1[3];
  v41 = a4;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v10 = v4[63];
  if ( v7 < 0xB8 )
    return (unsigned int)-1073741811;
  Pool2 = ExAllocatePool2(64LL, v7, 1650738254);
  v12 = (char *)Pool2;
  if ( !Pool2 )
  {
    v24 = -1073741670;
    goto LABEL_36;
  }
  v13 = *a3;
  *(_QWORD *)(Pool2 + 56) = v4;
  v14 = a3[1];
  *(_QWORD *)(Pool2 + 64) = v6;
  *(_OWORD *)(Pool2 + 112) = v13;
  v15 = a3[2];
  v16 = *((_DWORD *)a3 + 6);
  *(_OWORD *)(Pool2 + 128) = v14;
  *(_QWORD *)(Pool2 + 72) = v8;
  v17 = a3[3];
  *(_OWORD *)(Pool2 + 144) = v15;
  *(_QWORD *)&v15 = *((_QWORD *)a3 + 8);
  *(_OWORD *)(Pool2 + 160) = v17;
  *(_QWORD *)(Pool2 + 176) = v15;
  *(_QWORD *)(Pool2 + 168) = Pool2 + 184;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v20 = 0x80000000;
  if ( v16 == 0x80000000 )
    goto LABEL_7;
  if ( v16 <= HighestNodeNumber )
  {
    Count = 0;
    KeQueryNodeActiveAffinity(v16, &Affinity, &Count);
    v20 = v16;
    if ( Count )
    {
      v5 = 1;
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
LABEL_7:
      v20 = v16;
    }
  }
  if ( !*((_DWORD *)a3 + 2) || v6 || (v36 = *(_QWORD **)(v8 + 72)) == 0LL || !v36[97] )
  {
    v21 = (__int64 (__fastcall *)(KSPIN_LOCK, __int128 *, char *))v4[450];
    if ( v21 )
    {
      *((_QWORD *)v12 + 10) = v4[451];
      v26 = v4[452];
      *((_QWORD *)v12 + 11) = v26;
      v24 = v21(v26, a3, v12 + 96);
      if ( v24 < 0 )
        goto LABEL_16;
      if ( (*((_DWORD *)a3 + 1) & 1) == 0 || **((_DWORD **)a3 + 7) <= 1u )
      {
        memmove(*((void **)v12 + 21), *((const void **)a3 + 7), *((unsigned int *)a3 + 12));
        *((_DWORD *)v12 + 12) |= 8u;
        goto LABEL_16;
      }
      ((void (__fastcall *)(_QWORD, _QWORD))v4[451])(*((_QWORD *)v12 + 11), *((_QWORD *)v12 + 12));
    }
    else
    {
      if ( v10 )
      {
        v22 = *(_QWORD *)(v10 + 40);
        if ( ndisDmaUseNumaAwareAllocator && (*(_DWORD *)(v10 + 64) & 2) != 0 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, char, _DWORD))(*(_QWORD *)(v22 + 8) + 152LL))(
                  v22,
                  0LL,
                  *((unsigned int *)a3 + 8),
                  v12 + 104,
                  1,
                  *((_DWORD *)a3 + 6));
        }
        else
        {
          LOBYTE(v19) = 1;
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64))(*(_QWORD *)(v22 + 8) + 16LL))(
                  v22,
                  *((unsigned int *)a3 + 8),
                  v12 + 104,
                  v19);
        }
        *((_QWORD *)a3 + 5) = v23;
        if ( !v23 )
          goto LABEL_39;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 88));
        *((_DWORD *)v12 + 12) |= 1u;
LABEL_15:
        v24 = 0;
        goto LABEL_16;
      }
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(*((unsigned int *)a3 + 8), 0LL, -1LL, 0LL, 4, v20);
      *((_QWORD *)a3 + 5) = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
        *((_DWORD *)v12 + 12) |= 2u;
        *((PHYSICAL_ADDRESS *)v12 + 13) = PhysicalAddress;
        goto LABEL_15;
      }
    }
LABEL_39:
    v24 = -1073741670;
    goto LABEL_16;
  }
  *((_QWORD *)v12 + 10) = v36[98];
  v37 = v36[99];
  *((_QWORD *)v12 + 11) = v37;
  v24 = ((__int64 (__fastcall *)(__int64, __int128 *, char *))v36[97])(v37, a3, v12 + 96);
  if ( v24 >= 0 )
  {
    if ( (*((_DWORD *)a3 + 1) & 1) != 0 && **((_DWORD **)a3 + 7) > 1u )
    {
      (*((void (__fastcall **)(_QWORD, _QWORD))v12 + 10))(*((_QWORD *)v12 + 11), *((_QWORD *)v12 + 12));
      goto LABEL_39;
    }
    memmove(*((void **)v12 + 21), *((const void **)a3 + 7), *((unsigned int *)a3 + 12));
    *((_DWORD *)v12 + 12) |= 4u;
  }
LABEL_16:
  if ( v5 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v24 >= 0 )
  {
    *((_QWORD *)v12 + 19) = *((_QWORD *)a3 + 5);
    if ( (*((_DWORD *)v12 + 12) & 3) != 0 )
    {
      if ( *((_DWORD *)a3 + 12) >= 0x28u )
      {
        **((_DWORD **)a3 + 7) = 1;
        *(_QWORD *)(*((_QWORD *)a3 + 7) + 16LL) = *((_QWORD *)v12 + 13);
        *(_DWORD *)(*((_QWORD *)a3 + 7) + 24LL) = *((_DWORD *)a3 + 8);
      }
      *((_QWORD *)a3 + 2) = 0LL;
    }
    _InterlockedAdd64(&qword_140127028, *((unsigned int *)a3 + 8));
    v27 = KeAcquireSpinLockRaiseToDpc(v4 + 12);
    v4[65] = (KSPIN_LOCK)KeGetCurrentThread();
    v28 = v4 + 448;
    v29 = v4[448];
    if ( *(KSPIN_LOCK **)(v29 + 8) == v4 + 448 )
    {
      *(_QWORD *)v12 = v29;
      *((_QWORD *)v12 + 1) = v28;
      *(_QWORD *)(v29 + 8) = v12;
      *v28 = v12;
      if ( v6 )
      {
        v33 = (__int64 *)(v6 + 760);
        v34 = v12 + 16;
        v35 = *v33;
        if ( *(__int64 **)(*v33 + 8) != v33 )
          goto LABEL_30;
        *v34 = v35;
        *((_QWORD *)v12 + 3) = v33;
        *(_QWORD *)(v35 + 8) = v34;
        *v33 = (__int64)v34;
      }
      v30 = *(_QWORD *)(v8 + 88);
      v31 = (_QWORD *)(v8 + 88);
      v32 = v12 + 32;
      if ( *(_QWORD *)(v30 + 8) == v8 + 88 )
      {
        *v32 = v30;
        *((_QWORD *)v12 + 5) = v31;
        *(_QWORD *)(v30 + 8) = v32;
        *v31 = v32;
        v4[65] = 0LL;
        KeReleaseSpinLock(v4 + 12, v27);
        *v41 = v12;
        return (unsigned int)v24;
      }
    }
LABEL_30:
    __fastfail(3u);
  }
  ExFreePoolWithTag(v12, 0);
  if ( v24 == -1073741670 )
LABEL_36:
    _InterlockedAdd64(&qword_140127030, *((unsigned int *)a3 + 8));
  return (unsigned int)v24;
}
