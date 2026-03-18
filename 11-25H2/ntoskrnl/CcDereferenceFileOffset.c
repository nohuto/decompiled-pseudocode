/*
 * XREFs of CcDereferenceFileOffset @ 0x1404D6A7C
 * Callers:
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 * Callees:
 *     SetVacb @ 0x1403B4790 (SetVacb.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403B6E14 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403B6E80 (CcReleaseBcbLockAndVacbLock.c)
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
