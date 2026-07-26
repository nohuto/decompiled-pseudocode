/*
 * XREFs of ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140070AA0
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140075740 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1400AEB30 (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETR.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1400C2E0C (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1400C3A8C (WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD.c)
 *     WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1400C3FB0 (WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI.c)
 *     WPP_RECORDER_SF__guid_ZDIDIII @ 0x1400C458C (WPP_RECORDER_SF__guid_ZDIDIII.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall ndisTraceNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // r9
  __int64 v5; // rcx
  unsigned int v6; // r13d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned int v9; // r14d
  char *v10; // r15
  unsigned __int16 *v11; // rsi
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 v14; // rdx
  int v15; // [rsp+28h] [rbp-180h]
  int v16; // [rsp+28h] [rbp-180h]
  int v17; // [rsp+28h] [rbp-180h]
  char v18; // [rsp+40h] [rbp-168h]
  unsigned int v19; // [rsp+50h] [rbp-158h]
  struct _NDIS_SELECTIVE_SUSPEND *v20; // [rsp+128h] [rbp-80h]
  __int64 v21; // [rsp+138h] [rbp-70h]
  unsigned __int64 v22; // [rsp+140h] [rbp-68h]
  unsigned __int64 v23; // [rsp+148h] [rbp-60h]
  __int16 v24; // [rsp+158h] [rbp-50h] BYREF
  __int128 v25; // [rsp+15Ah] [rbp-4Eh]
  __int128 v26; // [rsp+16Ah] [rbp-3Eh]
  __int128 v27; // [rsp+17Ah] [rbp-2Eh]
  __int128 v28; // [rsp+18Ah] [rbp-1Eh]
  __int128 v29; // [rsp+19Ah] [rbp-Eh]
  __int128 v30; // [rsp+1AAh] [rbp+2h]
  __int128 v31; // [rsp+1BAh] [rbp+12h]
  __int64 v32; // [rsp+1CAh] [rbp+22h]
  int v33; // [rsp+1D2h] [rbp+2Ah]
  __int16 v34; // [rsp+1D6h] [rbp+2Eh]

  if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    v20 = SelectiveSuspend;
    if ( SelectiveSuspend )
    {
      v32 = 0LL;
      v33 = 0;
      v34 = 0;
      v5 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 91);
      v6 = *((_DWORD *)SelectiveSuspend + 161) - *((_DWORD *)SelectiveSuspend + 176);
      v7 = *((_QWORD *)SelectiveSuspend + 84) - *((_QWORD *)SelectiveSuspend + 89);
      v25 = 0LL;
      v26 = 0LL;
      v24 = 0;
      v21 = v5 / 10000;
      v22 = *((_QWORD *)SelectiveSuspend + 86) - *((_QWORD *)SelectiveSuspend + 90);
      v8 = *((_QWORD *)SelectiveSuspend + 83);
      v23 = v8;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      if ( v6 > 1 )
      {
        v8 = (v7 + ((unsigned __int64)v6 >> 1)) % v6;
        v7 = (v7 + ((unsigned __int64)v6 >> 1)) / v6;
      }
      v9 = 0;
      v10 = (char *)SelectiveSuspend + 736;
      v11 = (unsigned __int16 *)((char *)SelectiveSuspend + 736);
      do
      {
        if ( *v11 + v11[1] )
          ndisNicAutoPowerInsertIntoSortedArray(&v10[16 * v9], v8, &v24);
        ++v9;
        v11 += 8;
      }
      while ( v9 < 0x31 );
      NdisTraceLoggingNicAutoPowerSaver(
        a1,
        a2,
        v21,
        v22,
        v6,
        v7,
        v23,
        v18,
        (struct _NDIS_NAPS_TELEMETRY_REASON_DATA *)&v24,
        v19,
        (struct _NDIS_SELECTIVE_SUSPEND *)((char *)v20 + 1520));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( a2 )
          LODWORD(v14) = 0;
        else
          v14 = *((_QWORD *)a1->AoAc + 102) / 0x2710uLL;
        WPP_RECORDER_SF__guid_ZDIDIII(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          v12,
          v13,
          v15,
          (__int64)&a1->InterfaceGuid,
          (__int64)a1->pAdapterInstanceName,
          a2 == 0,
          v21,
          v6,
          v22,
          v7,
          v14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            HIWORD(v30),
            (unsigned __int16)v30,
            HIWORD(v29),
            v16,
            (__int64)&a1->InterfaceGuid,
            (__int64)a1->pAdapterInstanceName,
            SBYTE2(v25),
            v24,
            v25,
            SBYTE6(v25),
            SBYTE2(v26),
            SBYTE14(v25),
            v26,
            SBYTE6(v26),
            SBYTE2(v27),
            SBYTE14(v26),
            v27,
            SBYTE6(v27),
            SBYTE2(v28),
            SBYTE14(v27),
            v28,
            SBYTE6(v28),
            SBYTE2(v29),
            SBYTE14(v28),
            v29,
            SBYTE6(v29),
            SBYTE2(v30),
            SBYTE14(v29),
            v30,
            SBYTE6(v30),
            SBYTE2(v31),
            SBYTE14(v30),
            v31,
            SBYTE6(v31));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              *((unsigned __int16 *)v20 + 797),
              *((unsigned __int16 *)v20 + 796),
              *((unsigned __int16 *)v20 + 791),
              v17,
              (__int64)&a1->InterfaceGuid,
              (__int64)a1->pAdapterInstanceName,
              *((_DWORD *)v20 + 382),
              *((_WORD *)v20 + 760),
              *((_WORD *)v20 + 761),
              *((_DWORD *)v20 + 385),
              *((_WORD *)v20 + 766),
              *((_WORD *)v20 + 767),
              *((_DWORD *)v20 + 388),
              *((_WORD *)v20 + 772),
              *((_WORD *)v20 + 773),
              *((_DWORD *)v20 + 391),
              *((_WORD *)v20 + 778),
              *((_WORD *)v20 + 779),
              *((_DWORD *)v20 + 394),
              *((_WORD *)v20 + 784),
              *((_WORD *)v20 + 785),
              *((_DWORD *)v20 + 397),
              *((_WORD *)v20 + 790),
              *((_WORD *)v20 + 791),
              *((_DWORD *)v20 + 400),
              *((_WORD *)v20 + 796),
              *((_WORD *)v20 + 797),
              *((_DWORD *)v20 + 403),
              *((_WORD *)v20 + 802),
              *((_WORD *)v20 + 803));
        }
      }
    }
  }
}
