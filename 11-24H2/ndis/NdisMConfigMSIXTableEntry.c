/*
 * XREFs of NdisMConfigMSIXTableEntry @ 0x1400699C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x140062B30 (WPP_RECORDER_SF_qLLL.c)
 *     WPP_RECORDER_SF_qLLLL @ 0x140063680 (WPP_RECORDER_SF_qLLLL.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisMConfigMSIXTableEntry(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MSIX_CONFIG_PARAMETERS MSIXConfigParameters)
{
  NDIS_STATUS v4; // ebp
  _NDIS_MSIX_TABLE_CONFIG *p_ConfigOperation; // rdi
  _NDIS_MSIX_TABLE_CONFIG v6; // ecx
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // rax
  __int64 (__fastcall *v8)(_QWORD, _QWORD, _QWORD); // rax
  NDIS_STATUS v9; // eax

  v4 = -1073741637;
  p_ConfigOperation = &MSIXConfigParameters->ConfigOperation;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MSIXConfigParameters,
      7u,
      0x15u,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)NdisMiniportHandle,
      *p_ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber);
  if ( MSIXConfigParameters->Header.Revision && MSIXConfigParameters->Header.Size >= 0x10u )
  {
    v6 = *p_ConfigOperation;
    if ( *p_ConfigOperation == NdisMSIXTableConfigUnmaskTableEntry )
    {
      v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 537);
      if ( !v7 )
        goto LABEL_16;
    }
    else
    {
      if ( v6 == NdisMSIXTableConfigSetTableEntry )
      {
        v8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 535);
        if ( !v8 )
          goto LABEL_16;
        v9 = v8(
               *((_QWORD *)NdisMiniportHandle + 534),
               MSIXConfigParameters->TableEntry,
               MSIXConfigParameters->MessageNumber);
LABEL_15:
        v4 = v9;
        goto LABEL_16;
      }
      if ( v6 != NdisMSIXTableConfigMaskTableEntry )
      {
        v4 = -1073741811;
LABEL_16:
        p_ConfigOperation = &MSIXConfigParameters->ConfigOperation;
        goto LABEL_18;
      }
      v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)NdisMiniportHandle + 536);
      if ( !v7 )
        goto LABEL_16;
    }
    v9 = v7(*((_QWORD *)NdisMiniportHandle + 534), MSIXConfigParameters->TableEntry);
    goto LABEL_15;
  }
  v4 = -1073741811;
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MSIXConfigParameters,
      7u,
      0x16u,
      (struct _GUID *)&WPP_089a512067333d51f5b66ea612d009fe_Traceguids,
      (char)NdisMiniportHandle,
      *p_ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber,
      v4);
  return v4;
}
