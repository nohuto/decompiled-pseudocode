/*
 * XREFs of MiCreateBootDriverHotPatchLinkage @ 0x140C45418
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiLinkHotPatchToBase @ 0x1406719B0 (MiLinkHotPatchToBase.c)
 */

__int64 **__fastcall MiCreateBootDriverHotPatchLinkage(__int64 a1)
{
  __int64 **result; // rax
  __int64 *v3; // rbx

  result = (__int64 **)(*(_QWORD *)(a1 + 240) + 3784LL);
  v3 = *result;
  while ( v3 != (__int64 *)result )
  {
    if ( (v3[5] & 3) == 1 )
    {
      *(_QWORD *)(*(_QWORD *)(v3[10] + 144) + 248LL) = *(_QWORD *)(v3[11] + 144);
      MiLinkHotPatchToBase(*(_QWORD *)(v3[10] + 144), *(_QWORD *)(v3[11] + 144), *((_DWORD *)v3 + 17));
    }
    v3 = (__int64 *)*v3;
    result = (__int64 **)(*(_QWORD *)(a1 + 240) + 3784LL);
  }
  return result;
}
