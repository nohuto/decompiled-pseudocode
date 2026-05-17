/*
 * XREFs of LdrpCaptureCriticalThunks @ 0x1800F5534
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 LdrpCaptureCriticalThunks()
{
  __int64 v0; // r8
  __int64 (__fastcall **v1)(int, int, int, int, ULONG, ULONG); // rdx
  _QWORD *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 result; // rax
  _OWORD *v6; // rcx
  _BYTE v7[80]; // [rsp+30h] [rbp-68h] BYREF

  v0 = 5LL;
  v1 = &LdrpCriticalLoaderFunctions;
  v2 = v7;
  do
  {
    v3 = (__int64)*v1++;
    *v2 = v3;
    v2 += 2;
    --v0;
  }
  while ( v0 );
  v4 = 0;
  result = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, v7, 80LL, 0LL);
  if ( (int)result < 0 )
  {
LABEL_8:
    LdrpDetourExist = 1;
  }
  else
  {
    v6 = &LdrpThunkSignature;
    while ( v4 < 5 )
    {
      result = *(unsigned int *)&v7[16 * v4 + 8];
      if ( (result & 0x40000000) == 0 )
        goto LABEL_8;
      result = (__int64)*(&LdrpCriticalLoaderFunctions + v4);
      *v6++ = *(_OWORD *)result;
      ++v4;
    }
  }
  return result;
}
