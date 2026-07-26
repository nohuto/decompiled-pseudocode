/*
 * XREFs of ?ndisOidPreRcvFilterAllocateQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AA030
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400A94C8 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterAllocateQueue(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rdi
  char v3; // si
  _OWORD *v4; // rax
  struct _NDIS_MINIPORT_BLOCK *v6[2]; // [rsp+20h] [rbp-88h]
  struct _NDIS_RECEIVE_FILTER_CAPABILITIES *v7[2]; // [rsp+50h] [rbp-58h]
  _BYTE v8[64]; // [rsp+60h] [rbp-48h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  v3 = 1;
  v4 = (_OWORD *)ndisCaptureIovOidContext(v8, a1);
  *(_OWORD *)v6 = *v4;
  *(_OWORD *)v7 = v4[3];
  if ( v1[1] == 12 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( v1[12] >= 0x43Cu )
    {
      if ( v1[13] >= 0x43Cu )
      {
        if ( LOBYTE(v6[0]) )
          return ndisAllocateReceiveQueue(a1, v6[1], v7[1]);
        else
          return 0;
      }
      else
      {
        v1[17] = 1084;
        *((_DWORD *)a1 + 10) = -1073676266;
      }
    }
    else
    {
      v1[17] = 1084;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v3;
}
