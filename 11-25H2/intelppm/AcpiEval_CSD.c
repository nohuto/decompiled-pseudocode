/*
 * XREFs of AcpiEval_CSD @ 0x14003EEEC
 * Callers:
 *     InitAcpiIdleDomain @ 0x14003ED7C (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_CSD(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _DWORD *v4; // r14
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v15; // r9d
  unsigned int v16; // eax
  _WORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-D8h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+74h] [rbp-8Ch]
  __int128 v26; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  _QWORD *v28; // [rsp+90h] [rbp-70h]
  char v29; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+A2h] [rbp-5Eh]
  const char *v31; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v32)(); // [rsp+B0h] [rbp-50h]
  char v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BAh] [rbp-46h]
  const char *v35; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall *v36)(); // [rsp+C8h] [rbp-38h]
  char v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D2h] [rbp-2Eh]
  const char *v39; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v40)(); // [rsp+E0h] [rbp-20h]
  char v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+EAh] [rbp-16h]
  const char *v43; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v44)(); // [rsp+F8h] [rbp-8h]
  char v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+102h] [rbp+2h]
  const char *v47; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v48)(); // [rsp+110h] [rbp+10h]
  char v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+11Ah] [rbp+1Ah]
  const char *v51; // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v52)(); // [rsp+128h] [rbp+28h]

  v2 = 0;
  v28 = a2;
  v29 = 0;
  v31 = "NumberOfEntries";
  v30 = 0;
  v32 = AcpiParseULong;
  v35 = "Revision";
  v45 = 4;
  v39 = "DomainNumber";
  v33 = 1;
  v43 = "CoordinationType";
  v34 = 0x40000;
  v47 = "MemberCount";
  v4 = 0LL;
  v36 = AcpiParseULong;
  v51 = "Index";
  v5 = 0LL;
  v37 = 2;
  v38 = 0x80000;
  v40 = AcpiParseULong;
  v41 = 3;
  v42 = 786432;
  v44 = AcpiParseULong;
  v46 = 0x100000;
  v48 = AcpiParseULong;
  v49 = 5;
  v50 = 1310720;
  v52 = AcpiParseULong;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x10u);
  v21 = 0LL;
  LODWORD(v27) = 0;
  v26 = 0LL;
  v24 = 0;
  v6 = 1024;
  v23 = 0LL;
  qmemcpy(v22, "AeiB_CSD", sizeof(v22));
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v6, 1919119952LL);
    v8 = (_DWORD *)Pool2;
    if ( !Pool2 )
      goto LABEL_14;
    v9 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v26 + 1) = v22;
    *(_QWORD *)&v26 = 1LL;
    v27 = 8LL;
    *(_QWORD *)&v23 = 1LL;
    v25 = 0;
    *((_QWORD *)&v23 + 1) = Pool2;
    v24 = v6;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, __int128 *, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v9,
            0LL,
            3325956LL,
            &v26,
            &v23,
            0LL,
            &v21);
    v12 = v10;
    if ( v10 != -2147483643 )
      break;
    v6 = v8[1];
    ExFreePoolWithTag(v8, (ULONG)0);
  }
  if ( v10 >= 0 && (v13 = v21, v21) )
  {
    v5 = v8;
  }
  else
  {
    ExFreePoolWithTag(v8, (ULONG)0);
    v13 = v21;
  }
  if ( v12 >= 0 )
  {
    if ( v13 )
    {
      v16 = v5[2];
      if ( v16 )
      {
        v4 = (_DWORD *)ExAllocatePool2(64LL, 24 * v16 + 4, 1919119952LL);
        if ( !v4 )
        {
LABEL_14:
          v12 = -1073741670;
          goto LABEL_8;
        }
        v17 = v5 + 3;
        *v4 = *((unsigned __int8 *)v5 + 8);
        while ( 1 )
        {
          if ( v17 >= (_WORD *)((char *)v5 + v5[1]) )
          {
            *v28 = v4;
            goto LABEL_10;
          }
          if ( *v17 != 3 )
          {
            v12 = -1072431096;
            goto LABEL_8;
          }
          LODWORD(v20) = 0;
          v12 = AcpiParseCore(
                  (unsigned int)&v29,
                  6,
                  (int)v17 + 4,
                  (unsigned __int16)v17[1],
                  (__int64)&v4[6 * v2 + 1],
                  24,
                  (__int64)"_CSD",
                  v20);
          if ( v12 < 0 )
            break;
          v18 = (unsigned __int16)v17[1];
          if ( (unsigned __int16)v18 < 4u )
            v18 = 4LL;
          v17 = (_WORD *)((char *)v17 + v18 + 4);
          ++v2;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v19) = v2;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x2Cu,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
            v19);
        }
        goto LABEL_8;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 43;
        goto LABEL_19;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 42;
LABEL_19:
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        1,
        v15,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    }
    v12 = -1073741275;
  }
LABEL_8:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
  if ( v4 )
    ExFreePoolWithTag(v4, (ULONG)0);
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)0);
  return (unsigned int)v12;
}
