/*
 * XREFs of ?GetDragInfo@TwoFingerDragRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x1801B6410
 * Callers:
 *     ?GetInteresting@TwoFingerGestureRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801B5B80 (-GetInteresting@TwoFingerGestureRecognizer@@UEAA-AW4GestureType@@XZ.c)
 *     ?GetInfo@TwoFingerDragRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801B6460 (-GetInfo@TwoFingerDragRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TwoFingerDragRecognizer::GetDragInfo(TwoFingerDragRecognizer *this, struct GestureData *a2)
{
  bool result; // al
  __int64 v3; // [rsp+10h] [rbp+10h]

  if ( *(_DWORD *)a2 != 28 || (*((_BYTE *)this + 16) & 1) == 0 )
    return 0;
  *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)((char *)this + 68);
  result = 1;
  *(_QWORD *)((char *)a2 + 12) = *(_QWORD *)((char *)this + 52);
  LODWORD(v3) = *((_DWORD *)this + 13) - *((_DWORD *)this + 15);
  HIDWORD(v3) = *((_DWORD *)this + 14) - *((_DWORD *)this + 16);
  *(_QWORD *)((char *)a2 + 20) = v3;
  return result;
}
