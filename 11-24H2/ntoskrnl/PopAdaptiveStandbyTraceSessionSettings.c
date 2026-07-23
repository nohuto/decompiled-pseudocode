/*
 * XREFs of PopAdaptiveStandbyTraceSessionSettings @ 0x14076215C
 * Callers:
 *     PopAdaptiveStandbyWnfCallback @ 0x140762640 (PopAdaptiveStandbyWnfCallback.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyTraceSessionMetadata @ 0x140761FD0 (PopAdaptiveStandbyTraceSessionMetadata.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopAdaptiveStandbyTraceSessionSettings()
{
  __int64 v0; // r14
  char *v1; // rbp
  char *Pool2; // rsi
  __int64 v3; // r13
  unsigned int v4; // r14d
  wchar_t **v5; // rbp
  unsigned int *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  char *v12; // r9
  __int64 v13; // [rsp+30h] [rbp-268h]
  __int64 v14; // [rsp+38h] [rbp-260h]
  int v15; // [rsp+40h] [rbp-258h]
  char v16; // [rsp+50h] [rbp-248h] BYREF

  v0 = (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() != 0 ? 16 : 6;
  v15 = v0;
  v1 = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL, 240 * v0, 0x64416F50u);
  v13 = 0LL;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = ExAllocatePool2(0x100uLL, 16LL * (unsigned int)(v0 + 4 * v0 + 3), 0x64416F50u);
    v1 = (char *)v13;
    if ( !v13 )
    {
      if ( !Pool2 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  if ( !Pool2 )
    goto LABEL_19;
  if ( (_DWORD)qword_140F07238 == 1 )
  {
    v3 = qword_140F07230;
    goto LABEL_10;
  }
  if ( (_DWORD)qword_140F07238 == 2 )
  {
    v3 = qword_140F07230 - 1;
LABEL_10:
    v14 = v3;
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_QWORD *)Pool2 = L"Settings.Hibernate.Adaptive Hibernate Enhancements";
      *((_QWORD *)Pool2 + 20) = L"Enabled";
      *((_QWORD *)Pool2 + 30) = L"Settings.Hibernate.RSBudgetPercentage";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 206, 0x20uLL, L"%d", DWORD2(xmmword_140F07188));
      *((_QWORD *)Pool2 + 60) = L"Settings.Hibernate.RSBudgetRefreshCount";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 326, 0x20uLL, L"%d", HIDWORD(xmmword_140F07188));
      *((_QWORD *)Pool2 + 90) = L"Settings.Hibernate.RSBudgetRefreshInterval";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 446, 0x20uLL, L"%d", (unsigned int)dword_140F07198);
      v4 = 0;
      v5 = &PopAdaptiveStandbyRegionStrings;
      v6 = (unsigned int *)&PopAdaptiveStandbyRegions + 2;
      do
      {
        v7 = 240LL * (4 * v4 + 4);
        RtlStringCchPrintfW(
          (NTSTRSAFE_PWSTR)&Pool2[v7 + 12],
          0x48uLL,
          L"Settings.Hibernate.Battery Regions.%d %s.Min Battery [%%]",
          v4,
          *v5);
        RtlStringCchPrintfW((NTSTRSAFE_PWSTR)&Pool2[v7 + 172], 0x20uLL, L"%d", *(v6 - 2));
        v8 = 240LL * (4 * v4 + 5);
        RtlStringCchPrintfW(
          (NTSTRSAFE_PWSTR)&Pool2[v8 + 12],
          0x48uLL,
          L"Settings.Hibernate.Battery Regions.%d %s.Hibernate Budget [%%]",
          v4,
          *v5);
        RtlStringCchPrintfW((NTSTRSAFE_PWSTR)&Pool2[v8 + 172], 0x20uLL, L"%d", *v6);
        v9 = 240LL * (4 * v4 + 6);
        RtlStringCchPrintfW(
          (NTSTRSAFE_PWSTR)&Pool2[v9 + 12],
          0x48uLL,
          L"Settings.Hibernate.Battery Regions.%d %s.Hibernate Refresh Count",
          v4,
          *v5);
        RtlStringCchPrintfW((NTSTRSAFE_PWSTR)&Pool2[v9 + 172], 0x20uLL, L"%d", v6[1]);
        v10 = 240LL * (4 * v4 + 7);
        RtlStringCchPrintfW(
          (NTSTRSAFE_PWSTR)&Pool2[v10 + 12],
          0x48uLL,
          L"Settings.Hibernate.Battery Regions.%d %s.Hibernate Refresh Time [s]",
          v4,
          *v5);
        RtlStringCchPrintfW((NTSTRSAFE_PWSTR)&Pool2[v10 + 172], 0x20uLL, L"%d", v6[2]);
        ++v4;
        ++v5;
        v6 += 5;
      }
      while ( v4 < 3 );
      v1 = (char *)v13;
      LODWORD(v0) = v15;
      v3 = v14;
    }
    else
    {
      *(_QWORD *)Pool2 = L"Settings.Hibernate.StandbyBudgetPercentage";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 86, 0x20uLL, L"%d", (unsigned int)dword_140F07244);
      *((_QWORD *)Pool2 + 30) = L"Settings.Hibernate.StandbyBudgetRefreshCount";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 206, 0x20uLL, L"%d", (unsigned int)dword_140F07248);
      *((_QWORD *)Pool2 + 60) = L"Settings.Hibernate.StandbyBudgetRefreshInterval";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 326, 0x20uLL, L"%d", (unsigned int)xmmword_140F0724C);
      *((_QWORD *)Pool2 + 90) = L"Settings.Hibernate.RSBudgetPercentage";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 446, 0x20uLL, L"%d", (unsigned int)dword_140F07268);
      *((_QWORD *)Pool2 + 120) = L"Settings.Hibernate.RSBudgetRefreshCount";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 566, 0x20uLL, L"%d", (unsigned int)dword_140F0726C);
      *((_QWORD *)Pool2 + 150) = L"Settings.Hibernate.RSBudgetRefreshInterval";
      RtlStringCchPrintfW((NTSTRSAFE_PWSTR)Pool2 + 686, 0x20uLL, L"%d", (unsigned int)xmmword_140F07270);
    }
    IsEnabledDeviceUsageNoInline = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
    v12 = v1;
    if ( !IsEnabledDeviceUsageNoInline )
      v12 = &v16;
    PopAdaptiveStandbyTraceSessionMetadata(v3, v0, (__int64)Pool2, (__int64)v12);
  }
LABEL_18:
  ExFreePoolWithTag(Pool2, 0x64416F50u);
LABEL_19:
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v1 )
      ExFreePoolWithTag(v1, 0x64416F50u);
  }
}
