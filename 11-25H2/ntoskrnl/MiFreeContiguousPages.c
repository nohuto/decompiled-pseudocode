/*
 * XREFs of MiFreeContiguousPages @ 0x14038B910
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x1407DA710 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1407DB738 (MiRemoveMdlPages.c)
 *     MiCreatePagefileMemoryExtents @ 0x1407EDFFC (MiCreatePagefileMemoryExtents.c)
 *     MiDeletePageFileMemoryExtents @ 0x1407EE338 (MiDeletePageFileMemoryExtents.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiFreeLargePageCharges @ 0x14038BC4C (MiFreeLargePageCharges.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiResidentPageDangleFree @ 0x14038DCB0 (MiResidentPageDangleFree.c)
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
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+80h] [rbp+8h]
  unsigned __int8 v23; // [rsp+88h] [rbp+10h]
  int v24; // [rsp+90h] [rbp+18h]
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = -1LL;
  v5 = 0LL;
  v25 = -1LL;
  v6 = 0LL;
  v8 = BugCheckParameter2;
  v9 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v11 = a3 | 6;
  v23 = CurrentIrql;
  v24 = a3 | 6;
  v12 = (volatile signed __int32 *)(v9 + 24);
  do
  {
    v21 = v5;
    if ( (v8 & 0x1FF) == 0 && a2 >= 0x200 )
    {
      if ( (unsigned int)MiResidentPageDangleFree(v8, 1LL) )
      {
        if ( !v6 )
          v6 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
        MiFreeLargePageMemory(v8);
        v14 = 24576LL;
        v15 = -512LL;
        v16 = 512LL;
        goto LABEL_13;
      }
      CurrentIrql = v23;
    }
    if ( !v6 )
      v6 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    if ( v4 != (v8 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v25 = v8 & 0xFFFFFFFFFFFFFE00uLL;
      v19 = 4LL;
      if ( CurrentIrql != 2 )
        v19 = v3;
      MiUpdateLargePageBitMap(v6, v8 & 0xFFFFFFFFFFFFFE00uLL, 512LL, v19);
      v3 = 0;
    }
    if ( v23 == 2 )
    {
      v13 = 17;
      v20 = v3;
      while ( _interlockedbittestandset64(v12, 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v12 < 0 );
        v11 = v24;
      }
    }
    else
    {
      v13 = MiLockPageInline(v9);
    }
    HIWORD(v22) = HIWORD(*(_DWORD *)(v9 + 32));
    LOWORD(v22) = *(_DWORD *)(v9 + 32) - 1;
    *(_DWORD *)(v9 + 32) = v22;
    v5 = v21 + 1;
    if ( (_WORD)v22 != 1 )
      v5 = v21;
    if ( (*(_QWORD *)v12 & 0x4000000000000000LL) == 0 )
      *(_QWORD *)v12 |= 0x4000000000000000uLL;
    MiDecrementShareCountEx(v9, 0LL);
    MiUnlockPage(v9, v13);
    v4 = v25;
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
    CurrentIrql = v23;
  }
  while ( !v18 );
  if ( v5 )
    return MiFreeLargePageCharges(v6, v5, v11);
  return result;
}
