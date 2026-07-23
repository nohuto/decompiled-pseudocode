/*
 * XREFs of PfSnSetPrefetcherInformation @ 0x14094AB4C
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407458E4 (PfSnAppLaunchScenarioControl.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x14094A9E4 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnOperationProcess @ 0x14094AD54 (PfSnOperationProcess.c)
 *     PfSnBeginBootPhase @ 0x140B5D6F4 (PfSnBeginBootPhase.c)
 */

__int64 __fastcall PfSnSetPrefetcherInformation(__int64 a1, __int128 *a2, int a3, char a4)
{
  int v5; // ebx
  int v7; // eax
  int v8; // eax
  bool v9; // sf
  unsigned int v10; // esi
  __int128 v11; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+30h] [rbp-A8h]
  _DWORD v13[3]; // [rsp+48h] [rbp-90h] BYREF
  __int128 v14; // [rsp+54h] [rbp-84h]
  int v15; // [rsp+64h] [rbp-74h]
  _OWORD v16[4]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-28h]

  if ( a3 == 32 )
  {
    v11 = *a2;
    v12 = a2[1];
    if ( (_QWORD)v11 != 0x6B75684300000001LL )
      return (unsigned int)-1073741811;
    if ( DWORD2(v11) <= 8 && (v7 = 296, _bittest(&v7, DWORD2(v11)))
      || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    {
      if ( DWORD2(v11) != 3 )
      {
        switch ( DWORD2(v11) )
        {
          case 5:
            if ( DWORD2(v12) != 12 )
              return (unsigned int)-1073741811;
            if ( a4 && (v12 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(_QWORD *)&v11 = *(_QWORD *)v12;
            DWORD2(v11) = *(_DWORD *)(v12 + 8);
            v8 = PfSnOperationProcess(&v11);
            break;
          case 6:
            if ( DWORD2(v12) == 72 )
            {
              if ( a4 && (v12 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v16[0] = *(_OWORD *)v12;
              v16[1] = *(_OWORD *)(v12 + 16);
              v16[2] = *(_OWORD *)(v12 + 32);
              v16[3] = *(_OWORD *)(v12 + 48);
              v17 = *(_QWORD *)(v12 + 64);
              if ( LODWORD(v16[0]) == 2 )
              {
                PfSnPrefetchCacheEntryUpdate((__int64)v16);
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741306;
          case 8:
            if ( DWORD2(v12) != 16 )
              return (unsigned int)-1073741306;
            if ( a4 && (v12 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = *(_OWORD *)v12;
            v8 = PfSnAppLaunchScenarioControl((__int64)&v11);
            break;
          default:
            return (unsigned int)-1073741821;
        }
        v5 = v8;
        v9 = v8 < 0;
LABEL_24:
        if ( v9 )
          return (unsigned int)v5;
        return 0;
      }
      if ( DWORD2(v12) != 4 )
        return (unsigned int)-1073741811;
      if ( a4 && (v12 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 == 2 || !a4 )
      {
        v5 = PfSnBeginBootPhase(v10);
        if ( v10 == 2 )
        {
          v14 = 0LL;
          v15 = 0;
          v13[0] = 4;
          v13[1] = 4;
          v13[2] = 1;
          PfpProcessScenarioPhase(v13, a4);
        }
        v9 = v5 < 0;
        goto LABEL_24;
      }
    }
    return (unsigned int)-1073741790;
  }
  return (unsigned int)-1073741820;
}
