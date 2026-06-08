/*
 * XREFs of AcpiEval_XPSS @ 0x1400322EC
 * Callers:
 *     InitAcpiPerfStates @ 0x140027628 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140044948 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_XPSS(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // r14
  int v6; // edx
  int v7; // ebx
  _DWORD *v8; // rdi
  int v10; // r9d
  int v11; // eax
  _WORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  char v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+52h] [rbp-AEh]
  const char *v19; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v20)(); // [rsp+60h] [rbp-A0h]
  char v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+6Ah] [rbp-96h]
  const char *v23; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v24)(); // [rsp+78h] [rbp-88h]
  char v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+82h] [rbp-7Eh]
  const char *v27; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp-70h]
  char v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ah] [rbp-66h]
  const char *v31; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v32)(); // [rsp+A8h] [rbp-58h]
  char v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B2h] [rbp-4Eh]
  const char *v35; // [rsp+B8h] [rbp-48h]
  void *v36; // [rsp+C0h] [rbp-40h]
  char v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CAh] [rbp-36h]
  const char *v39; // [rsp+D0h] [rbp-30h]
  void *v40; // [rsp+D8h] [rbp-28h]
  char v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E2h] [rbp-1Eh]
  const char *v43; // [rsp+E8h] [rbp-18h]
  void *v44; // [rsp+F0h] [rbp-10h]
  char v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FAh] [rbp-6h]
  const char *v47; // [rsp+100h] [rbp+0h]
  void *v48; // [rsp+108h] [rbp+8h]

  v2 = 0;
  v21 = 1;
  v15 = 0;
  v19 = "CoreFrequency";
  v17 = 0;
  v20 = AcpiParseULong;
  v23 = "Power";
  v24 = AcpiParseULong;
  v27 = "Latency";
  v28 = AcpiParseULong;
  v29 = 3;
  v32 = AcpiParseULong;
  v31 = "BmLatency";
  v18 = 0;
  v35 = "Control";
  Pool2 = 0LL;
  v22 = 0x40000;
  v39 = "Status";
  v43 = "ControlMask";
  v47 = "StatusMask";
  v25 = 2;
  v26 = 0x80000;
  v30 = 786432;
  v33 = 4;
  v34 = 1048578;
  v36 = &AcpiParseULong64;
  v37 = 5;
  v38 = 1572866;
  v40 = &AcpiParseULong64;
  v41 = 6;
  v42 = 2097154;
  v44 = &AcpiParseULong64;
  v45 = 7;
  v46 = 2621442;
  v48 = &AcpiParseULong64;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x80u);
  v7 = AcpiEvaluateMethod(a1, 1397968984, 0, (unsigned int)&P, (__int64)&v15);
  if ( v7 < 0 )
    goto LABEL_6;
  v8 = P;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x40000000;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        28,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    }
    v7 = -1073741823;
    goto LABEL_6;
  }
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_16:
      v7 = -1073741275;
      goto LABEL_6;
    }
    v10 = 29;
LABEL_15:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1,
      v10,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    goto LABEL_16;
  }
  v11 = v8[2];
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v10 = 30;
    goto LABEL_15;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(48 * v11 + 8), 1919119952LL);
  if ( Pool2 )
  {
    v12 = v8 + 3;
    *Pool2 = *((unsigned __int8 *)v8 + 8);
    while ( 1 )
    {
      if ( v2 >= v8[2] )
      {
        *a2 = Pool2;
        goto LABEL_9;
      }
      if ( *v12 != 3 )
        break;
      v7 = AcpiParseCore(
             (unsigned int)&v17,
             8,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&Pool2[12 * v2 + 2],
             48,
             (__int64)"XPSS",
             0);
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v14) = v2;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x20u,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
            v14);
        }
        goto LABEL_6;
      }
      v13 = (unsigned __int16)v12[1];
      if ( (unsigned __int16)v13 < 4u )
        v13 = 4LL;
      v12 = (_WORD *)((char *)v12 + v13 + 4);
      ++v2;
    }
    v7 = -1072431096;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Fu,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        v14);
    }
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_6:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  v8 = P;
LABEL_9:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)1919119952);
  return (unsigned int)v7;
}
