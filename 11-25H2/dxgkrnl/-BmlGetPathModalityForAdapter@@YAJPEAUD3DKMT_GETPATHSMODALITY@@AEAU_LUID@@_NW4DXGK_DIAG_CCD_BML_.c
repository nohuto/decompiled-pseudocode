/*
 * XREFs of ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C21A0
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x140372558 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1402C3AB0 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(__int64 a1, const struct _LUID *a2, char a3, unsigned int a4, int a5)
{
  struct DXGADAPTER *v9; // rdi
  int PathModalityForAdapterWithCoreAccessHeld; // ebx
  __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rax
  struct DXGADAPTER *v18; // [rsp+30h] [rbp-91h] BYREF
  __int64 v19; // [rsp+40h] [rbp-81h] BYREF
  _BYTE v20[144]; // [rsp+50h] [rbp-71h] BYREF

  v18 = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v18, a2) )
  {
    v9 = v18;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v18, 0LL);
    PathModalityForAdapterWithCoreAccessHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
    if ( PathModalityForAdapterWithCoreAccessHeld >= 0 )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( (unsigned int)PsGetCurrentProcessSessionId() != ServerSiloServiceSessionId )
      {
        v19 = 0LL;
        Current = DXGPROCESS::GetCurrent(v13);
        if ( Current )
        {
          v16 = *((_QWORD *)Current + 11);
          if ( v16 )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v16 + 240))(0LL, &v19, 0LL);
        }
        if ( v19 != *(_QWORD *)((char *)v9 + 4828) )
        {
          WdLogSingleEntry2(2LL, a2->HighPart, a2->LowPart);
          WdLogGlobalForLineNumber = 6436;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
          DXGADAPTER::ReleaseReference(v9);
          return 3223191554LL;
        }
      }
      LOBYTE(v14) = a3;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   a1,
                                                   v9,
                                                   v14,
                                                   a4,
                                                   a5,
                                                   0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
    if ( v9 )
      DXGADAPTER::ReleaseReference(v9);
    return (unsigned int)PathModalityForAdapterWithCoreAccessHeld;
  }
  else
  {
    if ( v18 )
      DXGADAPTER::ReleaseReference(v18);
    return 3221225486LL;
  }
}
