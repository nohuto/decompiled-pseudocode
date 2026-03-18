/*
 * XREFs of UserGetDpiInfoFromPrimaryMonitor @ 0x1401AB9F8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetDpiInfoFromPrimaryMonitor(_OWORD *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 104LL) )
    return 3221226021LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(v4) + 57008);
  if ( !*(_QWORD *)(*(_QWORD *)(v5 + 104) + 128LL) )
    return 3221226021LL;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5) + 57008) + 104LL) + 40LL);
  *a2 = *(unsigned __int16 *)(v6 + 84);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 57008) + 104LL) + 128LL);
  result = 0LL;
  *a1 = *(_OWORD *)(v7 + 4);
  a1[1] = *(_OWORD *)(v7 + 20);
  a1[2] = *(_OWORD *)(v7 + 36);
  a1[3] = *(_OWORD *)(v7 + 52);
  a1[4] = *(_OWORD *)(v7 + 68);
  a1[5] = *(_OWORD *)(v7 + 84);
  return result;
}
