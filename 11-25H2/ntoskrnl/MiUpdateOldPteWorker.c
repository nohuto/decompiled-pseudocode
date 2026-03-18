/*
 * XREFs of MiUpdateOldPteWorker @ 0x140441E30
 * Callers:
 *     MiUpdateOldPagesVpabCallback @ 0x140441B30 (MiUpdateOldPagesVpabCallback.c)
 *     MiUpdateOldPte @ 0x140441BC0 (MiUpdateOldPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiLockSetPfnPriority @ 0x140379880 (MiLockSetPfnPriority.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14038870C (MiAcquirePrcbAgeTrimLists.c)
 */

__int64 __fastcall MiUpdateOldPteWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // r11
  unsigned int v9; // edx

  result = MiGetPfnPriority(a3);
  v9 = *(_DWORD *)(a4 + 4);
  if ( (*(_DWORD *)a4 & 2) != 0 )
  {
    if ( v9 == 8 || (_DWORD)result == v9 )
    {
      if ( !*(_QWORD *)(a4 + 32) )
        MiAcquirePrcbAgeTrimLists(a1, (_QWORD *)(a4 + 24));
      return MiEmptyWorkingSetHelper(a1, a2, *(_QWORD *)(a4 + 32), 0);
    }
  }
  else if ( (unsigned int)result > v9 )
  {
    return MiLockSetPfnPriority(v8, v9);
  }
  return result;
}
