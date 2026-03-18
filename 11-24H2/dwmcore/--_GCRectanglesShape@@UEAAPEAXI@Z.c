/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18007A2E0
 * Callers:
 *     ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079EF0 (-clear@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState@CS.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180079FD4 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C600 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DBC0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801741B0 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@VCRectanglesShape@@U?$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ @ 0x18021C4E4 (--1-$unique_ptr@VCRectanglesShape@@U-$default_delete@VCRectanglesShape@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(
        CRectanglesShape *this,
        char a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  CCachedVisualImage *v7; // rcx
  void (*v8)(void); // rax
  CRectanglesShape *v9; // rdi
  __int64 v10; // rax
  CPathData *v11; // rcx
  void (*v12)(void); // rax
  _QWORD *Value; // rdi
  HANDLE v14; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v17; // rax
  CThreadContext *v18; // rax
  CThreadContext *v19; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  v5 = *((_QWORD *)this + 3);
  v6 = (v5 - *((_QWORD *)this + 2)) >> 4;
  if ( v6 )
    *((_QWORD *)this + 3) = v5 - 16 * v6;
  v7 = (CCachedVisualImage *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v7,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        a3);
    else
      v8();
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = (CRectanglesShape *)*((_QWORD *)this + 2);
  v10 = (__int64)(*((_QWORD *)this + 3) - (_QWORD)v9) >> 4;
  if ( v10 )
    *((_QWORD *)this + 3) -= 16 * v10;
  *((_QWORD *)this + 2) = 0LL;
  if ( v9 == (CRectanglesShape *)((char *)this + 40) )
    v9 = 0LL;
  if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  v11 = (CPathData *)*((_QWORD *)this + 1);
  if ( v11 )
  {
    *((_QWORD *)this + 1) = 0LL;
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v12 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v11);
    else
      v12();
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 64LL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v17 = GetProcessHeap();
        v18 = (CThreadContext *)HeapAlloc(v17, 0, 0x1C0uLL);
        if ( !v18 || (v19 = CThreadContext::CThreadContext(v18), (Value = v19) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v19);
      }
      if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
      {
        *(_QWORD *)this = Value[7];
        ++*((_DWORD *)Value + 13);
        Value[7] = this;
      }
      else
      {
        v14 = GetProcessHeap();
        HeapFree(v14, 0, this);
      }
    }
  }
  return this;
}
