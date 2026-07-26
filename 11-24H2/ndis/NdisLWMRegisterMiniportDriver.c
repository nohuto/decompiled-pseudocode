/*
 * XREFs of NdisLWMRegisterMiniportDriver @ 0x140093240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140071C40 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x14008E100 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x140091330 (--1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140136D84 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x140137A7C (-ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEA.c)
 */

__int64 __fastcall NdisLWMRegisterMiniportDriver(
        void *a1,
        struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a2,
        _NDIS_M_DRIVER_BLOCK **a3)
{
  struct _NDIS_LWM_DRIVER_CHARACTERISTICS *v4; // rsi
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  bool v9; // zf
  int (__fastcall *v10)(void *, _NDIS_OID_REQUEST *); // rax
  int v11; // eax
  _NDIS_M_DRIVER_BLOCK *v12; // rsi
  struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS v14; // [rsp+38h] [rbp-59h] BYREF
  struct _UNICODE_STRING *v15; // [rsp+108h] [rbp+77h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      133,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids);
  }
  *a3 = 0LL;
  LOBYTE(v15) = 0;
  v7 = ndisValidateLWMiniportDriverCharacteristicsHeader(v4, (unsigned __int8 *)&v15);
  if ( v7 )
    goto LABEL_12;
  memset(&v14, 0, sizeof(v14));
  v14.Header.Type = -118;
  v14.Header.Revision = (unsigned __int8)v15;
  if ( (_BYTE)v15 != 3 )
  {
    v7 = -1073676283;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1,
        134,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids);
    }
LABEL_12:
    v12 = *a3;
    if ( *a3 )
    {
      _NDIS_M_DRIVER_BLOCK::~_NDIS_M_DRIVER_BLOCK(*a3);
      ExFreePoolWithTag(v12, 0);
      *a3 = 0LL;
    }
    goto LABEL_14;
  }
  v8 = 32;
  v9 = (*((_BYTE *)v4 + 8) & 0x10) == 0;
  v14.MajorNdisVersion = *((_BYTE *)v4 + 4);
  v14.MinorNdisVersion = *((_BYTE *)v4 + 5);
  v14.MajorDriverVersion = *((_BYTE *)v4 + 6);
  v14.MinorDriverVersion = *((_BYTE *)v4 + 7);
  if ( !v9 )
    v8 = 48;
  v14.Header.Size = 160;
  v14.SetOptionsHandler = (int (__fastcall *)(void *, void *))*((_QWORD *)v4 + 4);
  v14.PauseHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *))*((_QWORD *)v4 + 5);
  v14.RestartHandler = (int (__fastcall *)(void *, _NDIS_MINIPORT_RESTART_PARAMETERS *))*((_QWORD *)v4 + 6);
  v14.OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)v4 + 7);
  v14.SendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)v4 + 8);
  v14.ReturnNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))*((_QWORD *)v4 + 9);
  v14.CancelSendHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)v4 + 10);
  v14.CancelOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)v4 + 11);
  v14.DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)v4 + 12);
  v14.CancelDirectOidRequestHandler = (void (__fastcall *)(void *, void *))*((_QWORD *)v4 + 13);
  v10 = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))*((_QWORD *)v4 + 14);
  v14.Flags = v8;
  v14.SynchronousOidRequestHandler = v10;
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v15);
  v11 = ndisLWMGetServiceKeyFromServiceName((unsigned __int8)v4 + 16);
  v7 = NdisConvertNtStatusToNdisStatus(v11);
  if ( !v7 )
    v7 = ndisInternalRegisterMiniportDriver(0LL, v15, a1, &v14, (void **)a3);
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&v15, 0LL);
  if ( v7 )
    goto LABEL_12;
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      135,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      v7);
  }
  return v7;
}
