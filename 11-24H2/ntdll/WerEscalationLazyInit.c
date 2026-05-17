/*
 * XREFs of WerEscalationLazyInit @ 0x1800E2D10
 * Callers:
 *     WerReportSQMEvent @ 0x1800E29D0 (WerReportSQMEvent.c)
 *     ShipAssert @ 0x1800E2A20 (ShipAssert.c)
 * Callees:
 *     RtlLengthSidAsUnicodeString @ 0x180038750 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180038E40 (RtlConvertSidToUnicodeString.c)
 *     NLS_UPCASE @ 0x1800AF6C0 (NLS_UPCASE.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E349C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     StringCchCopyW @ 0x1800E39B8 (StringCchCopyW.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E3A2C (WerpEscalationIsWMRSendStringSet.c)
 *     WerpEscalationIsDisabled @ 0x180115298 (WerpEscalationIsDisabled.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801642E0 (NtOpenProcessToken.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  int appended; // ebx
  signed __int64 v2; // rdi
  wchar_t *v3; // r15
  STRSAFE_LPWSTR v4; // rsi
  wchar_t *Buffer; // r14
  HRESULT v6; // eax
  int v7; // r11d
  unsigned __int16 *i; // r10
  int v9; // r12d
  int v10; // ebx
  wchar_t *v11; // r14
  unsigned __int16 v12; // bx
  _WORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  wchar_t *v17; // rcx
  void *v18; // rdx
  unsigned __int16 v20; // ax
  int v21; // r12d
  __int64 v22; // r10
  int v23; // r11d
  unsigned int v24; // eax
  STRSAFE_LPWSTR pszDest; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  __int128 v28; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+48h] BYREF
  int v30; // [rsp+B8h] [rbp+50h] BYREF
  int v31; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+60h] BYREF

  v0 = g_werEscalationData;
  Handle = 0LL;
  v29 = 0;
  v30 = 0;
  v32 = 0LL;
  appended = -1073741823;
  pszDest = 0LL;
  v2 = 0LL;
  v31 = 0;
  UnicodeString = 0LL;
  v28 = 0LL;
  if ( g_werEscalationData && g_sqmSessionHandle != -1 )
    return 0LL;
  if ( !g_disableEscalation )
  {
    g_disableEscalation = WerpEscalationIsDisabled();
    v0 = g_werEscalationData;
  }
  if ( v0 )
    goto LABEL_20;
  v32 = 568LL;
  appended = ZwAllocateVirtualMemory(-1LL, &pszDest, 0LL, &v32, 4096, 4);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)pszDest;
    v3 = (STRSAFE_LPWSTR)((char *)pszDest + v32);
    v4 = pszDest + 284;
    if ( pszDest + 284 > (STRSAFE_LPWSTR)((char *)pszDest + v32) )
      goto LABEL_31;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v6 = StringCchCopyW(pszDest, 0x104uLL, Buffer);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147024774 )
      goto LABEL_22;
    for ( i = &Buffer[v7 - 1]; i > Buffer; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    v9 = 0;
    v10 = 31415;
    if ( v7 != (unsigned int)(i - Buffer) )
    {
      do
      {
        v20 = NLS_UPCASE(qword_1801CD038, *i);
        v21 = v10 * v9;
        i = (unsigned __int16 *)(v22 + 2);
        v10 *= 27183;
        v9 = v20 + v21;
      }
      while ( v23 != 1 );
    }
    *(_DWORD *)(v2 + 520) = v9;
    WerEscalationReadImageVersionInfoForModuleBaseSafe(NtCurrentPeb()->ImageBaseAddress, 0LL, &v28);
    *(_DWORD *)(v2 + 532) = v28;
    *(_QWORD *)(v2 + 524) = *((_QWORD *)&v28 + 1);
    appended = NtOpenProcessToken(-1LL, 8LL, &Handle);
    if ( appended < 0 )
      goto LABEL_22;
    v29 = (_DWORD)v3 - (_DWORD)v4;
    appended = NtQueryInformationToken(Handle, 1LL, v4, (unsigned int)((_DWORD)v3 - (_DWORD)v4), &v29);
    if ( appended < 0 )
      goto LABEL_22;
    v11 = &v4[4 * (((unsigned __int64)v29 + 7) >> 3)];
    if ( v11 > v3 )
      goto LABEL_31;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v4;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( (int)NtQueryInformationToken(Handle, 18LL, &v30, 4LL, &v29) >= 0 )
    {
      if ( v30 == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( v30 == 1 )
      {
        v24 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v4 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 1LL) - 1) + 8) == 500 )
          v24 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v24;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(unsigned __int8 **)(v2 + 536), &v31);
    if ( appended < 0 )
      goto LABEL_22;
    v12 = v31;
    v13 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v11;
    v14 = (unsigned __int16)(v12 + 90);
    *(_WORD *)(v2 + 546) = v14;
    if ( (wchar_t *)((char *)v11 + v14) > v3 )
    {
LABEL_31:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\REGISTRY\\USER\\");
      v15 = *(_QWORD *)(v2 + 552);
      v16 = (unsigned __int64)(unsigned __int16)*v13 >> 1;
      UnicodeString.MaximumLength = v12;
      UnicodeString.Length = 0;
      v17 = (wchar_t *)(v15 + 2 * v16);
      v18 = *(void **)(v2 + 536);
      UnicodeString.Buffer = v17;
      appended = RtlConvertSidToUnicodeString(&UnicodeString, v18, 0);
      if ( appended >= 0 )
      {
        *v13 += UnicodeString.Length;
        appended = RtlAppendUnicodeToString(
                     (unsigned __int16 *)(v2 + 544),
                     (const wchar_t *)"\\\x00S\x00o\x00f\x00t\x00w\x00a\x00r\x00e\x00\\\x00M\x00i\x00c\x00r\x00o\x00s\x00o\x00f\x00t\x00\\\x00W\x00i\x00n\x00d\x00o\x00w\x00s");
        if ( appended >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet();
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_20:
          if ( g_sqmSessionHandle != -1 )
            appended = 0;
        }
      }
    }
LABEL_22:
    if ( v2 )
      ZwFreeVirtualMemory(-1LL, &pszDest, &v32, 0x8000LL);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)appended;
}
