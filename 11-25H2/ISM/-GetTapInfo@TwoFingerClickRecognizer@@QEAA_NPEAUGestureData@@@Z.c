/*
 * XREFs of ?GetTapInfo@TwoFingerClickRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x1801AF440
 * Callers:
 *     ?GetInteresting@TwoFingerGestureRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801AE5F0 (-GetInteresting@TwoFingerGestureRecognizer@@UEAA-AW4GestureType@@XZ.c)
 *     ?GetInfo@TwoFingerClickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801AF3C0 (-GetInfo@TwoFingerClickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TwoFingerClickRecognizer::GetTapInfo(TwoFingerClickRecognizer *this, struct GestureData *a2)
{
  bool result; // al

  if ( *(_DWORD *)a2 != 12 )
    return 0;
  result = 1;
  if ( (*((_BYTE *)this + 16) & 1) == 0 )
    return 0;
  *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)((char *)this + 28);
  return result;
}
