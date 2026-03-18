/*
 * XREFs of ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x140100418
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x140041750 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400ACA84 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgePageTables(__int64 a1, char a2, void (*a3)(void *), void *a4)
{
  __int64 i; // rbp
  __int64 v7; // rsi
  CVirtualAddressAllocator *v8; // r14
  _QWORD *v9; // rdx
  CVirtualAddressAllocator ***v10; // r9
  CVirtualAddressAllocator ***v11; // r8
  void (*v12)(void *); // r8
  CVirtualAddressAllocator *j; // r14
  CVirtualAddressAllocator *v14; // [rsp+20h] [rbp-28h] BYREF
  void *v15; // [rsp+28h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 40936) & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 6944); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40232) + 8 * i);
      if ( (*(_BYTE *)(v7 + 476) & 1) != 0 && ((a2 & 1) == 0 || (*(_BYTE *)(v7 + 477) & 4) != 0) )
      {
        v15 = &v14;
        v14 = (CVirtualAddressAllocator *)&v14;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 41080));
        v9 = *(_QWORD **)(a1 + 41128);
        if ( v9 != (_QWORD *)(a1 + 41128) )
        {
          v10 = (CVirtualAddressAllocator ***)v15;
          do
          {
            v11 = (CVirtualAddressAllocator ***)v9[20];
            if ( v11 && v9[2] != *(_QWORD *)(a1 + 40384) )
            {
              if ( *v10 != &v14 )
                __fastfail(3u);
              v11[1] = (CVirtualAddressAllocator **)v10;
              *v11 = &v14;
              *v10 = (CVirtualAddressAllocator **)v11;
              v10 = v11;
              v15 = v11;
            }
            v9 = (_QWORD *)*v9;
          }
          while ( v9 != (_QWORD *)(a1 + 41128) );
        }
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 41096));
        ExReleasePushLockSharedEx(a1 + 41080, 0LL);
        KeLeaveCriticalRegion();
        for ( j = v14; j != (CVirtualAddressAllocator *)&v14; j = *(CVirtualAddressAllocator **)j )
          CVirtualAddressAllocator::EvictRootPageTable(j, i, a2 & 1);
        *(_BYTE *)(v7 + 476) |= 0x80u;
      }
      v8 = *(CVirtualAddressAllocator **)(a1 + 8 * i + 40416);
      if ( v8 && ((a2 & 1) == 0 || (*(_BYTE *)(v7 + 477) & 8) != 0) )
      {
        VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)a1, 1u, a3, a4);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)a1, 0xFFFFFFFF, v12);
        *(_BYTE *)(a1 + 40940) = 1;
        CVirtualAddressAllocator::EvictRootPageTable(v8, i, a2 & 1);
        *(_BYTE *)(a1 + 40940) = 0;
        *(_BYTE *)(v7 + 477) |= 1u;
      }
      *(_BYTE *)(v7 + 477) &= 0xF3u;
    }
  }
}
