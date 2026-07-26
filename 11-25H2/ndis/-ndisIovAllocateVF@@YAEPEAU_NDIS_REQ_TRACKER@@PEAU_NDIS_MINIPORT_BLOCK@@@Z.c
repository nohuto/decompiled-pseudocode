/*
 * XREFs of ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400E4B14
 * Callers:
 *     ?ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E72C0 (-ndisOidPreIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140097870 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

char __fastcall ndisIovAllocateVF(struct _NDIS_REQ_TRACKER *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  char v5; // r12
  _BYTE *OidSourceHandle; // rax
  _BYTE *v7; // r15
  __int64 v8; // rdi
  _LIST_ENTRY *SwitchBySwitchId; // rax
  _DWORD *v10; // rbx
  _LIST_ENTRY *v11; // rbp
  __int64 Pool2; // rax
  __int64 v13; // rsi
  void *v14; // rcx
  _QWORD *v15; // rax
  char v17; // [rsp+28h] [rbp-40h]

  v2 = *((_QWORD *)a1 + 4);
  v3 = a2;
  v5 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v17 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      38,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v17);
  }
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = 1632;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v2);
  v7 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v8 = *(_QWORD *)(v2 + 40);
    if ( *(_WORD *)(v8 + 1626) != 0xFFFF || *(_DWORD *)(v8 + 1628) != -1 )
    {
      v10 = (_DWORD *)((char *)a1 + 40);
LABEL_9:
      *v10 = -1073741811;
      goto LABEL_15;
    }
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v8 + 8));
    v10 = (_DWORD *)((char *)a1 + 40);
    v11 = SwitchBySwitchId;
    if ( !SwitchBySwitchId || LODWORD(SwitchBySwitchId[4].Blink) == LODWORD(SwitchBySwitchId[39].Blink) )
      goto LABEL_9;
    Pool2 = ExAllocatePool2(64LL, 1728LL, 1869169742);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 72) = 1;
      v14 = (void *)(Pool2 + 96);
      *(_QWORD *)(Pool2 + 48) = v3;
      *(_QWORD *)(Pool2 + 56) = v7;
      *(_QWORD *)(Pool2 + 64) = v11;
      v15 = (_QWORD *)(Pool2 + 80);
      v15[1] = v15;
      *v15 = v15;
      memmove(v14, (const void *)v8, 0x660uLL);
      *(_QWORD *)(v2 + 144) = v13;
      *v10 = 0;
      v5 = 0;
    }
    else
    {
      *v10 = -1073741670;
    }
  }
  else
  {
    v10 = (_DWORD *)((char *)a1 + 40);
    *v10 = -1073741637;
  }
LABEL_15:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x27u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v3,
      *v10);
  return v5;
}
