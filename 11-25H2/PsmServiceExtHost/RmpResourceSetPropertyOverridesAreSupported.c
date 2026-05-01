/*
 * XREFs of RmpResourceSetPropertyOverridesAreSupported @ 0x18005ED28
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18003A114 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetPropertyOverridesAreSupported(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v6; // eax
  _BYTE v7[96]; // [rsp+20h] [rbp-29h] BYREF
  __int16 v8; // [rsp+80h] [rbp+37h]
  char v9; // [rsp+82h] [rbp+39h]

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 0x100 || (unsigned __int8)v1 != v1 || (v1 & 1) == 0 && *(_QWORD *)(a1 + 48) != -1LL )
    return 0LL;
  if ( (v1 & 2) == 0 && *(_QWORD *)(a1 + 56) != -1LL )
    return 0LL;
  if ( (v1 & 4) == 0 && *(_QWORD *)(a1 + 64) != -1LL )
    return 0LL;
  if ( (v1 & 8) == 0 && *(_QWORD *)(a1 + 72) != -1LL )
    return 0LL;
  if ( (v1 & 0x10) == 0 && *(_QWORD *)(a1 + 80) != _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0] )
    return 0LL;
  if ( (v1 & 0x20) == 0 && (*(_DWORD *)(a1 + 88) & 3) != 1 )
    return 0LL;
  if ( (v1 & 0x40) == 0 && (*(_BYTE *)(a1 + 88) & 8) != 0 )
    return 0LL;
  if ( (v1 & 0x80u) == 0LL && (*(_BYTE *)(a1 + 88) & 0x20) != 0 )
    return 0LL;
  if ( (v1 & 0x10) != 0 && (*(_BYTE *)(a1 + 88) & 0x20) == 0 )
    return 0LL;
  memset_0(v7, 0, 0x68uLL);
  v3 = *(_DWORD *)(a1 + 32);
  if ( (v3 & 0xF000) != 0 )
    return 0LL;
  v4 = 0;
  if ( (v3 & 1) != 0 )
  {
    v6 = HIBYTE(v3);
    if ( (_BYTE)v6 && (unsigned __int8)v6 > *(_BYTE *)(a1 + 36) )
      return 0LL;
  }
  else if ( v3 || *(_BYTE *)(a1 + 36) != v7[36] )
  {
    return 0LL;
  }
  if ( *(_WORD *)(a1 + 96) != v8
    || *(_BYTE *)(a1 + 98) != v9
    || *(_DWORD *)(a1 + 100)
    || (*(_BYTE *)(a1 + 16) & 2) == 0 && *(_QWORD *)a1 )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 16) & 4) != 0 )
    return 1LL;
  LOBYTE(v4) = *(_QWORD *)(a1 + 8) == 0LL;
  return v4;
}
