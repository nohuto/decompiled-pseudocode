/*
 * XREFs of ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140206A74
 * Callers:
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019A850 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403B205C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(DXGVIRTUALGPUMANAGER *this, struct DXGDEVICE *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rdi
  struct DXGDEVICE **v5; // rdx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct _KTHREAD **)this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  v4 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 13);
  while ( v4 != (DXGVIRTUALGPUMANAGER *)((char *)this + 104) )
  {
    v5 = (struct DXGDEVICE **)((char *)v4 - 120);
    v4 = *(DXGVIRTUALGPUMANAGER **)v4;
    if ( a2 )
    {
      if ( v5[22] == a2 )
        (*((void (__fastcall **)(struct DXGDEVICE **))*v5 + 18))(v5);
    }
    else
    {
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER *, struct DXGDEVICE **))(*(_QWORD *)this + 24LL))(this, v5);
    }
  }
  if ( !a2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
}
