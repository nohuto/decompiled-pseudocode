/*
 * XREFs of MiFreeContiguousPages @ 0x1403A95E8
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14041182C (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1407EB5D8 (MiRemoveMdlPages.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x1407FE1C8 (MiDeletePageFileMemoryExtents.c)
 * Callees:
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePageMemory @ 0x1403A3588 (MiFreeLargePageMemory.c)
 *     MiFreeLargePageCharges @ 0x1403A9C50 (MiFreeLargePageCharges.c)
 *     MiResidentPageDangleFree @ 0x1403A9C78 (MiResidentPageDangleFree.c)
 */

__int64 __fastcall MiFreeContiguousPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rsi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rdi
  unsigned __int8 CurrentIrql; // dl
  unsigned int v11; // r12d
  volatile signed __int32 *v12; // r14
  unsigned __int8 v13; // bp
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 result; // rax
  bool v18; // zf
  char v19; // r9
  unsigned int v20; // edx
  unsigned int v21; // ebx
  __int64 v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+80h] [rbp+8h]
  unsigned __int8 v24; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+90h] [rbp+18h]
  unsigned __int64 v26; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = -1LL;
  v5 = 0LL;
  v26 = -1LL;
  v6 = 0LL;
  v8 = BugCheckParameter2;
  v9 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v11 = a3 | 6;
  v24 = CurrentIrql;
  v25 = a3 | 6;
  v12 = (volatile signed __int32 *)(v9 + 24);
  do
  {
    v22 = v5;
    if ( (v8 & 0x1FF) == 0 && a2 >= 0x200 )
    {
      if ( (unsigned int)MiResidentPageDangleFree(v8, 1LL) )
      {
        if ( !v6 )
          v6 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
        MiFreeLargePageMemory(v8, v20, v11);
        v14 = 24576LL;
        v15 = -512LL;
        v16 = 512LL;
        goto LABEL_13;
      }
      CurrentIrql = v24;
    }
    if ( !v6 )
      v6 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    if ( v4 != (v8 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v26 = v8 & 0xFFFFFFFFFFFFFE00uLL;
      v19 = 4;
      if ( CurrentIrql != 2 )
        v19 = v3;
      MiUpdateLargePageBitMap(v6, v8 & 0xFFFFFFFFFFFFFE00uLL, 0x200uLL, v19);
      v3 = 0;
    }
    if ( v24 == 2 )
    {
      v13 = 17;
      v21 = v3;
      while ( _interlockedbittestandset64(v12, 0x3FuLL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v21);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v12 < 0 );
        v11 = v25;
      }
    }
    else
    {
      v13 = MiLockPageInline(v9);
    }
    HIWORD(v23) = HIWORD(*(_DWORD *)(v9 + 32));
    LOWORD(v23) = *(_DWORD *)(v9 + 32) - 1;
    *(_DWORD *)(v9 + 32) = v23;
    v5 = v22 + 1;
    if ( (_WORD)v23 != 1 )
      v5 = v22;
    if ( (*(_QWORD *)v12 & 0x4000000000000000LL) == 0 )
      *(_QWORD *)v12 |= 0x4000000000000000uLL;
    MiDecrementShareCountEx(v9, 0LL);
    MiUnlockPage(v9, v13);
    v4 = v26;
    v14 = 48LL;
    v15 = -1LL;
    v16 = 1LL;
LABEL_13:
    result = v14;
    v12 = (volatile signed __int32 *)((char *)v12 + v14);
    v9 += v14;
    v8 += v16;
    v3 = 0;
    v18 = v15 + a2 == 0;
    a2 += v15;
    CurrentIrql = v24;
  }
  while ( !v18 );
  if ( v5 )
    return MiFreeLargePageCharges(v6, v5, v11);
  return result;
}
