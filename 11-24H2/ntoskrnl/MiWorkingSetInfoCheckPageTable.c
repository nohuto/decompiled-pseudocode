/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x1404A2798
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
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
      MiUnlockPageTableInternal(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0, a5, 0);
      MiUnlockPageTableInternal(a1, a2);
      return 1;
    }
  }
  return v9;
}
