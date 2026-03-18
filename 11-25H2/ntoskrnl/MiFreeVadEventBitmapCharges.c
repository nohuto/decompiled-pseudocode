/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x140A67D64
 * Callers:
 *     MiFreeAweView @ 0x1406E9DC4 (MiFreeAweView.c)
 *     MiFreeVadEventBitmap @ 0x140ABE6F4 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 */

unsigned __int64 __fastcall MiFreeVadEventBitmapCharges(ULONG_PTR a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r8

  v2 = *(_DWORD *)(a2 + 80);
  if ( (v2 & 0x40) != 0 )
    goto LABEL_5;
  if ( v2 == 256 )
  {
    v3 = *(_QWORD *)(a2 + 56);
    return PsReturnProcessNonPagedPoolQuota(a1, 8 * ((v3 >> 6) + ((v3 & 0x3F) != 0) + 11LL));
  }
  if ( !MmVadEventBlockFixEnabled )
LABEL_5:
    v3 = *(_QWORD *)(a2 + 8);
  else
    v3 = *(_QWORD *)(a2 + 16);
  return PsReturnProcessNonPagedPoolQuota(a1, 8 * ((v3 >> 6) + ((v3 & 0x3F) != 0) + 11LL));
}
