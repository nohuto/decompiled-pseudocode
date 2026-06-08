/*
 * XREFs of AcpiEval_CST @ 0x14003F2EC
 * Callers:
 *     InitAcpi2CStates @ 0x14003EC1C (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     AcpiTranslateAccessSize @ 0x140033D48 (AcpiTranslateAccessSize.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_CST(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // rdi
  int v12; // r12d
  _DWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  _WORD *v16; // r14
  unsigned int *v17; // rax
  int v18; // edx
  int v19; // r9d
  __int64 v20; // r8
  _BYTE *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  int v26; // r9d
  __int64 v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  __int128 v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h]
  unsigned int *v38; // [rsp+A0h] [rbp-60h]
  _QWORD *v39; // [rsp+A8h] [rbp-58h]
  char v40; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+B2h] [rbp-4Eh]
  const char *v42; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v43)(); // [rsp+C0h] [rbp-40h]
  char v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+CAh] [rbp-36h]
  const char *v46; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v47)(); // [rsp+D8h] [rbp-28h]
  char v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E2h] [rbp-1Eh]
  const char *v50; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v51)(); // [rsp+F0h] [rbp-10h]
  char v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+FAh] [rbp-6h]
  const char *v54; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v55)(); // [rsp+108h] [rbp+8h]

  v39 = a2;
  v40 = 0;
  v42 = "Register";
  v45 = 786432;
  v47 = AcpiParseULong;
  v43 = AcpiParseRegister;
  v41 = 2;
  v46 = "StateType";
  v44 = 1;
  v50 = "Latency";
  v54 = "PowerConsumption";
  v48 = 2;
  v49 = 917504;
  v51 = AcpiParseULong;
  v52 = 3;
  v53 = 0x100000;
  v55 = AcpiParseULong;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 8u);
  v30 = 0LL;
  LODWORD(v37) = 0;
  v36 = 0LL;
  v34 = 0;
  v3 = 1024;
  v33 = 0LL;
  qmemcpy(v31, "AeiB_CST", sizeof(v31));
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v3, 1919119952LL);
    v5 = (_DWORD *)Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_33;
    }
    v6 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v36 + 1) = v31;
    *(_QWORD *)&v36 = 1LL;
    v37 = 8LL;
    *(_QWORD *)&v33 = 1LL;
    v35 = 0;
    *((_QWORD *)&v33 + 1) = Pool2;
    v34 = v3;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, __int128 *, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v6,
           0LL,
           3325956LL,
           &v36,
           &v33,
           0LL,
           &v30);
    v9 = v7;
    if ( v7 != -2147483643 )
      break;
    v3 = v5[1];
    ExFreePoolWithTag(v5, (ULONG)0);
  }
  if ( v7 >= 0 && (v10 = v30, v30) )
  {
    v11 = v5;
  }
  else
  {
    v11 = 0LL;
    ExFreePoolWithTag(v5, (ULONG)0);
    v10 = v30;
  }
  if ( v9 < 0 )
    goto LABEL_30;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x7F070;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_38:
      v9 = -1073741275;
      goto LABEL_30;
    }
    v26 = 10;
LABEL_48:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      1,
      v26,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    goto LABEL_38;
  }
  if ( !v11[2] )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_38;
    v26 = 11;
    goto LABEL_48;
  }
  if ( *((_WORD *)v11 + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        1,
        12,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    }
    v9 = -1072431096;
  }
  else
  {
    v12 = v11[4];
    if ( v12 )
    {
      v13 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v12 + 4), 1919119952LL);
      if ( v13 )
      {
        v14 = *((unsigned __int16 *)v11 + 7);
        if ( (unsigned __int16)v14 < 4u )
          v14 = 4LL;
        v15 = 0LL;
        v16 = (_WORD *)((char *)v11 + v14 + 16);
        v17 = v11 + 1;
        v18 = 0;
        v38 = v11 + 1;
        v29 = 0;
        while ( v16 < (_WORD *)((char *)v11 + *v17) )
        {
          if ( (_DWORD)v15 == v12 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 2;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v18,
                1,
                13,
                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
            }
            goto LABEL_43;
          }
          if ( *v16 != 3 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = v18;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0xEu,
                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                v27);
            }
LABEL_43:
            v9 = -1072431096;
            goto LABEL_44;
          }
          LODWORD(v28) = 0;
          v19 = (unsigned __int16)v16[1];
          v32 = 5 * v15;
          v9 = AcpiParseCore(
                 (unsigned int)&v40,
                 4,
                 (int)v16 + 4,
                 v19,
                 (__int64)&v13[5 * v15 + 1],
                 20,
                 (__int64)"_CST",
                 v28);
          if ( v9 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = v29;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0xFu,
                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                v27);
            }
            v9 = -1072431089;
            goto LABEL_44;
          }
          v20 = v32;
          v21 = &v13[v32 + 1];
          if ( *v21 != 127 )
          {
            AcpiTranslateAccessSize(v21);
            v20 = v32;
          }
          v22 = (unsigned __int16)v16[1];
          if ( (unsigned __int16)v22 < 4u )
            v22 = 4LL;
          v23 = *(_QWORD *)(a1 + 280);
          v16 = (_WORD *)((char *)v16 + v22 + 4);
          v24 = v13[v20 + 4];
          v18 = ++v29;
          if ( (v23 & 0x1010) == 0 && v24 == 1 || (v23 & 0x2020) == 0 && v24 == 2 || (v23 & 0x4040) == 0 && v24 >= 3u )
            LODWORD(v15) = v15 - 1;
          v17 = v38;
          v15 = (unsigned int)(v15 + 1);
        }
        if ( (_DWORD)v15 )
        {
          *v13 = (unsigned __int8)v15;
          *v39 = v13;
          goto LABEL_30;
        }
        v9 = -1073741823;
LABEL_44:
        ExFreePoolWithTag(v13, (ULONG)0);
      }
      else
      {
        v9 = -1073741670;
      }
    }
    else
    {
      v9 = -1073741823;
    }
  }
LABEL_30:
  if ( v11 )
    ExFreePoolWithTag(v11, (ULONG)0);
  if ( v9 < 0 )
LABEL_33:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
  return (unsigned int)v9;
}
