/*
 * XREFs of SecureDmaEnabler_PrepareMemoryForDma @ 0x1400360C8
 * Callers:
 *     Control_Transfer_Map @ 0x140004C90 (Control_Transfer_Map.c)
 *     Bulk_MapStage @ 0x14001C3D0 (Bulk_MapStage.c)
 *     Isoch_MapStage @ 0x14001EC00 (Isoch_MapStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 */

__int64 __fastcall SecureDmaEnabler_PrepareMemoryForDma(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        _OWORD *a6,
        __int64 a7)
{
  char v7; // bp
  _QWORD *v9; // rsi
  int v10; // edi
  __int64 *v11; // rbx
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0LL;
  v7 = 0;
  v9 = a2;
  if ( *a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)a2,
        18,
        16,
        (__int64)&WPP_363cf0d34eeb3ffef8744b3819ff9f62_Traceguids);
    }
    return (unsigned int)-1073741637;
  }
  else
  {
    v11 = (__int64 *)(a1 + 8);
    if ( KeGetCurrentIrql() == 2 )
    {
      Controller_LowerAndTrackIrql((_QWORD *)*v11);
      v7 = 1;
    }
    v10 = VslCreateSecureSection(&v16, *(_QWORD *)(*v11 + 1032), v9, 4LL, 1);
    if ( v7 )
      Controller_RaiseAndTrackIrql(*v11);
    if ( v10 >= 0 )
    {
      v13 = (__int64)a6;
      v14 = a7;
      *a6 = 0LL;
      *(_OWORD *)(v13 + 16) = 0LL;
      *(_DWORD *)(v13 + 8) = a4;
      *(_DWORD *)v14 = 1;
      *(_QWORD *)(v14 + 16) = *((unsigned int *)v9 + 11);
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 12) = a5;
      *(_QWORD *)(v13 + 16) = v16;
      *(_DWORD *)v13 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v11 + 72),
        v12,
        18,
        17,
        (__int64)&WPP_363cf0d34eeb3ffef8744b3819ff9f62_Traceguids,
        v10);
    }
  }
  return (unsigned int)v10;
}
