/*
 * XREFs of HalFreeCommonBufferV3 @ 0x14054D840
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     HalpPopCommonBufferEntry @ 0x1404117D4 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406F3E98 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalFreeCommonBufferV3(__int64 a1, unsigned int a2, __int64 a3, _RTL_BALANCED_NODE *a4)
{
  __int64 v4; // r14
  _RTL_BALANCED_NODE *v5; // r15
  SIZE_T v6; // r13
  bool v7; // di
  unsigned __int64 result; // rax
  _QWORD *v9; // rsi
  struct _MDL *v10; // rbp
  char v11; // r12
  int ContiguousVirtualBufferPrivate; // eax

  v4 = *(_QWORD *)(a1 + 512);
  v5 = a4;
  v6 = a2;
  v7 = 0;
  result = HalpPopCommonBufferEntry(a4, v4);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  switch ( *(_DWORD *)(v4 + 48) )
  {
    case 1:
      goto LABEL_5;
    case 2:
      v7 = *(_QWORD *)(result + 48) != 0LL;
      break;
    case 3:
LABEL_5:
      v7 = 1;
      break;
  }
  v10 = *(struct _MDL **)(result + 48);
  v11 = *(_BYTE *)(result + 64);
  if ( v7 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 40));
  if ( v11 )
  {
    if ( v10 )
    {
      MmUnmapLockedPages(v5, v10);
      MiFreePagesFromMdl((ULONG_PTR)v10, 0, 0, 0);
      ExFreePoolWithTag(v10, 0);
    }
    else if ( !HalpDmaCvmConfiguration
           || (ContiguousVirtualBufferPrivate = HalpDmaCvmMakeContiguousVirtualBufferPrivate(v5, v6),
               v5 = (_RTL_BALANCED_NODE *)v9[4],
               ContiguousVirtualBufferPrivate >= 0) )
    {
      MmFreeContiguousMemory(v5);
    }
  }
  ExFreePoolWithTag(v9, 0);
  return HalpDmaDereferenceDomainObject((__int64 *)v4);
}
