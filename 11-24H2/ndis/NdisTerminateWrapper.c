/*
 * XREFs of NdisTerminateWrapper @ 0x1400D7180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140171AA0 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 */

void __stdcall NdisTerminateWrapper(NDIS_HANDLE NdisWrapperHandle, PVOID SystemSpecific)
{
  _WORD *DriverObjectExtension; // rax
  _WORD *v4; // rbx
  __int16 v5; // ax
  int v6; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      12,
      (struct _GUID *)&WPP_bacc0da9805531f1e85588a73c3812ec_Traceguids,
      (char)NdisWrapperHandle);
  if ( NdisWrapperHandle && *(_QWORD *)NdisWrapperHandle )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)NdisWrapperHandle, (PVOID)0x4E4D4944);
    v4 = DriverObjectExtension;
    if ( DriverObjectExtension )
    {
      v5 = DriverObjectExtension[13] | 4;
      v4[13] = v5;
      if ( *((_QWORD *)v4 + 2) || v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v6 = 13;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          1,
          14,
          (struct _GUID *)&WPP_bacc0da9805531f1e85588a73c3812ec_Traceguids,
          (char)v4);
      v4[13] |= 0x10u;
      *((_QWORD *)v4 + 13) = 0LL;
      ndisMUnload(*(struct _DRIVER_OBJECT **)NdisWrapperHandle);
    }
    else
    {
      ExFreePoolWithTag(NdisWrapperHandle, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return;
  v6 = 15;
LABEL_16:
  WPP_RECORDER_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    4,
    1,
    v6,
    (struct _GUID *)&WPP_bacc0da9805531f1e85588a73c3812ec_Traceguids);
}
