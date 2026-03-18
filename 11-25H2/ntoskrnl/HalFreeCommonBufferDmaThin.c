/*
 * XREFs of HalFreeCommonBufferDmaThin @ 0x140411700
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     HalpPopCommonBufferEntry @ 0x1404117D4 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
