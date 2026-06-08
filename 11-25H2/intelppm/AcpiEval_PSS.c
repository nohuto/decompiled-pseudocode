/*
 * XREFs of AcpiEval_PSS @ 0x140031C38
 * Callers:
 *     InitAcpiPerfStates @ 0x140027628 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sD @ 0x14000986C (WPP_RECORDER_SF_sD.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140044948 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PSS(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // r15
  int v6; // edx
  int v7; // ebx
  _DWORD *v8; // rdi
  int v10; // r9d
  int v11; // eax
  _WORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // [rsp+28h] [rbp-A1h]
  __int64 v15; // [rsp+30h] [rbp-99h]
  int v16; // [rsp+40h] [rbp-89h] BYREF
  int v17; // [rsp+44h] [rbp-85h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v19; // [rsp+50h] [rbp-79h] BYREF
  int v20; // [rsp+52h] [rbp-77h]
  const char *v21; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v22)(); // [rsp+60h] [rbp-69h]
  char v23; // [rsp+68h] [rbp-61h]
  int v24; // [rsp+6Ah] [rbp-5Fh]
  const char *v25; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v26)(); // [rsp+78h] [rbp-51h]
  char v27; // [rsp+80h] [rbp-49h]
  int v28; // [rsp+82h] [rbp-47h]
  const char *v29; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v30)(); // [rsp+90h] [rbp-39h]
  char v31; // [rsp+98h] [rbp-31h]
  int v32; // [rsp+9Ah] [rbp-2Fh]
  const char *v33; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v34)(); // [rsp+A8h] [rbp-21h]
  char v35; // [rsp+B0h] [rbp-19h]
  int v36; // [rsp+B2h] [rbp-17h]
  const char *v37; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v38)(); // [rsp+C0h] [rbp-9h]
  char v39; // [rsp+C8h] [rbp-1h]
  int v40; // [rsp+CAh] [rbp+1h]
  const char *v41; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v42)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v24 = 0x40000;
  v16 = 0;
  v21 = "CoreFrequency";
  v19 = 0;
  v25 = "Power";
  v20 = 0;
  v29 = "Latency";
  v23 = 1;
  v31 = 3;
  v27 = 2;
  v22 = AcpiParseULong;
  v33 = "BmLatency";
  Pool2 = 0LL;
  v26 = AcpiParseULong;
  v37 = "Control";
  v41 = "Status";
  v28 = 0x80000;
  v30 = AcpiParseULong;
  v32 = 786432;
  v34 = AcpiParseULong;
  v35 = 4;
  v36 = 0x100000;
  v38 = AcpiParseULong;
  v39 = 5;
  v40 = 1572864;
  v42 = AcpiParseULong;
  P = 0LL;
  v17 = 1397968991;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40u);
  v7 = AcpiEvaluateMethod(a1, v17, 0, (unsigned int)&P, (__int64)&v16);
  if ( v7 < 0 )
    goto LABEL_6;
  v8 = P;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x30000000;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        23,
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
    v10 = 24;
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
    v10 = 25;
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
             (unsigned int)&v19,
             6,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&Pool2[12 * v2 + 2],
             48,
             (__int64)"_PSS",
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
            0x1Bu,
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v2;
      WPP_RECORDER_SF_sD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Au,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        (const char *)&v17,
        v15);
    }
    v7 = -1072431096;
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_6:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  v8 = P;
LABEL_9:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)1919119952);
  return (unsigned int)v7;
}
