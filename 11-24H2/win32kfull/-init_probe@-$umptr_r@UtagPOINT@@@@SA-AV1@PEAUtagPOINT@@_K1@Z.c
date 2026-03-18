/*
 * XREFs of ?init_probe@?$umptr_r@UtagPOINT@@@@SA?AV1@PEAUtagPOINT@@_K1@Z @ 0x140176E98
 * Callers:
 *     NtGdiPolyDraw @ 0x140176E00 (NtGdiPolyDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall umptr_r<tagPOINT>::init_probe(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  if ( is_mul_ok(a3, 8uLL) )
  {
    if ( 8 * (_DWORD)a3 && (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
