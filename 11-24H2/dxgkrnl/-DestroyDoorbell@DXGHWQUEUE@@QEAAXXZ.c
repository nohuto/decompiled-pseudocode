/*
 * XREFs of ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D8240
 * Callers:
 *     ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D7F48 (-CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 *     ?DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z @ 0x1401D9494 (-DxgkDestroyDoorbellInternal@@YAJPEAU_D3DKMT_DESTROY_DOORBELL@@_N@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CDD74 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGDOORBELL@@IEAA@XZ @ 0x1401D7950 (--1DXGDOORBELL@@IEAA@XZ.c)
 *     ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401D804C (-DestroyCoreState@DXGDOORBELL@@IEAAXXZ.c)
 */

void __fastcall DXGHWQUEUE::DestroyDoorbell(DXGHWQUEUE *this, __int64 a2, __int64 a3)
{
  DXGDOORBELL *v4; // rcx
  void *v5; // rdi

  v4 = (DXGDOORBELL *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    DXGDOORBELL::DestroyCoreState(v4, a2, a3);
    v5 = (void *)*((_QWORD *)this + 18);
    if ( v5 )
    {
      DXGDOORBELL::~DXGDOORBELL(*((DXGDOORBELL **)this + 18));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
    }
    *((_QWORD *)this + 18) = 0LL;
  }
}
