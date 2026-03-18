/*
 * XREFs of MiDeleteEnclavePage @ 0x1403D1B2C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiUpdateAwePageTable @ 0x140474584 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, int a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rsi
  unsigned __int8 v6; // r14
  unsigned int v7; // ebp
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
          HvlNotifyLongSpinWait(v7);
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
  MiInsertPageInFreeOrZeroedList(v2, 256LL);
  return MiUnlockPage(v4, v6);
}
