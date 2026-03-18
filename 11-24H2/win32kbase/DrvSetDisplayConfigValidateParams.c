/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1401CB440
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x140153090 (DrvFunctionalizeDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14008D700 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT.c)
 *     Gre_Base_Globals @ 0x1400A4360 (Gre_Base_Globals.c)
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1401391C4 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x140148BCC (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x140178810 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x14019FD04 (-IsPathVirtualFlagCloneCompatible@@YAEEE@Z.c)
 *     _stricmp @ 0x1401A08A8 (_stricmp.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp-78h]
  int TargetVirtualization; // [rsp+40h] [rbp-78h]
  _QWORD *v10; // [rsp+48h] [rbp-70h]
  unsigned __int8 v11[4]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int j; // [rsp+54h] [rbp-64h]
  unsigned __int8 v13; // [rsp+58h] [rbp-60h] BYREF
  char v14; // [rsp+59h] [rbp-5Fh]
  unsigned int k; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int8 v16[4]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int i; // [rsp+64h] [rbp-54h]
  int v18; // [rsp+68h] [rbp-50h]
  int v19; // [rsp+6Ch] [rbp-4Ch]
  BOOL v20; // [rsp+70h] [rbp-48h]
  int v21; // [rsp+74h] [rbp-44h]
  char *Str1; // [rsp+78h] [rbp-40h]
  unsigned __int64 v23; // [rsp+80h] [rbp-38h]
  _QWORD *v24; // [rsp+90h] [rbp-28h]
  unsigned __int64 v25; // [rsp+98h] [rbp-20h]
  unsigned int v26; // [rsp+C0h] [rbp+8h]
  unsigned int v28; // [rsp+D0h] [rbp+18h]
  int v29; // [rsp+D8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v26 = a1;
  Str1 = 0LL;
  if ( a5 )
  {
    if ( (a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      WdLogSingleEntry1(2LL, -1073741790LL);
      WdLogGlobalForLineNumber = 13130;
      return 3221225506LL;
    }
    if ( (v28 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      WdLogSingleEntry1(2LL, -1073741790LL);
      WdLogGlobalForLineNumber = 13142;
      return 3221225506LL;
    }
  }
  if ( (v28 & 0xC0000000) != 0 )
  {
    if ( (v28 & 0x80) != 0 )
    {
      if ( v28 == 1073741952 || v28 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( *(_DWORD *)(Gre_Base_Globals(v7) + 1260) || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v26 || a2 )
          {
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 13201;
            return 3221225485LL;
          }
          else
          {
            WdLogSingleEntry1(5LL, v28);
            WdLogGlobalForLineNumber = 13209;
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v28, -1073741581LL);
          WdLogGlobalForLineNumber = 13190;
          return 3221225715LL;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v28, -1073741581LL);
        WdLogGlobalForLineNumber = 13175;
        return 3221225715LL;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13163;
      return 3221225715LL;
    }
  }
  else if ( (v29 & 1) != 0 )
  {
    if ( (v29 & 0xFFFFFEBF) == 1 && v28 == 2191 && !v26 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(1LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13230;
      return 3221225715LL;
    }
  }
  else
  {
    if ( (v29 & 0x10) != 0 && (unsigned int)DispBrokerGetCurrentMode(a1) != 3 && (v29 & 8) == 0 )
    {
      WdLogSingleEntry2(1LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13254;
      return 3221225715LL;
    }
    if ( (v29 & 8) != 0 && v26 != 1 )
    {
      WdLogSingleEntry3(1LL, v26, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13267;
      return 3221225715LL;
    }
    if ( (v29 & 8) != 0 && (v28 & 0x20) == 0 )
    {
      WdLogSingleEntry2(1LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13279;
      return 3221225715LL;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(a1) && (v28 & 0x88F) != 0x88F )
    {
      WdLogSingleEntry2(2LL, v28, -1073741790LL);
      WdLogGlobalForLineNumber = 13300;
      return 3221225506LL;
    }
    if ( (v28 & 0x10000) != 0 )
    {
      if ( (v28 & 0xC7FC4000) != 0 )
      {
        WdLogSingleEntry2(2LL, v28, -1073741581LL);
        WdLogGlobalForLineNumber = 13311;
        return 3221225715LL;
      }
      if ( (v28 & 0x1F) != 0 || (v28 & 0x200) != 0 )
      {
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 13319;
        return 3221225659LL;
      }
    }
    else if ( (v28 & 0xFFFD4000) != 0 )
    {
      WdLogSingleEntry2(2LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13326;
      return 3221225715LL;
    }
    if ( (v28 & 0xC0) == 0 || (v28 & 0xC0) == 0xC0 )
    {
      WdLogSingleEntry2(2LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13335;
      return 3221225715LL;
    }
    if ( (v28 & 0x180) == 0x100 )
    {
      WdLogSingleEntry2(2LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13343;
      return 3221225715LL;
    }
    if ( (v28 & 0x1000) != 0 && (v28 & 0xA0) != 0xA0 )
    {
      WdLogSingleEntry2(2LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13352;
      return 3221225715LL;
    }
    if ( (v28 & 0x2000) != 0 && (v28 & 0x10) == 0 )
    {
      WdLogSingleEntry2(2LL, v28, -1073741581LL);
      WdLogGlobalForLineNumber = 13360;
      return 3221225715LL;
    }
    if ( (v28 & 0x1F) != 0 )
    {
      if ( (v28 & 0x400) != 0 )
      {
        WdLogSingleEntry2(2LL, v28, -1073741581LL);
        WdLogGlobalForLineNumber = 13374;
        return 3221225715LL;
      }
      if ( (v28 & 0x20) != 0 )
      {
        WdLogSingleEntry2(2LL, v28, -1073741581LL);
        WdLogGlobalForLineNumber = 13382;
        return 3221225715LL;
      }
      if ( (v28 & 0x200) != 0 )
      {
        WdLogSingleEntry2(2LL, v28, -1073741581LL);
        WdLogGlobalForLineNumber = 13390;
        return 3221225715LL;
      }
      if ( (v28 & 0x10) != 0 )
      {
        if ( (v28 & 0x800) != 0 )
        {
          WdLogSingleEntry2(2LL, v28, -1073741581LL);
          WdLogGlobalForLineNumber = 13404;
          return 3221225715LL;
        }
        if ( !a2 )
        {
          WdLogSingleEntry2(2LL, v28, -1073741584LL);
          WdLogGlobalForLineNumber = 13412;
          return 3221225712LL;
        }
        if ( !v26 )
        {
          WdLogSingleEntry2(2LL, v28, -1073741585LL);
          WdLogGlobalForLineNumber = 13418;
          return 3221225711LL;
        }
        for ( i = 0; i < v26; ++i )
        {
          v24 = (_QWORD *)((char *)a2 + 216 * i);
          if ( (*v24 & 0x7FF30FFFFFFFFFFFLL) != 0 )
          {
            WdLogSingleEntry1(2LL, i);
            WdLogGlobalForLineNumber = 13429;
            return 3221225714LL;
          }
        }
      }
      else
      {
        if ( a2 )
        {
          WdLogSingleEntry2(2LL, v28, -1073741584LL);
          WdLogGlobalForLineNumber = 13440;
          return 3221225712LL;
        }
        if ( v26 )
        {
          WdLogSingleEntry2(2LL, v28, -1073741585LL);
          WdLogGlobalForLineNumber = 13446;
          return 3221225711LL;
        }
      }
    }
    else
    {
      if ( (v28 & 0x20) == 0 )
      {
        WdLogSingleEntry2(2LL, v28, -1073741581LL);
        WdLogGlobalForLineNumber = 13457;
        return 3221225715LL;
      }
      if ( (v28 & 0x800) != 0 )
      {
        WdLogSingleEntry2(2LL, v28, -1073741581LL);
        WdLogGlobalForLineNumber = 13465;
        return 3221225715LL;
      }
      if ( (v28 & 0x10000) == 0 )
      {
        if ( !a2 )
        {
          WdLogSingleEntry2(2LL, v28, -1073741584LL);
          WdLogGlobalForLineNumber = 13475;
          return 3221225712LL;
        }
        if ( !v26 )
        {
          WdLogSingleEntry2(2LL, v28, -1073741585LL);
          WdLogGlobalForLineNumber = 13481;
          return 3221225711LL;
        }
      }
      if ( v26 )
      {
        v8 = EnforceSDCCloneSourceIndexCoherency(v26, a2);
        if ( v8 < 0 )
        {
          WdLogSingleEntry1(2LL, v8);
          WdLogGlobalForLineNumber = 13491;
          return (unsigned int)v8;
        }
        v14 = 0;
        v23 = (v28 & 0x10000) != 0 ? 0x80ACF19001830F8FuLL : 0x802CF19001830F8FuLL;
        v25 = v23;
        for ( j = 0; j < v26; ++j )
        {
          v10 = (_QWORD *)((char *)a2 + 216 * j);
          v13 = 0;
          v11[0] = 0;
          v16[0] = 0;
          if ( (~v25 & *v10) != 0 )
          {
            WdLogSingleEntry1(2LL, *v10);
            WdLogGlobalForLineNumber = 13508;
            return 3221225485LL;
          }
          if ( (v10[1] & 0xFFFFFE7FFE7DF470uLL) != 0 || (*v10 & v10[1]) != v10[1] )
          {
            WdLogSingleEntry2(2LL, *v10, v10[1]);
            WdLogGlobalForLineNumber = 13516;
            return 3221225485LL;
          }
          if ( (__int64)*v10 < 0 )
          {
            if ( (*v10 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
              WdLogSingleEntry1(2LL, *v10);
              WdLogGlobalForLineNumber = 13526;
              return 3221225485LL;
            }
            TargetVirtualization = GetTargetVirtualization(
                                     (struct _LUID)v10[2],
                                     *((_DWORD *)v10 + 7),
                                     &v13,
                                     v11,
                                     v16,
                                     0LL,
                                     0LL,
                                     0LL);
            if ( TargetVirtualization < 0 )
            {
              WdLogSingleEntry1(2LL, TargetVirtualization);
              WdLogGlobalForLineNumber = 13542;
              return 3221225712LL;
            }
            if ( (*v10 & 0x8000000000000LL) != 0 )
            {
              v20 = v13 == 0;
              v19 = v11[0] ? 0 : 2;
              v21 = v16[0] ? 0 : 4;
              if ( *((unsigned __int8 *)v10 + 101) != (v21 | v19 | v20) )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 13553;
                return 3221225485LL;
              }
            }
            if ( (*v10 & 0x800LL) != 0 )
            {
              if ( !*((_DWORD *)v10 + 29) && !*((_DWORD *)v10 + 30) )
                v14 = 1;
            }
            else
            {
              v14 = 1;
            }
            for ( k = 0; k < j && ((__int64)*v10 >= 0 || *((_DWORD *)a2 + 54 * k + 39) != *((_DWORD *)v10 + 39)); ++k )
              ;
            if ( k < j )
            {
              if ( (*((_QWORD *)a2 + 27 * k) & 0x8000000000000LL) != (*v10 & 0x8000000000000LL)
                || (_mm_lfence(),
                    !IsPathVirtualFlagCloneCompatible(*((_BYTE *)a2 + 216 * k + 101), *((_BYTE *)v10 + 101))) )
              {
                WdLogSingleEntry3(2LL, k, j, -1073741582LL);
                WdLogGlobalForLineNumber = 13592;
                return 3221225714LL;
              }
              if ( v11[0]
                && (*((_DWORD *)a2 + 54 * k + 4) != *((_DWORD *)v10 + 4)
                 || *((_DWORD *)a2 + 54 * k + 5) != *((_DWORD *)v10 + 5)) )
              {
                WdLogSingleEntry3(2LL, k, j, -1073741582LL);
                WdLogGlobalForLineNumber = 13604;
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x100LL) != 0 && (*v10 & 0x18000000000LL) != 0 )
            {
              WdLogSingleEntry1(2LL, j);
              WdLogGlobalForLineNumber = 13619;
              return 3221225714LL;
            }
            if ( (*v10 & 0x87LL) != 0 )
            {
              if ( (*v10 & 4LL) != 0 )
              {
                v18 = *((_DWORD *)v10 + 19);
                if ( v18 != 1 && v18 != 2 && v18 != 3 )
                {
                  WdLogSingleEntry2(2LL, *((int *)v10 + 19), -1073741582LL);
                  WdLogGlobalForLineNumber = 13648;
                  return 3221225714LL;
                }
              }
              if ( (*v10 & 2LL) != 0 && (!*((_DWORD *)v10 + 12) || !*((_DWORD *)v10 + 13)) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v10 + 12), *((unsigned int *)v10 + 13));
                WdLogGlobalForLineNumber = 13658;
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x1000000LL) != 0 )
            {
              if ( !*((_DWORD *)v10 + 49) || !*((_DWORD *)v10 + 50) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v10 + 49), *((unsigned int *)v10 + 50));
                WdLogGlobalForLineNumber = 13669;
                return 3221225714LL;
              }
              if ( !*((_DWORD *)v10 + 53) )
              {
                WdLogSingleEntry3(2LL, *((unsigned int *)v10 + 53), j, -1073741582LL);
                WdLogGlobalForLineNumber = 13676;
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x800000LL) != 0 && (*v10 & 0x1000000000LL) == 0 )
            {
              if ( v13 && v11[0] )
              {
                WdLogSingleEntry2(2LL, j, -1073741584LL);
                WdLogGlobalForLineNumber = 13690;
                return 3221225712LL;
              }
              if ( (*v10 & 0x100LL) == 0 )
              {
                WdLogSingleEntry2(2LL, j, -1073741584LL);
                WdLogGlobalForLineNumber = 13698;
                return 3221225712LL;
              }
              if ( *((_DWORD *)v10 + 36) >= *((_DWORD *)v10 + 38) || *((_DWORD *)v10 + 35) >= *((_DWORD *)v10 + 37) )
              {
                WdLogSingleEntry2(2LL, j, -1073741582LL);
                WdLogGlobalForLineNumber = 13707;
                return 3221225714LL;
              }
              if ( *((int *)v10 + 36) < 0
                || *((int *)v10 + 35) < 0
                || *((_DWORD *)v10 + 38) > *((_DWORD *)v10 + 23)
                || *((_DWORD *)v10 + 37) > *((_DWORD *)v10 + 22) )
              {
                WdLogSingleEntry2(2LL, j, -1073741582LL);
                WdLogGlobalForLineNumber = 13718;
                return 3221225714LL;
              }
            }
          }
        }
        if ( !v14 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 13729;
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
}
