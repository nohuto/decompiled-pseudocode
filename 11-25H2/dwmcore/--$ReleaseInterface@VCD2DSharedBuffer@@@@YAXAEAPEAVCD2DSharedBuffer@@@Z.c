/*
 * XREFs of ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180229DC0
 * Callers:
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802D2088 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802D215C (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEBXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1801E6500 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ReleaseInterface<CD2DSharedBuffer>(__int64 *a1)
{
  __int64 v1; // rbx
  CD2DSharedBuffer *(__fastcall *v3)(CD2DSharedBuffer *, char); // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v1 + 8)) )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 8));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
      if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v1 + 8)) )
      {
        CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v1 + 8));
        v3 = *(CD2DSharedBuffer *(__fastcall **)(CD2DSharedBuffer *, char))(*(_QWORD *)v1 + 40LL);
        if ( v3 == CD2DSharedBuffer::`vector deleting destructor' )
          CD2DSharedBuffer::`vector deleting destructor'((CD2DSharedBuffer *)v1, 1);
        else
          v3((CD2DSharedBuffer *)v1, 1);
      }
    }
    *a1 = 0LL;
  }
}
