/*
 * XREFs of ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1401D3710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1400731A8 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007328C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738E4 (-ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1401D3300 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGGLOBAL::DelayDestroyAdapterWork(DXGADAPTER ***this)
{
  struct DXGGLOBAL *Global; // rbx
  DXGADAPTER *v3; // rcx
  DXGADAPTER **v4; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGADAPTERLISTLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 672));
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 752));
  v3 = (DXGADAPTER *)*this;
  if ( (*this)[1] != (DXGADAPTER *)this || (v4 = this[1], *v4 != (DXGADAPTER *)this) )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(v3, (struct DXGADAPTER *)this) )
  {
    --*((_DWORD *)Global + 76313);
    if ( *((_BYTE *)this + 2948) )
    {
      --*((_DWORD *)Global + 76309);
    }
    else if ( *((_BYTE *)this + 2943) )
    {
      --*((_DWORD *)Global + 76310);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 94);
  DXGADAPTERLISTLOCK::ReleaseExclusive((struct DXGGLOBAL *)((char *)Global + 672));
  DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)this);
}
