/*
 * XREFs of ndisPktMonFilterRegister @ 0x14016FF90
 * Callers:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B9A50 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x14000E6D0 (-ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     PktMonClientAddEdge @ 0x1400759C0 (PktMonClientAddEdge.c)
 *     PktMonClientComponentRegister @ 0x140075A00 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x14007B260 (PktMonClientComponentUnregister.c)
 *     PktMonClientSetCompProperty @ 0x140086BB0 (PktMonClientSetCompProperty.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPktMonFilterRegister(struct _NDIS_FILTER_BLOCK *a1)
{
  unsigned int v3; // edi
  _NDIS_FILTER_BLOCK *LowerFilter; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // r9
  char v11; // [rsp+40h] [rbp-68h] BYREF
  char v12[7]; // [rsp+41h] [rbp-67h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h] BYREF
  int v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF
  int v18; // [rsp+80h] [rbp-28h]

  v16 = *(_DWORD *)L"r";
  v15 = *(_QWORD *)L"Upper";
  v13[1] = &v15;
  v17 = *(_QWORD *)L"Lower";
  v18 = *(_DWORD *)L"r";
  v14[1] = &v17;
  v13[0] = 786442LL;
  v14[0] = 786442LL;
  v11 = 0;
  v12[0] = 1;
  if ( !ndisReferenceRef(&a1->PnPRef.SpinLock, 0x18u) )
    return 0LL;
  v3 = PktMonClientComponentRegister(
         (__int64)&a1->PktMonComp,
         (__int64)&a1->FilterDriver->ImageName,
         (__int64)&a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
         3LL,
         a1->MediaType);
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 22;
    goto LABEL_38;
  }
  v3 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 9, (__int64)v12, 1u);
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 23;
    goto LABEL_38;
  }
  v3 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 1, (__int64)&a1->IfIndex, 4u);
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 24;
    goto LABEL_38;
  }
  v3 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 2, (__int64)&a1->Miniport->IfIndex, 4u);
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 25;
    goto LABEL_38;
  }
  LowerFilter = a1->LowerFilter;
  if ( LowerFilter )
  {
    v3 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 3, (__int64)&LowerFilter->IfIndex, 4u);
    if ( v3 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = 26;
        goto LABEL_38;
      }
LABEL_20:
      PktMonClientComponentUnregister((__int64 *)&a1->PktMonComp);
      goto LABEL_12;
    }
  }
  if ( FILTER_TEST_FLAG(a1, 0x8000) )
  {
    v3 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 5, (__int64)&a1->MediaType, 4u);
    if ( v3 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v10 = 27;
        goto LABEL_38;
      }
      goto LABEL_20;
    }
  }
  FilterDriver = a1->FilterDriver;
  if ( !FilterDriver->DefaultFilterCharacteristics.SendNetBufferListsHandler
    && !FilterDriver->DefaultFilterCharacteristics.ReceiveNetBufferListsHandler
    && !a1->Characteristics.SendNetBufferListsHandler
    && !a1->Characteristics.ReceiveNetBufferListsHandler )
  {
    v11 = 1;
    v3 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 8, (__int64)&v11, 1u);
    if ( v3 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v10 = 28;
LABEL_38:
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v10,
        (struct _GUID *)&WPP_2f3bef4a5515302869b132ca904a55a6_Traceguids,
        (char)a1,
        v3);
      goto LABEL_20;
    }
  }
  v3 = PktMonClientAddEdge((__int64)&a1->PktMonComp, (__int64)v13, v5, v6, a1->MediaType, (__int64)&a1->PktMonEdgeUpper);
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = 29;
      goto LABEL_38;
    }
    goto LABEL_20;
  }
  v3 = PktMonClientAddEdge(
         (__int64)&a1->PktMonComp,
         (__int64)v14,
         v8,
         v9,
         a1->Miniport->MiniportMediaType,
         (__int64)&a1->PktMonEdgeLower);
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = 30;
      goto LABEL_38;
    }
    goto LABEL_20;
  }
LABEL_12:
  ndisDereferenceRef(&a1->PnPRef.SpinLock, 0x18u);
  return v3;
}
