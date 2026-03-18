/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x1404A2D98
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v13; // rax

  v9 = 0;
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = v10 & 0x800;
  if ( (v10 & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset(v10) )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( v11 )
        v13 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0x600000;
      else
        v13 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0xA00000;
      *(_QWORD *)(a3 + 8) = v13;
    }
    else if ( (a4 & 2) != 0 )
    {
      MiUnlockPageTable(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0, a5, 0);
      MiUnlockPageTable(a1, a2);
      return 1;
    }
  }
  return v9;
}
