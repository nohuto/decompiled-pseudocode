/*
 * XREFs of AcpiEval_CST @ 0x140027FB8
 * Callers:
 *     InitAcpi2CStates @ 0x140024B88 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x140029DD0 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x14002B4E8 (AcpiTranslateAccessSize.c)
 *     AcpiEvaluateMethod @ 0x14003FFB8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CST(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // rsi
  int v7; // ebx
  int v8; // r9d
  int v9; // r12d
  _DWORD *Pool2; // r15
  __int64 v11; // rax
  _WORD *v12; // r14
  int v13; // edx
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v22; // [rsp+28h] [rbp-81h]
  int v23; // [rsp+40h] [rbp-69h]
  int v24; // [rsp+44h] [rbp-65h] BYREF
  PVOID P; // [rsp+48h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-59h]
  _QWORD *v27; // [rsp+58h] [rbp-51h]
  char v28; // [rsp+60h] [rbp-49h] BYREF
  int v29; // [rsp+62h] [rbp-47h]
  const char *v30; // [rsp+68h] [rbp-41h]
  __int64 (__fastcall *v31)(); // [rsp+70h] [rbp-39h]
  char v32; // [rsp+78h] [rbp-31h]
  int v33; // [rsp+7Ah] [rbp-2Fh]
  const char *v34; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v35)(); // [rsp+88h] [rbp-21h]
  char v36; // [rsp+90h] [rbp-19h]
  int v37; // [rsp+92h] [rbp-17h]
  const char *v38; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall *v39)(); // [rsp+A0h] [rbp-9h]
  char v40; // [rsp+A8h] [rbp-1h]
  int v41; // [rsp+AAh] [rbp+1h]
  const char *v42; // [rsp+B0h] [rbp+7h]
  __int64 (__fastcall *v43)(); // [rsp+B8h] [rbp+Fh]

  v2 = 0;
  v27 = a2;
  v24 = 0;
  v30 = "Register";
  v28 = 0;
  v33 = 786432;
  v31 = AcpiParseRegister;
  v29 = 2;
  v34 = "StateType";
  v32 = 1;
  v38 = "Latency";
  v35 = AcpiParseULong;
  v42 = "PowerConsumption";
  v36 = 2;
  v37 = 917504;
  v39 = AcpiParseULong;
  v40 = 3;
  v41 = 0x100000;
  v43 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 8u);
  v4 = AcpiEvaluateMethod(a1, 1414742879, 0, (unsigned int)&P, (__int64)&v24);
  v6 = P;
  v7 = v4;
  if ( v4 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x7F070;
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v7 = -1073741275;
        goto LABEL_49;
      }
      v8 = 10;
LABEL_5:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1,
        v8,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      goto LABEL_6;
    }
    if ( !v6[2] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v8 = 11;
      goto LABEL_5;
    }
    if ( *((_WORD *)v6 + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          1,
          12,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      v7 = -1072431096;
    }
    else
    {
      v9 = v6[4];
      if ( v9 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v9 + 4), 1919119952LL);
        if ( Pool2 )
        {
          v11 = *((unsigned __int16 *)v6 + 7);
          if ( (unsigned __int16)v11 < 4u )
            v11 = 4LL;
          v12 = (_WORD *)((char *)v6 + v11 + 16);
          v13 = 0;
          v23 = 0;
          while ( v12 < (_WORD *)((char *)v6 + (unsigned int)v6[1]) )
          {
            if ( v2 == v9 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v13) = 2;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v13,
                  1,
                  13,
                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
              }
LABEL_44:
              v7 = -1072431096;
LABEL_47:
              ExFreePoolWithTag(Pool2, (ULONG)0);
              goto LABEL_49;
            }
            if ( *v12 != 3 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v22) = v13;
                LOBYTE(v13) = 2;
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v13,
                  1,
                  14,
                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                  v22);
              }
              goto LABEL_44;
            }
            v14 = (unsigned __int16)v12[1];
            v26 = 5LL * v2;
            v7 = AcpiParseCore(
                   (unsigned int)&v28,
                   4,
                   (int)v12 + 4,
                   v14,
                   (__int64)&Pool2[v26 + 1],
                   20,
                   (__int64)"_CST",
                   0);
            if ( v7 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = 2;
                LODWORD(v22) = v23;
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v15,
                  1,
                  15,
                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                  v22);
              }
              v7 = -1072431089;
              goto LABEL_47;
            }
            v16 = v26;
            v17 = &Pool2[v26 + 1];
            if ( *v17 != 127 )
            {
              AcpiTranslateAccessSize(v17, v15);
              v16 = v26;
            }
            v18 = (unsigned __int16)v12[1];
            if ( (unsigned __int16)v18 < 4u )
              v18 = 4LL;
            v19 = *(_QWORD *)(a1 + 280);
            v12 = (_WORD *)((char *)v12 + v18 + 4);
            v20 = Pool2[v16 + 4];
            v13 = ++v23;
            if ( (v19 & 0x1010) == 0 && v20 == 1 || (v19 & 0x2020) == 0 && v20 == 2 || (v19 & 0x4040) == 0 && v20 >= 3u )
              --v2;
            ++v2;
          }
          if ( !v2 )
          {
            v7 = -1073741823;
            goto LABEL_47;
          }
          *Pool2 = (unsigned __int8)v2;
          *v27 = Pool2;
        }
        else
        {
          v7 = -1073741670;
        }
      }
      else
      {
        v7 = -1073741823;
      }
    }
  }
LABEL_49:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  if ( v7 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
  return (unsigned int)v7;
}
