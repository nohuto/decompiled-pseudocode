/*
 * XREFs of NtUserGetAtomName @ 0x1C007BDA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(__int64 a1, ULONG64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  unsigned __int16 v4; // di
  unsigned int AtomName; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+38h] [rbp-20h]
  volatile void *v12; // [rsp+40h] [rbp-18h]

  v3 = a2;
  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v11 = *(_DWORD *)v3;
  v12 = *(volatile void **)(v3 + 8);
  ProbeForWrite(v12, (unsigned __int16)HIWORD(*(_DWORD *)v3), 2u);
  AtomName = UserGetAtomName(v4, v12, HIWORD(v11) >> 1);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return AtomName;
}
