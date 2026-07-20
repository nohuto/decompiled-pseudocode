/*
 * XREFs of SmpDeleteSubSys @ 0x140019398
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpUnlockKnownSubSysList @ 0x1400079F0 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x140009840 (SmpLockKnownSubSysList.c)
 *     SmpCompleteSubSysStatusChange @ 0x14000D5E0 (SmpCompleteSubSysStatusChange.c)
 */

void __fastcall SmpDeleteSubSys(char *BaseAddress)
{
  bool v2; // zf
  int v3; // edi
  char **v4; // rdx
  PVOID *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v2 = (BaseAddress[8] & 4) == 0;
  v7 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    v3 = 1;
    SmpLockKnownSubSysList(*((_DWORD *)BaseAddress + 16), 0LL, (__int64)&v6);
    if ( (BaseAddress[8] & 4) != 0 )
    {
      v3 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)BaseAddress + 2, 4u);
      v4 = (char **)*((_QWORD *)BaseAddress + 9);
      if ( v4[1] != BaseAddress + 72 || (v5 = (PVOID *)*((_QWORD *)BaseAddress + 10), *v5 != BaseAddress + 72) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (char *)v5;
    }
    SmpUnlockKnownSubSysList((__int64)&v6);
    if ( v3 == 1 )
    {
      SmpCompleteSubSysStatusChange((__int64)BaseAddress);
      SmpDereferenceKnownSubSys(BaseAddress);
    }
  }
}
