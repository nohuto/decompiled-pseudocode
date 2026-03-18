/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x14018B268
 * Callers:
 *     DxgkSessionReconnected @ 0x1403984F0 (DxgkSessionReconnected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1401E640C (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(unsigned int a1)
{
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v3; // rbx
  int v4; // eax
  _BYTE v5[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]

  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  v3 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, (struct _KTHREAD **)RemoteOutputDuplMgr + 3, 0);
    DXGPUSHLOCK::AcquireExclusive(v6);
    v7 = 2;
    v4 = OUTPUTDUPL_MGR::ReconfigureNumSources(v3, a1);
    if ( v4 != -1073741801 )
    {
      if ( v4 >= 0 )
      {
        *((_DWORD *)v3 + 18) = 1;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4015;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"(Status == STATUS_NO_MEMORY) || NT_SUCCESS(Status)",
          4015LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
  }
}
