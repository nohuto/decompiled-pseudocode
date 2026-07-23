/*
 * XREFs of MiDeleteEnclavePage @ 0x14046D37C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdateAwePageTable @ 0x14046E1F0 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  int v5; // ebp
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rsi
  unsigned __int8 v8; // r14
  unsigned int v9; // ebp
  int v11; // [rsp+58h] [rbp+10h]

  v4 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
  v5 = a2;
  *(_QWORD *)a1 = CLFS_LSN_NULL_EXT;
  if ( (_DWORD)a2 )
    MiUpdateAwePageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, 0xFFFFFFFFLL);
  v6 = 48 * v4 - 0x220000000000LL;
  v7 = (volatile signed __int32 *)(v6 + 24);
  if ( v5 )
  {
    v8 = 17;
    v9 = 0;
    while ( _interlockedbittestandset64(v7, 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v7 < 0 );
    }
  }
  else
  {
    v8 = MiLockPageInline(v6, a2, a3, a4);
  }
  *(_QWORD *)(v6 + 24) = *(_QWORD *)v7 | 0x4000000000000000LL;
  MiSetPfnModified(48 * v4 - 0x220000000000LL, 0);
  *(_QWORD *)(v6 + 24) = (*(_QWORD *)v7 - 1LL) ^ (*(_QWORD *)v7 ^ (*(_QWORD *)v7 - 1LL)) & 0xC000000000000000uLL;
  HIWORD(v11) = HIWORD(*(_DWORD *)(v6 + 32));
  LOWORD(v11) = 0;
  *(_DWORD *)(v6 + 32) = v11;
  MiInsertPageInFreeOrZeroedList(v4, 256LL);
  return MiUnlockPage(v6, v8);
}
