/*
 * XREFs of RtlpHpHeapAllocate @ 0x1800EF054
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpLogHeapCommit @ 0x1800235BC (RtlpLogHeapCommit.c)
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpAllocVA @ 0x18009CD20 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x18009D150 (RtlpHpFreeVA.c)
 *     RtlpHpLfhContextMaximumExtension @ 0x1800EF328 (RtlpHpLfhContextMaximumExtension.c)
 *     RtlpHpMetadataCommit @ 0x1800EF3BC (RtlpHpMetadataCommit.c)
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x18011B0B0 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(int a1, unsigned int a2, __int128 *a3)
{
  unsigned int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // r15
  __int64 v12; // rcx
  volatile signed __int64 *v13; // rbx
  __int16 v14; // di
  __int16 v15; // ax
  __int64 v17; // rax
  int v18[2]; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v19[2]; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR v22; // [rsp+A8h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  RtlpHpLfhContextMaximumExtension(a2);
  v6 = RtlpHpVsCalculateAffinitySlotCount(a2);
  v7 = *a3;
  v8 = 4096LL;
  *(_QWORD *)v18 = 4096LL;
  v10 = v9 + (v6 << 7) - (unsigned __int64)((4 * (_BYTE)v6 - 1) & 0x3F) + 4LL * v6 + 2367;
  v11 = 4095 - ((v10 - 1) & 0xFFF) + v10;
  v22 = v11;
  if ( (a1 & 0x2000000) != 0
    || (a1 & 0x40000000) != 0
    || BYTE2(v7)
    || (v7 & 6) != 6 && (unsigned __int8)(BYTE1(v7) - 2) > 2u )
  {
    *(_OWORD *)RegionSize = v7;
    if ( (int)RtlpHpAllocVA(
                &BaseAddress,
                (__m128i **)&v22,
                0LL,
                0x2000u,
                (a1 & 0x40000000) != 0 ? 64 : 4,
                (__m128i *)RegionSize) >= 0 )
    {
      *(_OWORD *)v19 = *a3;
      if ( (int)RtlpHpAllocVA(
                  &BaseAddress,
                  (__m128i **)v18,
                  0LL,
                  0x1000u,
                  (a1 & 0x40000000) != 0 ? 64 : 4,
                  (__m128i *)v19) >= 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v12 = 2147353472LL;
        if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          v8 = *(_QWORD *)v18;
          RtlpLogHeapCommit((__int64)BaseAddress, (__int64)BaseAddress, *(__int64 *)v18, 11);
        }
        else
        {
          v8 = *(_QWORD *)v18;
        }
        v13 = (volatile signed __int64 *)BaseAddress;
        v14 = 0;
        BaseAddress = 0LL;
        goto LABEL_9;
      }
    }
    v13 = 0LL;
  }
  else
  {
    v14 = 1;
    *(_OWORD *)v19 = v7;
    v17 = RtlpHpMetadataAlloc(v11, 0x1000uLL, 1, (__int128 *)v19);
    v13 = (volatile signed __int64 *)v17;
    if ( v17 )
    {
      *(_OWORD *)RegionSize = *a3;
      RtlpHpMetadataCommit(v17, v17 + 4096, v22 - 4096, (unsigned int)RegionSize, 0);
LABEL_9:
      memset_thunk_772440563353939046((void *)v13, 0, 0x900uLL);
      *((_QWORD *)v13 + 30) = v13 + 288;
      *((_QWORD *)v13 + 31) = (char *)v13 + v8;
      *((_QWORD *)v13 + 32) = (char *)v13 + v11;
      v15 = *((_WORD *)v13 + 15);
      *((_QWORD *)v13 + 33) = (char *)v13 + v22;
      *((_WORD *)v13 + 15) = v14 | v15 & 0xFFFE;
      _InterlockedAdd64(v13 + 16, v22 >> 12);
      _InterlockedAdd64(v13 + 17, *(_QWORD *)v18 >> 12);
    }
  }
  if ( BaseAddress )
  {
    *(_OWORD *)RegionSize = *a3;
    RtlpHpFreeVA(&BaseAddress, &v22, 0x8000u, (__m128i *)RegionSize);
  }
  return v13;
}
