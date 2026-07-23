/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x14099A3EC
 * Callers:
 *     MiFreeAweView @ 0x1406F3720 (MiFreeAweView.c)
 *     MiReleaseVadEventBlocks @ 0x14099A250 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x140ABD7CC (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 */

unsigned __int64 __fastcall MiFreeVadEventBitmapCharges(ULONG_PTR a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r8

  v2 = *(_DWORD *)(a2 + 80);
  if ( (v2 & 0x40) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 8);
  }
  else if ( v2 == 256 )
  {
    v3 = *(_QWORD *)(a2 + 56);
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 16);
  }
  return PsReturnProcessNonPagedPoolQuota(a1, 8 * ((v3 >> 6) + ((v3 & 0x3F) != 0) + 11LL));
}
