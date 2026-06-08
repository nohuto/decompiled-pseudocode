/*
 * XREFs of AcpiEval_TSS @ 0x14002A5D4
 * Callers:
 *     InitAcpi3ThrottleStates @ 0x1400383A4 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140041208 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TSS(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  _DWORD *Pool2; // rsi
  int v6; // edx
  int v7; // ebx
  int v8; // r9d
  unsigned int *v9; // rdi
  int v11; // eax
  _WORD *v12; // r14
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-91h]
  int v16; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  char v18; // [rsp+50h] [rbp-69h] BYREF
  int v19; // [rsp+52h] [rbp-67h]
  const char *v20; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-59h]
  char v22; // [rsp+68h] [rbp-51h]
  int v23; // [rsp+6Ah] [rbp-4Fh]
  const char *v24; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-41h]
  char v26; // [rsp+80h] [rbp-39h]
  int v27; // [rsp+82h] [rbp-37h]
  const char *v28; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-29h]
  char v30; // [rsp+98h] [rbp-21h]
  int v31; // [rsp+9Ah] [rbp-1Fh]
  const char *v32; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-11h]
  char v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B2h] [rbp-7h]
  const char *v36; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v37)(); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v23 = 0x40000;
  v16 = 0;
  v20 = "Percentage";
  v18 = 0;
  v24 = "Power";
  v19 = 0;
  v28 = "Latency";
  v22 = 1;
  v32 = "Control";
  v26 = 2;
  v21 = AcpiParseULong;
  v36 = "Status";
  Pool2 = 0LL;
  v25 = AcpiParseULong;
  v27 = 0x80000;
  v29 = AcpiParseULong;
  v30 = 3;
  v31 = 786432;
  v33 = AcpiParseULong;
  v34 = 4;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x800u);
  v7 = AcpiEvaluateMethod(a1, 1397970015, 0, (unsigned int)&P, (__int64)&v16);
  if ( v7 < 0 )
    goto LABEL_7;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x3000000;
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v7 = -1073741275;
      goto LABEL_7;
    }
    v8 = 36;
LABEL_5:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1,
      v8,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    goto LABEL_6;
  }
  v9 = (unsigned int *)P;
  v11 = *((_DWORD *)P + 2);
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v8 = 37;
    goto LABEL_5;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v11 + 4), 1919119952LL);
  if ( Pool2 )
  {
    v12 = v9 + 3;
    *Pool2 = v9[2];
    while ( 1 )
    {
      if ( v12 >= (_WORD *)((char *)v9 + v9[1]) )
      {
        *a2 = Pool2;
        Pool2 = 0LL;
        goto LABEL_8;
      }
      if ( *v12 != 3 )
      {
        v7 = -1072431096;
        goto LABEL_7;
      }
      v7 = AcpiParseCore(
             (unsigned int)&v18,
             5,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&Pool2[4 * v2 + 1 + v2],
             20,
             (__int64)"_TSS",
             0);
      if ( v7 < 0 )
        break;
      v14 = (unsigned __int16)v12[1];
      if ( (unsigned __int16)v14 < 4u )
        v14 = 4LL;
      v12 = (_WORD *)((char *)v12 + v14 + 4);
      ++v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v2;
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        1,
        38,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        v15);
    }
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_7:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x800u);
  v9 = (unsigned int *)P;
LABEL_8:
  if ( v9 )
    ExFreePoolWithTag(v9, (ULONG)0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  return (unsigned int)v7;
}
