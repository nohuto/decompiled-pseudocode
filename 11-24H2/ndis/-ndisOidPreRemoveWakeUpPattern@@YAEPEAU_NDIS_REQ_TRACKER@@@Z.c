/*
 * XREFs of ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B38B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x140005540 (-ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B43DC (-ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B45AC (-ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetRemoveWakeUpPattern@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B5C24 (-ndisSetRemoveWakeUpPattern@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateRemovePacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B6768 (-ndisXlateRemovePacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreRemoveWakeUpPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  struct _NDIS_OPEN_BLOCK *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rax
  unsigned __int8 v8; // di
  _DWORD *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-28h]
  unsigned __int8 v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      29,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v4,
      v1);
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 24);
    if ( *(_BYTE *)(v6 + 56) > 6u || *(_BYTE *)(v6 + 56) == 6 && *(_BYTE *)(v6 + 57) >= 0x14u )
    {
      v7 = (_DWORD *)((char *)a1 + 40);
      v8 = 1;
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_23;
    }
  }
  v9 = (_DWORD *)((char *)a1 + 40);
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *v9 = -1073741637;
LABEL_10:
    v8 = 1;
    goto LABEL_22;
  }
  v10 = ndisSetRemoveWakeUpPattern((struct _NDIS_OID_REQUEST *)v1, &v15);
  v8 = v15;
  *v9 = v10;
  v7 = (_DWORD *)((char *)a1 + 40);
  if ( v8 == 1 )
    goto LABEL_23;
  if ( *((_QWORD *)a1 + 3) && !ndisPreRemoveOpenWakeUpPattern(v3, (struct _NDIS_OID_REQUEST *)v1) )
  {
    *v9 = -1073741811;
    goto LABEL_10;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( v4->MajorNdisVersion > 6u || v4->MajorNdisVersion == 6 && v4->MinorNdisVersion >= 0x14u )
    {
      v11 = ndisXlateRemovePacketPatternToWolPatternOid((struct _NDIS_OID_REQUEST *)v1, &v15);
      v8 = v15;
      *v9 = v11;
      v7 = (_DWORD *)((char *)a1 + 40);
      if ( v8 == 1 )
        goto LABEL_23;
      v12 = ndisMiniportPreRemoveWOLPattern(v4, (struct _NDIS_OID_REQUEST *)v1, &v15);
      v8 = v15;
      *v9 = v12;
    }
    else
    {
      *v9 = 0;
      v8 = ndisPreRemoveMiniportWakeUpPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
    }
  }
LABEL_22:
  v7 = (_DWORD *)((char *)a1 + 40);
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = *v7;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      *(_QWORD *)a1,
      v14);
  }
  return v8;
}
