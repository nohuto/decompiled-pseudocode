/*
 * XREFs of HalFreeCommonBufferDmaThin @ 0x140397DB0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpPopCommonBufferEntry @ 0x140397E84 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalFreeCommonBufferDmaThin(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // r14
  __int64 result; // rax
  _BYTE *v8; // rsi
  struct _MDL *v9; // rdi

  v4 = *(_QWORD *)(a1 + 512);
  result = HalpPopCommonBufferEntry(a4, v4);
  v8 = (_BYTE *)result;
  if ( result )
  {
    v9 = *(struct _MDL **)(result + 48);
    if ( v9 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 40), a3);
    if ( v8[64] )
    {
      if ( v9 )
      {
        MmUnmapLockedPages(a4, v9);
        MiFreePagesFromMdl((ULONG_PTR)v9, 0, 0, 0);
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        MmFreeContiguousMemory(a4);
      }
    }
    ExFreePoolWithTag(v8, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
