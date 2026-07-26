/*
 * XREFs of ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B2EC0
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x14004FC40 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400B31D0 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreRcvFilterSetFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v3; // si
  _DWORD *v4; // rbp
  _OWORD *v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // eax
  struct _NDIS_MINIPORT_BLOCK *v12[2]; // [rsp+20h] [rbp-88h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v13[2]; // [rsp+30h] [rbp-78h]
  struct _NDIS_SRIOV_CAPABILITIES *v14[2]; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+60h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 1;
  v4 = *(_DWORD **)(v1 + 40);
  v5 = (_OWORD *)ndisCaptureIovOidContext(&v15, a1);
  *(_OWORD *)v12 = *v5;
  *(_OWORD *)v13 = v5[1];
  *(_OWORD *)v14 = v5[2];
  if ( *(_DWORD *)(v1 + 4) != 12 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return v3;
  }
  v6 = 36;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x24u )
    goto LABEL_7;
  if ( *(_DWORD *)(v1 + 52) < 0x24u )
    goto LABEL_9;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 1LL) >= 2u )
  {
    v6 = 44;
    if ( *(_DWORD *)(v1 + 48) < 0x2Cu )
    {
LABEL_7:
      *(_DWORD *)(v1 + 68) = v6;
LABEL_16:
      *((_DWORD *)a1 + 10) = -1073676268;
      return v3;
    }
    if ( *(_DWORD *)(v1 + 52) < 0x2Cu )
    {
LABEL_9:
      *(_DWORD *)(v1 + 68) = v6;
LABEL_19:
      *((_DWORD *)a1 + 10) = -1073676266;
      return v3;
    }
  }
  v7 = (unsigned int)v4[6] * (unsigned __int64)(unsigned int)v4[7];
  if ( v7 > 0xFFFFFFFF || (v8 = v4[5], v9 = v7 + v8, (unsigned int)v7 + v8 < v8) )
  {
    *((_DWORD *)a1 + 10) = NdisConvertNtStatusToNdisStatus(-1073741675);
    return v3;
  }
  *((_DWORD *)a1 + 10) = 0;
  v10 = v6;
  if ( v9 > v6 )
    v10 = v9;
  if ( *(_DWORD *)(v1 + 48) < v9 )
  {
    *(_DWORD *)(v1 + 68) = v10;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v1 + 52) < v6 )
  {
    *(_DWORD *)(v1 + 68) = v10;
    goto LABEL_19;
  }
  if ( LOBYTE(v12[0]) )
    return ndisSetReceiveFilter(a1, v12[1], v13[1], v14[1]);
  else
    return 0;
}
