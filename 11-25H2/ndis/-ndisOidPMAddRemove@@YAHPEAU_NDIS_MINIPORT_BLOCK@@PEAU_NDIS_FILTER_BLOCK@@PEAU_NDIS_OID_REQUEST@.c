/*
 * XREFs of ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140015760
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140012DA0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFOidRequest @ 0x140013740 (NdisFOidRequest.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x14002D500 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x14008EC90 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qqqd @ 0x140026E30 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_Dd @ 0x14004FB20 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005BCC0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D410 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140086710 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14008C380 (-ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_O.c)
 */

__int64 __fastcall ndisOidPMAddRemove(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // rdi
  int v6; // edx
  NDIS_OID Oid; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // edi
  int v14; // r9d

  v4 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      62,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3);
  }
  if ( !KeGetCurrentIrql() )
  {
    Oid = a3->DATA.QUERY_INFORMATION.Oid;
    switch ( Oid )
    {
      case 0xFD01010D:
        v8 = ndisPMAddProtocolOffload(a1, v4, a3);
        v9 = v8;
        if ( !v8 )
          goto LABEL_6;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v14 = 65;
          break;
        }
        return v9;
      case 0xFD01010A:
        v8 = ndisPMAddWOLPattern(a1, v4, a3);
        v9 = v8;
        if ( !v8 )
          goto LABEL_6;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v9;
        v14 = 64;
        break;
      case 0xFD01010B:
      case 0xFD01010F:
        v8 = ndisOidPMRemove(a1, v4, a3);
        v9 = v8;
        if ( !v8 )
        {
LABEL_6:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v6,
              11,
              67,
              (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
              (char)a1,
              (char)v4,
              (char)a3,
              v9);
          return v9;
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v9;
        v14 = 66;
        break;
      default:
        v9 = -1073741823;
        goto LABEL_6;
    }
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      14,
      v14,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      v8);
    goto LABEL_6;
  }
  v11 = ndisCreatePMAddRemoveWorkItem(a1, v4, a3);
  v13 = v11;
  if ( !v11 )
    return 259LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      14,
      63,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      a3->DATA.QUERY_INFORMATION.Oid,
      v11);
  }
  return v13;
}
