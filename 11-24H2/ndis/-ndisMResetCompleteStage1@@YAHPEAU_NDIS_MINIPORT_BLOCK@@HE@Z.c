/*
 * XREFs of ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x14009E1FC
 * Callers:
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009D670 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMResetComplete @ 0x14009FE80 (NdisMResetComplete.c)
 * Callees:
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006A4C0 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z @ 0x14007D980 (-ndisMAbortPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAX@Z.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1400855E0 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_qDdZ @ 0x1400A0B20 (WPP_RECORDER_SF_qDdZ.c)
 */

__int64 __fastcall ndisMResetCompleteStage1(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        void *a3,
        int a4)
{
  char v4; // bp
  int v5; // esi
  unsigned int v7; // edi
  __int64 result; // rax

  v4 = (char)a3;
  v5 = (int)a2;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDdZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, a4);
  if ( v5 == -2147418111 )
  {
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFF7FFFF);
  }
  else
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      ndisMAbortPackets(a1, a2, a3);
      ndisMAbortRequests(a1);
    }
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFF7FFFF);
    if ( v4 && !v5 && a1->EthDB )
      v7 = ndisMRestoreFilterSettings(a1, 0LL, 1u);
  }
  result = v7;
  a1->ResetStatus = v5;
  return result;
}
