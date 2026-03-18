/*
 * XREFs of ??1CFSVPProvider@@QEAA@XZ @ 0x1802751B0
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801E4CCC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x1802750D4 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x180226580 (-ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ.c)
 */

void __fastcall CFSVPProvider::~CFSVPProvider(CFSVPProvider *this)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  CFSVPProvider::ReleaseWNFHandles(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
