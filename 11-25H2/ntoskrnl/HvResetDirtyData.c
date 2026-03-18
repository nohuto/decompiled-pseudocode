/*
 * XREFs of HvResetDirtyData @ 0x140A4DDD0
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x14088302C (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140882018 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)-*(_DWORD *)(a1 + 104);
    _InterlockedAdd(&CmpDirtySectorCount, result);
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
