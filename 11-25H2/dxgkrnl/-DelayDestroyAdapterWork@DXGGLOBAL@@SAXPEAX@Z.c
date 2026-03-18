/*
 * XREFs of ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1401CE3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x140072814 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1401CDFB4 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGGLOBAL::DelayDestroyAdapterWork(DXGADAPTER ***this)
{
  struct DXGGLOBAL *Global; // rbx
  DXGADAPTER *v3; // rcx
  DXGADAPTER **v4; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 672));
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 720));
  v3 = (DXGADAPTER *)*this;
  if ( (*this)[1] != (DXGADAPTER *)this || (v4 = this[1], *v4 != (DXGADAPTER *)this) )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(v3, (struct DXGADAPTER *)this) )
  {
    --*((_DWORD *)Global + 76293);
    if ( *((_BYTE *)this + 2948) )
    {
      --*((_DWORD *)Global + 76289);
    }
    else if ( *((_BYTE *)this + 2943) )
    {
      --*((_DWORD *)Global + 76290);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 90);
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 84);
  DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)this);
}
