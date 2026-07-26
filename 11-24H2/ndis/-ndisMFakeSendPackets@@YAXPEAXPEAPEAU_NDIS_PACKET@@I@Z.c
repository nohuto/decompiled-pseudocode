/*
 * XREFs of ?ndisMFakeSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14009C980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1400D9CF0 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMFakeSendPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rdi
  struct _NDIS_PACKET **v4; // r14
  __int64 v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r15
  struct _NDIS_PACKET *v9; // rsi

  v3 = a1[2];
  v4 = a2;
  v5 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      3,
      84,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v3);
  }
  if ( v3 )
  {
    v7 = *(_DWORD *)(v3 + 540);
    if ( (v7 & 0xC0230000) == 0xC0230000 )
      v7 = (unsigned __int16)v7 | 0xC0010000;
  }
  else
  {
    v7 = -1073741823;
  }
  if ( (_DWORD)v5 )
  {
    v8 = v5;
    do
    {
      v9 = *v4;
      if ( (*(_BYTE *)(v3 + 928) & 8) != 0 && *(void **)((char *)&v9[1].Private.Pool + v9->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(*v4);
      v9->Private.NdisPacketFlags &= 0xC0u;
      ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET *, _QWORD))a1[85])(a1[4], v9, v7);
      ++v4;
      --v8;
    }
    while ( v8 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      3,
      85,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v3);
  }
}
