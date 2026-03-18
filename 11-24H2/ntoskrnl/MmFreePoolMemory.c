/*
 * XREFs of MmFreePoolMemory @ 0x140243A40
 * Callers:
 *     RtlpHpEnvFreeVA @ 0x14024421C (RtlpHpEnvFreeVA.c)
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 *     RtlpHpEnvAllocVA @ 0x1402EAA50 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x140421038 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x1404212F8 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14045CD70 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x140605D70 (RtlpHpVaMgrRangeDecommit.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiDeterminePoolType @ 0x140243C10 (MiDeterminePoolType.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiUnmapReturnSystemCommit @ 0x140A2C120 (MiUnmapReturnSystemCommit.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // r15
  BOOL v8; // r12d
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  volatile signed __int64 *v14; // rax
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+50h] [rbp-48h]
  __int128 v18; // [rsp+60h] [rbp-38h]
  __int64 v19; // [rsp+70h] [rbp-28h]

  v2 = *a2;
  v3 = *a1;
  v4 = MiDeterminePoolType(*a1);
  v7 = v4;
  if ( !v4 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v3, v2, v5);
  v8 = v4 != 64;
  v9 = v5 | 0x4000;
  if ( (v5 & 0x8000) == 0 )
    v9 = v5;
  v10 = v9;
  if ( (v9 & 0x4000) != 0 )
  {
    v11 = v9 & 0x40000000;
    if ( v7 == 64 )
    {
      if ( !v11 && MmProtectFreedNonPagedPool )
        v10 = v9 | 0x40000000;
      v12 = MiClearNonPagedPtes(v3, v6, v10, 1);
    }
    else
    {
      v19 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      MiDecommitPages((v3 >> 9) & 0xFFFFFFF8, v6, 0, 0, 0LL, v11 == 0 ? 0x10 : 0, 0LL, (__int64)&v16);
      v12 = *((_QWORD *)&v17 + 1);
      MiUnmapReturnSystemCommit(*((_QWORD *)qword_140E2FF88 + (unsigned __int16)word_140E3806E), &v16);
    }
    if ( v12 )
    {
      v13 = -v12;
      v14 = &qword_140E2CA48;
      if ( v7 != 64 )
        v14 = &qword_140E37550;
      _InterlockedAdd64(v14, v13);
    }
  }
  if ( (v10 & 0x8000) != 0 )
    MiReturnSystemVa(v3, v2 + v3, v8 + 4);
  return 0LL;
}
