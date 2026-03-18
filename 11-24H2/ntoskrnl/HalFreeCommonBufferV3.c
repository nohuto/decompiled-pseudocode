/*
 * XREFs of HalFreeCommonBufferV3 @ 0x1405501A0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     HalpPopCommonBufferEntry @ 0x1403A91F4 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FFC88 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalFreeCommonBufferV3(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r14
  void *v5; // r15
  SIZE_T v6; // r13
  bool v8; // di
  unsigned __int64 result; // rax
  __int64 v10; // r9
  _QWORD *v11; // rsi
  struct _MDL *v12; // rbp
  char v13; // r12
  int ContiguousVirtualBufferPrivate; // eax

  v4 = *(_QWORD *)(a1 + 512);
  v5 = (void *)a4;
  v6 = a2;
  v8 = 0;
  result = HalpPopCommonBufferEntry(a4, v4);
  v11 = (_QWORD *)result;
  if ( !result )
    return result;
  switch ( *(_DWORD *)(v4 + 48) )
  {
    case 1:
      goto LABEL_5;
    case 2:
      v8 = *(_QWORD *)(result + 48) != 0LL;
      break;
    case 3:
LABEL_5:
      v8 = 1;
      break;
  }
  v12 = *(struct _MDL **)(result + 48);
  v13 = *(_BYTE *)(result + 64);
  if ( v8 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 40), a3, (v6 + 4095) >> 12, v10);
  if ( v13 )
  {
    if ( v12 )
    {
      MmUnmapLockedPages(v5, v12);
      MiFreePagesFromMdl((ULONG_PTR)v12, 0, 0, 0);
      ExFreePoolWithTag(v12, 0);
    }
    else if ( !HalpDmaCvmConfiguration
           || (ContiguousVirtualBufferPrivate = HalpDmaCvmMakeContiguousVirtualBufferPrivate(v5, v6),
               v5 = (void *)v11[4],
               ContiguousVirtualBufferPrivate >= 0) )
    {
      MmFreeContiguousMemory(v5);
    }
  }
  ExFreePoolWithTag(v11, 0);
  return HalpDmaDereferenceDomainObject((__int64 *)v4);
}
