/*
 * XREFs of ?IsInStandby@CHolographicManager@@QEAA_NXZ @ 0x1802D8BF8
 * Callers:
 *     ?IsOccluded@CHolographicInteropTarget@@UEBA_NXZ @ 0x1802D9800 (-IsOccluded@CHolographicInteropTarget@@UEBA_NXZ.c)
 *     ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z @ 0x1802D9F10 (-WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CHolographicManager::IsInStandby(CHolographicManager *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 5);
  result = 1;
  if ( v1 )
    return *(_BYTE *)(v1 + 192);
  return result;
}
