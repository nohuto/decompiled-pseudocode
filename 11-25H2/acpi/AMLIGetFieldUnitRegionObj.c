/*
 * XREFs of AMLIGetFieldUnitRegionObj @ 0x140023B60
 * Callers:
 *     InternalRawAccessOpRegionHandler @ 0x140023860 (InternalRawAccessOpRegionHandler.c)
 * Callees:
 *     GetFieldUnitRegionObj @ 0x14000C4A0 (GetFieldUnitRegionObj.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     CreateObjectHandle @ 0x14001A7CC (CreateObjectHandle.c)
 */

__int64 __fastcall AMLIGetFieldUnitRegionObj(__int64 *a1, __int64 *a2)
{
  int FieldUnitRegionObj; // ebx
  __int64 v4; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  dword_140089138 = 0;
  pszDest = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj(a1, &v6);
  if ( FieldUnitRegionObj >= 0 && v6 )
  {
    *a2 = CreateObjectHandle(v6);
    DereferenceObjectEx(v4);
  }
  return (unsigned int)FieldUnitRegionObj;
}
