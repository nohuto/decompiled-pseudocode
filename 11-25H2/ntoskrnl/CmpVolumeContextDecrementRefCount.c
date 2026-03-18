/*
 * XREFs of CmpVolumeContextDecrementRefCount @ 0x1409F4CEC
 * Callers:
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 * Callees:
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpVolumeContextFree @ 0x1409F4DE0 (CmpVolumeContextFree.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F4E3C (CmSiRWLockReleaseExclusive.c)
 */

signed __int64 __fastcall CmpVolumeContextDecrementRefCount(PPRIVILEGE_SET Privileges)
{
  ULONG_PTR v1; // rdi
  signed __int64 result; // rax
  signed __int64 v4; // rtt
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 v7; // rax
  __int64 v8; // rdx
  PPRIVILEGE_SET *Luid; // rax

  v1 = *(_QWORD *)&Privileges->Privilege[0].Attributes;
  _m_prefetchw(&Privileges[1].Control);
  result = *(_QWORD *)&Privileges[1].Control;
  while ( result - 1 > 0 )
  {
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)&Privileges[1].Control, result - 1, result);
    if ( v4 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  CmpVolumeManagerLockContextListExclusive(v1);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Privileges[1].Control, 0xFFFFFFFFFFFFFFFFuLL);
  v6 = v5 <= 1;
  v7 = v5 - 1;
  if ( !v6 )
    return CmSiRWLockReleaseExclusive(v1);
  if ( v7 )
    __fastfail(0xEu);
  v8 = *(_QWORD *)&Privileges->PrivilegeCount;
  if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
    || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
  {
    __fastfail(3u);
  }
  *Luid = (PPRIVILEGE_SET)v8;
  *(_QWORD *)(v8 + 8) = Luid;
  CmSiRWLockReleaseExclusive(v1);
  return CmpVolumeContextFree(Privileges);
}
