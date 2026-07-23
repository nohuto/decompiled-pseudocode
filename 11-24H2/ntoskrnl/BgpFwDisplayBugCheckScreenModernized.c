/*
 * XREFs of BgpFwDisplayBugCheckScreenModernized @ 0x14069B730
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405B0834 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 *     BgpFoGetStringAdvanceWidth @ 0x140699768 (BgpFoGetStringAdvanceWidth.c)
 *     BcpDisplayCriticalStringCentered @ 0x140699EB0 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14069AA84 (BcpDisplayProgressModernized.c)
 *     BcpGetDisplayType @ 0x14069AE40 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C72ADC (BcpDisplayEarlyBugCheckScreen.c)
 */

NTSTATUS __fastcall BgpFwDisplayBugCheckScreenModernized(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        UNICODE_STRING *a4,
        char a5)
{
  const UNICODE_STRING *v6; // rsi
  int StringAdvanceWidth; // ebx
  NTSTATUS result; // eax
  int v9; // r15d
  int v10; // r14d
  int DisplayType; // r12d
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  __int64 v17; // rax
  ULONG v18; // r14d
  ULONG v19; // r15d
  __int64 v20; // rcx
  int v21; // r11d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  int v24; // edx
  UNICODE_STRING *p_Destination; // rcx
  unsigned int v26; // r15d
  ULONG v27; // ebx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r10
  int v31; // eax
  __int64 v32; // r9
  int v33; // eax
  unsigned int v34; // r8d
  ULONG v35; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD v37[4]; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-40h] BYREF
  int v39; // [rsp+50h] [rbp-30h]
  int v40; // [rsp+54h] [rbp-2Ch]
  ULONG v41; // [rsp+58h] [rbp-28h]
  int v42; // [rsp+5Ch] [rbp-24h]
  unsigned __int64 v43; // [rsp+60h] [rbp-20h] BYREF
  ULONG v44; // [rsp+68h] [rbp-18h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v46; // [rsp+C0h] [rbp+40h]

  v46 = a1;
  v43 = 0LL;
  v6 = 0LL;
  v37[0] = 0;
  StringAdvanceWidth = 0;
  PerformanceFrequency.QuadPart = 0LL;
  LOBYTE(v39) = 0;
  LOBYTE(v40) = 0;
  if ( (dword_140EF0270 & 4) != 0 && (dword_140EF0270 & 0x400000) == 0 )
  {
    StringAdvanceWidth = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    IoSaveBugCheckProgress(131);
    return StringAdvanceWidth;
  }
  if ( (dword_140EF0270 & 0x400000) != 0 || (dword_140EF0270 & 0x10) == 0 )
  {
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0;
  }
  v9 = DWORD2(BgInternal);
  v10 = DWORD1(BgInternal);
  *(_DWORD *)&Destination.Length = DWORD2(BgInternal);
  *(_DWORD *)(&Destination.MaximumLength + 1) = DWORD1(BgInternal);
  LODWORD(Destination.Buffer) = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(&Destination);
  v12 = 84LL * DisplayType;
  v13 = *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 80);
  v14 = *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 32);
  *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 20) = 0;
  *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 16) = 0;
  v15 = v9 - 2 * v13;
  v16 = v10 - 2 * v14;
  *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 24) = v15;
  v17 = qword_140E3EBE0;
  *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 28) = v16;
  v18 = v14 + (v16 >> 1) - *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 72);
  v19 = v13 + (v15 >> 1);
  v20 = *(_QWORD *)(v17 + 24);
  v42 = v19;
  v43 = __PAIR64__(v18, v19);
  if ( v21 == 456 )
    *(_DWORD *)(v20 + 40) = -16777216;
  BgpClearScreen(*(_DWORD *)(v20 + 40));
  IoSaveBugCheckProgress(133);
  BcpSetCursorPosition(v19, v18, (int *)&v43 + 1);
  if ( v46 != 456 )
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_38;
    if ( (a5 & 2) != 0 )
    {
      v6 = &stru_140E3EB10;
      if ( (a5 & 4) == 0 )
        v6 = &stru_140E3EAF0;
    }
    else
    {
      if ( (a5 & 4) == 0 )
        goto LABEL_38;
      v6 = &usAddend;
    }
    v41 = *(&BcpCursor + 1);
    LODWORD(v43) = BcpCursor;
    if ( BcpTextBoxRightEdgeOverride )
      v26 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
    else
      v26 = *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 80)
          + *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 16)
          + *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 24);
    v44 = *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 80) + *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 16);
    v27 = v44;
    BcpSetCursorPosition(v44, *(&BcpCursor + 1), 0LL);
    v29 = *(_QWORD *)(qword_140E3EBE0 + 24);
    *(_DWORD *)(v29 + 56) = *(_DWORD *)(v12 + v28 + 8);
    *(_DWORD *)(qword_140E3EBE0 + 8) = *(_DWORD *)(v12 + v28 + 8);
    *(_QWORD *)&Destination.Length = v29 + 40;
    if ( (int)BgpFoGetStringAdvanceWidth((int)v29 + 40, v30, v37, v28) >= 0 )
    {
      v31 = (unsigned __int8)v39;
      if ( v27 + v37[0] > v26 )
        v31 = 1;
      v39 = v31;
    }
    BcpSetCursorPosition(v27, v41, 0LL);
    StringAdvanceWidth = BgpFoGetStringAdvanceWidth(*(int *)&Destination.Length, (__int64)v6, v37, v32);
    if ( StringAdvanceWidth >= 0 )
    {
      v33 = (unsigned __int8)v40;
      if ( v37[0] + v44 > v26 )
        v33 = 1;
      v40 = v33;
    }
    BcpSetCursorPosition(v43, v41, 0LL);
    if ( (_BYTE)v39 != (_BYTE)v40 )
    {
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.MaximumLength = pusResult;
      Destination.Buffer = (wchar_t *)qword_140E3EC20;
      result = RtlAppendUnicodeStringToString(&Destination, &stru_140E3EAC0);
      if ( result < 0 )
        return result;
      result = RtlAppendUnicodeToString(&Destination, L" ");
      if ( result < 0 )
        return result;
      result = RtlAppendUnicodeStringToString(&Destination, v6);
      StringAdvanceWidth = result;
      if ( result < 0 )
        return result;
      BcpDisplayCriticalStringCentered(&Destination, *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 8), v34, DisplayType);
