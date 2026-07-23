/*
 * XREFs of CcReferenceFileOffset @ 0x1404C8C90
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     SetVacb @ 0x1403571D0 (SetVacb.c)
 *     CcFreeUnusedVacbLevels @ 0x1403579AC (CcFreeUnusedVacbLevels.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403EEF44 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAllocateVacbLevels @ 0x14047255C (CcAllocateVacbLevels.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, __int64 a2)
{
  int v4; // edx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+3Ch] [rbp-Ch]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v7 = 0;
    v4 = *(_DWORD *)(a1 + 152);
    v5[2] = 0LL;
    v5[1] = v5;
    v5[0] = v5;
    v6 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v4 & 0x200) != 0, (__int64)v5) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, (__int64)v5);
    CcReleaseBcbLockAndVacbLock(1, a1);
    CcFreeUnusedVacbLevels((__int64)v5);
  }
}
