/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1401E68F8
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x140072248 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1401E5418 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402D4830 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(struct DXGADAPTER *this, __int64 a2)
{
  int v2; // edi
  struct DXGADAPTER **v5; // rbx
  struct DXGADAPTER **v6; // rax
  int OutputDuplManager; // eax
  __int64 v8; // rdx
  OUTPUTDUPL_MGR *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  unsigned int *v14; // r8
  unsigned int v15; // ecx
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-8h] BYREF
  struct OUTPUTDUPL_MGR *v21; // [rsp+80h] [rbp+20h] BYREF

  v2 = 0;
  v19 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  if ( !this || (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v21 = RemoteOutputDuplMgr;
  }
  else
  {
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v19);
    v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v17);
    OutputDuplManager = FindOutputDuplManager(this, 0, v6, &v18, v5, &v20, &v21);
    v12 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = OutputDuplManager;
      WdLogGlobalForLineNumber = 2986;
      goto LABEL_18;
    }
    RemoteOutputDuplMgr = v21;
  }
  if ( RemoteOutputDuplMgr )
  {
    if ( (unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled(v9) )
    {
      if ( *(_DWORD *)a2 || !*((_QWORD *)RemoteOutputDuplMgr + 10) )
      {
        *(_DWORD *)(a2 + 4) = 0;
      }
      else
      {
        v14 = (unsigned int *)(a2 + 4);
        v15 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0;
        if ( *(_DWORD *)(a2 + 4) >= v15 )
        {
          DXGDIAGNOSTICS::ReadDiagnostics(
            *((DXGDIAGNOSTICS **)RemoteOutputDuplMgr + 10),
            (unsigned __int8 *)(a2 + 8),
            v14,
            -1);
        }
        else
        {
          *v14 = v15;
          v2 = 1075707914;
        }
      }
    }
    else
    {
      v2 = -1073741790;
    }
    v12 = v2;
  }
  else
  {
    WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    WdLogGlobalForLineNumber = 2998;
    v12 = -1073741275;
  }
LABEL_18:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v17, 0LL);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v19, 0LL);
  return v12;
}
