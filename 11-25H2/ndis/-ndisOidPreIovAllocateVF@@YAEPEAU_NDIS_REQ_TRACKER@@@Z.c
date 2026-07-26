/*
 * XREFs of ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E72C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E4B14 (-ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  _OWORD *v3; // rax
  int *v4; // rdi
  char VF; // bl
  int v6; // ecx
  char v8[4]; // [rsp+40h] [rbp-A8h]
  struct _NDIS_MINIPORT_BLOCK *v9[2]; // [rsp+50h] [rbp-98h]
  __int128 v10; // [rsp+60h] [rbp-88h]
  __int128 v11; // [rsp+70h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-58h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  v3 = (_OWORD *)ndisCaptureIovOidContext((__int64)&v12, a1);
  *(_OWORD *)v9 = *v3;
  v10 = v3[1];
  v11 = v3[2];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x24u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      v1);
  v4 = (int *)((char *)a1 + 40);
  if ( v1[1] != 12 )
    goto LABEL_14;
  VF = 0;
  *v4 = 0;
  if ( v1[12] >= 0x660u )
  {
    if ( v1[13] < 0x660u )
    {
      v6 = -1073676266;
      goto LABEL_8;
    }
    if ( !LOBYTE(v9[0]) )
      goto LABEL_16;
    if ( *((_QWORD *)&v11 + 1) && *((_QWORD *)&v10 + 1) && (*(_BYTE *)(*((_QWORD *)&v11 + 1) + 8LL) & 3) == 3 )
    {
      VF = ndisIovAllocateVF(a1, v9[1]);
      goto LABEL_16;
    }
LABEL_14:
    *v4 = -1073741637;
    goto LABEL_15;
  }
  v6 = -1073676268;
LABEL_8:
  v1[17] = 1632;
  *v4 = v6;
LABEL_15:
  VF = 1;
LABEL_16:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *v4;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x25u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VF,
      *(_DWORD *)v8);
  }
  return VF;
}
