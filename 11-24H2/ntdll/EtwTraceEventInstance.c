/*
 * XREFs of EtwTraceEventInstance @ 0x18015A410
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceUmEvent @ 0x18001D120 (EtwpTraceUmEvent.c)
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwTraceEventInstance(int a1, __m128i *a2, __int64 *a3, __int64 *a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // edx
  NTSTATUS v17; // eax
  __m128i Fields; // [rsp+20h] [rbp-E0h] BYREF
  __m256i v20; // [rsp+30h] [rbp-D0h]
  int v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+54h] [rbp-ACh]
  __int128 v23; // [rsp+58h] [rbp-A8h]
  __int8 *v24; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+74h] [rbp-8Ch]

  memset_thunk_772440563353939046(&Fields, 0, 0x148uLL);
  v8 = 0;
  if ( !a2 )
    return 87LL;
  if ( !a3 )
    return 87LL;
  v9 = a2->m128i_u16[0];
  if ( v9 < 0x38 )
    return 87LL;
  v10 = a2[1];
  Fields = *a2;
  v11 = a2[2];
  *(__m128i *)v20.m256i_i8 = v10;
  *(__m128i *)&v20.m256i_u64[2] = v11;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
  if ( (v12 & 0x80000) != 0 )
  {
    v12 &= ~0x80000u;
    v20.m256i_i32[7] = v12;
  }
  v13 = *a3;
  if ( !*a3 )
    return 87LL;
  v21 = *((_DWORD *)a3 + 2);
  *(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)(v13 + 8);
  if ( a4 )
  {
    v14 = *a4;
    if ( !*a4 )
      return 87LL;
    v22 = *((_DWORD *)a4 + 2);
    v23 = *(_OWORD *)(v14 + 8);
  }
  else
  {
    v22 = 0;
    v23 = 0LL;
  }
  v15 = v9 - 56;
  if ( (v12 & 0x100000) == 0 )
  {
    v25 = v9 - 56;
    v20.m256i_i32[7] = v12 | 0x100000;
    Fields.m128i_i16[0] = 88;
    v24 = &a2[3].m128i_i8[8];
    v26 = 0;
LABEL_16:
    if ( (a1 & 0x1000000) != 0 )
    {
      return (unsigned int)EtwpTraceUmEvent(a1, (unsigned __int16 *)&Fields, 0x48u, -1072365568);
    }
    else
    {
      v17 = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x800u, 0x48u, &Fields);
      if ( !v17 )
        return v8;
      return RtlNtStatusToDosError(v17);
    }
  }
  if ( (v15 & 0xF) == 0 && v15 <= 0x100 )
  {
    memmove(&v24, &a2[3].m128i_u64[1], v15);
    Fields.m128i_i16[0] = v9 + 16;
    goto LABEL_16;
  }
  return 87LL;
}
