/*
 * XREFs of ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140022040
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400218B0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ndisFInvokeDirectOidRequest @ 0x1400263A0 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x140028310 (ndisMInvokeDirectOidRequest.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140165EE0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     NdisAllocateCloneOidRequest @ 0x140022390 (NdisAllocateCloneOidRequest.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 */

NDIS_STATUS __fastcall ndisOidCloneForCompatibility(
        struct _NDIS_OBJECT_HEADER *a1,
        struct _NDIS_OID_REQUEST *a2,
        char a3,
        struct _NDIS_OID_REQUEST **a4)
{
  struct _NDIS_OBJECT_HEADER *v4; // rbx
  struct _NDIS_OBJECT_HEADER *v7; // r14
  __int64 v9; // rcx
  char v10; // bp
  NDIS_STATUS result; // eax
  int v12; // edx
  PNDIS_OID_REQUEST v13; // rcx
  KIRQL v14; // al
  KSPIN_LOCK *p_Type; // rcx
  int v16; // r9d

  v4 = a1;
  v7 = 0LL;
  if ( a1->Type != 5 )
  {
    v7 = a1;
    v4 = 0LL;
  }
  if ( v4 )
  {
    v9 = *(_QWORD *)&v4[4].Type;
    if ( *(_BYTE *)(v9 + 100) > 6u || *(_BYTE *)(v9 + 100) == 6 && *(_BYTE *)(v9 + 101) >= 0x32u )
      goto LABEL_7;
    v10 = 0;
LABEL_10:
    if ( a2->Header.Revision != 2 && a2->Header.Size == 236 )
      return 0;
    goto LABEL_12;
  }
  if ( v7[8].Type <= 6u && (v7[8].Type != 6 || v7[8].Revision < 0x32u) )
  {
    v10 = 0;
    goto LABEL_10;
  }
LABEL_7:
  v10 = 1;
  if ( a2->Header.Revision != 1 )
    return 0;
LABEL_12:
  result = NdisAllocateCloneOidRequest(*(NDIS_HANDLE *)&a2->NdisReserved[32], a2, 0x7172444Eu, a4);
  if ( result )
    return result;
  v13 = *a4;
  if ( v10 )
  {
    v13->Header.Revision = 2;
    (*a4)->Header.Size = 248;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v16 = 14;
  }
  else
  {
    v13->Header.Revision = 1;
    (*a4)->Header.Size = 236;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v16 = 15;
  }
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_qqD(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v12,
    11,
    v16,
    (struct _GUID *)&WPP_30382edc5f5534ea1982f80fa9fe2d2c_Traceguids,
    (char)a2,
    (char)*a4,
    a2->DATA.QUERY_INFORMATION.Oid);
LABEL_15:
  *(_DWORD *)&(*a4)->NdisReserved[16] |= 0x8000000u;
  if ( a3 && (*(_DWORD *)&a2->NdisReserved[16] & 0x400) == 0 )
  {
    if ( v4 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v4[36].Type);
      p_Type = (KSPIN_LOCK *)&v4[36].Type;
      *(_QWORD *)&v4[38].Type = KeGetCurrentThread();
      *(_QWORD *)&v4[44].Type = *a4;
      *(_QWORD *)&v4[38].Type = 0LL;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v7[24].Type);
      p_Type = (KSPIN_LOCK *)&v7[24].Type;
      *(_QWORD *)&v7[130].Type = KeGetCurrentThread();
      *(_QWORD *)&v7[552].Type = *a4;
      *(_QWORD *)&v7[130].Type = 0LL;
    }
    KeReleaseSpinLock(p_Type, v14);
  }
  return 0;
}
