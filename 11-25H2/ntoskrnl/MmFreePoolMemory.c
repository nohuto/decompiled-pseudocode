/*
 * XREFs of MmFreePoolMemory @ 0x1402FAA60
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 *     RtlpHpSegMgrCommit @ 0x1402F9CA8 (RtlpHpSegMgrCommit.c)
 *     RtlpHpEnvFreeVA @ 0x1402FAA1C (RtlpHpEnvFreeVA.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14035F208 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403CC28C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x1403CC544 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x1405F9A30 (RtlpHpVaMgrRangeDecommit.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiDeterminePoolType @ 0x1402FAC30 (MiDeterminePoolType.c)
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiUnmapReturnSystemCommit @ 0x140A23170 (MiUnmapReturnSystemCommit.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v3; // rsi
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // r15
  int v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  volatile signed __int64 *v12; // rax
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h]
  __int128 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+70h] [rbp-28h]

  v2 = *a2;
  v3 = *a1;
  v6 = MiDeterminePoolType(*a1);
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v3, v2, v4);
  v7 = v4 | 0x4000;
  if ( (v4 & 0x8000) == 0 )
    v7 = v4;
  v8 = v7;
  if ( (v7 & 0x4000) != 0 )
  {
    v9 = v7 & 0x40000000;
    if ( v6 == 64 )
    {
      if ( !v9 && MmProtectFreedNonPagedPool )
        v8 = v7 | 0x40000000;
      v10 = MiClearNonPagedPtes(v3, v5, v8, 1LL);
    }
    else
    {
      v17 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      MiDecommitPages((v3 >> 9) & 0xFFFFFFF8, v5, 0, 0, 0LL, v9 == 0 ? 0x10 : 0, 0LL, (__int64)&v14);
      v10 = *((_QWORD *)&v15 + 1);
      MiUnmapReturnSystemCommit(*((_QWORD *)qword_140E2FD48 + (unsigned __int16)word_140E37E2E), &v14);
    }
    if ( v10 )
    {
      v11 = -v10;
      v12 = &qword_140E2C808;
      if ( v6 != 64 )
        v12 = &qword_140E37310;
      _InterlockedAdd64(v12, v11);
    }
  }
  if ( (v8 & 0x8000) != 0 )
    MiReturnSystemVa(v3, v2 + v3);
  return 0LL;
}
