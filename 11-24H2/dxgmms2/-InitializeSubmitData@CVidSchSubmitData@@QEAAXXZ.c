/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14001BF64
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x14001C74C (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14001C068 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x14001C08C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  PVOID v2; // rax
  DXGADAPTER *v3; // rcx
  int v4; // r8d
  void *v5; // r9
  __int64 v6; // r10
  unsigned int v7; // eax
  DXGADAPTER *v8; // rcx
  unsigned __int8 IsDxgmms2; // al
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // eax

  v2 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL));
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
    if ( DXGADAPTER::IsDxgmms2(v3) )
      v7 = *(_DWORD *)(v6 + 2944) * ((v4 << 6) + ((8 * v4 + 231) & 0xFFFFFFF8)) + 8 * (v4 + 77);
    else
      v7 = 1304;
    memset(v5, 0, v7);
    DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL));
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v8);
    *(_BYTE *)(v10 + 356) = IsDxgmms2;
    if ( IsDxgmms2 )
    {
      v13 = 8 * v11;
      *(_DWORD *)(v10 + 608) = v11;
      v14 = v11 << 6;
      *(_DWORD *)(v10 + 604) = v12;
      *(_DWORD *)(v10 + 612) = v12 * (v14 + ((v13 + 231) & 0xFFFFFFF8)) + 16;
      v15 = v12 * (v14 + ((v13 + 231) & 0xFFFFFFF8)) + 616;
      *(_DWORD *)(v10 + 552) = v15;
      *(_DWORD *)(v10 + 556) = v13 + v15;
    }
  }
}
