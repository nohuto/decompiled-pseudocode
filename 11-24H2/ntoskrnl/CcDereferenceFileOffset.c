/*
 * XREFs of CcDereferenceFileOffset @ 0x1404D616C
 * Callers:
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x1402D5F50 (SetVacb.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403F8E34 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403F8EA0 (CcReleaseBcbLockAndVacbLock.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, __int64 a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
    CcReleaseBcbLockAndVacbLock(1, a1);
  }
}
