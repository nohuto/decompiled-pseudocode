/*
 * XREFs of NtUserGetClassName @ 0x1C0074370
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, __int64 a2, ULONG64 a3)
{
  ULONG64 v3; // rsi
  int v4; // r14d
  unsigned int AtomName; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  volatile void *v12; // rsi
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int16 v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = a2;
  AtomName = 0;
  EnterSharedCrit(a1, a2, a3);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v17 = *(_DWORD *)v3;
    v12 = *(volatile void **)(v3 + 8);
    ProbeForWrite(v12, HIWORD(v17), 2u);
    v16 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 136) + 8LL) + 2LL);
    if ( v4 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0 )
      {
        v13 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) - 666;
        if ( v13 < 0x1F )
        {
          _mm_lfence();
          v14 = byte_1C03171B8[v13];
          if ( (_BYTE)v14 != 25 )
            v16 = *(_WORD *)(gpsi + 2LL * v14 + 868);
        }
      }
    }
    AtomName = UserGetAtomName(v16, v12, HIWORD(v17) >> 1);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return AtomName;
}
