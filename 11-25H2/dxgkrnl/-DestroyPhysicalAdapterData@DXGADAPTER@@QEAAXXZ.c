/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x14018C6D8
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x14018B39C (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *((_QWORD *)this + 374) )
  {
    for ( i = 0;
          i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
          *(_QWORD *)(*((_QWORD *)this + 374) + v3 + 112) = 0LL )
    {
      v3 = 344LL * i;
      v4 = *(void **)(*((_QWORD *)this + 374) + v3 + 64);
      if ( v4 )
      {
        ObfDereferenceObject(v4);
        *(_QWORD *)(*((_QWORD *)this + 374) + v3 + 64) = 0LL;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 374) + v3 + 32));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 374) + v3 + 40));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 374) + v3 + 104));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(*((_QWORD *)this + 374) + v3 + 112));
      ++i;
      *(_QWORD *)(*((_QWORD *)this + 374) + v3 + 32) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 374) + v3 + 40) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 374) + v3 + 104) = 0LL;
    }
  }
}
