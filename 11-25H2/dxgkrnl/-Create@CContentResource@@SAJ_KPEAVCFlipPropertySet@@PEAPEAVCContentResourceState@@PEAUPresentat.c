/*
 * XREFs of ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x14009E208
 * Callers:
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400580A8 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14000A0E0 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x140050FB8 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x140058290 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x14009E32C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CContentResource::Create(
        __int64 a1,
        struct CFlipPropertySet *a2,
        struct CContentResourceState **a3,
        struct PresentationSurfaceInfo *a4)
{
  CFlipResource *Pool2; // rax
  CFlipResource *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rax

  Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 64LL, 1919107910LL, a4);
  v9 = Pool2;
  if ( Pool2 )
  {
    CFlipResource::CFlipResource(Pool2, a1, a2);
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *(_QWORD *)v9 = &CContentResource::`vftable';
    v12 = CContentResource::Initialize(v9, a4);
    if ( v12 >= 0 )
    {
      v15 = DXGQUOTAALLOCATOR<256,1936868166>::operator new(v11, v10, v13, v14);
      v16 = v15;
      if ( v15 )
      {
        v17 = *(_BYTE *)(v15 + 32);
        *(_QWORD *)v15 = &CFlipResourceState::`vftable';
        *(_QWORD *)(v15 + 24) = v9;
        *(_BYTE *)(v15 + 32) = v17 & 0xF0 | 1;
        *(_QWORD *)(v15 + 16) = v15 + 8;
        *(_QWORD *)(v15 + 8) = v15 + 8;
        v18 = *(_QWORD *)(v15 + 24);
        *a3 = (struct CContentResourceState *)v16;
        ++*(_DWORD *)(v18 + 24);
        *(_QWORD *)(v16 + 40) = 0LL;
        *(_QWORD *)(v16 + 48) = 0LL;
        *(_QWORD *)(v16 + 56) = 0LL;
        *(_BYTE *)(v16 + 64) &= 0xFCu;
        *(_QWORD *)v16 = &CContentResourceState::`vftable';
      }
      else
      {
        v12 = -1073741801;
      }
    }
    CFlipResource::Release(v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
