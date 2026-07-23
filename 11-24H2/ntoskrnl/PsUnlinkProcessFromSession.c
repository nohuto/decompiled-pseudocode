/*
 * XREFs of PsUnlinkProcessFromSession @ 0x140A6F65C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140450DBC (MiDeleteFinalPageTables.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 */

_QWORD *__fastcall PsUnlinkProcessFromSession(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r8
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 **v6; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  v3 = *(_QWORD *)(a1 + 744);
  if ( v3 )
  {
    v4 = (__int64 *)(a1 + 560);
    if ( *(_QWORD *)(a1 + 560) )
    {
      if ( (*(_DWORD *)(a1 + 2012) & 8) != 0 && !*(_QWORD *)(v3 + 120) )
        *(_QWORD *)(v3 + 120) = 1LL;
      v5 = (__int64 *)*v4;
      if ( *(__int64 **)(*v4 + 8) != v4 || (v6 = *(__int64 ***)(a1 + 568), *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
    }
  }
  return PspUnlockProcessListExclusive((__int64)CurrentThread);
}
