/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1402179BC
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x14007DB7C (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GreGetHFONT @ 0x140217A08 (GreGetHFONT.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 *     GreGetMapMode @ 0x14033C55C (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int MapMode; // eax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(GetDpiServerInfoForCurrentThread() + 24);
  if ( GreGetHFONT(a1) != v2 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v4 = 1;
  if ( MapMode != 1 )
    return 0;
  return v4;
}
