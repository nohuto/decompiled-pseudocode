/*
 * XREFs of ?GetPresentFlags@CLegacyStereoRenderTarget@@MEBAIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180276B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoRenderTarget::GetPresentFlags(__int64 a1, _QWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // edx

  v2 = 2;
  if ( a2[1] != *a2 )
    v2 = 0;
  v3 = v2;
  if ( *(_BYTE *)(a1 + 33528) && !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 832LL) )
    return v2 | 0x20u;
  return v3;
}
