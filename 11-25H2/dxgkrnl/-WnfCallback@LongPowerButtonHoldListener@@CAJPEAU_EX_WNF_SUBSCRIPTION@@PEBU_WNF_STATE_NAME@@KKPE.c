/*
 * XREFs of ?WnfCallback@LongPowerButtonHoldListener@@CAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1400599C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018AA10 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401BB804 (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1402845E8 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x140284668 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

__int64 __fastcall LongPowerButtonHoldListener::WnfCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        __int64 a4,
        const struct _WNF_TYPE_ID *a5,
        char *a6)
{
  __int64 v6; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  unsigned __int8 v9; // dl
  struct DXGSESSIONDATA *v10; // rax
  struct DXGSESSIONDATA *v11; // rdi
  struct _KPROCESS *v12; // rdx
  DXGGLOBAL *v13; // rax
  DXGSESSIONMGR *v14; // rax
  _BYTE OutputBuffer[4]; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+3Ch] [rbp-35h] BYREF
  int v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-11h] BYREF
  char v22; // [rsp+90h] [rbp+1Fh]
  _BYTE v23[24]; // [rsp+98h] [rbp+27h] BYREF

  if ( *a2 == WNF_PO_POWER_BUTTON_STATE )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(a6 + 24), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v6 = *(_QWORD *)a6;
    v18 = 0;
    v17 = 24;
    memset(v23, 0, sizeof(v23));
    if ( (int)ExQueryWnfStateData(v6, &v18, v23, &v17) < 0 || v17 != 24 )
      goto LABEL_18;
    if ( (v23[0] & 1) != 0 )
    {
      if ( *(_DWORD *)v23 >> 1 < *((_DWORD *)a6 + 3) || a6[8] )
      {
        if ( *(_DWORD *)v23 >> 1 < *((_DWORD *)a6 + 4) || a6[9] )
          goto LABEL_18;
        if ( a6[88] )
        {
          Global = DXGGLOBAL::GetGlobal();
          SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
          v10 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(SessionMgr, v9);
          v11 = v10;
          if ( v10 )
          {
            v12 = (struct _KPROCESS *)*((_QWORD *)v10 + 2332);
            v22 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, v12);
            DxgkRequestDisplayRecoveryToBroker();
            v13 = DXGGLOBAL::GetGlobal();
            v14 = DXGGLOBAL::GetSessionMgr(v13);
            DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(v14, v11);
            CPROCESSATTACHHELPER::Detach(&ApcState);
          }
        }
        else
        {
          OutputBuffer[0] = 0;
          InputBuffer = 49LL;
          if ( ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, OutputBuffer, 1u) >= 0
            && OutputBuffer[0] )
          {
            goto LABEL_18;
          }
          *(struct _LIST_ENTRY **)((char *)&ApcState.ApcListHead[0].Flink + 4) = 0LL;
          HIDWORD(ApcState.ApcListHead[0].Blink) = 0;
          ApcState.ApcListHead[1].Blink = 0LL;
          LODWORD(ApcState.ApcListHead[0].Flink) = 16;
          ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)2;
          SMgrGdiCallout(&ApcState, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
        }
        a6[9] = 1;
      }
      else
      {
        *(struct _LIST_ENTRY **)((char *)&ApcState.ApcListHead[0].Flink + 4) = 0LL;
        HIDWORD(ApcState.ApcListHead[0].Blink) = 0;
        ApcState.ApcListHead[1].Blink = 0LL;
        *(_OWORD *)(a6 + 72) = *(_OWORD *)&v23[8];
        LODWORD(ApcState.ApcListHead[0].Flink) = 16;
        ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)1;
        SMgrGdiCallout(&ApcState, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
        a6[8] = 1;
      }
    }
    else
    {
      *((_WORD *)a6 + 4) = 0;
    }
LABEL_18:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  }
  return 0LL;
}
