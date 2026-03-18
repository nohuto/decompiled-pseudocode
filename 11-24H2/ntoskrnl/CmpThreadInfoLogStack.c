/*
 * XREFs of CmpThreadInfoLogStack @ 0x1404BECC0
 * Callers:
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     CmpGetThreadInfo @ 0x1404F0110 (CmpGetThreadInfo.c)
 *     CmpRecordRegistryLockAcquire @ 0x1404F0170 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x1404F01E0 (CmpRecordRegistryLockRelease.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char CmpThreadInfoLogStack()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  char *v2; // rax
  __int64 v3; // r8
  unsigned int v4; // r9d
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
    v2 = (char *)Callers[v1];
    if ( (unsigned __int64)v2 >= PsNtosImageBase && (unsigned __int64)v2 <= PsNtosImageEnd )
    {
      v2 -= PsNtosImageBase;
      v16[v1] = v2;
    }
    ++v1;
    --v0;
  }
  while ( v0 );
  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v6 = 1LL;
      v9 = &v6;
      v10 = 8LL;
      v11 = v16;
      v12 = 80LL;
      v13 = &v7;
      v7 = 0x1000000LL;
      v14 = 8LL;
      LOBYTE(v2) = tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_14005481D, v3, v4, (__int64)v8);
    }
  }
  return (char)v2;
}
