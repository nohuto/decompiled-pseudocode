/*
 * XREFs of ?ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140081C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14006D610 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterSetFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  unsigned int v6; // edx
  KIRQL v7; // al
  char v8[8]; // [rsp+30h] [rbp-98h]
  __int128 v9; // [rsp+40h] [rbp-88h]
  __int64 v10; // [rsp+80h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext(&v10, a1);
  v9 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      22,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v5,
      v1);
  }
  if ( (_BYTE)v9 && *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      v6 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 16LL);
      if ( v6 )
        ndisClearReceiveFilter(v5, v6);
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&v5->Lock);
      v5->MiniportThread = 0LL;
      KeReleaseSpinLock(&v5->Lock, v7);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v5,
      *(_QWORD *)v8);
  }
}
