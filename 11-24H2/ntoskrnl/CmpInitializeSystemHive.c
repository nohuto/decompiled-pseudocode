/*
 * XREFs of CmpInitializeSystemHive @ 0x140C49DD8
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140C49B14 (CmpInitializePreloadedHives.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpSetupLoggingState @ 0x1407CD1B8 (CmpSetupLoggingState.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpInitializeSystemHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _OWORD *Pool; // rdi
  __int64 v9; // r8
  int Hive; // eax
  int v11; // ecx
  int v12; // esi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-28h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+18h] BYREF

  v15 = a3;
  v6 = 0;
  LOBYTE(v15) = 0;
  BugCheckParameter3[0] = 0LL;
  Pool = (_OWORD *)CmpAllocatePool(0x100uLL, 0x1B0uLL, 0x33394D43u);
  if ( Pool )
  {
    v9 = 18LL;
    if ( CmBugcheckRecoveryEnabled )
      v9 = 33554450LL;
    Hive = CmpCreateHive(
             BugCheckParameter3,
             1u,
             v9,
             2LL,
             *(_QWORD *)(a1 + 168),
             0LL,
             (__int64)&CmpSystemFileName,
             5832712,
             0LL,
             0LL,
             a4,
             (__int64)&v15,
             (__int64)Pool);
    if ( Hive < 0 )
      KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)Pool, Hive);
    CmpSetupLoggingState(BugCheckParameter3[0], (unsigned int *)(*(_QWORD *)(a1 + 240) + 2916LL));
    if ( (_BYTE)v15 == 1 )
      CmpInitRmLogOnLoad = 1;
    if ( BYTE4(NlsMbOemCodePageTag) )
      *(_DWORD *)(BugCheckParameter3[0] + 160) |= 0x8000u;
    if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
    {
      *(_DWORD *)(BugCheckParameter3[0] + 160) |= 0x8000u;
      *(_DWORD *)(BugCheckParameter3[0] + 160) &= ~2u;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3[0] + 64) + 4088LL);
    CmpBootType = v11;
    if ( !CmSelfHeal )
    {
      BYTE2(NlsMbOemCodePageTag) = 0;
      if ( (v11 & 4) != 0 )
        KeBugCheckEx(0x74u, 3uLL, 3uLL, BugCheckParameter3[0], 0LL);
    }
    v12 = CmpLinkHiveToMaster(
            &CmRegistryMachineSystemName.Length,
            0LL,
            BugCheckParameter3[0],
            0,
            dword_140E09AF0,
            0,
            0LL,
            a2,
            0LL,
            0LL,
            1,
            Pool);
    if ( v12 >= 0 )
      qword_140E09AE0 = BugCheckParameter3[0];
    ExFreePoolWithTag(Pool, 0);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
