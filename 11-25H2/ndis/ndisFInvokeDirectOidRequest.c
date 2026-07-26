/*
 * XREFs of ndisFInvokeDirectOidRequest @ 0x1400263A0
 * Callers:
 *     ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x1400261B0 (-ndisFDoDirectOidRequestInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140022040 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_qDqD @ 0x140027140 (WPP_RECORDER_SF_qDqD_ea_140027140.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140027350 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequest(struct _NDIS_OBJECT_HEADER *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  __int64 v3; // r14
  NDIS_OID Oid; // r15d
  NDIS_STATUS v7; // eax
  int v8; // edx
  int v9; // r8d
  struct _NDIS_OID_REQUEST *v10; // rbp
  unsigned int v11; // ebx
  struct _NDIS_OID_REQUEST *v12; // rdx
  struct _NDIS_OID_REQUEST *v14; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_QWORD *)&a1[4].Type;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v14 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      0x16u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid,
      a2);
  v7 = ndisOidCloneForCompatibility(a1, a2, 0, &v14);
  v10 = v14;
  v11 = v7;
  if ( !v7 )
  {
    if ( v14 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        v7 + 11,
        23,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)a2,
        (char)v14,
        v14->DATA.QUERY_INFORMATION.Oid);
    }
    v12 = a2;
    if ( v10 )
      v12 = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *))(v3 + 296))(*(_QWORD *)&a1[6].Type, v12);
  }
  if ( v11 != 259 && v10 )
    ndisOidFreeInternalCloneRequest(a1, v10, 0, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      v9,
      24,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid,
      (char)a2,
      v11);
  return v11;
}
