/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x14066BEA4
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, int a2)
{
  int v2; // esi
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+23h] [rbp-45h]
  _OWORD v13[3]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  memset(v13, 0, sizeof(v13));
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v2 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v13);
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
      v12 = HIBYTE(v7) & 0xCF | 0x10;
    else
      v12 = HIBYTE(v7) & 0xCF;
    *(_BYTE *)(a1 + 1211) = v12;
    v8 = 0;
  }
  MiUnlockWorkingSetExclusive(v5, v6);
  if ( v2 )
    KiUnstackDetachProcess((__int64)v13, 0, v9, v10);
  return v8;
}
