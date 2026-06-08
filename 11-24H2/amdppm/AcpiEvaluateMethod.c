/*
 * XREFs of AcpiEvaluateMethod @ 0x140041208
 * Callers:
 *     AcpiEval_CPC @ 0x14002874C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x140028EB0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400291B8 (AcpiEval_CST.c)
 *     AcpiEval_LPI @ 0x1400295F0 (AcpiEval_LPI.c)
 *     AcpiEval_OSC @ 0x1400296F4 (AcpiEval_OSC.c)
 *     AcpiEval_PCCP @ 0x140029880 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x140029A84 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PDC @ 0x140029C80 (AcpiEval_PDC.c)
 *     AcpiEval_PSD_TSD @ 0x140029D84 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x14002A0CC (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x14002A474 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x14002A5D4 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x14002A8E0 (AcpiEval_XPSS.c)
 *     AcpiEval_PPC @ 0x140041094 (AcpiEval_PPC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, __int64 *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 *v6; // r14
  unsigned int v8; // edi
  int v9; // ebx
  unsigned int v10; // edi
  __int64 Pool2; // rax
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+6Ch] [rbp+Bh]
  __int128 v22; // [rsp+70h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+1Fh]
  int v24; // [rsp+84h] [rbp+23h]
  __int64 v25; // [rsp+D0h] [rbp+6Fh] BYREF

  v25 = 0LL;
  v18 = 0LL;
  v23 = 0;
  v20 = 0;
  v6 = a3;
  v22 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    v15 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 1114203457 )
    {
      switch ( v15 )
      {
        case 1130980673:
          v9 = *((_DWORD *)a3 + 2);
          break;
        case 1231643969:
          v9 = 12;
          break;
        case 1399416129:
          v9 = *((_DWORD *)a3 + 2) + 15;
          break;
        default:
          return (unsigned int)-1073741584;
      }
      goto LABEL_6;
    }
  }
  else
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    LODWORD(v25) = 1114203457;
    v6 = &v25;
    HIDWORD(v25) = a2;
  }
  v9 = 8;
LABEL_6:
  v10 = 1024;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v10, 1919119952LL);
    v12 = (_DWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v24 = 0;
    v21 = 0;
    v13 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&v22 = 1LL;
    *(_QWORD *)&v19 = 1LL;
    *((_QWORD *)&v22 + 1) = v6;
    v23 = v9;
    *((_QWORD *)&v19 + 1) = Pool2;
    v20 = v10;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, __int128 *, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v13,
            0LL,
            3325956LL,
            &v22,
            &v19,
            0LL,
            &v18);
    v8 = v14;
    if ( v14 != -2147483643 )
      break;
    v10 = v12[1];
    ExFreePoolWithTag(v12, (ULONG)0);
  }
  if ( v14 >= 0 && (v16 = v18, v18) )
  {
    *a4 = v12;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v12, (ULONG)0);
    v16 = v18;
  }
  if ( a5 )
    *a5 = v16;
  return v8;
}
