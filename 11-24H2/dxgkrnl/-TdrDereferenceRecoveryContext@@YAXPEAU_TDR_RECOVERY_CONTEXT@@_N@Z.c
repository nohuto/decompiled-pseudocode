/*
 * XREFs of ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401CFA18
 * Callers:
 *     ??1CTDR_GDI_RESET_THREAD@@MEAA@XZ @ 0x1401CEB50 (--1CTDR_GDI_RESET_THREAD@@MEAA@XZ.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1401CF8E0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1401D05A0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 *     ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1401D0C10 (-Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1401CEBB4 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1401CF3D0 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401CFB28 (-TdrFreePool@@YAXPEAX@Z.c)
 */

void __fastcall TdrDereferenceRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 Pool2; // rax
  NTSTATUS v4; // eax
  DXGADAPTER *v5; // rcx
  __int64 v6; // rcx
  CTDR_DUMP_BUFFER *v7; // rcx

  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 356) && a2 )
    {
      Pool2 = ExAllocatePool2(256LL, 32LL, 1380209782LL);
      if ( !Pool2 )
        TdrBugcheckOnTimeout(a1, -1073741801, 16);
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_DWORD *)(Pool2 + 16) = 0;
      *(_QWORD *)Pool2 = &CTDR_SUBMIT_REPORT_THREAD::`vftable';
      *(_QWORD *)(Pool2 + 24) = a1;
      v4 = CVP_SYSTEM_THREAD::Start((void **)Pool2);
      if ( v4 < 0 )
        TdrBugcheckOnTimeout(a1, v4, 17);
      *((_BYTE *)a1 + 2920) = 1;
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 724, 0xFFFFFFFF) <= 1 )
    {
      v5 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
      if ( v5 )
      {
        DXGADAPTER::ReleaseReference(v5);
        *((_QWORD *)a1 + 4) = 0LL;
      }
      v6 = *((_QWORD *)a1 + 356);
      if ( v6 )
        WdDbgReportComplete(v6);
      v7 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 359);
      if ( v7 )
        CTDR_DUMP_BUFFER::`scalar deleting destructor'(v7);
      TdrFreePool(*((void **)a1 + 357));
      TdrFreePool(*((void **)a1 + 360));
      TdrFreePool(a1);
    }
  }
}
