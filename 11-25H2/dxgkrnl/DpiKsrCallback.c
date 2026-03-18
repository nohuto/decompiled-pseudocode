/*
 * XREFs of DpiKsrCallback @ 0x140249CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x140248E8C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x140249580 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     ?DpiKsrFinalize@@YAXPEAU_KSR_FINALIZE_NOTIFICATION_CONTEXT@@@Z @ 0x140249704 (-DpiKsrFinalize@@YAXPEAU_KSR_FINALIZE_NOTIFICATION_CONTEXT@@@Z.c)
 *     DpiKsrRecoveryShutdown @ 0x14024A170 (DpiKsrRecoveryShutdown.c)
 */

void __fastcall DpiKsrCallback(
        _BYTE *CallbackContext,
        PVOID Argument1,
        struct _KSR_FINALIZE_NOTIFICATION_CONTEXT *Argument2)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rbx

  if ( (_DWORD)Argument1 )
  {
    v4 = (_DWORD)Argument1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = (unsigned int)(v5 - 3);
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 == 10 )
            DpiKsrRecoveryShutdown(CallbackContext, v6, Argument2);
        }
        else
        {
          DpiKsrFinalize(Argument2);
        }
      }
      else
      {
        if ( !qword_14015E300
          || (DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrRestoreMemoryCallback, 0LL),
              v7 = 1LL,
              *(_BYTE *)(qword_14015E300 + 28) = 1,
              !qword_14015E300) )
        {
          v7 = 0LL;
        }
        DxgkLogInternalTriageEvent(
          0LL,
          65540,
          0xFFFFFFFFLL,
          L"KSR Complete routine has called and the driver iteration was %1",
          v7,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      DpiKsrCancel(CallbackContext);
    }
  }
  else
  {
    CallbackContext[1465] = 1;
    *((_BYTE *)DXGGLOBAL::GetGlobal() + 305540) = 1;
    *((_DWORD *)CallbackContext + 371) = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      65537,
      0xFFFFFFFFLL,
      L"KSR Prepare was called - will defer save until all VMs have quiesced",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
