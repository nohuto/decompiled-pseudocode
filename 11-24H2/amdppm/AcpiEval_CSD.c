/*
 * XREFs of AcpiEval_CSD @ 0x140028EB0
 * Callers:
 *     InitAcpiIdleDomain @ 0x140037B10 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x140041208 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CSD(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _DWORD *Pool2; // r14
  int v6; // edx
  int v7; // ebx
  int v8; // r9d
  _WORD *v9; // rdi
  int v11; // eax
  _WORD *v12; // rsi
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-A1h]
  int v16; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v18; // [rsp+50h] [rbp-79h] BYREF
  int v19; // [rsp+52h] [rbp-77h]
  const char *v20; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-69h]
  char v22; // [rsp+68h] [rbp-61h]
  int v23; // [rsp+6Ah] [rbp-5Fh]
  const char *v24; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-51h]
  char v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+82h] [rbp-47h]
  const char *v28; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-39h]
  char v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ah] [rbp-2Fh]
  const char *v32; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-21h]
  char v34; // [rsp+B0h] [rbp-19h]
  int v35; // [rsp+B2h] [rbp-17h]
  const char *v36; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v37)(); // [rsp+C0h] [rbp-9h]
  char v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CAh] [rbp+1h]
  const char *v40; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v41)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v23 = 0x40000;
  v16 = 0;
  v20 = "NumberOfEntries";
  v18 = 0;
  v24 = "Revision";
  v19 = 0;
  v28 = "DomainNumber";
  v34 = 4;
  v32 = "CoordinationType";
  v22 = 1;
  v36 = "MemberCount";
  v26 = 2;
  v21 = AcpiParseULong;
  v40 = "Index";
  Pool2 = 0LL;
  v25 = AcpiParseULong;
  v27 = 0x80000;
  v29 = AcpiParseULong;
  v30 = 3;
  v31 = 786432;
  v33 = AcpiParseULong;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  v38 = 5;
  v39 = 1310720;
  v41 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x10u);
  v7 = AcpiEvaluateMethod(a1, 1146307423, 0, (unsigned int)&P, (__int64)&v16);
  if ( v7 < 0 )
    goto LABEL_7;
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v7 = -1073741275;
      goto LABEL_7;
    }
    v8 = 42;
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
  v9 = P;
  v11 = *((_DWORD *)P + 2);
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v8 = 43;
    goto LABEL_5;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(24 * v11 + 4), 1919119952LL);
  if ( Pool2 )
  {
    v12 = v9 + 6;
    *Pool2 = *((unsigned __int8 *)v9 + 8);
    while ( 1 )
    {
      if ( v12 >= (_WORD *)((char *)v9 + *((unsigned int *)v9 + 1)) )
      {
        *a2 = Pool2;
        goto LABEL_10;
      }
      if ( *v12 != 3 )
      {
        v7 = -1072431096;
        goto LABEL_7;
      }
      v7 = AcpiParseCore(
             (unsigned int)&v18,
             6,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&Pool2[6 * v2 + 1],
             24,
             (__int64)"_CSD",
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
        44,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
        v15);
    }
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_7:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  v9 = P;
LABEL_10:
  if ( v9 )
    ExFreePoolWithTag(v9, (ULONG)0);
  return (unsigned int)v7;
}
