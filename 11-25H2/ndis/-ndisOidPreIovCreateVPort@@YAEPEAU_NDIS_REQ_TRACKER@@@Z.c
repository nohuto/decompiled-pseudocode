/*
 * XREFs of ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E7950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E51B8 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E6328 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisOidPreIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  _OWORD *v3; // rax
  int *v4; // rdi
  char VPort; // bl
  int v6; // ecx
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v7; // rcx
  char v9[4]; // [rsp+40h] [rbp-A8h]
  struct _NDIS_MINIPORT_BLOCK *v10[2]; // [rsp+50h] [rbp-98h]
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v11[2]; // [rsp+60h] [rbp-88h]
  __int128 v12; // [rsp+70h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-58h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  v3 = (_OWORD *)ndisCaptureIovOidContext((__int64)&v13, a1);
  *(_OWORD *)v10 = *v3;
  *(_OWORD *)v11 = v3[1];
  v12 = v3[2];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x32u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      v1);
  v4 = (int *)((char *)a1 + 40);
  if ( v1[1] != 12 )
    goto LABEL_4;
  VPort = 0;
  *v4 = 0;
  if ( v1[12] < 0x23Cu )
  {
    v6 = -1073676268;
LABEL_9:
    v1[17] = 572;
    VPort = 1;
    *v4 = v6;
    goto LABEL_16;
  }
  if ( v1[13] < 0x23Cu )
  {
    v6 = -1073676266;
    goto LABEL_9;
  }
  if ( LOBYTE(v10[0]) )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(v11[1])
      && (!*((_QWORD *)&v12 + 1) || !v7 || (*(_BYTE *)(*((_QWORD *)&v12 + 1) + 8LL) & 3) != 3) )
    {
LABEL_4:
      VPort = 1;
      *v4 = -1073741637;
      goto LABEL_16;
    }
    VPort = ndisIovCreateVPort(a1, v10[1], v7);
  }
LABEL_16:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *v4;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x33u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VPort,
      *(_DWORD *)v9);
  }
  return VPort;
}
