/*
 * XREFs of ?GetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEBA?AUAPP_SIZE_CONSTRAINTS@@I@Z @ 0x1801D5060
 * Callers:
 *     <none>
 * Callees:
 *     ??0APP_SIZE_CONSTRAINTS@@QEAA@AEBUCSize@Geometry@@0I@Z @ 0x1801D50CC (--0APP_SIZE_CONSTRAINTS@@QEAA@AEBUCSize@Geometry@@0I@Z.c)
 */

APP_SIZE_CONSTRAINTS *__fastcall AppSizeConstraintsCache::GetSizeConstraintsForDpi(
        __int64 a1,
        APP_SIZE_CONSTRAINTS *a2,
        const struct Geometry::CSize *a3)
{
  int v4; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  __int64 v9; // rcx

  v4 = (int)a3;
  APP_SIZE_CONSTRAINTS::APP_SIZE_CONSTRAINTS(a2, a2, a3, (unsigned int)a3);
  v6 = 0LL;
  v7 = 0LL;
  while ( v6 < *(_QWORD *)(a1 + 24) )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( v4 == *(_DWORD *)(v7 + v9) )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v9 + 20 * v6 + 4);
      return a2;
    }
    ++v6;
    v7 += 20LL;
  }
  return a2;
}
