/*
 * XREFs of VidSchiComputeFlipEntryStatusAfterFlip @ 0x140039640
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1400461F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputeFlipEntryStatusAfterFlip(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int *v6; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 20);
  v4 = 0LL;
  *a3 = 11;
  while ( (unsigned int)v4 < v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v4);
    v6 = (unsigned int *)(v5 + 20);
    if ( (*(_DWORD *)(v5 + 16) & 4) != 0 )
    {
      result = *v6;
      if ( (result & 1) == 0 )
      {
        *a3 = 5;
        return result;
      }
    }
    result = *v6;
    if ( (result & 4) != 0 )
      *a3 = 15;
    v4 = (unsigned int)(v4 + 1);
  }
  return result;
}
