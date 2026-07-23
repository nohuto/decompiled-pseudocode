/*
 * XREFs of RtlpHpHeapAllocate @ 0x140602108
 * Callers:
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpAllocVA @ 0x14034AEE8 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpFreeVA @ 0x14045928C (RtlpHpFreeVA.c)
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x1404F3998 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     RtlpHpMetadataCommit @ 0x1406028B0 (RtlpHpMetadataCommit.c)
 *     RtlpHpLfhContextMaximumExtension @ 0x140603DE0 (RtlpHpLfhContextMaximumExtension.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpHeapAllocate(int a1, unsigned int a2, __int128 *a3)
{
  unsigned int v6; // eax
  __int128 v7; // xmm0
  unsigned __int64 v8; // r14
  __int64 v9; // r10
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int16 v13; // si
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  ULONG_PTR v17; // [rsp+20h] [rbp-50h]
  ULONG_PTR v18; // [rsp+20h] [rbp-50h]
  unsigned __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-38h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int128 v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int64 v24; // [rsp+C8h] [rbp+58h] BYREF

  v23 = 0LL;
  RtlpHpLfhContextMaximumExtension(a2);
  v6 = RtlpHpVsCalculateAffinitySlotCount(a2);
  v7 = *a3;
  v8 = 4096LL;
  v24 = 4096LL;
  v10 = v9 + (v6 << 7) - (unsigned __int64)((4 * (_BYTE)v6 - 1) & 0x3F) + 4LL * v6 + 2367;
  v20 = v7;
  v11 = 4095 - ((v10 - 1) & 0xFFF) + v10;
  v19 = v11;
  v12 = v11;
  if ( (a1 & 0x2000000) != 0
    || (a1 & 0x40000000) != 0
    || BYTE2(v20)
    || (v20 & 6) != 6 && (unsigned __int8)(BYTE1(v20) - 2) > 2u )
  {
    LODWORD(v17) = (a1 & 0x40000000) != 0 ? 64 : 4;
    v22 = v7;
    if ( (int)RtlpHpAllocVA(&v23, (__int64 *)&v19, 0LL, 0x2000, v17, (__int64 *)&v22) < 0
      || (LODWORD(v18) = (a1 & 0x40000000) != 0 ? 64 : 4,
          v21 = *a3,
          (int)RtlpHpAllocVA(&v23, (__int64 *)&v24, 0LL, 4096, v18, (__int64 *)&v21) < 0) )
    {
      v15 = 0LL;
      goto LABEL_13;
    }
    v15 = v23;
    v13 = 0;
    v12 = v19;
    v8 = v24;
    v23 = 0LL;
  }
  else
  {
    v13 = 1;
    v21 = v7;
    v14 = RtlpHpMetadataAlloc(v11, 0x1000uLL, 1, (unsigned __int64 *)&v21);
    v15 = v14;
    if ( !v14 )
      return v15;
    v22 = *a3;
    RtlpHpMetadataCommit(v14, v14 + 4096, v11 - 4096, (unsigned int)&v22, 0);
  }
  memset_0((void *)v15, 0, 0x900uLL);
  *(_QWORD *)(v15 + 240) = v15 + 2304;
  *(_QWORD *)(v15 + 248) = v15 + v8;
  *(_QWORD *)(v15 + 256) = v11 + v15;
  *(_QWORD *)(v15 + 264) = v15 + v12;
  *(_WORD *)(v15 + 30) = v13 | *(_WORD *)(v15 + 30) & 0xFFFE;
  _InterlockedAdd64((volatile signed __int64 *)(v15 + 128), v12 >> 12);
  _InterlockedAdd64((volatile signed __int64 *)(v15 + 136), v24 >> 12);
LABEL_13:
  if ( v23 )
  {
    v22 = *a3;
    RtlpHpFreeVA((ULONG_PTR *)&v23, &v19, 0x8000, &v22);
  }
  return v15;
}
