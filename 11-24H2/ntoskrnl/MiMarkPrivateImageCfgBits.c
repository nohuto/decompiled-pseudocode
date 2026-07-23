/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x14091BF74
 * Callers:
 *     MiCommitVadCfgBits @ 0x14091C360 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiGetControlAreaLoadConfig @ 0x14045AB84 (MiGetControlAreaLoadConfig.c)
 *     MiPopulateCfgBitMap @ 0x14091C830 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(int a1, __int64 a2, __int64 a3)
{
  int v5; // ebp
  __int64 *v6; // r12
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax

  v5 = 0;
  v6 = **(__int64 ***)(a3 + 72);
  v7 = *v6;
  v8 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
  v9 = (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) + 1;
  if ( (unsigned int)MiVadMapsLargeImage(a3) )
  {
    v5 = 1;
    result = MiPopulateCfgBitMap(a1, v8, v9, 0LL);
    if ( (int)result < 0 )
      return result;
    v8 += (unsigned __int64)*(unsigned __int8 *)(MiLocateLockedVadEvent(a3, 16) + 8) << 16;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL) & 0xFFF;
    v14 = (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL) >> 12;
    if ( v9 > v8 + ((__int64)(*(_QWORD *)(v7 + 64) + 8 * (v14 + (v13 != 0)) - *(_QWORD *)(a3 + 80)) >> 3 << 12) )
      v9 = v8 + ((__int64)(*(_QWORD *)(v7 + 64) + 8 * (v14 + (v13 != 0)) - *(_QWORD *)(a3 + 80)) >> 3 << 12);
  }
  v10 = *(_QWORD *)(a3 + 80);
  v11 = *(_QWORD *)(v7 + 64);
  if ( v10 != v11 && !v5 )
  {
    v15 = (v10 - v11) >> 3 << 12;
    v8 += v15;
    v9 += v15;
  }
  MiGetControlAreaLoadConfig((__int64)v6);
  return MiPopulateCfgBitMap(a1, v8, v9, a3);
}
