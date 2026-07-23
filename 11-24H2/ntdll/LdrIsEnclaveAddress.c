/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800D3E5C
 * Callers:
 *     RtlGuardCheckImageBase @ 0x1800D3DC0 (RtlGuardCheckImageBase.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800D40D0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D41F0 (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrIsEnclaveAddress(PVOID BaseAddress)
{
  __int64 locked; // rax
  bool v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(MemoryInformation, 0, 48);
  locked = LdrpObtainLockedEnclave(BaseAddress, 0LL);
  v3 = 0;
  v4 = locked;
  if ( locked )
  {
    if ( *(_DWORD *)(locked + 56) == 16 )
    {
      v5 = *(_QWORD *)(locked + 112);
      if ( v5 )
      {
        if ( BaseAddress == *(PVOID *)(v5 + 184)
          && ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryRegionInformationEx,
               MemoryInformation,
               0x30uLL,
               0LL) >= 0 )
        {
          v3 = (MemoryInformation[12] & 0x40) != 0;
        }
      }
    }
    LdrpUnlockAndDereferenceEnclave(v4);
    LOBYTE(locked) = v3;
  }
  return locked;
}
