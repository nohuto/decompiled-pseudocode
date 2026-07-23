/*
 * XREFs of MiCheckPteRelease @ 0x14068F110
 * Callers:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckPteRelease(__int64 a1, unsigned __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v6; // rbx
  int SystemRegionType; // eax
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  int v10; // esi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  const signed __int64 *v13; // rdx
  unsigned __int64 i; // rcx
  __int64 v15; // r11
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  volatile signed __int32 *v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 result; // rax
  int v26; // r8d
  unsigned __int64 v27; // rcx

  v6 = (__int64)(a2 << 25) >> 16;
  if ( !a3 )
    KeBugCheckEx(0xDAu, 0x300uLL, (__int64)(a2 << 25) >> 16, 0LL, 0LL);
  SystemRegionType = MiGetSystemRegionType((__int64)(a2 << 25) >> 16);
  v8 = *(_QWORD *)(a1 + 32);
  if ( a2 < v8 || SystemRegionType != (unsigned int)MiGetSystemRegionType((__int64)(v8 << 25) >> 16) )
    KeBugCheckEx(0xDAu, 0x301uLL, v6, 0LL, 0LL);
  v9 = (__int64)(a2 - v8) >> 3;
  v10 = *(_DWORD *)(a1 + 40) & 1;
  v11 = 2 * ((unsigned __int64)(unsigned int)v9 >> (4 * (*(_BYTE *)(a1 + 40) & 1u)));
  if ( _bittest64(*(const signed __int64 **)(a1 + 24), v11) )
    KeBugCheckEx(0xDAu, 0x303uLL, v6, a3, 0LL);
  LOBYTE(v12) = 2;
  if ( v11 && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * ((v11 - 2) >> 5)) >> ((v11 - 2) & 0x1F) == 2 )
    KeBugCheckEx(0xDAu, 0x304uLL, v6, a3, 0LL);
  v13 = *(const signed __int64 **)(a1 + 24);
  for ( i = v11 + 1; _bittest64(v13, i) == 1; i += 2LL )
    ;
  v15 = ((i - v11) >> 1) + 1;
  BugCheckParameter4 = 16 * v15;
  if ( !v10 )
    BugCheckParameter4 = v15;
  if ( BugCheckParameter4 != a3 )
    KeBugCheckEx(0xDAu, 0x305uLL, v6, a3, BugCheckParameter4);
  v17 = 2 * ((unsigned __int64)(unsigned int)v9 >> (4 * (*(_BYTE *)(a1 + 40) & 1u)));
  v18 = v11 + 2 * v15;
  while ( v17 < v18 )
  {
    if ( _bittest64(v13, v17) == 1 )
      KeBugCheckEx(
        0xDAu,
        0x306uLL,
        v6,
        v6
      + (((v17 << 11) - ((unsigned __int64)(unsigned int)v9 >> (4 * (*(_BYTE *)(a1 + 40) & 1u)) << 12)) & 0xFFFFFFFFFFFFF000uLL),
        v15 * (v10 != 0 ? 16LL : 1LL));
    v17 += 2LL;
  }
  v19 = v18 - 2;
  while ( 1 )
  {
    v24 = v11 & 0x1F;
    v22 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4 * (v11 >> 5));
    if ( v11 >= v19 )
      break;
    LOBYTE(v20) = 1;
    if ( v24 + 1 <= 0x20 )
    {
      v21 = 1 << v24;
LABEL_31:
      _InterlockedOr(v22, v21);
      goto LABEL_32;
    }
    if ( (v11 & 0x1F) == 0 )
      goto LABEL_30;
    _InterlockedOr(v22++, ((1 << (32 - (v11 & 0x1F))) - 1) << v24);
    v20 = 1LL - (32 - (unsigned int)(v11 & 0x1F));
    if ( v20 >= 0x20 )
    {
      v23 = v20 >> 5;
      v20 += -32LL * (v20 >> 5);
      do
      {
        *v22++ = -1;
        --v23;
      }
      while ( v23 );
    }
    if ( v20 )
    {
LABEL_30:
      v21 = (1 << v20) - 1;
      goto LABEL_31;
    }
LABEL_32:
    v11 += 2LL;
  }
  if ( v24 + 2 <= 0x20 )
  {
    result = (unsigned int)(3 << v24);
    goto LABEL_42;
  }
  if ( (v11 & 0x1F) == 0 )
    goto LABEL_41;
  v26 = v11 & 0x1F;
  _InterlockedOr(v22, ((1 << (32 - v26)) - 1) << v24);
  result = (unsigned int)(32 - v26);
  ++v22;
  v12 = 2 - result;
  if ( (unsigned __int64)(2 - result) >= 0x20 )
  {
    v27 = v12 >> 5;
    result = -32LL * (v12 >> 5);
    v12 += result;
    do
    {
      *v22++ = -1;
      --v27;
    }
    while ( v27 );
  }
  if ( v12 )
  {
LABEL_41:
    result = (unsigned int)((1 << v12) - 1);
LABEL_42:
    _InterlockedOr(v22, result);
  }
  return result;
}
