/*
 * XREFs of NtUserGetClassName @ 0x140295AB0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, ULONG64 a3)
{
  unsigned int AtomName; // edi
  __int64 v7; // rcx
  __int64 v8; // rbx
  volatile void *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  unsigned __int16 v16; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h]

  AtomName = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v18, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v17 = *(_DWORD *)a3;
    v9 = *(volatile void **)(a3 + 8);
    ProbeForWrite(v9, HIWORD(v17), 2u);
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 136) + 8LL);
    v16 = *(_WORD *)(v11 + 2);
    if ( a2 )
    {
      v12 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF;
      if ( v12 )
      {
        if ( v12 == 672 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10231);
        if ( v12 == 694 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10232);
        v13 = v12 - 666;
        if ( v13 < 0x1F )
        {
          _mm_lfence();
          v14 = byte_14035A188[v13];
          if ( (unsigned __int8)v14 > 0x19u || (v11 = 38797312LL, !_bittest((const int *)&v11, v14)) )
          {
            v19 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928);
            v16 = *(_WORD *)(v19 + 2 * v14 + 868);
          }
        }
      }
    }
    AtomName = UserGetAtomName(v16, v9, HIWORD(v17) >> 1);
  }
  UserSessionSwitchLeaveCrit(v7);
  return AtomName;
}
