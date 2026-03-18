/*
 * XREFs of ?DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x14039C870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        struct _EX_RUNDOWN_REF *a6)
{
  unsigned int v10; // edi
  struct _KPROCESS *Count; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  volatile signed __int32 *v14; // rbx
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-80h] BYREF

  v10 = 0;
  Count = (struct _KPROCESS *)a6[3].Count;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(Count, &ApcState);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v14 = (volatile signed __int32 *)((char *)SessionData + 19264);
    DXGPUSHLOCK::AcquireShared((struct DXGSESSIONDATA *)((char *)SessionData + 19264));
    if ( ExAcquireRundownProtection(a6 + 4) )
    {
      v10 = ((__int64 (__fastcall *)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, _QWORD, _QWORD, const struct _WNF_TYPE_ID *, struct _EX_RUNDOWN_REF *))a6[1].Count)(
              a1,
              a2,
              a3,
              a4,
              a5,
              a6);
      ExReleaseRundownProtection(a6 + 4);
    }
    _InterlockedDecrement(v14 + 4);
    ExReleasePushLockSharedEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  KeUnstackDetachProcess(&ApcState);
  return v10;
}
