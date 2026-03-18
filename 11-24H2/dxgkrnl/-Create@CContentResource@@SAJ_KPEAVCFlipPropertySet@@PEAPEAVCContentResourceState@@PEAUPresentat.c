/*
 * XREFs of ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x1400A0568
 * Callers:
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x140057B28 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x140019614 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x140050A28 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x140057D10 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400A068C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CContentResource::Create(
        __int64 a1,
        struct CFlipPropertySet *a2,
        struct CContentResourceState **a3,
        struct PresentationSurfaceInfo *a4)
{
  CFlipResource *Pool2; // rax
  CFlipResource *v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rax

  Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 64LL, 1919107910LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    CFlipResource::CFlipResource(Pool2, a1, a2);
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *(_QWORD *)v9 = &CContentResource::`vftable';
    v10 = CContentResource::Initialize(v9, a4);
    if ( v10 >= 0 )
    {
      v11 = DXGQUOTAALLOCATOR<256,1936868166>::operator new();
      v12 = v11;
      if ( v11 )
      {
        v13 = *(_BYTE *)(v11 + 32);
        *(_QWORD *)v11 = &CFlipResourceState::`vftable';
        *(_QWORD *)(v11 + 24) = v9;
        *(_BYTE *)(v11 + 32) = v13 & 0xF0 | 1;
        *(_QWORD *)(v11 + 16) = v11 + 8;
        *(_QWORD *)(v11 + 8) = v11 + 8;
        v14 = *(_QWORD *)(v11 + 24);
        *a3 = (struct CContentResourceState *)v12;
        ++*(_DWORD *)(v14 + 24);
        *(_QWORD *)(v12 + 40) = 0LL;
        *(_QWORD *)(v12 + 48) = 0LL;
        *(_QWORD *)(v12 + 56) = 0LL;
        *(_BYTE *)(v12 + 64) &= 0xFCu;
        *(_QWORD *)v12 = &CContentResourceState::`vftable';
      }
      else
      {
        v10 = -1073741801;
      }
    }
    CFlipResource::Release(v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
