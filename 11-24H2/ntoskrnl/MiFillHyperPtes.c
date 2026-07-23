/*
 * XREFs of MiFillHyperPtes @ 0x1404502E8
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiMakeHyperPteDemandZero @ 0x140450460 (MiMakeHyperPteDemandZero.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v7; // r10
  unsigned __int64 *v8; // r9
  unsigned int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rdi
  ULONG_PTR v12; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-98h]
  _QWORD v19[7]; // [rsp+38h] [rbp-80h] BYREF

  v4 = 4LL;
  v17 = 4LL;
  v7 = 4LL;
  v8 = v19;
  do
  {
    *(v8 - 1) = a1;
    *v8 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 += 2;
    --v7;
  }
  while ( v7 );
  v9 = 3;
  do
  {
    LOBYTE(CurrentThread) = 2 * v9;
    v11 = v19[2 * (int)v9 - 1];
    v12 = v19[2 * (int)v9];
    if ( *(_DWORD *)a4 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      if ( v11 <= v12 )
      {
        do
        {
          v14 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v11, 0, a3, 0);
          do
          {
            if ( !MI_READ_PTE_LOCK_FREE(v11) )
              MiMakeHyperPteDemandZero(v11, v15, v9, a4);
            v11 += 8LL;
          }
          while ( v11 <= v12 && (v11 & 0xFFF) != 0 );
          LOBYTE(CurrentThread) = MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v14);
        }
        while ( v11 <= v12 );
        v4 = v17;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v12 - v11) >> 3) + 1;
    }
    --v9;
    v17 = --v4;
  }
  while ( v4 );
  return (char)CurrentThread;
}
