/*
 * XREFs of HalpApicRequestInterrupt @ 0x1403EA6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicRequestInterrupt(__int64 a1, __int64 a2, __m128i *a3, __int64 a4, _DWORD *a5)
{
  char v5; // bp
  unsigned int v6; // r14d
  __m128i *v7; // rdi
  bool v8; // zf
  unsigned int v9; // esi
  unsigned int v10; // r15d
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // xmm0_8
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  __m128i v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]

  v5 = 0;
  LODWORD(v26) = 0;
  v6 = a4;
  v7 = a3;
  v8 = *a5 == -1;
  v25 = 0LL;
  if ( !v8 )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) != -10 )
  {
    v19 = a3[1].m128i_i64[0];
    v20 = _mm_cvtsi128_si32(*a3);
    v25 = *a3;
    v26 = v19;
    v21 = v20 - 4;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
          return 3221225485LL;
        _BitScanForward(&v23, v25.m128i_u32[3]);
        v25.m128i_i32[3] = 1 << v23;
      }
      else
      {
        _BitScanForward(&v24, v25.m128i_u32[2]);
        v25.m128i_i32[2] = 1 << v24;
      }
    }
    v7 = &v25;
  }
  v9 = 0;
  v10 = (unsigned __int8)a4;
  switch ( v7->m128i_i32[0] )
  {
    case 4:
      v9 = v7->m128i_u32[2];
      if ( !HalpApicX2Mode )
      {
        v9 <<= 24;
        if ( HalpApicValidateSelfIpi )
        {
          if ( v7->m128i_i32[2] != -1 )
            v5 = (unsigned int)guard_dispatch_icall_no_overrides(32LL, a2, a3, a4) >> 24 == v7->m128i_i32[2];
        }
      }
      break;
    case 1:
      v10 = (unsigned __int8)a4 | 0x80000;
      break;
    case 2:
      v10 = (unsigned __int8)a4 | 0xC0000;
      break;
    case 3:
      v5 = HalpApicValidateSelfIpi;
      v10 = (unsigned __int8)a4 | 0x40000;
      break;
    case 5:
      v10 = (unsigned __int8)a4 | 0x800;
      v9 = v7->m128i_i32[2] << 24;
      break;
    case 6:
      v10 = (unsigned __int8)a4 | 0x800;
      if ( HalpApicX2Mode )
        v9 = (v7->m128i_i32[2] << 16) | (unsigned __int16)v7->m128i_i32[3];
      else
        v9 = ((16 * v7->m128i_i32[2]) | v7->m128i_i32[3] & 0xF) << 24;
      break;
    default:
      return 3221225485LL;
  }
  v11 = a5[1];
  if ( v11 == 1 )
    goto LABEL_6;
  v16 = v11 - 2;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 3 )
        {
          v10 |= 0x500u;
          goto LABEL_6;
        }
        return 3221225485LL;
      }
      v10 |= 0x700u;
    }
    else
    {
      v10 |= 0x200u;
    }
  }
  else
  {
    v10 |= 0x400u;
  }
LABEL_6:
  guard_dispatch_icall_no_overrides(v9, v10, a3, a4);
  if ( v5 && a5[1] == 1 )
  {
    while ( ((unsigned int)guard_dispatch_icall_no_overrides(((v6 >> 1) & 0x7FFFFFF0) + 512, v12, v13, v14) & (1 << (v6 & 0x1F))) == 0 )
      ;
  }
  return 0LL;
}
