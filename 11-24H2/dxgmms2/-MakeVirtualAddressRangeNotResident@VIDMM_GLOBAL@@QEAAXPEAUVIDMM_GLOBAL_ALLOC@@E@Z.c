/*
 * XREFs of ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400B2F80
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1DE0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FE1B0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400B3520 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400B4060 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  char *v6; // r14
  char *i; // rbx
  char *j; // rsi
  __int64 v9; // rax
  const unsigned __int64 *v10; // rbx
  struct _VIDSCH_SYNC_OBJECT **v11; // rsi

  if ( (*((_BYTE *)this + 40936) & 0x10) != 0 )
  {
    v6 = (char *)a2 + 112;
    for ( i = (char *)*((_QWORD *)a2 + 14); i != v6; i = *(char **)i )
    {
      for ( j = (char *)*((_QWORD *)i - 2); j != i - 16; j = *(char **)j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(this, (struct VIDMM_ALLOC *)(j - 40));
    }
    if ( (*((_BYTE *)this + 40936) & 2) != 0 && a3 )
    {
      v9 = *((_DWORD *)a2 + 6) & 0x3F;
      v10 = (const unsigned __int64 *)((char *)this + 8 * v9 + 5408);
      v11 = (struct _VIDSCH_SYNC_OBJECT **)((char *)this + 8 * v9 + 5920);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *((_DWORD *)a2 + 6) & 0x3F, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForFences(this, v11, (const unsigned __int64 *)a2 + 11, 1u, v10, 0LL);
    }
  }
}
