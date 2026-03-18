/*
 * XREFs of HUBACPI_EvaluateDSD @ 0x14008CE18
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x14008DA24 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x14000F98C (RtlUnicodeStringPrintf.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008C9E0 (HUBACPI_EvalAcpiMethodEx.c)
 */

__int64 __fastcall HUBACPI_EvaluateDSD(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 a6,
        __int64 a7)
{
  int v8; // eax
  NTSTATUS v9; // esi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rcx
  int v14; // r9d
  int v15; // r8d
  unsigned int v16; // r15d
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  _WORD *v20; // rbx
  _WORD *v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  const char *v24; // rbx
  __int64 v25; // rax
  unsigned __int16 v26; // si
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  __int128 v29; // [rsp+58h] [rbp-21h] BYREF
  __int128 v30; // [rsp+68h] [rbp-11h]
  __int128 v31; // [rsp+78h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+Fh]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v29 = 0LL;
  LODWORD(v32) = 0;
  v30 = 0LL;
  v31 = 0LL;
  v8 = HUBACPI_EvalAcpiMethodEx(a1, a2, 1146307679, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        0x1Du,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        a6,
        v8);
    goto LABEL_47;
  }
  v9 = -1073741823;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
          WdfDriverGlobals,
          a5,
          0LL);
  v12 = v10;
  if ( !*(_DWORD *)(v10 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_47;
    v13 = *(_QWORD *)(a1 + 2536);
    v14 = 30;
    v15 = 6;
    goto LABEL_8;
  }
  v16 = 0;
  v17 = v10 + 12;
  v18 = 4LL;
  while ( 1 )
  {
    if ( (v16 & 1) == 0
      && *(_DWORD *)v17 == 1048578
      && RtlCompareMemory((const void *)(v17 + 4), &ACPI_DEVICE_PROPERTIES_DSD_GUID, 0x10uLL) == 16 )
    {
      v19 = *(unsigned __int16 *)(v17 + 2);
      if ( (unsigned __int16)v19 < 4u )
        v19 = 4LL;
      v20 = (_WORD *)(v17 + v19 + 4);
      v21 = v20;
      v22 = (unsigned __int64)v20 + (unsigned __int16)v20[1];
      if ( *v20 == 3 )
        break;
    }
    v23 = *(unsigned __int16 *)(v17 + 2);
    if ( (unsigned __int16)v23 < 4u )
      v23 = 4LL;
    ++v16;
    v17 += v23 + 4;
    if ( v16 >= *(_DWORD *)(v12 + 8) )
      goto LABEL_47;
  }
  v24 = (const char *)(v20 + 2);
  if ( (unsigned __int64)(v21 + 6) >= v22 )
    goto LABEL_47;
  while ( 1 )
  {
    v25 = *((unsigned __int16 *)v24 + 1);
    if ( *(_WORD *)v24 != 3 || (unsigned __int16)v25 < 0x10u )
    {
      if ( (unsigned __int16)v25 < 4u )
        v25 = 4LL;
      goto LABEL_30;
    }
    if ( *((_WORD *)v24 + 2) == 1 && *((_WORD *)v24 + 3) == 20 )
      break;
LABEL_30:
    v24 += v25 + 4;
    if ( (unsigned __int64)(v24 + 8) >= v22 )
      goto LABEL_47;
  }
  if ( strncmp(v24 + 8, "usb4-host-interface", 0x13uLL) )
  {
    v25 = *((unsigned __int16 *)v24 + 1);
    if ( (unsigned __int16)v25 < 4u )
      v25 = 4LL;
    goto LABEL_30;
  }
  if ( *((_WORD *)v24 + 3) >= 4u )
    v18 = *((unsigned __int16 *)v24 + 3);
  if ( (unsigned __int64)&v24[v18 + 16] <= v22 )
  {
    if ( *(_WORD *)&v24[v18 + 8] == 1 )
    {
      v26 = 2 * *(_WORD *)&v24[v18 + 10];
      DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v26, 1882409045LL);
      if ( DestinationString.Buffer )
      {
        DestinationString.MaximumLength = v26;
        v9 = RtlUnicodeStringPrintf(&DestinationString, L"%S", &v24[v18 + 12]);
        if ( v9 >= 0 )
        {
          v32 = 0LL;
          *(_QWORD *)&v30 = 0LL;
          *((_QWORD *)&v30 + 1) = 0x100000001LL;
          v31 = 0LL;
          *(_QWORD *)&v31 = *(_QWORD *)(a1 + 16);
          v29 = 0LL;
          LODWORD(v29) = 56;
          v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _UNICODE_STRING *, __int128 *, __int64))(WdfFunctions_01015 + 2464))(
                 WdfDriverGlobals,
                 &DestinationString,
                 &v29,
                 a7);
        }
        goto LABEL_47;
      }
      v9 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v14 = 33;
      v15 = 3;
    }
    else
    {
      v9 = -1072431096;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v14 = 32;
LABEL_37:
      v15 = 6;
    }
    v13 = *(_QWORD *)(a1 + 2536);
LABEL_8:
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(v13, v11, v15, v14, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    goto LABEL_47;
  }
  v9 = -1072431099;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 31;
    goto LABEL_37;
  }
LABEL_47:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x70334855u);
  return (unsigned int)v9;
}
