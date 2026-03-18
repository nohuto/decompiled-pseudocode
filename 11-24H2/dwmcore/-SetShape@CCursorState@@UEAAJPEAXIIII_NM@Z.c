/*
 * XREFs of ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x1802B4380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180024574 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801966BC (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??$make_shared@VShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@VShapeData@CCursorState@@@0@XZ @ 0x1802B1658 (--$make_shared@VShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@VShapeData@CCursorState@@@0@X.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCursorState::SetShape(
        CCursorState *this,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        float a8)
{
  __int64 v9; // r14
  CSystemMemoryBitmap *v11; // rax
  CSystemMemoryBitmap *v12; // rax
  CSystemMemoryBitmap *v13; // rdi
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // ebx
  char *v17; // rbx
  __int64 (__fastcall *v18)(char *, _QWORD, __int64, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  bool v21; // r12
  _DWORD *v22; // rdi
  unsigned int v23; // eax
  __int64 i; // rcx
  __int64 v25; // rbx
  char *v26; // rdi
  size_t v27; // r15
  char *v28; // rax
  char *v29; // rcx
  char *v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // rcx
  void *v34; // [rsp+30h] [rbp-30h] BYREF
  __int64 v35; // [rsp+38h] [rbp-28h] BYREF
  CSystemMemoryBitmap *v36; // [rsp+40h] [rbp-20h] BYREF
  int v37; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v38[2]; // [rsp+4Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v41; // [rsp+B0h] [rbp+50h] BYREF

  v9 = a4;
  EnterCriticalSection(&g_CursorManager);
  v11 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( v11 )
    v12 = CSystemMemoryBitmap::CSystemMemoryBitmap(v11);
  else
    v12 = 0LL;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v36,
    (__int64)v12);
  v13 = v36;
  v37 = 87;
  v14 = a3;
  v38[0] = 1LL;
  if ( a3 <= (unsigned int)v9 )
    v14 = v9;
  v15 = CSystemMemoryBitmap::HrInit((void **)v36, v14, v14, (const struct PixelFormatInfo *)&v37, 0);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x525,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_35;
  }
  v17 = (char *)v13 + 16;
  v35 = 0LL;
  v18 = *(__int64 (__fastcall **)(char *, _QWORD, __int64, __int64 *))(*((_QWORD *)v13 + 2) + 24LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v35);
  v19 = v18(v17, 0LL, 2LL, &v35);
  v16 = v19;
  if ( v19 < 0 )
  {
    v20 = 1320LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
    goto LABEL_35;
  }
  v41 = 0;
  v34 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, int *, void **))(*(_QWORD *)v35 + 48LL))(v35, &v41, &v34);
  v16 = v19;
  if ( v19 < 0 )
  {
    v20 = 1324LL;
    goto LABEL_10;
  }
  v21 = a7;
  if ( a3 == v14 )
  {
    memcpy_0(v34, a2, 4 * (unsigned int)v9 * a3);
    if ( (unsigned int)v9 < a3 )
    {
      v22 = (char *)v34 + 4 * (unsigned int)v9 * a3;
      v34 = v22;
      v23 = a3 * (a3 - v9);
      if ( v21 )
      {
        if ( v23 )
        {
          for ( i = v23; i; --i )
            *v22++ = -16777216;
        }
      }
      else
      {
        memset_0(v22, 0, 4 * v23);
      }
    }
  }
  else
  {
    v25 = (unsigned int)v9 - a3;
    if ( (_DWORD)v9 )
    {
      v26 = a2;
      v27 = 4 * a3;
      v28 = (char *)v34;
      do
      {
        memcpy_0(v28, v26, v27);
        v26 += v27;
        v29 = (char *)v34 + v27;
        v34 = (char *)v34 + v27;
        if ( v21 )
        {
          v28 = &v29[4 * v25];
          v34 = v28;
          while ( v29 < v28 )
          {
            *(_DWORD *)v29 = -16777216;
            v29 += 4;
            v28 = (char *)v34;
          }
        }
        else
        {
          memset_0(v29, 0, (unsigned int)(4 * v25));
          v28 = (char *)v34 + (unsigned int)(4 * v25);
          v34 = v28;
        }
        --v9;
      }
      while ( v9 );
    }
  }
  v30 = (char *)this + 40;
  v31 = std::make_shared<CCursorState::ShapeData,>(&v37);
  std::shared_ptr<CRegion>::operator=((_QWORD *)this + 5, v31);
  if ( *(_QWORD *)((char *)v38 + 4) )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)((char *)v38 + 4));
  **(_DWORD **)v30 = a5;
  *(_DWORD *)(*(_QWORD *)v30 + 4LL) = a6;
  v32 = 0LL;
  *(_DWORD *)(*(_QWORD *)v30 + 8LL) = 1;
  do
  {
    *(_BYTE *)(v32 + *(_QWORD *)v30 + 12) = 0;
    ++v32;
  }
  while ( v32 < 2 );
  wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
    (__int64 *)(*(_QWORD *)v30 + 16LL),
    (__int64 *)&v36);
  *((float *)this + 8) = a8;
  *((_BYTE *)this + 20) = v21;
  *((_BYTE *)this + 23) = 1;
  CCursorState::ScheduleCompositionPass(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
  v16 = 0;
LABEL_35:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
  LeaveCriticalSection(&g_CursorManager);
  return v16;
}
