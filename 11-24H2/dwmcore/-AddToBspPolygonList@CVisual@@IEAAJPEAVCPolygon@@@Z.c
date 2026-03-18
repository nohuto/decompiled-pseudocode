/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x18020A5E8
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x18020A53C (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180039940 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x18020A70C (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 BspPolygonList; // rbx
  struct CPolygon *v4; // r10
  _QWORD *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v11; // eax
  struct CPolygon *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( !BspPolygonList )
  {
    v5 = MIDL_user_allocate(0x20uLL);
    BspPolygonList = (__int64)v5;
    if ( !v5 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x176Du, 0LL);
      return v9;
    }
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 6) = 0;
    CVisual::SetBspPolygonList(this, v5);
    v4 = v12;
  }
  v6 = *(_DWORD *)(BspPolygonList + 24);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v9 = -2147024362;
    v11 = 181;
    v8 = -2147024362;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v11, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1771u, 0LL);
    return v9;
  }
  v8 = 0;
  if ( v7 <= *(_DWORD *)(BspPolygonList + 20) )
  {
    *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * *(unsigned int *)(BspPolygonList + 24)) = v4;
    *(_DWORD *)(BspPolygonList + 24) = v7;
    goto LABEL_7;
  }
  v8 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8, 1, &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 192;
    goto LABEL_13;
  }
LABEL_7:
  v9 = v8;
  (**(void (__fastcall ***)(struct CPolygon *))v12)(v12);
  return v9;
}
