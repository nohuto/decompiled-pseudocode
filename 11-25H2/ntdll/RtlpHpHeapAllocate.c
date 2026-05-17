/*
 * XREFs of RtlpHpHeapAllocate @ 0x1800349E4
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataCommit @ 0x180033EE4 (RtlpHpMetadataCommit.c)
 *     RtlpHpLfhContextMaximumExtension @ 0x180034950 (RtlpHpLfhContextMaximumExtension.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocVA @ 0x1800BB510 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800BB940 (RtlpHpFreeVA.c)
 *     RtlpLogHeapCommit @ 0x1801170C8 (RtlpLogHeapCommit.c)
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x18011E738 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(int a1, unsigned int a2, __int128 *a3)
{
  unsigned int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rbx
  __int16 v14; // di
  __int16 v15; // ax
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int128 v20; // [rsp+50h] [rbp-10h] BYREF
  void *v21; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0LL;
  RtlpHpLfhContextMaximumExtension(a2);
  v6 = RtlpHpVsCalculateAffinitySlotCount(a2);
  v7 = *a3;
  v8 = 4096LL;
  v18 = 4096LL;
  v10 = v9 + (v6 << 7) - (unsigned __int64)((4 * (_BYTE)v6 - 1) & 0x3F) + 4LL * v6 + 2367;
  v11 = 4095 - ((v10 - 1) & 0xFFF) + v10;
  v22 = v11;
  if ( (a1 & 0x2000000) != 0
    || (a1 & 0x40000000) != 0
    || BYTE2(v7)
    || (v7 & 6) != 6 && (unsigned __int8)(BYTE1(v7) - 2) > 2u )
  {
    v20 = v7;
    if ( (int)RtlpHpAllocVA(
                (unsigned int)&v21,
                (unsigned int)&v22,
                0,
                0x2000,
                (a1 & 0x40000000) != 0 ? 64 : 4,
                (__int64)&v20) >= 0 )
    {
      v19 = *a3;
      if ( (int)RtlpHpAllocVA(
                  (unsigned int)&v21,
                  (unsigned int)&v18,
                  0,
                  4096,
                  (a1 & 0x40000000) != 0 ? 64 : 4,
                  (__int64)&v19) >= 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v12 = 2147353472LL;
        if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          v8 = v18;
          RtlpLogHeapCommit(v21, v21, v18, 11LL);
        }
        else
        {
          v8 = v18;
        }
        v13 = (volatile signed __int64 *)v21;
        v14 = 0;
        v21 = 0LL;
        goto LABEL_9;
      }
    }
    v13 = 0LL;
  }
  else
  {
    v14 = 1;
    v19 = v7;
    v17 = RtlpHpMetadataAlloc(v11, 4096LL, 1LL, &v19);
    v13 = (volatile signed __int64 *)v17;
    if ( v17 )
    {
      v20 = *a3;
      RtlpHpMetadataCommit(v17, v17 + 4096, v22 - 4096, &v20, 0);
LABEL_9:
      memset_thunk_772440563353939046((void *)v13, 0, 0x900uLL);
      *((_QWORD *)v13 + 30) = v13 + 288;
      *((_QWORD *)v13 + 31) = (char *)v13 + v8;
      *((_QWORD *)v13 + 32) = (char *)v13 + v11;
      v15 = *((_WORD *)v13 + 15);
      *((_QWORD *)v13 + 33) = (char *)v13 + v22;
      *((_WORD *)v13 + 15) = v14 | v15 & 0xFFFE;
      _InterlockedAdd64(v13 + 16, v22 >> 12);
      _InterlockedAdd64(v13 + 17, v18 >> 12);
    }
  }
  if ( v21 )
  {
    v20 = *a3;
    RtlpHpFreeVA(&v21, &v22, 0x8000LL, &v20);
  }
  return v13;
}
