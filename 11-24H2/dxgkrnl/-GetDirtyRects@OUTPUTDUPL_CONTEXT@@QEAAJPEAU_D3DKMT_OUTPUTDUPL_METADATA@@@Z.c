/*
 * XREFs of ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1402F2AF8
 * Callers:
 *     ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1402B7398 (-GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 * Callees:
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402F37B8 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::GetDirtyRects(OUTPUTDUPL_CONTEXT *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  __int64 v2; // rcx
  DDAMetaData *v4; // rcx
  UINT v5; // ebx
  struct tagRECT *DirtyRectData; // rax

  v2 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v2 + 16) != 2 )
  {
    a2->BufferSizeRequired = 0;
    return 0LL;
  }
  v4 = *(DDAMetaData **)(v2 + 8);
  v5 = *((_DWORD *)v4 + 6);
  DirtyRectData = DDAMetaData::GetDirtyRectData(v4, v5);
  v5 *= 16;
  a2->BufferSizeRequired = v5;
  if ( a2->BufferSizeSupplied >= v5 )
  {
    a2->pBuffer = DirtyRectData;
    return 0LL;
  }
  return 3221225507LL;
}
