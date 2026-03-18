/*
 * XREFs of ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180103EC0
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180103B80 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180113A00 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x18010368C (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ?ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z @ 0x180103FF0 (-ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
        CCompositionSurfaceManager *this,
        void *a2,
        struct CCompositionSurfaceInfo **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CCompositionSurfaceInfo *v8; // rdi
  char v9; // bp
  PVOID v10; // rax
  int v12; // eax
  _QWORD Buffer[7]; // [rsp+30h] [rbp-38h] BYREF
  struct CCompositionSurfaceInfo *v14; // [rsp+80h] [rbp+18h] BYREF
  struct _LUID v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  *a3 = 0LL;
  v6 = CCompositionSurfaceManager::ValidateSurfaceHandle(a2, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x36u, 0LL);
    return v7;
  }
  Buffer[0] = v15;
  v8 = 0LL;
  Buffer[1] = 0LL;
  v9 = 1;
  v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v10 )
    v8 = (struct CCompositionSurfaceInfo *)*((_QWORD *)v10 + 1);
  v14 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v12 = CCompositionSurfaceInfo::Create(a2, v15, this, &v14);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x46u, 0LL);
      goto LABEL_7;
    }
    v8 = v14;
    v9 = 0;
  }
  *a3 = v8;
  if ( v9 )
LABEL_7:
    CloseHandle(a2);
  return v7;
}
