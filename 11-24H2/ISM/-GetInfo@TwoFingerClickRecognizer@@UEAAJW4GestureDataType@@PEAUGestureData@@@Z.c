/*
 * XREFs of ?GetInfo@TwoFingerClickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801B6950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTapInfo@TwoFingerClickRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x1801B69D0 (-GetTapInfo@TwoFingerClickRecognizer@@QEAA_NPEAUGestureData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::GetInfo(TwoFingerClickRecognizer *a1, int a2, struct GestureData *a3)
{
  bool TapInfo; // bl
  __int64 v4; // r8

  TapInfo = 0;
  if ( (unsigned int)(a2 - 9) <= 1 )
  {
    TapInfo = TwoFingerClickRecognizer::GetTapInfo(a1, a3);
    if ( TapInfo )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 0xFFFFFFFFLL);
  }
  return !TapInfo ? 0x80070057 : 0;
}
