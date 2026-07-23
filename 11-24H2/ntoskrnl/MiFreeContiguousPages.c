/*
 * XREFs of MiFreeContiguousPages @ 0x140398278
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1407EBBA8 (MiRemoveMdlPages.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407FE5FC (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x1407FE938 (MiDeletePageFileMemoryExtents.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeLargePageCharges @ 0x1403988E0 (MiFreeLargePageCharges.c)
 *     MiResidentPageDangleFree @ 0x140398908 (MiResidentPageDangleFree.c)
 */

__int64 __fastcall MiFreeContiguousPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  ULONG_PTR v8; // r15
  __int64 v9; // rdi
  __int64 CurrentIrql; // rdx
  unsigned int v11; // r12d
  volatile signed __int32 *v12; // r14
  __int64 v13; // r9
  unsigned __int8 v14; // bp
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 result; // rax
  bool v18; // zf
  char v19; // r9
  unsigned int v20; // edx
  unsigned int v21; // ebx
  __int64 v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+80h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+10h]
  unsigned int v25; // [rsp+90h] [rbp+18h]
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
  v13 = 1LL;
  do
  {
    v22 = v5;
    if ( (v8 & 0x1FF) == 0 && a2 >= 0x200 )
    {
      if ( (unsigned int)MiResidentPageDangleFree(v8, 1LL) )
      {
        if ( !v6 )
          v6 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
        MiFreeLargePageMemory(v8, v20, v11);
        v15 = 24576LL;
        v16 = -512LL;
        a3 = 512LL;
        v13 = 1LL;
        goto LABEL_13;
      }
      CurrentIrql = v24;
    }
    if ( !v6 )
      v6 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    if ( v4 != (v8 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v26 = v8 & 0xFFFFFFFFFFFFFE00uLL;
      v19 = 4;
      if ( (_BYTE)CurrentIrql != 2 )
        v19 = v3;
      MiUpdateLargePageBitMap(v6, v8 & 0xFFFFFFFFFFFFFE00uLL, 0x200uLL, v19);
      v3 = 0;
    }
    if ( (_BYTE)v24 == 2 )
    {
      v14 = 17;
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
      v14 = MiLockPageInline(v9, CurrentIrql, a3, v13);
    }
    HIWORD(v23) = HIWORD(*(_DWORD *)(v9 + 32));
    LOWORD(v23) = *(_DWORD *)(v9 + 32) - 1;
    *(_DWORD *)(v9 + 32) = v23;
    v5 = v22 + 1;
    if ( (_WORD)v23 != 1 )
      v5 = v22;
    if ( (*(_QWORD *)v12 & 0x4000000000000000LL) == 0 )
      *(_QWORD *)v12 |= 0x4000000000000000uLL;
    MiDecrementShareCountEx(v9, 0LL, a3, v13);
    MiUnlockPage(v9, v14);
    v4 = v26;
    v15 = 48LL;
    v16 = -1LL;
    v13 = 1LL;
    a3 = 1LL;
LABEL_13:
    result = v15;
    v12 = (volatile signed __int32 *)((char *)v12 + v15);
    v9 += v15;
    v8 += a3;
    v3 = 0;
    v18 = v16 + a2 == 0;
    a2 += v16;
    CurrentIrql = v24;
  }
  while ( !v18 );
  if ( v5 )
    return MiFreeLargePageCharges(v6, v5, v11);
  return result;
}
