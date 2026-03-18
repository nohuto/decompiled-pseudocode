/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x1409067EC
 * Callers:
 *     MiCommitVadCfgBits @ 0x1409059D0 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiGetControlAreaLoadConfig @ 0x140465A8C (MiGetControlAreaLoadConfig.c)
 *     MiPopulateCfgBitMap @ 0x140905EA0 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // ebp
  __int64 *v6; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 ControlAreaLoadConfig; // rax
  __int64 v14; // r8
  __int64 result; // rax
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rax

  v5 = 0;
  v6 = **(__int64 ***)(a3 + 72);
  v7 = *v6;
  v8 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
  v9 = (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) + 1;
  if ( (unsigned int)MiVadMapsLargeImage(a3) )
  {
    v5 = 1;
    result = MiPopulateCfgBitMap(a1, 1uLL, v10, 0, v8, v9, 0LL);
    if ( (int)result < 0 )
      return result;
    v8 += (unsigned __int64)*(unsigned __int8 *)(MiLocateLockedVadEvent(a3, 16) + 8) << 16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL) & 0xFFF;
    v17 = (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL) >> 12;
    if ( v9 > v8 + ((__int64)(*(_QWORD *)(v7 + 64) + 8 * (v17 + (v16 != 0)) - *(_QWORD *)(a3 + 80)) >> 3 << 12) )
      v9 = v8 + ((__int64)(*(_QWORD *)(v7 + 64) + 8 * (v17 + (v16 != 0)) - *(_QWORD *)(a3 + 80)) >> 3 << 12);
  }
  v11 = *(_QWORD *)(a3 + 80);
  v12 = *(_QWORD *)(v7 + 64);
  if ( v11 != v12 && !v5 )
  {
    v18 = (v11 - v12) >> 3 << 12;
    v8 += v18;
    v9 += v18;
  }
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig((__int64)v6);
  return MiPopulateCfgBitMap(a1, *(_QWORD *)(ControlAreaLoadConfig + 8), v14, 0, v8, v9, a3);
}
