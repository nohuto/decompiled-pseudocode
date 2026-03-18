/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x14068F010
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405AFF14 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     BgpGxDrawRectangle @ 0x140481014 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140481498 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x14058E6E0 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x14068CAD8 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x14068D6A0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14068D77C (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14068DE9C (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14068E4A4 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x14068E8F0 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x14068EA70 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14068ED78 (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C5F59C (BcpDisplayEarlyBugCheckScreen.c)
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
  if ( (dword_140EEFD90 & 4) != 0 && (dword_140EEFD90 & 0x400000) == 0 )
  {
    v8 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    IoSaveBugCheckProgress(131);
    return v8;
  }
  if ( (dword_140EEFD90 & 0x400000) != 0 || (dword_140EEFD90 & 0x10) == 0 )
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
  v12 = *(_QWORD *)(qword_140E3E860 + 24);
  if ( v7 == 456 )
    *(_DWORD *)(v12 + 40) = -16777216;
  BgpClearScreen(*(_DWORD *)(v12 + 40));
  IoSaveBugCheckProgress(133);
  BcpSetCursorPosition(
    *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 16),
    *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 20),
    (int *)((char *)&unk_140E0ECC0 + v11 + 20));
  if ( (dword_140EEFD90 & 0x20000) == 0 )
  {
    v14 = &qword_14000BF50;
    if ( v7 == 456 )
      v14 = &qword_14000BFA0;
    BcpDisplayCriticalString(v14, *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 12), v13, DisplayType);
  }
  BcpSetCursorPosition(
    *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 16) + *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 32),
    dword_140EEF840 + *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 36),
    0LL);
  if ( v7 == 456 )
  {
    v17 = &stru_140E3E830;
  }
  else
  {
    v17 = &stru_140E3E820;
    if ( (dword_140EEFD90 & 0x10000000) == 0 )
      v17 = v16;
  }
  BcpDisplayCriticalString(v17, *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 8), v15, DisplayType);
  BcpDisplayCriticalCharacter(v18, *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 8), v19);
  v21 = 1;
  if ( v7 == 456 )
  {
    v22 = &stru_140E3E840;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_25;
    if ( (a5 & 2) != 0 )
    {
      v23 = &stru_140E3E770;
      v22 = &stru_140E3E790;
    }
    else
    {
      v22 = &usAddend;
      v23 = &stru_140E3E760;
    }
    if ( (a5 & 4) == 0 )
      v22 = v23;
  }
  BcpDisplayCriticalString(v22, *(_DWORD *)((char *)&unk_140E0ECC0 + v11 + 8), v20, DisplayType);
LABEL_25:
  v24 = 0;
  if ( !qword_140EEFE18
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v26 + 8) < BitsPerPixel) && (dword_140EEFD90 & 0xC00) != 0 )
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
    BcpSetCursorPosition(BcpErrorMessageOffset, dword_140EEFC94, &dword_140EEFC98);
    if ( v7 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, v7, a2, a3, (__int64)a4, a5);
      if ( v21 )
        BgpGxDrawRectangle((int *)qword_140EEFE18, (__int64)&v31);
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
      BcpSetCursorPosition(BcpProgressOffset, dword_140EEFCE4, &dword_140EEFCE8);
      BcpDisplayProgress(0, DisplayType, v28);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_140E3E740;
    a4[1] = &stru_140E3E750;
  }
  return (unsigned int)ComponentOffsets;
}
