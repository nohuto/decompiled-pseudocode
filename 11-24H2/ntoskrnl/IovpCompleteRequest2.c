/*
 * XREFs of IovpCompleteRequest2 @ 0x140BA6DE4
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140BA6B70 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     MdlInvariantPostProcessing1 @ 0x140611AD0 (MdlInvariantPostProcessing1.c)
 *     ViErrorReport6 @ 0x140612730 (ViErrorReport6.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1406156C8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140615710 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B831B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     IovpValidateStatusInformation @ 0x140B8D7EC (IovpValidateStatusInformation.c)
 *     VfMajorAdvanceIrpStatus @ 0x140B92DC8 (VfMajorAdvanceIrpStatus.c)
 *     VfMajorVerifyFinalIrpStack @ 0x140B93134 (VfMajorVerifyFinalIrpStack.c)
 *     VfMajorVerifyIrpStackUpward @ 0x140B93280 (VfMajorVerifyIrpStackUpward.c)
 *     IovpSessionDataDereference @ 0x140B9C818 (IovpSessionDataDereference.c)
 *     IovpSessionDataReference @ 0x140B9C880 (IovpSessionDataReference.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140B9CB8C (ViWdIrpBeforeCompletionRoutine.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA3FE4 (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall IovpCompleteRequest2(ULONG_PTR a1, __int64 **a2)
{
  __int64 *v2; // r14
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int8 *v10; // r12
  int v11; // eax
  _QWORD *v12; // rbp
  _QWORD *v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int i; // edx
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+18h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h]

  v2 = *a2;
  if ( *a2 )
  {
    v5 = a2[1];
    *((_BYTE *)v5 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 1);
    if ( v5[31] )
      ViWdIrpBeforeCompletionRoutine((__int64)(v5 + 31));
    v6 = *(char *)(a1 + 67);
    v28 = *(_DWORD *)(a1 + 48);
    v7 = (__int64)&v2[15 * v6 - 5];
    v29 = 120 * v6;
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_DWORD *)(v8 + 4);
    if ( (v9 & 0x40000000) == 0 )
    {
      *(_DWORD *)(v8 + 4) = v9 | 0x40000000;
      LOBYTE(v6) = *(_BYTE *)(a1 + 67);
    }
    v10 = (unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL);
    if ( (char)v6 <= *(char *)(a1 + 66)
      && (unsigned __int8)(*v10 - 3) <= 1u
      && *(_QWORD *)(a1 + 8)
      && (MmVerifierData & 0x6000) != 0 )
    {
      MdlInvariantPostProcessing1((__int64)v5, a1, *(_QWORD *)(a1 + 184) - 72LL);
    }
    VfMajorVerifyIrpStackUpward((__int64)v5, v10, v7);
    v11 = *((_DWORD *)v2 + 8);
    v27 = v28;
    if ( (v11 & 2) == 0 && (*(_DWORD *)(v7 + 4) & 0x4000000) != 0 && !*(_BYTE *)(a1 + 65) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
        ViErrorReport6(574LL, (const void *)v2[(unsigned __int64)v29 / 8], (const void *)a1, v28);
      *((_DWORD *)v2 + 8) |= 2u;
    }
    v12 = (_QWORD *)(v7 + 16);
    while ( 1 )
    {
      v13 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 == v12 )
        break;
      if ( (_QWORD *)v13[1] != v12 || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13) )
        __fastfail(3u);
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      v15 = *((_DWORD *)v13 - 2) | 0x40000000;
      *((_DWORD *)v13 - 2) = v15;
      *((_DWORD *)v13 + 6) = v28;
      if ( *(_BYTE *)(a1 + 65) )
        *((_DWORD *)v13 - 2) = v15 | 0x2000000;
      IovpValidateStatusInformation((__int64)v5, v13[5], (__int64)(v13 + 6), a2[4]);
      if ( (v5[7] & 0x20) == 0 )
      {
        if ( (unsigned int)VfMajorAdvanceIrpStatus(v10, v27, (__int64)&v28) )
        {
          *((_DWORD *)v13 - 2) |= 0x8000000u;
          *((_DWORD *)v13 + 7) = v28;
        }
      }
    }
    *(_DWORD *)(a1 + 48) = v28;
    memset_0((void *)v7, 0, 0x78uLL);
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *v12 = v12;
    v18 = *((unsigned __int8 *)v5 + 184);
    *((_BYTE *)v5 + 186) = *(_BYTE *)(a1 + 67) + 1;
    if ( v18 == *(char *)(a1 + 67) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      VfMajorVerifyFinalIrpStack((__int64)v5, (unsigned __int8 *)(*(_QWORD *)(a1 + 184) - 72LL), v16, v17);
      v19 = *v2;
      *(_DWORD *)(v19 + 56) &= ~1u;
      *(_QWORD *)(v19 + 240) = 0LL;
      IovpSessionDataDereference((struct _SLIST_ENTRY *)v2);
      v20 = (*((_DWORD *)v5 + 6))-- == 1;
      LOBYTE(v27) = 0;
      if ( v20 )
      {
        ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v27);
        v21 = *v5;
        guard_dispatch_icall_no_overrides(v5, *v5, 1LL, v22);
        *v5 = 0LL;
        VfUtilAddressRangeRemoveCheckEmpty(
          (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v21 >> 12))),
          v21);
        ViIrpDatabaseReleaseLockExclusive(v27);
      }
      _InterlockedDecrement((volatile signed __int32 *)v5 + 5);
      v23 = v5[28];
      if ( v23 )
      {
        for ( i = 0; i < *(_DWORD *)v23; ++i )
        {
          v25 = *(_QWORD *)(v23 + 8);
          v26 = 32LL * i;
          if ( *(_QWORD *)(v26 + v25) )
          {
            *(_OWORD *)(v26 + v25) = 0LL;
            *(_OWORD *)(v26 + v25 + 16) = 0LL;
          }
          v23 = v5[28];
        }
        *(_QWORD *)(v23 + 16) = 0LL;
      }
    }
    else
    {
      IovpSessionDataReference(v2);
      _InterlockedAdd((volatile signed __int32 *)v5 + 5, 1u);
    }
    VfIrpDatabaseEntryReleaseLock(v5);
    --*((_DWORD *)a2 + 5);
  }
}
