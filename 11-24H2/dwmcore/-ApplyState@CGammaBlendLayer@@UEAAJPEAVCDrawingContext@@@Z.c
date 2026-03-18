/*
 * XREFs of ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18027BB30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006F8D0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1801FD5D0 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z @ 0x18027BCE4 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGammaBlendLayer::ApplyState(CGammaBlendLayer *this, struct CDrawingContext *a2)
{
  int v3; // eax
  int v5; // eax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v3 = *((_DWORD *)this + 6);
  v13 = 0LL;
  v12[2] = v3;
  v5 = *((_DWORD *)this + 7);
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a2 + 4);
  v12[3] = v5;
  v7 = (**v6)(v6, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 60;
    goto LABEL_11;
  }
  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13) )
  {
    v7 = CDrawingContext::FlushD2D(a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      v11 = 71;
    }
    else
    {
      v7 = CExternalLayer::ApplyState(this, a2);
      v8 = v7;
      if ( v7 < 0 )
      {
        v11 = 73;
      }
      else
      {
        v7 = CGammaBlendLayer::CopyAndTransform(v9, a2, v13, (char *)this + 16, v12, 2);
        v8 = v7;
        if ( v7 >= 0 )
          goto LABEL_12;
        v11 = 79;
      }
    }
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v11, 0LL);
    goto LABEL_12;
  }
  v8 = -2003292287;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292287, 0x44u, 0LL);
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  return v8;
}
