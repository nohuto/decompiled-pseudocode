/*
 * XREFs of MiFreeVadRange @ 0x14026731C
 * Callers:
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409145E8 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A56CE4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiDeletePartialVad @ 0x1402675A0 (MiDeletePartialVad.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCanDeleteEnclave @ 0x140681954 (MiCanDeleteEnclave.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408DA818 (PerfInfoLogVirtualFree.c)
 *     MiAllocateVad @ 0x1408DC6F8 (MiAllocateVad.c)
 *     MiPrepareVadDelete @ 0x140A12E00 (MiPrepareVadDelete.c)
 *     MiLockNestedVad @ 0x140A12F2C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A15178 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeVadRange(
        _DWORD *P,
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
  void *v15; // rbx
  ULONG_PTR v16; // rbp
  __int64 LockedVadEvent; // rax
  __int64 v18; // rbx
  int v19; // edx
  ULONG_PTR v20; // r13
  int v21; // esi
  __int64 Vad; // rax
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0;
  v8 = a4;
  v9 = a3;
  if ( a7 )
    *a7 = 0LL;
  v11 = P[12];
  v12 = (a4 << 12) | 0xFFF;
  v13 = a3 << 12;
  if ( (v11 & 0x200000) == 0 || (v11 & 0x4000000) != 0 || (v11 & 0x8000000) == 0 )
    goto LABEL_35;
  if ( a3 != ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
    || a4 != ((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(P);
  if ( (int)result >= 0 )
  {
LABEL_35:
    result = MiPrepareVadDelete((_DWORD)P, a2, v9, v8, (__int64)&v23);
    if ( (int)result >= 0 )
    {
      v15 = 0LL;
      v16 = BugCheckParameter1;
      if ( !v23 )
      {
        if ( a6 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(P, 128LL);
          v18 = *(_QWORD *)(LockedVadEvent + 8);
          *(_QWORD *)(LockedVadEvent + 8) = 0LL;
          MiLockNestedVad(v18);
          *(_DWORD *)(v18 + 24) = v13 >> 12;
          *(_BYTE *)(v18 + 32) = v13 >> 44;
          *(_DWORD *)(v18 + 28) = v12 >> 12;
          *(_BYTE *)(v18 + 33) = v12 >> 44;
        }
        MiDeleteVad(P);
LABEL_11:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v13, v12 - v13 + 1, v16);
        return 0LL;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 500) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(P, 2LL) )
        return 3221225541LL;
      v20 = (unsigned int)(v19 + 62);
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v16, (unsigned int)(v19 + 62));
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v13, v12, 2LL);
        v15 = (void *)Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota(v16, v20);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v21 = MiDeletePartialVad(P, (__int64)v15);
      if ( v21 >= 0 )
        goto LABEL_11;
      if ( v15 )
      {
        MiUnlockNestedVad(v15);
        ExFreePoolWithTag(v15, 0);
        PsReturnProcessNonPagedPoolQuota(v16, v20);
      }
      return (unsigned int)v21;
    }
  }
  return result;
}
