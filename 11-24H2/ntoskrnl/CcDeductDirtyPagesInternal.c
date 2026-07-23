/*
 * XREFs of CcDeductDirtyPagesInternal @ 0x1402E5440
 * Callers:
 *     CcDeductDirtyPages @ 0x1402E53FC (CcDeductDirtyPages.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140496AE0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcUpdateExternalCacheInfoEx @ 0x140578190 (CcUpdateExternalCacheInfoEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall CcDeductDirtyPagesInternal(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // r11
  _QWORD *v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  *(_QWORD *)(a3 + 1056) -= a2;
  if ( a4 )
    a4[124] -= a2;
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x35B1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= a2;
    v4 = -(__int64)a2;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 40LL), v4);
    v5 = *(_QWORD **)(a1 + 512);
    v5[31] += v5[5];
    v6 = v5[32];
    v7 = *(_QWORD *)(a1 + 512);
    if ( v6 <= *(_QWORD *)(v7 + 40) )
      v6 = *(_QWORD *)(v7 + 40);
    v5[32] = v6;
    if ( a4 )
    {
      v5[33] += a4[127];
      v5[34] = a4[128];
      v5[35] = a4[129];
    }
    ++v5[36];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), v4);
  }
}
