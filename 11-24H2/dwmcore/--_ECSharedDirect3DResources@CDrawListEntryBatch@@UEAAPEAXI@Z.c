/*
 * XREFs of ??_ECSharedDirect3DResources@CDrawListEntryBatch@@UEAAPEAXI@Z @ 0x18021DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedDirect3DResources@CDrawListEntryBatch@@UEAA@XZ @ 0x18021DBFC (--1CSharedDirect3DResources@CDrawListEntryBatch@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CDrawListEntryBatch::CSharedDirect3DResources *__fastcall CDrawListEntryBatch::CSharedDirect3DResources::`vector deleting destructor'(
        CDrawListEntryBatch::CSharedDirect3DResources *this,
        char a2)
{
  CDrawListEntryBatch::CSharedDirect3DResources::~CSharedDirect3DResources(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x470uLL);
  return this;
}
