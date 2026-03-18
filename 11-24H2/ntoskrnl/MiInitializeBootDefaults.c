/*
 * XREFs of MiInitializeBootDefaults @ 0x140C4E26C
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     strstr @ 0x1404FD9B0 (strstr.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_140E37515 = 1;
    dword_140FC41FC = 0;
    *(_BYTE *)(MmWriteableSharedUserData + 748) = 1;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      MiFlags |= 0x80uLL;
      MmPageValidationFrequency = v1 - 1;
    }
    if ( MmVerifierData )
    {
      v4 = MiFlags | 1;
      MiFlags |= 1uLL;
      if ( KernelVerifier )
        MiFlags = v4 | 2;
    }
    if ( (MiFlags & 1) != 0 && (VfRuleClasses & 0x400000) == 0 || MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
  }
  v5 = MiFlags | 8;
  MiFlags |= 8uLL;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v5 | 0x40;
  qword_140E2D878 = 0LL;
  qword_140E2D890 = (__int64)&qword_140E2D888;
  qword_140E2D888 = (__int64)&qword_140E2D888;
  qword_140E2CC10 = 0LL;
  qword_140E2DA60 = (__int64)&qword_140E2DA58;
  qword_140E2DA58 = (__int64)&qword_140E2DA58;
  qword_140E2DA50 = -10000000LL * dword_140FC4214;
  qword_140E2D430 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140E2D430 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
