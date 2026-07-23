/*
 * XREFs of VmpPinMemoryRange @ 0x140649280
 * Callers:
 *     VmPinMemoryRange @ 0x14079ED90 (VmPinMemoryRange.c)
 * Callees:
 *     VmpProcessContextLockExclusive @ 0x14039EC68 (VmpProcessContextLockExclusive.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047A000 (VmpProcessContextUnlockExclusive.c)
 *     VmpCheckPinAndReference @ 0x1406489FC (VmpCheckPinAndReference.c)
 *     VmpCountNewPinnedRangesNeeded @ 0x140648BDC (VmpCountNewPinnedRangesNeeded.c)
 *     VmpDereferencePinInProgress @ 0x140648D74 (VmpDereferencePinInProgress.c)
 *     VmpUpdatePinRangesForFirstPin @ 0x140649D5C (VmpUpdatePinRangesForFirstPin.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VmpAllocatePinnedRanges @ 0x14079F23C (VmpAllocatePinnedRanges.c)
 *     VmpCheckPinTooLate @ 0x14079F2D0 (VmpCheckPinTooLate.c)
 *     VmpSecureMemoryForPin @ 0x14079F814 (VmpSecureMemoryForPin.c)
 *     VmpUnsecureMemoryForPin @ 0x14079F99C (VmpUnsecureMemoryForPin.c)
 *     MmLockPhysicalPagesByVa @ 0x1407EAF70 (MmLockPhysicalPagesByVa.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407EB07C (MmUnlockPhysicalPagesByVa.c)
 *     VmAccessFault @ 0x140A042B0 (VmAccessFault.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPinMemoryRange(
        volatile LONG *SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // r13
  __int64 v9; // rdi
  __int64 v11; // r15
  volatile LONG *v12; // rcx
  int PinnedRanges; // r14d
  __int64 v14; // rsi
  signed __int64 v15; // rcx
  signed __int64 v16; // rdx
  signed __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  BOOL v22; // r12d
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r8
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rax
  __int64 v31; // r13
  PVOID v32; // rcx
  __int64 v33; // rax
  int v35; // [rsp+40h] [rbp-91h] BYREF
  int v36; // [rsp+44h] [rbp-8Dh]
  __int64 v37; // [rsp+48h] [rbp-89h]
  __int64 v38; // [rsp+50h] [rbp-81h]
  unsigned __int64 v39; // [rsp+58h] [rbp-79h]
  BOOL v40; // [rsp+60h] [rbp-71h]
  int v41; // [rsp+64h] [rbp-6Dh]
  unsigned __int64 v42; // [rsp+68h] [rbp-69h]
  unsigned __int64 v43; // [rsp+70h] [rbp-61h]
  PVOID P[2]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v45; // [rsp+88h] [rbp-49h]
  __int64 v46; // [rsp+90h] [rbp-41h]
  __int64 v47; // [rsp+98h] [rbp-39h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-31h]
  _DWORD *v49; // [rsp+A8h] [rbp-29h]
  __int64 v50; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-19h] BYREF

  v35 = 0;
  v45 = a3;
  v7 = 0LL;
  v36 = 0;
  v9 = 0LL;
  v39 = 0LL;
  v50 = a3;
  v49 = a7;
  *a7 = 0;
  v11 = 0LL;
  v38 = 0LL;
  v47 = 0LL;
  P[1] = P;
  P[0] = P;
  v48 = a4;
  v42 = a2 + a4 - 1;
  v43 = a2;
  v51 = 0LL;
  v37 = 0LL;
  PinnedRanges = VmpCheckPinTooLate(SpinLock);
  if ( PinnedRanges >= 0 )
  {
    v14 = VmpProcessContextLockExclusive(v12);
    if ( *((_QWORD *)SpinLock + 13) != a6 )
      NT_ASSERT("ProcessContext->PartitionId == PartitionId");
    v15 = *((_QWORD *)SpinLock + 1);
    if ( (SpinLock[4] & 1) != 0 && v15 )
      v15 ^= (unsigned __int64)(SpinLock + 2);
    while ( v15 )
    {
      if ( a2 <= *(_QWORD *)(v15 + 32) )
      {
        if ( a2 >= *(_QWORD *)(v15 + 24) )
          break;
        v16 = *(_QWORD *)v15;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 8);
      }
      if ( (SpinLock[4] & 1) != 0 && v16 )
        v15 ^= v16;
      else
        v15 = v16;
    }
    v17 = v15 - 24;
    v18 = -v15;
    v19 = v17 & -(__int64)(v18 != 0);
    if ( !v19 )
      NT_ASSERT("GpaMemoryRange != ((void *)0)");
    if ( *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 0x38) < v42 )
      NT_ASSERT("GpaMemoryRange->LastGpn >= LastGpn");
    v9 = *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 0x10);
    v20 = v45 + *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 0x30) - a2;
    v21 = *(_QWORD *)(v9 + 24);
    if ( v21 != v20 )
      NT_ASSERT("VaMemoryRange->StartVpn == (StartVpn - (StartGpn - GpaMemoryRange->StartGpn))");
    v11 = *(_QWORD *)(v9 + 32) - v21 + 1;
    v41 = a5 & 2;
    v22 = v41 != 0;
    v46 = VmpCountNewPinnedRangesNeeded((__int64)SpinLock, v43, v42);
    v23 = v46;
    v24 = *(_QWORD *)(v9 + 56);
    v40 = v24 == 0;
    if ( v46 || !v24 )
    {
      while ( 1 )
      {
        VmpProcessContextUnlockExclusive(SpinLock, v14);
        if ( v23 )
        {
          PinnedRanges = VmpAllocatePinnedRanges(SpinLock, P, v23);
          if ( PinnedRanges < 0 )
            goto LABEL_67;
          v39 = v46;
          v46 = 0LL;
        }
        if ( v40 )
        {
          PinnedRanges = VmpSecureMemoryForPin(SpinLock, *(_QWORD *)(v9 + 24), v11, &v47);
          if ( PinnedRanges < 0 )
          {
            v26 = v47;
            v7 = v37;
            goto LABEL_63;
          }
          v25 = v47;
          v38 = v47;
        }
        else
        {
          v25 = v38;
        }
        v14 = VmpProcessContextLockExclusive(SpinLock);
        if ( *(_QWORD *)(v9 + 56) )
          goto LABEL_38;
        if ( v25 )
          break;
        v23 = v46;
        v40 = 1;
      }
      *(_QWORD *)(v9 + 56) = v25;
      v38 = 0LL;
      if ( v41 )
        *(_DWORD *)(v9 + 72) |= 1u;
    }
LABEL_38:
    PinnedRanges = VmpCheckPinAndReference((__int64)SpinLock, v9, v43, v42, v22, &v35, v49);
    if ( PinnedRanges < 0 )
    {
      if ( !v35 )
        goto LABEL_59;
    }
    else if ( !v35 )
    {
      v27 = *(_QWORD *)(v9 + 56);
      ++*(_QWORD *)(v9 + 64);
      v37 = v27;
      VmpProcessContextUnlockExclusive(SpinLock, v14);
      v14 = -1LL;
      PinnedRanges = MmLockPhysicalPagesByVa(v45 << 12, v48 << 12, v27, (a5 & 2) != 0);
      if ( PinnedRanges < 0 )
        goto LABEL_57;
      v36 = 1;
      v14 = VmpProcessContextLockExclusive(SpinLock);
      PinnedRanges = VmpCheckPinAndReference((__int64)SpinLock, v9, v43, v42, v22, &v35, v49);
      if ( PinnedRanges < 0 )
      {
        if ( !v35 )
          goto LABEL_45;
      }
      else if ( !v35 )
      {
        v29 = v43;
        v30 = VmpCountNewPinnedRangesNeeded((__int64)SpinLock, v43, v42);
        if ( v39 < v30 )
        {
          PinnedRanges = -1073741267;
LABEL_45:
          v31 = v45;
LABEL_54:
          if ( v14 != -1 )
          {
            VmpProcessContextUnlockExclusive(SpinLock, v14);
            v14 = -1LL;
          }
          MmUnlockPhysicalPagesByVa(v31 << 12, v48 << 12, v28, (a5 & 2) != 0);
          goto LABEL_57;
        }
        v36 = 0;
        VmpUpdatePinRangesForFirstPin(SpinLock, v29, v42, P);
        *(_DWORD *)(v19 + 64) |= 1u;
        ++*((_QWORD *)SpinLock + 9);
        goto LABEL_52;
      }
      if ( *(_QWORD *)(v9 + 64) == 1LL )
        goto LABEL_45;
LABEL_52:
      VmpProcessContextUnlockExclusive(SpinLock, v14);
      *(_QWORD *)&v51 = v43;
      *((_QWORD *)&v51 + 1) = v48;
      VmAccessFault(&v51, &v50, 1LL, a5, 0, 0, a6);
      PinnedRanges = 0;
      v14 = -1LL;
      if ( v36 )
      {
        v31 = v50;
        goto LABEL_54;
      }
LABEL_57:
      v7 = v37;
      if ( v37 )
      {
        v14 = VmpProcessContextLockExclusive(SpinLock);
        v7 = VmpDereferencePinInProgress(v9);
      }
      goto LABEL_60;
    }
    if ( *(_QWORD *)(v9 + 64) )
      goto LABEL_52;
LABEL_59:
    v7 = v37;
LABEL_60:
    if ( v14 != -1 )
      VmpProcessContextUnlockExclusive(SpinLock, v14);
  }
  v26 = v38;
LABEL_63:
  if ( v26 )
    VmpUnsecureMemoryForPin(SpinLock, v26, *(_QWORD *)(v9 + 24), v11, *(_QWORD *)(v9 + 24), v11);
  if ( v7 )
    VmpUnsecureMemoryForPin(SpinLock, v7, *(_QWORD *)(v9 + 24), v11, *(_QWORD *)(v9 + 24), v11);
LABEL_67:
  while ( 1 )
  {
    v32 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v33 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v33 + 8) = P;
    ExFreePoolWithTag(v32, 0);
  }
  return (unsigned int)PinnedRanges;
}
