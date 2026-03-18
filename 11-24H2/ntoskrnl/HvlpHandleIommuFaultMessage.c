/*
 * XREFs of HvlpHandleIommuFaultMessage @ 0x14058AE50
 * Callers:
 *     HvlSharedIsr @ 0x140444780 (HvlSharedIsr.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpHandleIommuFaultMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  char v6; // al
  int v7; // edx
  int v8; // ecx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 8);
  v13 = 0LL;
  v6 = (unsigned __int8)v4 >> 2;
  v7 = v4 & 1;
  v10 = 0LL;
  BYTE4(v10) = v6 & 1;
  v11 = 0LL;
  LODWORD(v10) = 2;
  v12 = 0LL;
  DWORD2(v11) = v7 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFFE;
  if ( v7 )
    *(_QWORD *)&v11 = *(_QWORD *)(a1 + 32);
  v8 = -(*(_DWORD *)a1 != 0);
  DWORD2(v12) = *(unsigned __int16 *)(a1 + 26);
  *(_QWORD *)&v12 = *(_QWORD *)(a1 + 40);
  HIDWORD(v11) = 6 - v8;
  return guard_dispatch_icall_no_overrides(*(unsigned __int16 *)(a1 + 24), &v10, a1, a4);
}
