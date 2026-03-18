/*
 * XREFs of ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1801DBEBC
 * Callers:
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180271220 (--$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x1801851E4 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<float>(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4)
{
  __int64 v5; // r14
  __int64 v7; // rsi
  unsigned int v9; // r8d
  int v10; // ebp
  int v11; // r9d
  __int64 result; // rax
  unsigned int v13; // eax
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+88h] [rbp+20h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(unsigned int *)(a1 + 24);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v14) = a2;
  v9 = v7 + 1;
  HIDWORD(v14) = v5 & 0x1FFFFFFF;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v10 = -2147024362;
    v13 = 181;
    v11 = -2147024362;
  }
  else
  {
    if ( v9 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v14;
      *(_DWORD *)(a1 + 24) = v9;
      goto LABEL_6;
    }
    v15 = &v14;
    v10 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v15);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a1 + 24))++) + *(_QWORD *)a1) = *v15;
LABEL_6:
      v10 = DynArrayImpl<0>::Grow(a1 + 32, 1u, 4, 1, 0LL);
      if ( v10 >= 0 )
      {
        *(_DWORD *)(a1 + 56) += 4;
        *(_DWORD *)(v5 + *(_QWORD *)(a1 + 32)) = *a3;
        result = 0LL;
        *a4 = v7;
        return result;
      }
      DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(
        (__int64 *)a1,
        v7);
      return (unsigned int)v10;
    }
    v13 = 192;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
  return (unsigned int)v10;
}
