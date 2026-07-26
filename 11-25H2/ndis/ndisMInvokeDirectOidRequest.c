/*
 * XREFs of ndisMInvokeDirectOidRequest @ 0x140028310
 * Callers:
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140027FA0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140022040 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140027350 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeDirectOidRequest(struct _NDIS_OBJECT_HEADER *a1, struct _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // r14
  struct _NDIS_OID_REQUEST *v3; // rdi
  NDIS_OID Oid; // r15d
  NDIS_STATUS v6; // eax
  int v7; // edx
  struct _NDIS_OID_REQUEST *v8; // rbp
  unsigned int v9; // ebx
  struct _NDIS_OID_REQUEST *v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)&a1[940].Type;
  v3 = a2;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v11 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid);
  v6 = ndisOidCloneForCompatibility(a1, v3, 0, &v11);
  v8 = v11;
  v9 = v6;
  if ( !v6 )
  {
    if ( v11 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x10u,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)v3,
        (char)v11,
        v11->DATA.QUERY_INFORMATION.Oid);
    if ( v8 )
      v3 = v8;
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *))(v2 + 248))(*(_QWORD *)&a1[6].Type, v3);
  }
  if ( v9 != 259 && v8 )
    ndisOidFreeInternalCloneRequest(a1, v8, 0, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      17,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid,
      v9);
  }
  return v9;
}
