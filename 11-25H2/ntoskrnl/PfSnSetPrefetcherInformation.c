/*
 * XREFs of PfSnSetPrefetcherInformation @ 0x140828AD0
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PfSnAppLaunchScenarioControl @ 0x14073B5D4 (PfSnAppLaunchScenarioControl.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140828764 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnOperationProcess @ 0x1408288CC (PfSnOperationProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PfpProcessScenarioPhase @ 0x1408EA25C (PfpProcessScenarioPhase.c)
 *     PfSnBeginBootPhase @ 0x140B4B714 (PfSnBeginBootPhase.c)
 */

__int64 __fastcall PfSnSetPrefetcherInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  int v5; // ebx
  int v7; // eax
  int v8; // eax
  bool v9; // sf
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-A8h]
  _DWORD v14[3]; // [rsp+48h] [rbp-90h] BYREF
  __int128 v15; // [rsp+54h] [rbp-84h]
  int v16; // [rsp+64h] [rbp-74h]
  _OWORD v17[4]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-28h]

  if ( a3 == 32 )
  {
    v12 = *a2;
    v13 = a2[1];
    if ( (_QWORD)v12 != 0x6B75684300000001LL )
      return (unsigned int)-1073741811;
    if ( DWORD2(v12) <= 8 && (v7 = 296, _bittest(&v7, DWORD2(v12)))
      || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    {
      if ( DWORD2(v12) != 3 )
      {
        switch ( DWORD2(v12) )
        {
          case 5:
            if ( DWORD2(v13) != 12 )
              return (unsigned int)-1073741811;
            if ( a4 && (v13 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(_QWORD *)&v12 = *(_QWORD *)v13;
            DWORD2(v12) = *(_DWORD *)(v13 + 8);
            v8 = PfSnOperationProcess((__int64)&v12);
            break;
          case 6:
            if ( DWORD2(v13) == 72 )
            {
              if ( a4 && (v13 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v17[0] = *(_OWORD *)v13;
              v17[1] = *(_OWORD *)(v13 + 16);
              v17[2] = *(_OWORD *)(v13 + 32);
              v17[3] = *(_OWORD *)(v13 + 48);
              v18 = *(_QWORD *)(v13 + 64);
              if ( LODWORD(v17[0]) == 2 )
              {
                PfSnPrefetchCacheEntryUpdate((__int64)v17);
                return 0;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741306;
          case 8:
            if ( DWORD2(v13) != 16 )
              return (unsigned int)-1073741306;
            if ( a4 && (v13 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = *(_OWORD *)v13;
            v8 = PfSnAppLaunchScenarioControl((__int64)&v12);
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
      if ( DWORD2(v13) != 4 )
        return (unsigned int)-1073741811;
      if ( a4 && (v13 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = *(_DWORD *)v13;
      if ( *(_DWORD *)v13 == 2 || !a4 )
      {
        v5 = PfSnBeginBootPhase(v10);
        if ( v10 == 2 )
        {
          v15 = 0LL;
          v16 = 0;
          v14[0] = 4;
          v14[1] = 4;
          v14[2] = 1;
          LOBYTE(v11) = a4;
          PfpProcessScenarioPhase(v14, v11);
        }
        v9 = v5 < 0;
        goto LABEL_24;
      }
    }
    return (unsigned int)-1073741790;
  }
  return (unsigned int)-1073741820;
}
