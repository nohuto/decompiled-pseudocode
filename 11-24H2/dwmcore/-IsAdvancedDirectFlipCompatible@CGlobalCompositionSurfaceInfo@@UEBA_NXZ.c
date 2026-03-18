/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801FB0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3950 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsAdvancedDirectFlipCompatible(CGlobalCompositionSurfaceInfo *this)
{
  CGDISectionBitmapRealization *v1; // rcx
  __int64 (__fastcall *v2)(CGDISectionBitmapRealization *, const struct _GUID *, void **); // rax
  int v3; // eax
  bool v4; // bl
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CGDISectionBitmapRealization *)*((_QWORD *)this + 26);
  if ( !v1 )
    return 0;
  v6 = 0LL;
  v2 = **(__int64 (__fastcall ***)(CGDISectionBitmapRealization *, const struct _GUID *, void **))v1;
  if ( v2 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
    v3 = CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
           v1,
           &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
           &v6);
  else
    v3 = v2(v1, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v6);
  v4 = v3 >= 0;
  if ( v6 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  return v4;
}
