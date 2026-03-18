/*
 * XREFs of NtUserBitBltSysBmp @ 0x140204940
 * Callers:
 *     <none>
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     GetOemBitmapInfoForDpi @ 0x14007B544 (GetOemBitmapInfoForDpi.c)
 *     NtGdiStretchBlt @ 0x1400D0D00 (NtGdiStretchBlt.c)
 *     GreGetDCDpiScaleValue @ 0x14018D780 (GreGetDCDpiScaleValue.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rcx
  HDC v11; // r14
  __int16 *OemBitmapInfo; // rsi
  __int64 v13; // rcx
  int DCDpiScaleValue; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  int v16; // eax

  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( a4 < 0x5D )
  {
    v11 = PrepareHDCBITSBitmap(a1);
    if ( v11 )
    {
      OemBitmapInfo = (__int16 *)GetOemBitmapInfo(a4);
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) != 0
        || (DCDpiScaleValue = GreGetDCDpiScaleValue(a1), DCDpiScaleValue <= 1)
        || (OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue)) == 0LL )
      {
        v16 = GreBitBltInternal(
                a1,
                a2,
                a3,
                OemBitmapInfo[2],
                OemBitmapInfo[3],
                v11,
                *OemBitmapInfo,
                OemBitmapInfo[1],
                a5,
                0,
                0);
      }
      else
      {
        v16 = NtGdiStretchBlt(
                a1,
                a2,
                a3,
                OemBitmapInfo[2],
                OemBitmapInfo[3],
                v11,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[3],
                a5,
                0);
      }
      v9 = v16;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
