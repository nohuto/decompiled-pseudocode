/*
 * XREFs of ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14001DB10
 * Callers:
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?AddCallerInfo@COREACCESS@@AEAAXPEBD@Z @ 0x14001EA40 (-AddCallerInfo@COREACCESS@@AEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140075D50 (-SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x1400828A8 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@@Z @ 0x140082B3C (-CheckForMdmFaultOrDelayInjection@@YA_NW4_D3DKMT_DISPLAYMUX_SWITCH_INJECTION_STAGE@@W4_D3DKMT_DI.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x140293140 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x1403816F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyA(char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  char v5; // al
  char *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = a1[v4];
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
