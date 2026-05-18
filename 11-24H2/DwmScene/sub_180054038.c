/*
 * XREFs of sub_180054038 @ 0x180054038
 * Callers:
 *     sub_180054158 @ 0x180054158 (sub_180054158.c)
 * Callees:
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

bool __fastcall sub_180054038(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v5; // rdx
  const void *v6; // rax
  size_t v7; // r8
  const void *v8; // r10

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
  {
    sub_1800138F8(a2 + 8);
    if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(v5 + 24) )
    {
      v6 = (const void *)sub_1800138F8(a1 + 8);
      if ( !memcmp(v6, v8, v7) )
        return _mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)(a1 + 40), *(__m128 *)(a2 + 40))) == 15;
    }
  }
  return v2;
}
