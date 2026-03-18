/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14066ACD4
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // esi
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  int v7; // edx
  unsigned int v8; // ebx
  char v10; // [rsp+23h] [rbp-45h]
  _OWORD v11[3]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  memset(v11, 0, sizeof(v11));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  v5 = a1 + 1024;
  v6 = MiLockWorkingSetExclusive(a1 + 1024);
  v7 = *(_DWORD *)(a1 + 1208);
  if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    if ( a2 )
      v10 = HIBYTE(v7) & 0xCF | 0x10;
    else
      v10 = HIBYTE(v7) & 0xCF;
    *(_BYTE *)(a1 + 1211) = v10;
    v8 = 0;
  }
  MiUnlockWorkingSetExclusive(v5, v6);
  if ( v2 )
    KiUnstackDetachProcess((__int64)v11, 0);
  return v8;
}
