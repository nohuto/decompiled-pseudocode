/*
 * XREFs of HalFreeCommonBufferDmarThin @ 0x140411630
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     HalpPopCommonBufferEntry @ 0x1404117D4 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalFreeCommonBufferDmarThin(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // rbp
  __int64 result; // rax
  void *v8; // rsi
  struct _MDL *v9; // r14
  char v10; // di

  v4 = *(_QWORD *)(a1 + 512);
  result = HalpPopCommonBufferEntry(a4, v4);
  v8 = (void *)result;
  if ( result )
  {
    v9 = *(struct _MDL **)(result + 48);
    v10 = *(_BYTE *)(result + 64);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 40), a3);
    if ( v10 )
    {
      MmUnmapLockedPages(a4, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0, 0, 0);
      ExFreePoolWithTag(v9, 0);
    }
    ExFreePoolWithTag(v8, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
