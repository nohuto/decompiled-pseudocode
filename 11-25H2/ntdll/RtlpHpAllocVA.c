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

__int64 __fastcall RtlpHpAllocVA(__int64 *a1, __m128i **a2, __int64 a3, unsigned int a4, unsigned int a5, __m128i *a6)
{
  __m128i v10; // xmm1
  __int64 v11; // r10
  __m128i *v12; // r8
  int v13; // eax
  __m128i *v14; // r8
  int v15; // ebx
  __int64 v17; // rcx
  _DWORD v18[3]; // [rsp+50h] [rbp-28h] BYREF
  int v19; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int64 v20; // [rsp+60h] [rbp-18h]

  v19 = 0;
  v10 = *a6;
  v11 = a6->m128i_i64[0];
  if ( HIBYTE(a6->m128i_u32[0]) )
    v18[0] = BYTE3(a6->m128i_i64[0]) - 1;
  else
    v18[0] = -1;
  v18[2] = BYTE2(v11);
  v18[1] = BYTE1(v11);
  if ( (v11 & 8) != 0 )
    v19 = 1;
  v12 = *a2;
  v20 = _mm_srli_si128(v10, 8).m128i_u64[0];
  v13 = (_DWORD)v12 - 1;
  if ( a4 == 0x2000 )
  {
    a6 = (__m128i *)((char *)v12 - (v13 & 0xFFFFF) + 0xFFFFF);
    v17 = RtlpHpVaMgrCtxAlloc(&unk_1801D09C8, &a6, a3, v18);
    if ( v17 )
    {
      *a2 = a6;
      *a1 = v17;
      goto LABEL_9;
    }
    v15 = -1073741670;
  }
  else
  {
    v14 = (__m128i *)((char *)v12 - (v13 & 0xFFF) + 4095);
    a6 = v14;
    if ( (unsigned __int8)(_mm_cvtsi128_si32(_mm_srli_si128(v10, 1)) - 2) > 2u )
    {
      v15 = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&a6, a3, a4, a5);
      if ( v15 < 0 )
        goto LABEL_10;
      goto LABEL_8;
    }
    v15 = RtlpHpVaMgrCtxCommit(&unk_1801D09C8, *a1, v14, a5);
    if ( v15 >= 0 )
    {
      if ( (a4 & 0x40000000) != 0 )
        RtlHeapZero(*a1, a6);
LABEL_8:
      *a2 = a6;
LABEL_9:
      v15 = 0;
    }
  }
LABEL_10:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(a4, *a2, *a1, (unsigned int)v15);
  return (unsigned int)v15;
}
