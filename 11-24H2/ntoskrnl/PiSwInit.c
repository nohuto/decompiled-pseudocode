/*
 * XREFs of PiSwInit @ 0x140C274AC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 */

__int64 PiSwInit()
{
  __int64 result; // rax
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  DWORD1(v1) = 0;
  memset_0(&PiSwDeviceInstanceTable, 0, sizeof(PiSwDeviceInstanceTable));
  PiSwDeviceInstanceTable.TableContext = 0LL;
  PiSwDeviceInstanceTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PiSwDeviceInstanceTable;
  PiSwDeviceInstanceTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiSwDeviceCompareObjects;
  PiSwDeviceInstanceTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PiSwAllocateGenericTableEntry;
  PiSwDeviceInstanceTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PiSwFreeGenericTableEntry;
  memset_0(&PiSwBusRelationsTable, 0, sizeof(PiSwBusRelationsTable));
  PiSwBusRelationsTable.TableContext = 0LL;
  PiSwBusRelationsTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiSwBusRelationsCompareInstancePath;
  PiSwBusRelationsTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PiSwBusRelationsTable;
  qword_140F89FB8 = (__int64)&PiSwGlobalPdoAssociationList;
  PiSwGlobalPdoAssociationList = (__int64)&PiSwGlobalPdoAssociationList;
  PiSwBusRelationsTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PiSwAllocateGenericTableEntry;
  PiSwBusRelationsTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PiSwFreeGenericTableEntry;
  result = ExInitializeResourceLite2(&PiSwLockObj, -1);
  if ( (int)result >= 0 )
  {
    LODWORD(v1) = 3014700;
    *((_QWORD *)&v1 + 1) = L"\\Driver\\SoftwareDevice";
    return IoCreateDriver(&v1, PiSwPdoDriverEntry);
  }
  return result;
}
