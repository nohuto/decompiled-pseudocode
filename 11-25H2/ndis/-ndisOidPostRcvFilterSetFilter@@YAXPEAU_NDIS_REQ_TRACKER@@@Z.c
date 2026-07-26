/*
 * XREFs of ?ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140094D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140089870 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterSetFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  unsigned int v5; // edx
  KIRQL v6; // al
  char v7[8]; // [rsp+30h] [rbp-98h]
  __int128 v8; // [rsp+40h] [rbp-88h]
  __int64 v9; // [rsp+80h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext(&v9, a1);
  v8 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x16u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v4,
      v1);
  if ( (_BYTE)v8 && *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
      if ( v5 )
        ndisClearReceiveFilter(v4, v5);
    }
    else
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&v4->Lock);
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, v6);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v4,
      *(_QWORD *)v7);
  }
}
