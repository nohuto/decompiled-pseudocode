/*
 * XREFs of ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1401F5E4C
 * Callers:
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1403ECA50 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1403ED2BC (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsTtmDeviceListLockOwner@DXGSESSIONMGR@@QEAAEXZ @ 0x140078D50 (-IsTtmDeviceListLockOwner@DXGSESSIONMGR@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rax
  struct _KEVENT *p_Event; // rax
  __int64 v7; // rdx
  CTTMDEVICE **v8; // r8
  CTTMDEVICE **v9; // rdx
  struct _KEVENT Event; // [rsp+50h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-60h] BYREF
  char v12; // [rsp+98h] [rbp-30h]

  memset(&Event, 0, sizeof(Event));
  Global = DXGGLOBAL::GetGlobal();
  if ( !DXGSESSIONMGR::IsTtmDeviceListLockOwner(*((DXGSESSIONMGR **)Global + 118)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6514;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->GetSessionMgr()->IsTtmDeviceListLockOwner()",
      6514LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 913) )
  {
    if ( a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6521;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_DeleteOnStop || !Wait", 6521LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_BYTE *)this + 913) && *(CTTMDEVICE **)this != this )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6527;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!m_DeleteOnStop || IsListEmpty(&m_ListSessionMan)",
        6527LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6536;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pOwnerAdapter != NULL", 6536LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
  *((_DWORD *)this + 2 * v5 + 157) = 1073741825;
  *((_DWORD *)this + 2 * (unsigned int)v5 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6556;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pWaitEvent == NULL", 6556LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    p_Event = &Event;
  }
  else
  {
    p_Event = 0LL;
  }
  *((_QWORD *)this + 7) = p_Event;
  v7 = *((_QWORD *)this + 4);
  v12 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v7 + 18656));
  *((_QWORD *)this + 4) = 0LL;
  v8 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  if ( v8[1] != (CTTMDEVICE *)((char *)this + 16)
    || (v9 = (CTTMDEVICE **)*((_QWORD *)this + 3), *v9 != (CTTMDEVICE *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v9 = (CTTMDEVICE *)v8;
  v8[1] = (CTTMDEVICE *)v9;
  TtmNotifyDeviceDeparture(1LL, this);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  if ( a2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
