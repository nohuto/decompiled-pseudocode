/*
 * XREFs of SepAdtAuditThisEventByCategoryWithContext @ 0x1409875D0
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140418430 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140482770 (SeAuditingFileEventsWithContextEx.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 */

char __fastcall SepAdtAuditThisEventByCategoryWithContext(
        unsigned int a1,
        int a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  __int64 v4; // rbp
  char v6; // di
  int v7; // eax
  char v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  _BYTE *ClientToken; // r8
  unsigned int v12; // edx
  __int16 v13; // r12
  __int16 v14; // r11
  unsigned int v15; // r9d
  int v16; // r10d
  unsigned int v17; // esi
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int16 *v21; // rcx
  int v22; // eax
  __m128i v23; // xmm3
  __m128i v24; // xmm2
  __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm2
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1;
  v6 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v7 = SeAuditingStateByCategory[a1];
  if ( v7 )
  {
    if ( (v7 & a2) != 0 )
      return 1;
    v8 = 0;
    if ( !SepTokenPolicyCounterByCategory[a1] )
      return v8;
    if ( a3 )
    {
      p_SubjectContext = a3;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[119] == 2 )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        if ( a1 )
        {
          if ( a1 < 8 )
            goto LABEL_34;
          v23 = 0LL;
          v24 = 0LL;
          do
          {
            v25 = v15 + 4;
            v26 = _mm_unpacklo_epi16(_mm_loadl_epi64((const __m128i *)&AdtpPerCategoryCount[v15 / 4]), (__m128i)0LL);
            v15 += 8;
            v23 = _mm_add_epi32(v23, v26);
            v24 = _mm_add_epi32(
                    v24,
                    _mm_unpacklo_epi16(
                      _mm_loadl_epi64((const __m128i *)((char *)AdtpPerCategoryCount + 2 * v25)),
                      (__m128i)0LL));
          }
          while ( v15 < (a1 & 0xFFFFFFF8) );
          v27 = _mm_add_epi32(v24, v23);
          v28 = _mm_add_epi32(v27, _mm_srli_si128(v27, 8));
          v12 = _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
        }
        if ( v15 >= a1 )
        {
LABEL_14:
          v16 = *((unsigned __int16 *)AdtpPerCategoryCount + v4);
          v17 = v16 + v12;
          while ( v12 < v17 )
          {
            v18 = (unsigned __int8)ClientToken[((unsigned __int64)v12 >> 1) + 88] >> (4 * (v12 & 1));
            if ( (v18 & 1) != 0 )
            {
              if ( (v6 & 2) != 0 )
                goto LABEL_38;
              ++v13;
            }
            if ( (v18 & 4) != 0 )
            {
              if ( (v6 & 0x20) != 0 )
                goto LABEL_38;
              ++v14;
            }
            ++v12;
          }
          if ( (v6 & 1) != 0 && v13 == (_WORD)v16 || (v6 & 0x10) != 0 && v14 == (_WORD)v16 )
          {
LABEL_38:
            v8 = 1;
            goto LABEL_24;
          }
          goto LABEL_24;
        }
LABEL_34:
        v19 = v15;
        v20 = a1 - v15;
        v21 = (unsigned __int16 *)AdtpPerCategoryCount + v19;
        do
        {
          v22 = *v21++;
          v12 += v22;
          --v20;
        }
        while ( v20 );
        goto LABEL_14;
      }
    }
    else
    {
      SepAuditFailed(-1073741700);
    }
LABEL_24:
    if ( !a3 )
      SeReleaseSubjectContext(p_SubjectContext);
    return v8;
  }
  return 0;
}
