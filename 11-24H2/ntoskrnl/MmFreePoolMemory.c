/*
 * XREFs of MmFreePoolMemory @ 0x14020C540
 * Callers:
 *     RtlpHpEnvFreeVA @ 0x14020C9AC (RtlpHpEnvFreeVA.c)
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140451E3C (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x1404595CC (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x1406033B0 (RtlpHpVaMgrRangeDecommit.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiDeterminePoolType @ 0x14020C710 (MiDeterminePoolType.c)
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiUnmapReturnSystemCommit @ 0x140A20048 (MiUnmapReturnSystemCommit.c)
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
      MiUnmapReturnSystemCommit(*((_QWORD *)qword_140E300C8 + (unsigned __int16)word_140E381AE), &v14);
    }
    if ( v10 )
    {
      v11 = -v10;
      v12 = &qword_140E2CB88;
      if ( v6 != 64 )
        v12 = &qword_140E37690;
      _InterlockedAdd64(v12, v11);
    }
  }
  if ( (v8 & 0x8000) != 0 )
    MiReturnSystemVa(v3, v2 + v3);
  return 0LL;
}
