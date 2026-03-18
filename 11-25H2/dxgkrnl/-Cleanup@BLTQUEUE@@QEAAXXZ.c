/*
 * XREFs of ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x14027AB28
 * Callers:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x140279FBC (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140033498 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1403F8CDC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

void __fastcall BLTQUEUE::Cleanup(BLTQUEUE *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx
  __int64 v3; // rdx
  char *v4; // rcx
  char *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 81) )
  {
    *((_QWORD *)this + 83) = KeGetCurrentThread();
    *((_BYTE *)this + 604) = 1;
    KeSetEvent((PRKEVENT)this + 23, 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 81), 0, 0LL);
    ZwClose(*((HANDLE *)this + 81));
    v2 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 16);
    *((_QWORD *)this + 83) = 0LL;
    *((_QWORD *)this + 81) = 0LL;
    *((_QWORD *)this + 82) = 0LL;
    (**v2)(v2, 0LL);
    *((_QWORD *)this + 16) = 0LL;
    BLTQUEUE::SetIndirectSwapChainHandles(this, 0LL);
    v4 = (char *)*((_QWORD *)this + 370);
    if ( v4 )
    {
      v5 = v4 - 8;
      `vector destructor iterator'(
        v4,
        64LL,
        *((_QWORD *)v4 - 1),
        (void (__fastcall *)(char *))_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE::~_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      *((_QWORD *)this + 370) = 0LL;
    }
    v6 = *((_QWORD *)this + 18);
    if ( v6 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v6, v3, 0LL, 0LL);
      *((_QWORD *)this + 18) = 0LL;
    }
    v7 = *((_QWORD *)this + 19);
    if ( v7 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v7, v3, 0LL, 0LL);
      *((_QWORD *)this + 19) = 0LL;
    }
  }
}
