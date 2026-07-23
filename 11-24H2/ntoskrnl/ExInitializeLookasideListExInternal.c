/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x140454B40
 * Callers:
 *     ExInitializeLookasideListEx @ 0x140454AF0 (ExInitializeLookasideListEx.c)
 *     VmInitSystem @ 0x140BE0898 (VmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 */

__int64 __fastcall ExInitializeLookasideListExInternal(
        PSLIST_HEADER SListHead,
        PVOID (__fastcall *a2)(int a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PPRIVILEGE_SET Privileges),
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int16 v10; // cx
  __int16 v12; // bp
  int v13; // r15d
  int v14; // esi
  __int64 *v15; // rdi
  KSPIN_LOCK *v16; // r12
  int v17; // esi
  PVOID (__fastcall *v18)(int, SIZE_T, ULONG); // rax
  void (__stdcall *v19)(PPRIVILEGE_SET); // rax
  KIRQL v20; // dl
  PSLIST_HEADER *v21; // rax
  PSLIST_HEADER v22; // rbx

  v10 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v10 = 256;
  }
  v12 = 0;
  if ( !a9 )
    v12 = v10;
  v13 = 8;
  if ( a6 > 8 )
    v13 = a6;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v14 = 16;
  }
  else
  {
    v14 = 0;
    if ( a5 )
      v14 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  v15 = &ExNPagedLookasideListHead;
  if ( (a4 & 1) != 0 )
    v15 = &ExPagedLookasideListHead;
  v16 = &ExNPagedLookasideLock;
  if ( (a4 & 1) != 0 )
    v16 = &ExPagedLookasideLock;
  InitializeSListHead(SListHead);
  v17 = a4 | v14;
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  v18 = ExAllocatePoolZero;
  if ( a2 )
    v18 = a2;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v12;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = v17;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v13;
  SListHead[3].Alignment = (unsigned __int64)v18;
  v19 = CmSiFreeMemory;
  if ( a3 )
    v19 = a3;
  SListHead[3].Region = (unsigned __int64)v19;
  SListHead[5].Alignment = 0LL;
  v20 = KeAcquireSpinLockRaiseToDpc(v16);
  if ( a9 )
  {
    LOWORD(SListHead[1].Alignment) = v12;
LABEL_27:
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
    goto LABEL_23;
  }
  if ( !ExMinimumLookasideDepth )
  {
    LOWORD(SListHead[1].Alignment) = 0;
    goto LABEL_27;
  }
LABEL_23:
  v21 = (PSLIST_HEADER *)v15[1];
  v22 = SListHead + 4;
  if ( *v21 != (PSLIST_HEADER)v15 )
    __fastfail(3u);
  v22->Alignment = (unsigned __int64)v15;
  v22->Region = (unsigned __int64)v21;
  *v21 = v22;
  v15[1] = (__int64)v22;
  KeReleaseSpinLock(v16, v20);
  return 0LL;
}
