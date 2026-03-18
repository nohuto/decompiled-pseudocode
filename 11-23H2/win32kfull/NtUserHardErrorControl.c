/*
 * XREFs of NtUserHardErrorControl @ 0x1C01D4190
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x1C02234A4 (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  _BYTE *v15; // rdx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v13 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a3 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v15 = (_BYTE *)MmUserProbeAddress;
      *v15 = *v15;
      v15[15] = v15[15];
      v17 = *(_OWORD *)a3;
    }
    v14 = xxxHardErrorControl(a1, a2, (unsigned __int64)&v17 & -(__int64)(a3 != 0));
    if ( a3 )
      *(_OWORD *)a3 = v17;
  }
  else
  {
    v14 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
