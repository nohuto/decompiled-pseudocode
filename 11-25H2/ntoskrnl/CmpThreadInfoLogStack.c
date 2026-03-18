/*
 * XREFs of CmpThreadInfoLogStack @ 0x14020704C
 * Callers:
 *     CmpRecordRegistryLockAcquire @ 0x1402067A0 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x140206F20 (CmpRecordRegistryLockRelease.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char *CmpThreadInfoLogStack()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  char *result; // rax
  unsigned __int64 v3; // rdx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  _QWORD *v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  __int64 *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  PVOID Callers[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v16[10]; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(Callers, 0, sizeof(Callers));
  memset_0(v16, 0, sizeof(v16));
  v0 = 10LL;
  RtlWalkFrameChain(Callers, 0xAu, 0);
  v1 = 0LL;
  do
  {
    result = (char *)Callers[v1];
    v3 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    if ( (unsigned __int64)result >= v3 && (unsigned __int64)result <= PsNtosImageEnd )
    {
      result -= v3;
      v16[v1] = result;
    }
    ++v1;
    --v0;
  }
  while ( v0 );
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    result = (char *)tlgKeywordOn(&dword_140E09E08, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v6 = 1LL;
      v9 = &v6;
      v10 = 8LL;
      v11 = v16;
      v12 = 80LL;
      v13 = &v7;
      v7 = 0x1000000LL;
      v14 = 8LL;
      return (char *)tlgWriteAgg((unsigned int)&dword_140E09E08, (unsigned int)byte_1400533F3, v4, v5, (__int64)v8);
    }
  }
  return result;
}
