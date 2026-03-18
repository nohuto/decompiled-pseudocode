/*
 * XREFs of MiDeleteEnclavePage @ 0x1403FC8BC
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiUpdateAwePageTable @ 0x1403FD730 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, int a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rsi
  unsigned __int8 v6; // r14
  int v7; // ebp
  int v9; // [rsp+58h] [rbp+10h]

  v2 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
  *(_QWORD *)a1 = CLFS_LSN_NULL_EXT;
  if ( a2 )
    MiUpdateAwePageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, 0xFFFFFFFFLL);
  v4 = 48 * v2 - 0x220000000000LL;
  v5 = (volatile signed __int32 *)(v4 + 24);
  if ( a2 )
  {
    v6 = 17;
    v7 = 0;
    while ( _interlockedbittestandset64(v5, 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v5 < 0 );
    }
  }
  else
  {
    v6 = MiLockPageInline(v4);
  }
  *(_QWORD *)(v4 + 24) = *(_QWORD *)v5 | 0x4000000000000000LL;
  MiSetPfnModified(48 * v2 - 0x220000000000LL, 0);
  *(_QWORD *)(v4 + 24) = (*(_QWORD *)v5 - 1LL) ^ (*(_QWORD *)v5 ^ (*(_QWORD *)v5 - 1LL)) & 0xC000000000000000uLL;
  HIWORD(v9) = HIWORD(*(_DWORD *)(v4 + 32));
  LOWORD(v9) = 0;
  *(_DWORD *)(v4 + 32) = v9;
  MiInsertPageInFreeOrZeroedList(v2, 256);
  return MiUnlockPage(v4, v6);
}
