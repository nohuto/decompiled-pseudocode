/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x1408D9778
 * Callers:
 *     MmDeleteTeb @ 0x1408D96BC (MmDeleteTeb.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(_QWORD *P, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 LockedVadEvent; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned int v13; // esi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned __int64 i; // rcx
  bool v21; // bl
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 Process; // [rsp+28h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LockedVadEvent = MiLocateLockedVadEvent((__int64)P, 64);
  if ( !LockedVadEvent )
    goto LABEL_20;
  v12 = LockedVadEvent + 8;
  v13 = v9 - 63;
  v14 = (unsigned __int64)(a4 + 4095) >> 12;
  v15 = *(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v11);
  RtlClearBitsEx(v12, (a3 - (v15 << 12)) >> 12, v14);
  v16 = *(unsigned int *)(v12 + 44);
  v17 = *(_DWORD *)(v12 + 40) - v14;
  *(_DWORD *)(v12 + 40) = v17;
  if ( v14 + v17 >= v16 && v17 < (unsigned int)v16 )
  {
    v22 = (_QWORD *)(v12 + 16);
    v23 = 16LL * (*(_DWORD *)(v12 + 48) & 3) + *(_QWORD *)(Process + 1040) + 1032LL;
    v24 = *(_QWORD *)v23;
    if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 )
      goto FatalListEntryError_11;
    *v22 = v24;
    *(_QWORD *)(v12 + 24) = v23;
    *(_QWORD *)(v24 + 8) = v22;
    *(_QWORD *)v23 = v22;
  }
  v18 = 0;
  v19 = 0;
  for ( i = P[7] & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 80) == 2 )
    {
      if ( v19 <= v13 )
        v19 += v13;
      if ( a3 <= *(_QWORD *)(i + 16) && a3 + a4 - 1 >= (*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFF000uLL) && v18 <= v13 )
        v18 += v13;
    }
  }
  v21 = *(_DWORD *)(v12 + 40) == 0;
  if ( v19 != v13 )
    v21 = 0;
  if ( v18 != v13 )
    v13 = 0;
  if ( v21 )
  {
    v25 = (_QWORD *)(v12 + 16);
    v26 = *(_QWORD *)(v12 + 16);
    if ( *(_QWORD *)(v26 + 8) == v12 + 16 )
    {
      v27 = *(_QWORD **)(v12 + 24);
      if ( (_QWORD *)*v27 == v25 )
      {
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *v25 = 0LL;
        *(_QWORD *)(v12 + 24) = 0LL;
        goto LABEL_19;
      }
    }
FatalListEntryError_11:
    __fastfail(3u);
  }
  if ( v13 )
    MiDecommitRegion(P, a3, a3 + a4 - 1);
LABEL_19:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  if ( !v21 )
  {
LABEL_20:
    MiUnlockAndDereferenceVad(P);
    return;
  }
  MiDeleteVad((unsigned __int8 *)P, 0LL);
}
