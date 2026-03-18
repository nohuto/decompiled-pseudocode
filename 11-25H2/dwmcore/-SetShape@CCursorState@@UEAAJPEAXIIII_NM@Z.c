/*
 * XREFs of ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x1802BD560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801861AC (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180187810 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801F5F50 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x1802BB25C (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802BD18C (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCursorState::SetShape(
        CCursorState *this,
        char *Src,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        float a8)
{
  __int64 v9; // r14
  CSystemMemoryBitmap *v12; // rax
  CSystemMemoryBitmap *v13; // rax
  CSystemMemoryBitmap *v14; // rdi
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  char *v18; // rbx
  __int64 (__fastcall *v19)(char *, _QWORD, __int64, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  bool v23; // r13
  _DWORD *v24; // rdi
  unsigned int v25; // eax
  __int64 i; // rcx
  __int64 v27; // rbx
  char *v28; // rdi
  size_t v29; // r12
  char *v30; // rax
  char *v31; // rcx
  char *v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rcx
  void *v36; // [rsp+30h] [rbp-30h] BYREF
  __int64 v37; // [rsp+38h] [rbp-28h] BYREF
  CSystemMemoryBitmap *v38; // [rsp+40h] [rbp-20h] BYREF
  int v39; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v40[2]; // [rsp+4Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v43; // [rsp+B0h] [rbp+50h]
  int v44; // [rsp+B8h] [rbp+58h] BYREF

  v9 = a4;
  EnterCriticalSection(&g_CursorManager);
  v12 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( v12 )
    v13 = CSystemMemoryBitmap::CSystemMemoryBitmap(v12);
  else
    v13 = 0LL;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v38,
    (__int64)v13);
  v14 = v38;
  v15 = v9;
  v39 = 87;
  v40[0] = 1LL;
  if ( a3 >= (unsigned int)v9 )
    v15 = a3;
  v43 = v15;
  v16 = CSystemMemoryBitmap::HrInit((void **)v38, v15, v15, (enum DXGI_FORMAT *)&v39, 0);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_36;
  }
  v18 = (char *)v14 + 16;
  v37 = 0LL;
  v19 = *(__int64 (__fastcall **)(char *, _QWORD, __int64, __int64 *))(*((_QWORD *)v14 + 2) + 24LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v37);
  v20 = v19(v18, 0LL, 2LL, &v37);
  v17 = v20;
  if ( v20 < 0 )
  {
    v21 = 1240LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v20);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
    goto LABEL_36;
  }
  v44 = 0;
  v36 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, int *, void **))(*(_QWORD *)v37 + 48LL))(v37, &v44, &v36);
  v17 = v20;
  if ( v20 < 0 )
  {
    v21 = 1244LL;
    goto LABEL_10;
  }
  v22 = v43;
  v23 = a7;
  if ( a3 == v43 )
  {
    memcpy_0(v36, Src, 4 * (unsigned int)v9 * a3);
    if ( (unsigned int)v9 < a3 )
    {
      v24 = (char *)v36 + 4 * (unsigned int)v9 * a3;
      v36 = v24;
      v25 = a3 * (a3 - v9);
      if ( v23 )
      {
        if ( v25 )
        {
          for ( i = v25; i; --i )
            *v24++ = -16777216;
        }
      }
      else
      {
        memset_0(v24, 0, 4 * v25);
      }
    }
  }
  else
  {
    v27 = (unsigned int)v9 - a3;
    if ( (_DWORD)v9 )
    {
      v28 = Src;
      v29 = 4 * a3;
      v30 = (char *)v36;
      do
      {
        memcpy_0(v30, v28, v29);
        v28 += v29;
        v31 = (char *)v36 + v29;
        v36 = (char *)v36 + v29;
        if ( v23 )
        {
          v30 = &v31[4 * v27];
          v36 = v30;
          while ( v31 < v30 )
          {
            *(_DWORD *)v31 = -16777216;
            v31 += 4;
            v30 = (char *)v36;
          }
        }
        else
        {
          memset_0(v31, 0, (unsigned int)(4 * v27));
          v30 = (char *)v36 + (unsigned int)(4 * v27);
          v36 = v30;
        }
        --v9;
      }
      while ( v9 );
    }
    v22 = v43;
  }
  v32 = (char *)this + 40;
  v33 = std::make_shared<CCursorState::ShapeData,>(&v39);
  std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)this + 5, v33);
  if ( *(_QWORD *)((char *)v40 + 4) )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)((char *)v40 + 4));
  **(_DWORD **)v32 = a5;
  *(_DWORD *)(*(_QWORD *)v32 + 4LL) = a6;
  v34 = 0LL;
  *(_DWORD *)(*(_QWORD *)v32 + 8LL) = 1;
  *(_DWORD *)(*(_QWORD *)v32 + 12LL) = v22;
  do
    *(_BYTE *)(*(_QWORD *)v32 + v34++ + 16) = 0;
  while ( v34 < 2 );
  wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
    (__int64 *)(*(_QWORD *)v32 + 24LL),
    (__int64 *)&v38);
  *((float *)this + 8) = a8;
  *((_BYTE *)this + 20) = v23;
  *((_BYTE *)this + 23) = 1;
  CCursorState::ScheduleCompositionPass(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
  v17 = 0;
LABEL_36:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
  LeaveCriticalSection(&g_CursorManager);
  return v17;
}
