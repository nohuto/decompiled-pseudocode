/*
 * XREFs of ?ndisOidPreRemovePMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C2C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1400778E0 (-ndisFindPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisOidPreRemovePMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _SINGLE_LIST_ENTRY *v3; // r14
  unsigned __int8 v4; // si
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  struct _SINGLE_LIST_ENTRY *v9; // rcx
  void *OidSourceHandle; // rax
  int v11; // edx
  __int64 *v12; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // r8
  char v18[8]; // [rsp+30h] [rbp-28h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x67u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      v5,
      v1);
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 )
  {
    v16 = *(_QWORD *)(v6 + 24);
    if ( *(_BYTE *)(v16 + 56) <= 6u && (*(_BYTE *)(v16 + 56) != 6 || *(_BYTE *)(v16 + 57) < 0x14u) )
      goto LABEL_39;
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
    {
      v14 = *(_QWORD *)(v7 + 16);
      if ( *(_BYTE *)(v14 + 100) <= 6u )
      {
        if ( *(_BYTE *)(v14 + 100) != 6 )
        {
LABEL_39:
          *((_DWORD *)a1 + 10) = -1073741637;
          goto LABEL_13;
        }
        if ( *(_BYTE *)(v14 + 101) < 0x14u )
        {
          *((_DWORD *)a1 + 10) = -1073741637;
          goto LABEL_13;
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_13;
  }
  *(_DWORD *)(v1 + 56) = 0;
  v8 = **(_DWORD **)(v1 + 40);
  if ( *((_QWORD *)a1 + 3) && !ndisFindPatternEntry(v3 + 64, v8) )
    goto LABEL_12;
  v9 = (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)a1 + 1);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 && !ndisFindPatternEntry(v9 + 90, v8) )
      goto LABEL_12;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_14;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1);
  v12 = *(__int64 **)(v5 + 976);
  if ( !v12 )
    goto LABEL_12;
  while ( 1 )
  {
    v17 = v12;
    if ( *((_DWORD *)v12 + 49) == v11 )
      break;
    v12 = (__int64 *)*v12;
    if ( !v12 )
      goto LABEL_12;
  }
  v15 = v12 + 1;
  if ( !v15 )
  {
LABEL_12:
    *((_DWORD *)a1 + 10) = -1073676261;
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  while ( (void *)v15[2] != OidSourceHandle )
  {
    v15 = (_QWORD *)*v15;
    if ( !v15 )
      goto LABEL_12;
  }
  if ( v17[1] )
    goto LABEL_13;
LABEL_14:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x68u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)v18);
  }
  return v4;
}
