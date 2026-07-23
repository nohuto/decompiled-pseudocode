/*
 * XREFs of MiUpdatePfnForPrefetchByPte @ 0x140334220
 * Callers:
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiSetActivePfnHeat @ 0x1403FD670 (MiSetActivePfnHeat.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUpdatePfnForPrefetchByPte(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned __int64 v14; // rsi
  unsigned __int8 v15; // al
  unsigned int PfnPriority; // eax
  char v17; // cl
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  int v22; // [rsp+78h] [rbp+20h]

  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = MI_READ_PTE_LOCK_FREE(a1);
        v7 = v6;
        if ( (v6 & 1) != 0 )
        {
          v8 = 6;
          v9 = v6;
        }
        else
        {
          result = v6 & 0xC00;
          if ( result != 2048 )
            return result;
          result = MiInvalidPteConforms(v7);
          if ( !(_DWORD)result )
            return result;
          if ( qword_140E2DCC0 )
          {
            if ( (v7 & 0x10) != 0 )
              v9 &= ~0x10uLL;
            else
              v9 = v7 & ~qword_140E2DCC0;
          }
          v8 = 2;
        }
        v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
        v11 = 48 * v10;
        v12 = 48 * v10 - 0x220000000000LL;
        result = MiSafeLockPage(v10);
        v14 = (unsigned __int8)result;
        if ( (_BYTE)result == 17 )
          return result;
        if ( (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) != a1
          && (*(__int64 *)(v12 + 40) >= 0 || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          return MiUnlockPage(v12, result);
        }
        v15 = *(_BYTE *)(v12 + 34) & 7;
        if ( v8 != 6 )
          break;
        if ( v15 == 6 )
          goto LABEL_8;
        MiUnlockPage(v12, v14);
        if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v19 = (__int64)(a1 << 25) >> 16;
          if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            result = MiGetSystemRegionType(v19);
            if ( (_DWORD)result == 8 )
              return result;
          }
        }
      }
      if ( v15 >= 2u && v15 <= 4u && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 )
        break;
      MiUnlockPage(v12, v14);
    }
LABEL_8:
    result = 0xFFFFF68000000000uLL;
    if ( a1 < 0xFFFFF68000000000uLL )
      break;
    result = 0xFFFFF6FFFFFFFFFFuLL;
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    result = MI_READ_PTE_LOCK_FREE(a1);
    if ( v7 == result )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v14 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v14);
      __writecr8(v14);
    }
  }
  if ( v12 )
  {
    PfnPriority = MiGetPfnPriority(v12);
    if ( a2 != PfnPriority && a2 >= PfnPriority )
    {
      v17 = *(_BYTE *)(v12 + 34) & 7;
      if ( v17 == 2 )
      {
        if ( PfnPriority
          || (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
          || (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
          || (v18 = *(_QWORD *)(v12 + 16), (v18 & 4) == 0)
          || (unsigned __int16)v18 >> 12 != *(_DWORD *)(*((_QWORD *)qword_140E300C8
                                                        + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL))
                                                      + 1204LL) )
        {
          MiRelinkStandbyPage(v12, a2);
        }
      }
      else
      {
        v22 = *(_DWORD *)(v12 + 32);
        HIBYTE(v22) ^= (a2 ^ HIBYTE(v22)) & 7;
        *(_DWORD *)(v12 + 32) = v22;
      }
    }
    if ( a3 && (*(_BYTE *)(v12 + 34) & 7) == 2 )
    {
      v20 = *(_QWORD *)(v12 + 16) >> 3;
      if ( (*(_QWORD *)(v12 + 16) & 0x400LL) != 0 )
        LOBYTE(v20) = *(_QWORD *)(v12 + 16) >> 11;
      if ( (v20 & 1) != 0 )
      {
        MiSetActivePfnHeat(v12, 0LL);
        v5 = 1;
      }
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v14 < 2u )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v14);
      __writecr8(v14);
    }
    if ( v5 )
      return MiAddPageToHeatList(a3, 0xAAAAAAAAAAAAAAABuLL * (v11 >> 4), 3LL);
  }
  return result;
}
