/*
 * XREFs of IopRemoveRelationFromList @ 0x1407276CC
 * Callers:
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 *     PipRemoveDevicesInRelationList @ 0x14082F020 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140831A14 (PipDeviceObjectListIndexOf.c)
 *     PipDeviceObjectListRemove @ 0x140AAD558 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveRelationFromList(unsigned int **a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD *v3; // r11
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PipDeviceObjectListIndexOf(*a1, a2, **a1, &v5);
  if ( v2 == -1 )
    return 3221225486LL;
  else
    return PipDeviceObjectListRemove(*v3, v2);
}
