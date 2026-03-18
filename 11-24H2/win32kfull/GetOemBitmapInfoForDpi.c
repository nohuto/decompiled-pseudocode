/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x14007B544
 * Callers:
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     NtUserBitBltSysBmp @ 0x140204940 (NtUserBitBltSysBmp.c)
 * Callees:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x14018B06C (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 CurrentProcessWin32Process; // rax
  int DpiCacheIndex; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct _tagOEMBITMAPSET *v9; // rbx

  v2 = (int)a1;
  v3 = a2;
  if ( !a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v3 = *(unsigned __int16 *)(CurrentProcessWin32Process + 272);
  }
  DpiCacheIndex = GetDpiCacheIndex(v3);
  v8 = DpiCacheIndex;
  if ( DpiCacheIndex == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1640LL);
  v9 = (struct _tagOEMBITMAPSET *)(W32GetUserSessionState(v7, v6) + 43328 + 760 * v8);
  EnsureOemBitmapInfoForDpiSlot(v9, v3);
  return (char *)v9 + 8 * v2 + 16;
}
