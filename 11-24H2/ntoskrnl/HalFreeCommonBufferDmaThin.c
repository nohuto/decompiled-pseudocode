/*
 * XREFs of HalFreeCommonBufferDmaThin @ 0x1403A9120
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     HalpPopCommonBufferEntry @ 0x1403A91F4 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalFreeCommonBufferDmaThin(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v9; // r9
  _BYTE *v10; // rsi
  struct _MDL *v11; // rdi

  v4 = *(_QWORD *)(a1 + 512);
  v6 = a2;
  result = HalpPopCommonBufferEntry(a4, v4);
  v10 = (_BYTE *)result;
  if ( result )
  {
    v11 = *(struct _MDL **)(result + 48);
    if ( v11 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 40), a3, (unsigned __int64)(v6 + 4095) >> 12, v9);
    if ( v10[64] )
    {
      if ( v11 )
      {
        MmUnmapLockedPages(a4, v11);
        MiFreePagesFromMdl((ULONG_PTR)v11, 0, 0, 0);
        ExFreePoolWithTag(v11, 0);
      }
      else
      {
        MmFreeContiguousMemory(a4);
      }
    }
    ExFreePoolWithTag(v10, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
