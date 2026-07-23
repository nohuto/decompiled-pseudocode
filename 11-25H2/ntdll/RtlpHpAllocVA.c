/*
 * XREFs of RtlpHpAllocVA @ 0x1800BB510
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180033D4C (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1800349E4 (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrReserve @ 0x1800BAAA4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800BB710 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800BBD44 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpTlLogVAChange @ 0x1800BBF10 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011E9A0 (RtlpHpVaMgrCtxCommit.c)
 *     RtlHeapZero @ 0x180168590 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocVA(PVOID *a1, __m128i **a2, __int64 a3, unsigned int a4, ULONG a5, __m128i *RegionSize)
{
  __m128i v10; // xmm1
  __int64 v11; // r10
  __m128i *v12; // r8
  __int64 v13; // xmm0_8
  int v14; // eax
  __m128i *v15; // r8
  int v16; // ebx
  __int64 v18; // rcx
  int v19; // [rsp+28h] [rbp-50h]
  _DWORD v20[3]; // [rsp+50h] [rbp-28h] BYREF
  int v21; // [rsp+5Ch] [rbp-1Ch]
  __int64 v22; // [rsp+60h] [rbp-18h]

  v21 = 0;
  v10 = *RegionSize;
  v11 = RegionSize->m128i_i64[0];
  if ( HIBYTE(RegionSize->m128i_u32[0]) )
    v20[0] = BYTE3(RegionSize->m128i_i64[0]) - 1;
  else
    v20[0] = -1;
  v20[2] = BYTE2(v11);
  v20[1] = BYTE1(v11);
  if ( (v11 & 8) != 0 )
    v21 = 1;
  v12 = *a2;
  v13 = _mm_srli_si128(v10, 8).m128i_u64[0];
  v22 = v13;
  v14 = (_DWORD)v12 - 1;
  if ( a4 == 0x2000 )
  {
    RegionSize = (__m128i *)((char *)v12 - (v14 & 0xFFFFF) + 0xFFFFF);
    v18 = RtlpHpVaMgrCtxAlloc(&unk_1801D09C8, &RegionSize, a3, v20);
    if ( v18 )
    {
      *a2 = RegionSize;
      *a1 = (PVOID)v18;
      goto LABEL_9;
    }
    v16 = -1073741670;
  }
  else
  {
    v15 = (__m128i *)((char *)v12 - (v14 & 0xFFF) + 4095);
    RegionSize = v15;
    if ( (unsigned __int8)(_mm_cvtsi128_si32(_mm_srli_si128(v10, 1)) - 2) > 2u )
    {
      v16 = RtlpHpEnvAllocVA(a1, (PSIZE_T)&RegionSize, a5, v19, BYTE1(v11), v13);
      if ( v16 < 0 )
        goto LABEL_10;
      goto LABEL_8;
    }
    v16 = RtlpHpVaMgrCtxCommit(&unk_1801D09C8, *a1, v15, a5);
    if ( v16 >= 0 )
    {
      if ( (a4 & 0x40000000) != 0 )
        RtlHeapZero(*a1, RegionSize);
LABEL_8:
      *a2 = RegionSize;
LABEL_9:
      v16 = 0;
    }
  }
LABEL_10:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(a4, *a2, *a1, (unsigned int)v16);
  return (unsigned int)v16;
}
