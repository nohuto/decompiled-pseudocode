/*
 * XREFs of ?RemoveResourceNotify@CDDisplaySwapChainBuffer@@QEAAXXZ @ 0x1801C5E9C
 * Callers:
 *     ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x1801C5E4C (--1CDDisplaySwapChainBuffer@@MEAA@XZ.c)
 *     ?MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devices@Windows@@@Z @ 0x1802C8A98 (-MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devi.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplaySwapChainBuffer::RemoveResourceNotify(CDDisplaySwapChainBuffer *this)
{
  if ( *((_QWORD *)this + 24) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 80LL))(*((_QWORD *)this + 27));
    *((_QWORD *)this + 24) = 0LL;
  }
}
