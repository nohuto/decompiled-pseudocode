/*
 * XREFs of ?DestroyDeviceResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CA788
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1801CA704 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1801CAA00 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x1801CAB1C (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 */

void __fastcall CD3DResourceManager::DestroyDeviceResources(union _SLIST_HEADER *this)
{
  CD3DResourceManager *v1; // rdi
  CD3DResourceManager *Alignment; // rax
  int v4; // esi
  CD3DResourceManager **v5; // r14

  v1 = (CD3DResourceManager *)&this[2];
  Alignment = (CD3DResourceManager *)this[2].Alignment;
  if ( Alignment != (CD3DResourceManager *)&this[2] )
  {
    v4 = 0;
    v5 = (CD3DResourceManager **)&this[2];
    do
    {
      if ( *((_QWORD *)Alignment - 7) )
      {
        CD3DResourceManager::DestroyResource(
          (CD3DResourceManager *)this,
          (CD3DResourceManager *)((char *)Alignment - 96));
      }
      else
      {
        ++v4;
        v5 = (CD3DResourceManager **)Alignment;
      }
      Alignment = *v5;
    }
    while ( *v5 != v1 );
    while ( QueryDepthSList(this + 1) != v4 )
      Sleep(1u);
    CD3DResourceManager::DestroyReleasedResources((CD3DResourceManager *)this);
  }
}
