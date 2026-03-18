/*
 * XREFs of MiUpdatePfnForPrefetchByPte @ 0x140231A30
 * Callers:
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiSetActivePfnHeat @ 0x1403FA970 (MiSetActivePfnHeat.c)
 *     MiAddPageToHeatList @ 0x14044047C (MiAddPageToHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUpdatePfnForPrefetchByPte(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  int v11; // r14d
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  __int64 result; // rax
  unsigned __int64 v17; // rsi
  unsigned __int8 v18; // al
  unsigned int PfnPriority; // eax
  char v20; // cl
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  int v25; // [rsp+78h] [rbp+20h]

  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = MI_READ_PTE_LOCK_FREE(a1);
        v10 = v6;
        if ( (v6 & 1) != 0 )
        {
          v11 = 6;
          v12 = v6;
        }
        else
        {
          result = v6 & 0xC00;
          if ( result != 2048 )
            return result;
          result = MiInvalidPteConforms(v10);
          if ( !(_DWORD)result )
            return result;
          if ( qword_140E2D940 )
          {
            if ( (v10 & 0x10) != 0 )
              v12 &= ~0x10uLL;
            else
              v12 = v10 & ~qword_140E2D940;
          }
          v11 = 2;
        }
        v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
        v14 = 48 * v13;
        v15 = 48 * v13 - 0x220000000000LL;
        result = MiSafeLockPage(v13, v7, v8, v9);
        v17 = (unsigned __int8)result;
        if ( (_BYTE)result == 17 )
          return result;
        if ( (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) != a1
          && (*(__int64 *)(v15 + 40) >= 0 || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          return MiUnlockPage(v15, (unsigned __int8)result);
        }
        v18 = *(_BYTE *)(v15 + 34) & 7;
        if ( v11 != 6 )
          break;
        if ( v18 == 6 )
          goto LABEL_8;
        MiUnlockPage(v15, (unsigned __int8)v17);
        if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v22 = (__int64)(a1 << 25) >> 16;
          if ( v22 < 0xFFFFF68000000000uLL || v22 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            result = MiGetSystemRegionType(v22);
            if ( (_DWORD)result == 8 )
              return result;
          }
        }
      }
      if ( v18 >= 2u && v18 <= 4u && (*(_QWORD *)(v15 + 24) & 0x4000000000000000LL) == 0 )
        break;
      MiUnlockPage(v15, (unsigned __int8)v17);
    }
LABEL_8:
    result = 0xFFFFF68000000000uLL;
    if ( a1 < 0xFFFFF68000000000uLL )
      break;
    result = 0xFFFFF6FFFFFFFFFFuLL;
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    result = MI_READ_PTE_LOCK_FREE(a1);
    if ( v10 == result )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v17 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v17);
      __writecr8(v17);
    }
  }
  if ( v15 )
  {
    PfnPriority = MiGetPfnPriority(v15);
    if ( a2 != PfnPriority && a2 >= PfnPriority )
    {
      v20 = *(_BYTE *)(v15 + 34) & 7;
      if ( v20 == 2 )
      {
        if ( PfnPriority
          || (*(_DWORD *)(v15 + 16) & 0x400LL) != 0
          || (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0
          || (v21 = *(_QWORD *)(v15 + 16), (v21 & 4) == 0)
          || (unsigned __int16)v21 >> 12 != *(_DWORD *)(*((_QWORD *)qword_140E2FD48
                                                        + ((*(_QWORD *)(v15 + 40) >> 43) & 0x3FFLL))
                                                      + 1204LL) )
        {
          MiRelinkStandbyPage(v15, a2);
        }
      }
      else
      {
        v25 = *(_DWORD *)(v15 + 32);
        HIBYTE(v25) ^= (a2 ^ HIBYTE(v25)) & 7;
        *(_DWORD *)(v15 + 32) = v25;
      }
    }
    if ( a3 && (*(_BYTE *)(v15 + 34) & 7) == 2 )
    {
      v23 = *(_QWORD *)(v15 + 16) >> 3;
      if ( (*(_QWORD *)(v15 + 16) & 0x400LL) != 0 )
        LOBYTE(v23) = *(_QWORD *)(v15 + 16) >> 11;
      if ( (v23 & 1) != 0 )
      {
        MiSetActivePfnHeat(v15, 0LL);
        v5 = 1;
      }
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v17 < 2u )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v17);
      __writecr8(v17);
    }
    if ( v5 )
      return MiAddPageToHeatList(a3, 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4), 3LL);
  }
  return result;
}
