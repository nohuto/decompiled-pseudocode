/*
 * XREFs of NtUserSBGetParms @ 0x1C00824A0
 * Callers:
 *     <none>
 * Callees:
 *     _SBGetParms @ 0x1C00825E0 (_SBGetParms.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, __int64 a2, __int128 *a3, ULONG64 a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // ebx
  _BYTE *v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  unsigned int v18; // [rsp+48h] [rbp-40h]
  __int128 v19; // [rsp+58h] [rbp-30h] BYREF

  v6 = a2;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  EnterSharedCrit(a1, a2, a3);
  v12 = ValidateHwnd(a1);
  v13 = 0;
  if ( v12 )
  {
    v14 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[27] = v14[27];
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = *a3;
    v16 = *(_OWORD *)a4;
    v17 = *(_QWORD *)(a4 + 16);
    v18 = *(_DWORD *)(a4 + 24);
    v13 = SBGetParms(v12, v6, &v19, &v16);
    *(_OWORD *)a4 = v16;
    *(_QWORD *)(a4 + 16) = v17;
    v9 = v18;
    *(_DWORD *)(a4 + 24) = v18;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v13;
}
