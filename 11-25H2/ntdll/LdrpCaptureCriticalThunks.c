/*
 * XREFs of LdrpCaptureCriticalThunks @ 0x1800F70B4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

int LdrpCaptureCriticalThunks()
{
  __int64 v0; // r8
  __int64 (__fastcall **v1)(int, int, int, int, ULONG, ULONG); // rdx
  _QWORD *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // ebx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  _BYTE MemoryInformation[80]; // [rsp+30h] [rbp-68h] BYREF

  v0 = 5LL;
  v1 = &LdrpCriticalLoaderFunctions;
  v2 = MemoryInformation;
  do
  {
    v3 = (__int64)*v1++;
    *v2 = v3;
    v2 += 2;
    --v0;
  }
  while ( v0 );
  v4 = 0;
  LODWORD(v5) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  0LL,
                  MemoryWorkingSetExInformation,
                  MemoryInformation,
                  0x50uLL,
                  0LL);
  if ( (int)v5 < 0 )
  {
LABEL_8:
    LdrpDetourExist = 1;
  }
  else
  {
    v6 = &LdrpThunkSignature;
    while ( v4 < 5 )
    {
      LODWORD(v5) = *(_DWORD *)&MemoryInformation[16 * v4 + 8];
      if ( ((unsigned int)v5 & 0x40000000) == 0 )
        goto LABEL_8;
      v5 = *(&LdrpCriticalLoaderFunctions + v4);
      *v6++ = *v5;
      ++v4;
    }
  }
  return (int)v5;
}
