/*
 * XREFs of IopParentToRawTranslation @ 0x14071F514
 * Callers:
 *     IopParentToRawTranslation @ 0x14071F514 (IopParentToRawTranslation.c)
 *     PnpBuildCmResourceList @ 0x140A8FE84 (PnpBuildCmResourceList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopParentToRawTranslation @ 0x14071F514 (IopParentToRawTranslation.c)
 */

__int64 __fastcall IopParentToRawTranslation(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = 0LL;
  if ( !*(_DWORD *)(a1 + 56) || *(_BYTE *)(a1 + 136) == 8 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    result = guard_dispatch_icall_no_overrides(
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 288) + 24LL) + 8LL),
               *(_QWORD *)(a1 + 112));
    if ( (int)result >= 0 )
      return IopParentToRawTranslation(v2);
  }
  return result;
}
