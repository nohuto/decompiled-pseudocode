/*
 * XREFs of IovpCompleteRequest2 @ 0x140B96E04
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140B96B90 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MdlInvariantPostProcessing1 @ 0x140605B10 (MdlInvariantPostProcessing1.c)
 *     ViErrorReport6 @ 0x140606770 (ViErrorReport6.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140609708 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140609750 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B731D8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     IovpValidateStatusInformation @ 0x140B7D80C (IovpValidateStatusInformation.c)
 *     VfMajorAdvanceIrpStatus @ 0x140B82DE8 (VfMajorAdvanceIrpStatus.c)
 *     VfMajorVerifyFinalIrpStack @ 0x140B83154 (VfMajorVerifyFinalIrpStack.c)
 *     VfMajorVerifyIrpStackUpward @ 0x140B832A0 (VfMajorVerifyIrpStackUpward.c)
 *     IovpSessionDataDereference @ 0x140B8C838 (IovpSessionDataDereference.c)
 *     IovpSessionDataReference @ 0x140B8C8A0 (IovpSessionDataReference.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140B8CBAC (ViWdIrpBeforeCompletionRoutine.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall IovpCompleteRequest2(ULONG_PTR a1, __int64 **a2)
{
  __int64 *v2; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // eax
  _BYTE *v10; // r12
  int v11; // eax
  _QWORD *v12; // rbp
  _QWORD *v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rax
  bool v18; // zf
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int i; // edx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+80h] [rbp+18h]
  __int64 v26; // [rsp+88h] [rbp+20h]

  v2 = *a2;
  if ( *a2 )
  {
    v5 = (__int64)a2[1];
    *(_BYTE *)(v5 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 8));
    if ( *(_QWORD *)(v5 + 248) )
      ViWdIrpBeforeCompletionRoutine(v5 + 248);
    v6 = *(char *)(a1 + 67);
    v25 = *(_DWORD *)(a1 + 48);
    v7 = (__int64)&v2[15 * v6 - 5];
    v26 = 120 * v6;
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_DWORD *)(v8 + 4);
    if ( (v9 & 0x40000000) == 0 )
    {
      *(_DWORD *)(v8 + 4) = v9 | 0x40000000;
      LOBYTE(v6) = *(_BYTE *)(a1 + 67);
    }
    v10 = (_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL);
    if ( (char)v6 <= *(char *)(a1 + 66)
      && (unsigned __int8)(*v10 - 3) <= 1u
      && *(_QWORD *)(a1 + 8)
      && (MmVerifierData & 0x6000) != 0 )
    {
      MdlInvariantPostProcessing1(v5, a1, *(_QWORD *)(a1 + 184) - 72LL);
    }
    VfMajorVerifyIrpStackUpward(v5, v10);
    v11 = *((_DWORD *)v2 + 8);
    v24 = v25;
    if ( (v11 & 2) == 0 && (*(_DWORD *)(v7 + 4) & 0x4000000) != 0 && !*(_BYTE *)(a1 + 65) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
        ViErrorReport6(574LL, (const void *)v2[(unsigned __int64)v26 / 8], (const void *)a1, v25);
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
      *((_DWORD *)v13 + 6) = v25;
      if ( *(_BYTE *)(a1 + 65) )
        *((_DWORD *)v13 - 2) = v15 | 0x2000000;
      IovpValidateStatusInformation(v5, v13[5], (__int64)(v13 + 6), a2[4]);
      if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
      {
        if ( (unsigned int)VfMajorAdvanceIrpStatus(v10) )
        {
          *((_DWORD *)v13 - 2) |= 0x8000000u;
          *((_DWORD *)v13 + 7) = v25;
        }
      }
    }
    *(_DWORD *)(a1 + 48) = v25;
    memset_0((void *)v7, 0, 0x78uLL);
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *v12 = v12;
    v16 = *(unsigned __int8 *)(v5 + 184);
    *(_BYTE *)(v5 + 186) = *(_BYTE *)(a1 + 67) + 1;
    if ( v16 == *(char *)(a1 + 67) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      VfMajorVerifyFinalIrpStack(v5, (_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL));
      v17 = *v2;
      *(_DWORD *)(v17 + 56) &= ~1u;
      *(_QWORD *)(v17 + 240) = 0LL;
      IovpSessionDataDereference((_SLIST_ENTRY *)v2);
      v18 = (*(_DWORD *)(v5 + 24))-- == 1;
      LOBYTE(v24) = 0;
      if ( v18 )
      {
        ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v24);
        v19 = *(_QWORD *)v5;
        guard_dispatch_icall_no_overrides(v5);
        *(_QWORD *)v5 = 0LL;
        VfUtilAddressRangeRemoveCheckEmpty(
          (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v19 >> 12))),
          v19);
        ViIrpDatabaseReleaseLockExclusive(v24);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
      v20 = *(_QWORD *)(v5 + 224);
      if ( v20 )
      {
        for ( i = 0; i < *(_DWORD *)v20; ++i )
        {
          v22 = *(_QWORD *)(v20 + 8);
          v23 = 32LL * i;
          if ( *(_QWORD *)(v23 + v22) )
          {
            *(_OWORD *)(v23 + v22) = 0LL;
            *(_OWORD *)(v23 + v22 + 16) = 0LL;
          }
          v20 = *(_QWORD *)(v5 + 224);
        }
        *(_QWORD *)(v20 + 16) = 0LL;
      }
    }
    else
    {
      IovpSessionDataReference(v2);
      _InterlockedAdd((volatile signed __int32 *)(v5 + 20), 1u);
    }
    VfIrpDatabaseEntryReleaseLock(v5);
    --*((_DWORD *)a2 + 5);
  }
}
