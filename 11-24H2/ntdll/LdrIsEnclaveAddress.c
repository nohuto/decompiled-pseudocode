/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800D8AEC
 * Callers:
 *     RtlGuardCheckImageBase @ 0x1800D8A50 (RtlGuardCheckImageBase.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800D8D60 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E80 (LdrpUnlockAndDereferenceEnclave.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 */

char __fastcall LdrIsEnclaveAddress(__int64 a1)
{
  __int64 locked; // rax
  bool v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, 48);
  locked = LdrpObtainLockedEnclave(a1, 0LL);
  v3 = 0;
  v4 = locked;
  if ( locked )
  {
    if ( *(_DWORD *)(locked + 56) == 16 )
    {
      v5 = *(_QWORD *)(locked + 112);
      if ( v5 )
      {
        if ( a1 == *(_QWORD *)(v5 + 184) && (int)ZwQueryVirtualMemory(-1LL, a1, 7LL, v7, 48LL, 0LL) >= 0 )
          v3 = (v7[12] & 0x40) != 0;
      }
    }
    LdrpUnlockAndDereferenceEnclave(v4);
    LOBYTE(locked) = v3;
  }
  return locked;
}
