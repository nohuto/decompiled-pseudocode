/*
 * XREFs of ?RecordUse@CAtlasBitmapResource@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801E8F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::RecordUse(CAtlasBitmapResource *this, struct CDrawingContext *a2)
{
  __int64 v3; // rax
  const struct RenderTargetInfo *v4; // rdx
  __int64 v5; // rax
  CRenderTargetBitmap *v6; // rcx
  __int64 (__fastcall *v7)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v12; // r9d
  unsigned int v14; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct IDeviceTexture *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v16 = 0LL;
  v4 = (const struct RenderTargetInfo *)v3;
  if ( !*((_QWORD *)this + 2) )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    v6 = (CRenderTargetBitmap *)(*(_QWORD *)(v5 + 8) + 8LL);
    v7 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v6 + 96LL);
    if ( v7 == CRenderTargetBitmap::GetDeviceTexture )
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v6, v4, &v16);
    else
      DeviceTexture = v7(v6, v4, &v16);
    v11 = DeviceTexture;
    v12 = DeviceTexture;
    if ( DeviceTexture >= 0 )
    {
      if ( v16 )
        (*(void (__fastcall **)(struct IDeviceTexture *, __int64, __int64, _QWORD))(*(_QWORD *)v16 + 16LL))(
          v16,
          v9,
          v10,
          (unsigned int)DeviceTexture);
      return 0LL;
    }
    v14 = 137;
  }
  else
  {
    v11 = -2003304307;
    v14 = 134;
    v12 = -2003304307;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v14, 0LL);
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)retaddr,
    (void *)0xA1,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\atlasbitmapresource.cpp",
    (const char *)v11);
  if ( v16 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v16 + 16LL))(v16);
  return v11;
}
