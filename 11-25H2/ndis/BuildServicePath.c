/*
 * XREFs of BuildServicePath @ 0x1401728D0
 * Callers:
 *     CreateKModule @ 0x140155974 (CreateKModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14009C644 (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x140172A80 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall BuildServicePath(PCUNICODE_STRING Source, void **a2)
{
  __int64 Length; // r8
  int v5; // edx
  _UNICODE_STRING *v6; // rbx
  _UNICODE_STRING *v8; // rcx
  PVOID P; // [rsp+30h] [rbp-A8h] BYREF
  UNICODE_STRING Sourcea; // [rsp+38h] [rbp-A0h] BYREF
  _OWORD v11[6]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-28h]
  WCHAR v13; // [rsp+B8h] [rbp-20h]

  v11[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  Length = Source->Length;
  v11[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
  v11[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
  v11[4] = *(_OWORD *)L"ControlSet\\Services\\";
  v11[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
  v13 = aRegistryMachin_0[52];
  v12 = *(_QWORD *)L"ces\\";
  v11[5] = *(_OWORD *)L"et\\Services\\";
  *(_QWORD *)&Sourcea.Length = 6946920LL;
  Sourcea.Buffer = (wchar_t *)v11;
  MakeSizedPoolPtr<_UNICODE_STRING>(&P, 1917609038LL, Length + 120);
  v6 = (_UNICODE_STRING *)P;
  if ( P )
  {
    v8 = (_UNICODE_STRING *)P;
    *((_QWORD *)P + 1) = (char *)P + 16;
    v6->Length = 0;
    v6->MaximumLength = Source->Length + Sourcea.Length;
    RtlAppendUnicodeStringToString(v8, &Sourcea);
    RtlAppendUnicodeStringToString(v6, Source);
    wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(a2, &P);
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&P, 0LL);
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        (_DWORD)P + 1,
        (_DWORD)P + 21,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
    }
    return 3221225626LL;
  }
}
