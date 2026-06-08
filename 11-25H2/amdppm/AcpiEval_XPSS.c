/*
 * XREFs of AcpiEval_XPSS @ 0x1400296E0
 * Callers:
 *     InitAcpiPerfStates @ 0x1400372A4 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x140029DD0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x14003FFB8 (AcpiEvaluateMethod.c)
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
  int v12; // edx
  _WORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  char v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+52h] [rbp-AEh]
  const char *v20; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-A0h]
  char v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ah] [rbp-96h]
  const char *v24; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-88h]
  char v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+82h] [rbp-7Eh]
  const char *v28; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-70h]
  char v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ah] [rbp-66h]
  const char *v32; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-58h]
  char v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B2h] [rbp-4Eh]
  const char *v36; // [rsp+B8h] [rbp-48h]
  void *v37; // [rsp+C0h] [rbp-40h]
  char v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CAh] [rbp-36h]
  const char *v40; // [rsp+D0h] [rbp-30h]
  void *v41; // [rsp+D8h] [rbp-28h]
  char v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E2h] [rbp-1Eh]
  const char *v44; // [rsp+E8h] [rbp-18h]
  void *v45; // [rsp+F0h] [rbp-10h]
  char v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FAh] [rbp-6h]
  const char *v48; // [rsp+100h] [rbp+0h]
  void *v49; // [rsp+108h] [rbp+8h]

  v2 = 0;
  v22 = 1;
  v16 = 0;
  v20 = "CoreFrequency";
  v18 = 0;
  v21 = AcpiParseULong;
  v24 = "Power";
  v25 = AcpiParseULong;
  v28 = "Latency";
  v29 = AcpiParseULong;
  v30 = 3;
  v33 = AcpiParseULong;
  v32 = "BmLatency";
  v19 = 0;
  v36 = "Control";
  Pool2 = 0LL;
  v23 = 0x40000;
  v40 = "Status";
  v44 = "ControlMask";
  v48 = "StatusMask";
  v26 = 2;
  v27 = 0x80000;
  v31 = 786432;
  v34 = 4;
  v35 = 1048578;
  v37 = &AcpiParseULong64;
  v38 = 5;
  v39 = 1572866;
  v41 = &AcpiParseULong64;
  v42 = 6;
  v43 = 2097154;
  v45 = &AcpiParseULong64;
  v46 = 7;
  v47 = 2621442;
  v49 = &AcpiParseULong64;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x80u);
  v7 = AcpiEvaluateMethod(a1, 1397968984, 0, (unsigned int)&P, (__int64)&v16);
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
  if ( !v16 )
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
    v13 = v8 + 3;
    *Pool2 = *((unsigned __int8 *)v8 + 8);
    while ( 1 )
    {
      if ( v2 >= v8[2] )
      {
        *a2 = Pool2;
        goto LABEL_9;
      }
      if ( *v13 != 3 )
        break;
      v7 = AcpiParseCore(
             (unsigned int)&v18,
             8,
             (int)v13 + 4,
             (unsigned __int16)v13[1],
             (__int64)&Pool2[12 * v2 + 2],
             48,
             (__int64)"XPSS",
             0);
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v15) = v2;
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            1,
            32,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
            v15);
        }
        goto LABEL_6;
      }
      v14 = (unsigned __int16)v13[1];
      if ( (unsigned __int16)v14 < 4u )
        v14 = 4LL;
      v13 = (_WORD *)((char *)v13 + v14 + 4);
      ++v2;
    }
    v7 = -1072431096;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v2;
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        1,
        31,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        v15);
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
