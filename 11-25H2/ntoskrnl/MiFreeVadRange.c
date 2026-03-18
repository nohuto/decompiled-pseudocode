/*
 * XREFs of MiFreeVadRange @ 0x1402A45F8
 * Callers:
 *     MiFreeVirtualMemory @ 0x1408F6ADC (MiFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A54708 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A5FD24 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiDeletePartialVad @ 0x1402A3A10 (MiDeletePartialVad.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C5810 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCanDeleteEnclave @ 0x140674F34 (MiCanDeleteEnclave.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408F7478 (PerfInfoLogVirtualFree.c)
 *     MiAllocateVad @ 0x1408F92F8 (MiAllocateVad.c)
 *     MiLockNestedVad @ 0x140A140EC (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A15348 (MiUnlockNestedVad.c)
 *     MiPrepareVadDelete @ 0x140A22310 (MiPrepareVadDelete.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeVadRange(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter1,
        int a6,
        _QWORD *a7)
{
  int v8; // ebx
  int v9; // ebp
  int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  __int64 result; // rax
  int v15; // r15d
  __int64 v16; // rbx
  ULONG_PTR v17; // rbp
  int v18; // edx
  ULONG_PTR v19; // r13
  int v20; // esi
  __int64 LockedVadEvent; // rax
  __int64 Vad; // rax
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0;
  v8 = a4;
  v9 = a3;
  if ( a7 )
    *a7 = 0LL;
  v11 = *(_DWORD *)(a1 + 48);
  v12 = (a4 << 12) | 0xFFF;
  v13 = a3 << 12;
  if ( (v11 & 0x200000) == 0 || (v11 & 0x4000000) != 0 || (v11 & 0x8000000) == 0 )
    goto LABEL_35;
  if ( a3 != (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || a4 != (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(a1);
  if ( (int)result >= 0 )
  {
LABEL_35:
    result = MiPrepareVadDelete(a1, a2, v9, v8, (__int64)&v23);
    if ( (int)result >= 0 )
    {
      v15 = v23;
      v16 = 0LL;
      v17 = BugCheckParameter1;
      if ( !v23 )
      {
        if ( a6 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(a1, 128LL);
          v16 = *(_QWORD *)(LockedVadEvent + 8);
          *(_QWORD *)(LockedVadEvent + 8) = 0LL;
          MiLockNestedVad(v16);
          *(_DWORD *)(v16 + 24) = v13 >> 12;
          *(_BYTE *)(v16 + 32) = v13 >> 44;
          *(_DWORD *)(v16 + 28) = v12 >> 12;
          *(_BYTE *)(v16 + 33) = v12 >> 44;
        }
        MiDeleteVad(a1, v16, 0LL);
LABEL_11:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v13, v12 - v13 + 1, v17);
        return 0LL;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(a1, 2LL) )
        return 3221225541LL;
      v19 = (unsigned int)(v18 + 62);
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v17, (unsigned int)(v18 + 62));
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v13, v12, 2LL);
        v16 = Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota(v17, v19);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v20 = MiDeletePartialVad(a1, v13, v12, v15, v16);
      if ( v20 >= 0 )
        goto LABEL_11;
      if ( v16 )
      {
        MiUnlockNestedVad(v16);
        ExFreePoolWithTag((PVOID)v16, 0);
        PsReturnProcessNonPagedPoolQuota(v17, v19);
      }
      return (unsigned int)v20;
    }
  }
  return result;
}
