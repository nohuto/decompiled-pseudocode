/*
 * XREFs of ?DxgkEngGetDCApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1C00E04E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( qword_1C0294490 && (int)qword_1C0294490() >= 0 && qword_1C0294498 )
    return qword_1C0294498(a1, a2);
  return v2;
}
