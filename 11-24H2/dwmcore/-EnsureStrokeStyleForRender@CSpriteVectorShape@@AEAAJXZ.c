/*
 * XREFs of ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801436EC
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x180142FF0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z @ 0x180206950 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@MV?$allocator@M@std@@@std@@AEAAXAEA_K@Z @ 0x180206AA0 (--$_Reallocate@$0A@@-$vector@MV-$allocator@M@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForRender(CSpriteVectorShape *this)
{
  unsigned int v1; // esi
  __int64 *v2; // r12
  float v4; // xmm0_4
  float *v5; // rbx
  unsigned __int64 v6; // rax
  float v7; // xmm6_4
  float *v8; // r15
  float *v9; // rdi
  float *v10; // rsi
  float v11; // xmm0_4
  char *v12; // rdi
  int v13; // eax
  float v15; // xmm0_4
  __int128 v16; // [rsp+38h] [rbp-39h] BYREF
  float *v17; // [rsp+48h] [rbp-29h]
  float v18[4]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v19[4]; // [rsp+60h] [rbp-11h] BYREF
  int v20; // [rsp+70h] [rbp-1h]
  int v21; // [rsp+74h] [rbp+3h]
  float v22; // [rsp+78h] [rbp+7h]
  BOOL v23; // [rsp+7Ch] [rbp+Bh]

  v1 = 0;
  v2 = (__int64 *)((char *)this + 136);
  if ( !*((_QWORD *)this + 17) )
  {
    v4 = fmaxf(0.0, *((float *)this + 52));
    v5 = 0LL;
    v6 = (__int64)(*((_QWORD *)this + 21) - *((_QWORD *)this + 20)) >> 2;
    v17 = 0LL;
    *(_QWORD *)v18 = v6;
    v7 = 1.0 / v4;
    v16 = 0LL;
    if ( v6 )
    {
      if ( v6 > 0x3FFFFFFFFFFFFFFFLL )
        std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
      std::vector<float>::_Reallocate<0>(&v16, v18);
      v5 = v17;
    }
    v8 = (float *)*((_QWORD *)this + 21);
    v9 = (float *)*((_QWORD *)this + 20);
    v10 = (float *)*((_QWORD *)&v16 + 1);
    while ( v9 != v8 )
    {
      v15 = v7 * *v9;
      v18[0] = v15;
      if ( v10 == v5 )
      {
        std::vector<float>::_Emplace_reallocate<float const &>(&v16, v10, v18);
        v5 = v17;
        v10 = (float *)*((_QWORD *)&v16 + 1);
      }
      else
      {
        *v10++ = v15;
        *((_QWORD *)&v16 + 1) = v10;
      }
      ++v9;
    }
    v11 = *((float *)this + 51);
    v19[0] = *((_DWORD *)this + 47);
    v19[1] = *((_DWORD *)this + 48);
    v19[2] = *((_DWORD *)this + 46);
    v19[3] = *((_DWORD *)this + 49);
    if ( v11 >= 1.0 )
      v20 = LODWORD(v11);
    else
      v20 = 1065353216;
    v12 = (char *)v16;
    v22 = v7 * *((float *)this + 50);
    v21 = v10 != (float *)v16 ? 5 : 0;
    v23 = *((_BYTE *)this + 212) != 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    gsl::details::extent_type<-1>::extent_type<-1>(v18, ((char *)v10 - v12) >> 2);
    if ( *(_QWORD *)v18 == -1LL || !v12 && *(_QWORD *)v18 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)g_DeviceManager + 144LL))(
            g_DeviceManager,
            v19,
            v12);
    v1 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1FFu, 0LL);
    if ( v12 )
      std::_Deallocate<16,0>(v12, ((char *)v5 - v12) & 0xFFFFFFFFFFFFFFFCuLL);
  }
  return v1;
}
