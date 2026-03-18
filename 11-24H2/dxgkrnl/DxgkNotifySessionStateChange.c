/*
 * XREFs of DxgkNotifySessionStateChange @ 0x1403DA6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140056BA4 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1401FA6BC (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?InitializeContainerData@DXGSESSIONDATA@@QEAAXPEAU_EJOB@@@Z @ 0x1401FB0E4 (-InitializeContainerData@DXGSESSIONDATA@@QEAAXPEAU_EJOB@@@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402D48DC (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403DA7D8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiSessionCreateCallback @ 0x1403DAA9C (DpiSessionCreateCallback.c)
 */

__int64 __fastcall DxgkNotifySessionStateChange(int a1)
{
  int Session; // ebp
  DXGSESSIONMGR *v3; // r14
  __int64 HostSilo; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  struct DXGSESSIONDATA *SessionData; // rax
  struct _EJOB *v8; // rdx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 (__fastcall *v11)(_QWORD); // [rsp+60h] [rbp+18h] BYREF

  Session = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 122);
  HostSilo = PsGetHostSilo();
  v5 = 1;
  v6 = PsAttachSiloToCurrentThread(HostSilo);
  if ( a1 )
  {
    v5 = 2;
    if ( a1 == 1 )
    {
      DXGSESSIONMGR::DestroySession(v3);
    }
    else
    {
      v5 = 3;
      if ( a1 != 2 )
      {
        if ( a1 == 3 )
        {
          v5 = 7;
        }
        else
        {
          v5 = 0;
          if ( a1 == 4 )
            v5 = 8;
        }
      }
    }
  }
  else
  {
    Session = DXGSESSIONMGR::CreateSession(v3);
    if ( Session >= 0 )
      Session = DpiSessionCreateCallback();
  }
  v10 = 0LL;
  DxgkLogCodePointPacket(0x6Du, v5, 0, 0, 0LL);
  if ( v6 )
  {
    v11 = (__int64 (__fastcall *)(_QWORD))PsDetachSiloFromCurrentThread;
    v10 = v6;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(&v11, &v10);
  }
  if ( Session >= 0 && !a1 )
  {
    SessionData = DXGSESSIONMGR::GetSessionData(v3);
    if ( *((_BYTE *)SessionData + 18502) )
      DXGSESSIONDATA::InitializeContainerData(SessionData, v8);
  }
  return (unsigned int)Session;
}
