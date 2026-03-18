/*
 * XREFs of MiUpdateOldPteWorker @ 0x1403FA800
 * Callers:
 *     MiUpdateOldPagesVpabCallback @ 0x1403FA500 (MiUpdateOldPagesVpabCallback.c)
 *     MiUpdateOldPte @ 0x1403FA590 (MiUpdateOldPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140231E18 (MiAcquirePrcbAgeTrimLists.c)
 *     MiEmptyWorkingSetHelper @ 0x140287320 (MiEmptyWorkingSetHelper.c)
 *     MiLockSetPfnPriority @ 0x1404300D0 (MiLockSetPfnPriority.c)
 */

__int64 __fastcall MiUpdateOldPteWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // r11
  __int64 v9; // rdx

  result = MiGetPfnPriority(a3);
  v9 = *(unsigned int *)(a4 + 4);
  if ( (*(_DWORD *)a4 & 2) != 0 )
  {
    if ( (_DWORD)v9 == 8 || (_DWORD)result == (_DWORD)v9 )
    {
      if ( !*(_QWORD *)(a4 + 32) )
        MiAcquirePrcbAgeTrimLists(a1, (__int64 *)(a4 + 24));
      return MiEmptyWorkingSetHelper(a1, a2, *(_QWORD *)(a4 + 32), 0);
    }
  }
  else if ( (unsigned int)result > (unsigned int)v9 )
  {
    return MiLockSetPfnPriority(v8, v9);
  }
  return result;
}
