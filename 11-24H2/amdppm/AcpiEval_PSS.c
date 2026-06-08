/*
 * XREFs of AcpiEval_PSS @ 0x14002A0CC
 * Callers:
 *     InitAcpiPerfStates @ 0x1400384E8 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sD @ 0x14000709C (WPP_RECORDER_SF_sD.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140041208 (AcpiEvaluateMethod.c)
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
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-A1h]
  __int64 v16; // [rsp+30h] [rbp-99h]
  int v17; // [rsp+40h] [rbp-89h] BYREF
  int v18; // [rsp+44h] [rbp-85h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v20; // [rsp+50h] [rbp-79h] BYREF
  int v21; // [rsp+52h] [rbp-77h]
  const char *v22; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v23)(); // [rsp+60h] [rbp-69h]
  char v24; // [rsp+68h] [rbp-61h]
  int v25; // [rsp+6Ah] [rbp-5Fh]
  const char *v26; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v27)(); // [rsp+78h] [rbp-51h]
  char v28; // [rsp+80h] [rbp-49h]
  int v29; // [rsp+82h] [rbp-47h]
  const char *v30; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v31)(); // [rsp+90h] [rbp-39h]
  char v32; // [rsp+98h] [rbp-31h]
  int v33; // [rsp+9Ah] [rbp-2Fh]
  const char *v34; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v35)(); // [rsp+A8h] [rbp-21h]
  char v36; // [rsp+B0h] [rbp-19h]
  int v37; // [rsp+B2h] [rbp-17h]
  const char *v38; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v39)(); // [rsp+C0h] [rbp-9h]
  char v40; // [rsp+C8h] [rbp-1h]
  int v41; // [rsp+CAh] [rbp+1h]
  const char *v42; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v43)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v25 = 0x40000;
  v17 = 0;
  v22 = "CoreFrequency";
  v20 = 0;
  v26 = "Power";
  v21 = 0;
  v30 = "Latency";
  v24 = 1;
  v32 = 3;
  v28 = 2;
  v23 = AcpiParseULong;
  v34 = "BmLatency";
  Pool2 = 0LL;
  v27 = AcpiParseULong;
  v38 = "Control";
  v42 = "Status";
  v29 = 0x80000;
  v31 = AcpiParseULong;
  v33 = 786432;
  v35 = AcpiParseULong;
  v36 = 4;
  v37 = 0x100000;
  v39 = AcpiParseULong;
  v40 = 5;
  v41 = 1572864;
  v43 = AcpiParseULong;
  P = 0LL;
  v18 = 1397968991;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40u);
  v7 = AcpiEvaluateMethod(a1, v18, 0, (unsigned int)&P, (__int64)&v17);
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
  if ( !v17 )
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
             (unsigned int)&v20,
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
          LODWORD(v15) = v2;
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            1,
            27,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
            v15);
        }
        goto LABEL_6;
      }
      v14 = (unsigned __int16)v12[1];
      if ( (unsigned __int16)v14 < 4u )
        v14 = 4LL;
      v12 = (_WORD *)((char *)v12 + v14 + 4);
      ++v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v2;
      WPP_RECORDER_SF_sD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Au,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        (const char *)&v18,
        v16);
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
