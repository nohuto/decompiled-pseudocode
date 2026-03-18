/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x18019CFD0
 * Callers:
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18023D730 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbx
  _QWORD *v6; // rax
  void *v7; // rbx
  _QWORD *inserted; // rdi
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  HANDLE ProcessHeap; // rax
  struct _RTL_GENERIC_TABLE *v15; // rcx
  int v16; // ebx
  int v17; // r9d
  struct _RTL_GENERIC_TABLE *v18; // rax
  unsigned int v19; // eax
  int Buffer; // [rsp+30h] [rbp-50h] BYREF
  LPVOID lpMem[2]; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  int v23; // [rsp+50h] [rbp-30h]
  int v24; // [rsp+58h] [rbp-28h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+78h] [rbp-8h]
  unsigned __int8 NewElement; // [rsp+B0h] [rbp+30h] BYREF
  struct CBaseExpression *v29; // [rsp+B8h] [rbp+38h] BYREF
  struct CBaseExpression **v30; // [rsp+C8h] [rbp+48h] BYREF

  v29 = a2;
  v3 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  NewElement = 0;
  if ( !v3 )
  {
    v18 = (struct _RTL_GENERIC_TABLE *)MIDL_user_allocate(0x48uLL);
    v3 = v18;
    if ( !v18 )
    {
      *((_QWORD *)this + 6) = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x208u, 0LL);
      return 2147942414LL;
    }
    RtlInitializeGenericTable(
      v18,
      CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData,
      CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
      CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
      0LL);
    *((_QWORD *)this + 6) = v3;
  }
  v22 = 0LL;
  v23 = 0;
  *(_OWORD *)lpMem = 0LL;
  Buffer = a3;
  v6 = RtlLookupElementGenericTable(v3, &Buffer);
  v7 = lpMem[0];
  inserted = v6;
  if ( lpMem[0] != lpMem[1] )
  {
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v7);
    }
    lpMem[0] = 0LL;
  }
  if ( !inserted )
  {
    v15 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v26 = 0LL;
    v27 = 0;
    v24 = a3;
    v25 = 0LL;
    inserted = RtlInsertElementGenericTable(v15, &v24, 0x28u, &NewElement);
    if ( !inserted )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x212u, 0LL);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v25);
      return 2147942414LL;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v25);
  }
  v9 = inserted[1];
  v10 = 0;
  v11 = *((unsigned int *)inserted + 8);
  while ( v10 < (unsigned int)v11 )
  {
    if ( v29 == *(struct CBaseExpression **)(v9 + 8LL * v10) )
      return 0LL;
    ++v10;
  }
  v12 = v11 + 1;
  if ( (int)v11 + 1 < (unsigned int)v11 )
  {
    v16 = -2147024362;
    v19 = 181;
    v17 = -2147024362;
  }
  else
  {
    if ( v12 <= *((_DWORD *)inserted + 7) )
    {
      *(_QWORD *)(v9 + 8 * v11) = v29;
      *((_DWORD *)inserted + 8) = v12;
      return 0LL;
    }
    v30 = &v29;
    v16 = DynArrayImpl<0>::Grow((__int64)(inserted + 1), 8u, 1, 0, (unsigned __int64 *)&v30);
    v17 = v16;
    if ( v16 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)inserted + 8))++) + inserted[1]) = *v30;
      return 0LL;
    }
    v19 = 192;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v19, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x224u, 0LL);
  return (unsigned int)v16;
}
