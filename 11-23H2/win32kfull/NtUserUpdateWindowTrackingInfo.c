/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C01DF350
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C005BC94 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C009333C (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     UpdateSizeTrackingInfo @ 0x1C01F19E8 (UpdateSizeTrackingInfo.c)
 */

__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagWND *v11; // rsi
  int updated; // ebx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  INT v23[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = (struct tagWND *)v6;
  updated = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v24;
      *((_QWORD *)&v24 + 1) = v6;
      HMLockObject(v6);
      if ( IsShellParticipatesInSizing(v11, v13, v14) )
      {
        if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL)
                                                                                   + 328LL)
                                                                       + 16LL)
                                                           + 424LL)
          && (LOBYTE(v19) = IAMThreadAccessGranted(gptiCurrent), v19) )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (__int64 *)MmUserProbeAddress;
          v20 = *a2;
          *(_QWORD *)v23 = *a2;
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (__int64 *)MmUserProbeAddress;
          v21 = *a3;
          v26 = *a3;
          if ( (int)v20 > 0
            && SHIDWORD(v20) > 0
            && (int)v21 > 0
            && SHIDWORD(v21) > 0
            && (int)v20 >= (int)v21
            && v23[1] >= SHIDWORD(v26) )
          {
            ShellWindowManagement::TransformWindowTrackInfo((__int64)v11, v23, (INT *)&v26, 1);
            updated = UpdateSizeTrackingInfo(v11, v23, &v26);
            goto LABEL_21;
          }
          v15 = 87;
        }
        else
        {
          v15 = 5;
        }
      }
      else
      {
        v15 = 5023;
      }
      UserSetLastError(v15);
LABEL_21:
      ThreadUnlock1(v17, v16, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return updated;
}
