/*
 * XREFs of ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x14028170C
 * Callers:
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1402814B8 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140023380 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1403F2ACC (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

void __fastcall BLTQUEUE::Cleanup(BLTQUEUE *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx
  __int64 v3; // rdx
  char *v4; // rcx
  char *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( *((_QWORD *)this + 89) )
  {
    *((_QWORD *)this + 91) = KeGetCurrentThread();
    if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
    {
      KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
      *((_DWORD *)this + 169) |= 0x10u;
      KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
    }
    else
    {
      *((_BYTE *)this + 660) = 1;
    }
    KeSetEvent((PRKEVENT)this + 23, 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 89), 0, 0LL);
    ZwClose(*((HANDLE *)this + 89));
    v2 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 16);
    *((_QWORD *)this + 91) = 0LL;
    *((_QWORD *)this + 89) = 0LL;
    *((_QWORD *)this + 90) = 0LL;
    (**v2)(v2, 0LL);
    *((_QWORD *)this + 16) = 0LL;
    BLTQUEUE::SetIndirectSwapChainHandles(this, 0LL);
    v4 = (char *)*((_QWORD *)this + 379);
    if ( v4 )
    {
      v5 = v4 - 8;
      `vector destructor iterator'(
        v4,
        64LL,
        *((_QWORD *)v4 - 1),
        (void (__fastcall *)(char *))_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE::~_DXGDOD_PERIODIC_FRAME_NOTIFICATION_STORAGE);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      *((_QWORD *)this + 379) = 0LL;
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
