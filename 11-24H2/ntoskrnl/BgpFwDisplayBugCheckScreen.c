/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x14069B3E0
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405B0834 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14047D508 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x140699A70 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140699B4C (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14069A26C (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14069A874 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x14069ACC0 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x14069AE40 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C72ADC (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  int v7; // ebp
  unsigned int v8; // ebx
  signed int DisplayType; // edi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // r8
  UNICODE_STRING *v16; // r10
  UNICODE_STRING *v17; // rcx
  __int16 v18; // cx
  int v19; // r8d
  __int64 v20; // r8
  char v21; // r14
  UNICODE_STRING *v22; // rcx
  UNICODE_STRING *v23; // rdx
  int v24; // r9d
  unsigned int BitsPerPixel; // eax
  __int64 v26; // r8
  int ComponentOffsets; // r15d
  __int64 v28; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v32[4]; // [rsp+40h] [rbp-38h] BYREF

  v31 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = a1;
  if ( (dword_140EF0270 & 4) != 0 && (dword_140EF0270 & 0x400000) == 0 )
  {
    v8 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    IoSaveBugCheckProgress(131);
    return v8;
  }
  if ( (dword_140EF0270 & 0x400000) != 0 || (dword_140EF0270 & 0x10) == 0 )
  {
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0LL;
  }
  v32[0] = DWORD2(BgInternal);
  v32[1] = DWORD1(BgInternal);
  v32[2] = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(v32);
  v11 = 84LL * DisplayType;
  v12 = *(_QWORD *)(qword_140E3EBE0 + 24);
  if ( v7 == 456 )
    *(_DWORD *)(v12 + 40) = -16777216;
  BgpClearScreen(*(_DWORD *)(v12 + 40));
  IoSaveBugCheckProgress(133);
  BcpSetCursorPosition(
    *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 16),
    *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 20),
    (int *)((char *)&unk_140E0EFA0 + v11 + 20));
  if ( (dword_140EF0270 & 0x20000) == 0 )
  {
    v14 = &qword_14000C400;
    if ( v7 == 456 )
      v14 = &qword_14000C248;
    BcpDisplayCriticalString(v14, *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 12), v13, DisplayType);
  }
  BcpSetCursorPosition(
    *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 16) + *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 32),
    dword_140EEFD38 + *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 36),
    0LL);
  if ( v7 == 456 )
  {
    v17 = &stru_140E3EBB0;
  }
  else
  {
    v17 = &stru_140E3EBA0;
    if ( (dword_140EF0270 & 0x10000000) == 0 )
      v17 = v16;
  }
  BcpDisplayCriticalString(v17, *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 8), v15, DisplayType);
  BcpDisplayCriticalCharacter(v18, *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 8), v19);
  v21 = 1;
  if ( v7 == 456 )
  {
    v22 = &stru_140E3EBC0;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_25;
    if ( (a5 & 2) != 0 )
    {
      v23 = &stru_140E3EAF0;
      v22 = &stru_140E3EB10;
    }
    else
    {
      v22 = &usAddend;
      v23 = &stru_140E3EAE0;
    }
    if ( (a5 & 4) == 0 )
      v22 = v23;
  }
  BcpDisplayCriticalString(v22, *(_DWORD *)((char *)&unk_140E0EFA0 + v11 + 8), v20, DisplayType);
LABEL_25:
  v24 = 0;
  if ( !qword_140EF02F8
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v26 + 8) < BitsPerPixel) && (dword_140EF0270 & 0xC00) != 0 )
  {
    v21 = 0;
  }
  else
  {
    v24 = *(_DWORD *)(v26 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       (unsigned int *)&BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       (int *)&v31,
                       DisplayType,
                       v24,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpSetCursorPosition(BcpErrorMessageOffset, dword_140EF01B4, &dword_140EF01B8);
    if ( v7 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, v7, a2, a3, (__int64)a4, a5);
      if ( v21 )
        BgpGxDrawRectangle((int *)qword_140EF02F8, (__int64)&v31);
    }
    IoSaveBugCheckProgress(134);
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
      BcpDisplayProgress(0, DisplayType, v28);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140E3EAC0;
    a4[1] = &stru_140E3EAD0;
  }
  return (unsigned int)ComponentOffsets;
}
