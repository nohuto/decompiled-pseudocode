/*
 * XREFs of ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1801A4308
 * Callers:
 *     ??$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801A4250 (--$AddProperty@_N@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801D0044 (--$SetProperty@_N@DataSourcePropertySet@@QEAAJIPEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1801A3D40 (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x1801A4054 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<bool>(
        __int64 a1,
        int a2,
        _BYTE *a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  unsigned int v7; // esi
  __int64 result; // rax
  int v10; // ebp
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v11) = a2;
  HIDWORD(v11) = v5 & 0x1FFFFFFF;
  result = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
             a1,
             &v11);
  if ( (int)result >= 0 )
  {
    v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 1, 1, 0LL);
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(a1 + 56);
      *(_BYTE *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
      result = 0LL;
      *a4 = v7;
    }
    else
    {
      DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(
        (__int64 *)a1,
        v7);
      return (unsigned int)v10;
    }
  }
  return result;
}
