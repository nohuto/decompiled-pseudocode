/*
 * XREFs of MiInitializeBootDefaults @ 0x140C503FC
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  __int64 v1; // r9
  int v2; // eax
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_140E37655 = 1;
    dword_140FC51FC = 0;
    *(_BYTE *)(MmWriteableSharedUserData + 748) = 1;
  }
  else
  {
    v2 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v4, MmPageValidationFrequency) )
      v2 = 1 << v4;
    MmPageValidationFrequency = v2;
    if ( v2 )
    {
      MiFlags |= 0x80uLL;
      MmPageValidationFrequency = v2 - 1;
    }
    if ( MmVerifierData )
    {
      v5 = MiFlags | 1;
      MiFlags |= 1uLL;
      if ( KernelVerifier )
        MiFlags = v5 | 2;
    }
    if ( (MiFlags & 1) != 0 && (VfRuleClasses & 0x400000) == 0 || MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
  }
  v6 = MiFlags | 8;
  MiFlags |= 8uLL;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v6 | 0x40;
  qword_140E2D9B8 = 0LL;
  qword_140E2D9D0 = (__int64)&qword_140E2D9C8;
  qword_140E2D9C8 = (__int64)&qword_140E2D9C8;
  qword_140E2CD50 = 0LL;
  qword_140E2DBA0 = (__int64)&qword_140E2DB98;
  qword_140E2DB98 = (__int64)&qword_140E2DB98;
  qword_140E2DB90 = -10000000LL * dword_140FC5214;
  qword_140E2D570 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1, -10000000LL * dword_140FC5214, 0LL, v1) << 16;
  qword_140E2D570 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