LABEL_41:
      v35 = dword_140EEFD38
          + *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 76)
          + *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 32);
      dword_140EF01E4 = dword_140EEFD38 + *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 76);
      dword_140EF01B4 = v35;
      dword_140EF01B8 = v35;
      BcpProgressOffset = v42;
      BcpErrorMessageOffset = v42;
      BcpSetCursorPosition(v42, v35, &dword_140EF01B8);
      if ( v46 != 456 )
        BcpDisplayErrorInformationModernized(DisplayType, v46, a2, a3, a4, a5);
      if ( (a5 & 4) != 0 )
      {
        if ( (a5 & 2) == 0 )
        {
          KeQueryPerformanceCounter(&PerformanceFrequency);
          KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
        }
      }
      else
      {
        BcpSetCursorPosition(BcpProgressOffset, dword_140EF01E4, &dword_140EF01E8);
        BcpDisplayProgressModernized(0, DisplayType);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        BcpLastProgressDisplayed = 0;
        BcpStartTicks = PerformanceCounter.QuadPart;
        BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
      }
      *(_QWORD *)&a4->Length = &stru_140E3EAC0;
      a4->Buffer = (wchar_t *)&stru_140E3EAD0;
      return StringAdvanceWidth;
    }
    v19 = v42;
LABEL_38:
    BcpDisplayCriticalStringCentered(&stru_140E3EAC0, *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 8), v22, DisplayType);
    if ( v6 )
    {
      BcpSetCursorPosition(v19, dword_140EEFD38, 0LL);
      p_Destination = (UNICODE_STRING *)v6;
      v24 = *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 8);
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.MaximumLength = word_140E3EC18;
  Destination.Buffer = (wchar_t *)qword_140E3EC10;
  result = RtlAppendUnicodeStringToString(&Destination, &stru_140E3EBB0);
  if ( result >= 0 )
  {
    result = RtlAppendUnicodeToString(&Destination, L" ");
    if ( result >= 0 )
    {
      result = RtlAppendUnicodeStringToString(&Destination, &stru_140E3EBC0);
      StringAdvanceWidth = result;
      if ( result >= 0 )
      {
        v24 = *(_DWORD *)((char *)&unk_140E0EFA0 + v12 + 8);
        p_Destination = &Destination;
LABEL_40:
        BcpDisplayCriticalStringCentered(p_Destination, v24, v23, DisplayType);
        goto LABEL_41;
      }
    }
  }
  return result;
}
