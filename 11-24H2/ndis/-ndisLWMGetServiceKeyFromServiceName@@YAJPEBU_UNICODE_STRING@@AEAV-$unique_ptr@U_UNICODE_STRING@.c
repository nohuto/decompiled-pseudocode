/*
 * XREFs of ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140136D84
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x140093240 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@QEAA@$$T@Z @ 0x14008C3C0 (--$-0$00X@-$unique_ptr@VRegistryKnobCollection@@U-$KFreePool@VRegistryKnobCollection@@@@@wistd@@.c)
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1400912A8 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14009138C (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1401661F0 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall ndisLWMGetServiceKeyFromServiceName(const UNICODE_STRING *a1, void **a2)
{
  void **v2; // r14
  WCHAR *Buffer; // rdx
  NTSTATUS v5; // eax
  int v6; // edx
  unsigned int v7; // edi
  int Length; // edi
  unsigned int v9; // edi
  int v10; // edx
  PUNICODE_STRING v11; // rbx
  _UNICODE_STRING *v12; // rcx
  NTSTATUS appended; // eax
  int v14; // edx
  int v15; // r9d
  PUNICODE_STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *v18; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-69h] BYREF
  _OWORD v20[6]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+7h]
  WCHAR v22; // [rsp+C8h] [rbp+Fh]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      126,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  }
  LODWORD(Buffer) = 65534;
  if ( (unsigned __int16)(a1->Length & 0xFFFE) >= (unsigned __int16)(a1->MaximumLength & 0xFFFE)
    || (Buffer = (WCHAR *)a1->Buffer, Buffer[(unsigned __int64)a1->Length >> 1]) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Buffer) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Buffer,
        1,
        127,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids);
    }
    v7 = -1073741811;
    goto LABEL_30;
  }
  v5 = RtlCheckRegistryKey(1u, Buffer);
  v7 = v5;
  if ( v5 >= 0 )
  {
    Length = a1->Length;
    v20[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
    v9 = Length + 106;
    v22 = aRegistryMachin_0[52];
    v20[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
    v20[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
    Source.Buffer = (wchar_t *)v20;
    v20[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
    v20[4] = *(_OWORD *)L"ControlSet\\Services\\";
    v20[5] = *(_OWORD *)L"et\\Services\\";
    v21 = *(_QWORD *)L"ces\\";
    *(_QWORD *)&Source.Length = 6946920LL;
    if ( v9 >= 0xFFFFFFF0 )
    {
      wistd::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>(&Destination);
    }
    else
    {
      MakeSizedPoolPtr<_UNICODE_STRING>(&v18, 1851868238LL, v9 + 16);
      if ( v18 )
        wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
          &Destination,
          (__int64 *)&v18);
      else
        wistd::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>(&Destination);
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&v18, 0LL);
    }
    v11 = Destination;
    if ( !Destination )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          1,
          129,
          (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids);
      }
      v7 = -1073741670;
      goto LABEL_18;
    }
    v12 = Destination;
    Destination->Buffer = &Destination[1].Length;
    v11->Length = 0;
    v11->MaximumLength = v9;
    appended = RtlAppendUnicodeStringToString(v12, &Source);
    v7 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(v11, a1);
      v7 = appended;
      if ( appended >= 0 )
      {
        wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(v2, (void **)&Destination);
        wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&Destination, 0LL);
        goto LABEL_30;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 131;
        goto LABEL_22;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 130;
LABEL_22:
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v14,
        1,
        v15,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        appended);
    }
LABEL_18:
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&Destination, 0LL);
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v7;
  LOBYTE(v6) = 2;
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v6,
    1,
    128,
    (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
    v5);
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x84u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1,
      v7);
  return v7;
}
