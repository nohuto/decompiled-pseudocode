/*
 * XREFs of ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x140005540 (-ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x14005CC30 (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B43DC (-ndisPreRemoveMiniportWakeUpPattern@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B683C (-ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

__int64 __fastcall ndisOidPrePMRemoveWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  unsigned __int8 v1; // di
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  __int64 v4; // rsi
  struct _SINGLE_LIST_ENTRY *v5; // r14
  struct _GUID *v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rax
  _DWORD *v10; // r15
  unsigned int v11; // edx
  struct _SINGLE_LIST_ENTRY *v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  char v18[8]; // [rsp+30h] [rbp-38h]
  unsigned __int8 v19; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *((_QWORD *)a1 + 4);
  v5 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v19 = 0;
  v6 = (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      86,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v2,
      v4);
    v6 = (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids;
  }
  v7 = *((_QWORD *)a1 + 3);
  if ( v7 )
  {
    v14 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v14 + 56) == 6 )
    {
      if ( *(_BYTE *)(v14 + 57) >= 0x14u )
        goto LABEL_4;
    }
    else if ( *(_BYTE *)(v14 + 56) > 6u )
    {
      goto LABEL_4;
    }
LABEL_17:
    *((_DWORD *)a1 + 10) = -1073741637;
    v1 = 1;
    goto LABEL_12;
  }
LABEL_4:
  v8 = *((_QWORD *)a1 + 1);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
    {
      v15 = *(_QWORD *)(v8 + 16);
      if ( *(_BYTE *)(v15 + 100) <= 6u && (*(_BYTE *)(v15 + 100) != 6 || *(_BYTE *)(v15 + 101) < 0x14u) )
        goto LABEL_17;
    }
  }
  if ( *(_DWORD *)(v4 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v1 = 1;
    goto LABEL_12;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v4 + 48) < 4u )
  {
    *(_DWORD *)(v4 + 56) = 4;
    v1 = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_12;
  }
  v9 = *(unsigned int **)(v4 + 40);
  *(_DWORD *)(v4 + 56) = 0;
  v10 = (_DWORD *)((char *)a1 + 40);
  v11 = *v9;
  *(_DWORD *)(v4 + 152) = *v9;
  if ( *((_QWORD *)a1 + 3) )
  {
    if ( !ndisFindPatternEntry(v5 + 63, v11) )
    {
LABEL_19:
      *((_DWORD *)a1 + 10) = -1073676261;
      v1 = 1;
      goto LABEL_12;
    }
    v10 = (_DWORD *)((char *)a1 + 40);
  }
  v12 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
  if ( v12 && (*(_DWORD *)(v4 + 88) & 0x4000) == 0 && !ndisFindPatternEntry(v12 + 89, v11) )
    goto LABEL_19;
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  if ( v2->MajorNdisVersion <= 6u )
  {
    if ( v2->MajorNdisVersion != 6 || v2->MinorNdisVersion < 0x14u )
    {
      v16 = ndisXlateRemoveWolPatternToPacketPatternOid(v2, (struct _NDIS_OID_REQUEST *)v4, &v19);
      v1 = v19;
      *((_DWORD *)a1 + 10) = v16;
      if ( v1 != 1 )
      {
        *((_DWORD *)a1 + 10) = 0;
        v1 = ndisPreRemoveMiniportWakeUpPattern(v2, (struct _NDIS_OID_REQUEST *)v4);
      }
      goto LABEL_37;
    }
    v10 = (_DWORD *)((char *)a1 + 40);
  }
  v17 = ndisMiniportPreRemoveWOLPattern(v2, (struct _NDIS_OID_REQUEST *)v4, &v19);
  v1 = v19;
  *v10 = v17;
LABEL_37:
  v6 = (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids;
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, 0xBu, 0x57u, v6, *(_QWORD *)a1, *(_QWORD *)v18);
  }
  return v1;
}
