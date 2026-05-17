/*
 * XREFs of EtwEventWriteStartScenario @ 0x1800CF560
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventActivityIdControl @ 0x18001C4A0 (EtwEventActivityIdControl.c)
 *     ProviderHandleLookup @ 0x18001D260 (ProviderHandleLookup.c)
 *     EtwpEventWriteFull @ 0x18003B0D0 (EtwpEventWriteFull.c)
 *     EtwEventEnabled @ 0x1800CF760 (EtwEventEnabled.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwEventWriteStartScenario(__int64 a1, __int128 *a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm0
  _GUID ActivityId; // xmm1
  unsigned __int64 v14; // xmm1_8
  int v15; // [rsp+50h] [rbp-19h] BYREF
  _GUID v16[3]; // [rsp+58h] [rbp-11h] BYREF

  *(_DWORD *)&v16[0].Data2 = 0;
  v15 = 0;
  if ( a2 )
  {
    if ( (unsigned __int8)EtwEventEnabled()
      && (memset(v16, 0, sizeof(v16)), (v11 = ProviderHandleLookup(v10, a1)) != 0)
      && WORD2(a1) == *(_WORD *)(v11 + 84) )
    {
      v12 = *a2;
      v16[0].Data1 = *(_DWORD *)(v11 + 88);
      *(_OWORD *)v16[0].Data4 = v12;
      ActivityId = NtCurrentTeb()->ActivityId;
      *(_GUID *)v16[1].Data4 = ActivityId;
      if ( _mm_cvtsi128_si32((__m128i)ActivityId)
        || ActivityId.Data2
        || ActivityId.Data3
        || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)ActivityId, 8))
        || (v14 = _mm_srli_si128((__m128i)ActivityId, 8).m128i_u64[0], BYTE1(v14))
        || BYTE2(v14)
        || BYTE3(v14)
        || BYTE4(v14)
        || BYTE5(v14)
        || BYTE6(v14)
        || HIBYTE(v14)
        || (v8 = EtwEventActivityIdControl(3, (_GUID *)v16[1].Data4)) == 0
        && (v8 = EtwEventActivityIdControl(2, (_GUID *)v16[1].Data4)) == 0 )
      {
        *(_DWORD *)v16[2].Data4 = 10;
        v8 = EtwpEventWriteFull(a1, a2, 0LL, 0, 0, 0LL, 0LL, a3, a4);
        NtTraceControl(13LL, v16, 48LL, 0LL, 0, &v15);
      }
    }
    else
    {
      return 6;
    }
  }
  else
  {
    return 87;
  }
  return v8;
}
