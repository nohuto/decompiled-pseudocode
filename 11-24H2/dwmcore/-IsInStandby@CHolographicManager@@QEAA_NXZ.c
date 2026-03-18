/*
 * XREFs of ?IsInStandby@CHolographicManager@@QEAA_NXZ @ 0x1802CF958
 * Callers:
 *     ?IsOccluded@CHolographicInteropTarget@@UEBA_NXZ @ 0x1802D0560 (-IsOccluded@CHolographicInteropTarget@@UEBA_NXZ.c)
 *     ?WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z @ 0x1802D0C70 (-WaitForVBlank@CHolographicInteropTarget@@UEBAJPEAX@Z.c)
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
