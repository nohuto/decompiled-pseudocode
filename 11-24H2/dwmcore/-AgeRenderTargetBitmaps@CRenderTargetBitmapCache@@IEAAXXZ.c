/*
 * XREFs of ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1801AFBB0
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x1800F2360 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B002C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::AgeRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // rbp

  v1 = 0LL;
  if ( g_pComposition )
    v1 = *((_QWORD *)g_pComposition + 111);
  v3 = *((_DWORD *)this + 6);
  while ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 8LL * --v3);
    if ( (unsigned __int64)(v1 - *(_QWORD *)(v5 + 136)) >= 0x20 )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, v3);
      *(_BYTE *)(v5 + 144) = 0;
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v5);
    }
  }
  v4 = *((_DWORD *)this + 6);
  while ( v4 )
  {
    if ( *((_DWORD *)this + 6) <= 0x20u )
      break;
    v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * --v4);
    if ( v1 != *(_QWORD *)(v6 + 136) )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, v4);
      *(_BYTE *)(v6 + 144) = 0;
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v6);
    }
  }
}
