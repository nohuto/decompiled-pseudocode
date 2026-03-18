/*
 * XREFs of OutputDuplGetDebugInfo @ 0x1401E67E8
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401E4FEC (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplGetDebugInfo(struct DXGADAPTER *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int DebugInfo; // edi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-8h] BYREF
  OUTPUTDUPL_MGR *v18; // [rsp+70h] [rbp+10h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  if ( !this || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v18 = RemoteOutputDuplMgr;
  }
  else
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v16);
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    OutputDuplManager = FindOutputDuplManager(this, 0, v5, &v15, v4, &v17, &v18);
    DebugInfo = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = OutputDuplManager;
      WdLogGlobalForLineNumber = 3019;
      goto LABEL_10;
    }
    RemoteOutputDuplMgr = v18;
  }
  if ( RemoteOutputDuplMgr )
  {
    DebugInfo = OUTPUTDUPL_MGR::GetDebugInfo((UINT *)RemoteOutputDuplMgr, a2);
  }
  else
  {
    WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    WdLogGlobalForLineNumber = 3031;
    DebugInfo = -1073741275;
  }
LABEL_10:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v14, 0LL);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v16, 0LL);
  return DebugInfo;
}
