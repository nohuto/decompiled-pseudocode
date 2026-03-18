/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18020CE20
 * Callers:
 *     ?LockForRead@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180255DA0 (-LockForRead@CWICBitmapWrapper@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180024E7C (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x18018D8B4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r13
  void *v9; // r14
  int v10; // eax
  int v11; // ebx
  int v13; // r9d
  INT v14; // r8d
  INT v15; // r9d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // r8d
  signed int v19; // ecx
  unsigned int v20; // r15d
  unsigned __int64 v21; // rcx
  unsigned int v22; // r12d
  void *v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-89h]
  struct IUnknown *v26; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned int v29; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+74h] [rbp-35h] BYREF
  unsigned int v31[4]; // [rsp+78h] [rbp-31h] BYREF
  enum WICBitmapLockFlags v32; // [rsp+88h] [rbp-21h]
  __int64 v33; // [rsp+90h] [rbp-19h] BYREF
  void *v34; // [rsp+98h] [rbp-11h] BYREF
  struct IBitmapLock **v35; // [rsp+A0h] [rbp-9h]
  unsigned int v36[4]; // [rsp+A8h] [rbp-1h] BYREF

  v35 = a4;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v32 = a3;
  v33 = 0LL;
  v26 = 0LL;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v9 = 0LL;
  v27 = 0;
  v34 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
    *((_QWORD *)this + 15),
    &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
    &v33);
  if ( v33 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v33 + 64LL))(
            v33,
            a2,
            (unsigned int)a3,
            &v26);
    v11 = v10;
    if ( v10 < 0 )
    {
      v25 = 93;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v26->lpVtbl[1].QueryInterface)(
              v26,
              &v30,
              &v29);
      v11 = v10;
      if ( v10 < 0 )
      {
        v25 = 95;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v26->lpVtbl[1].AddRef)(v26, &v28);
        v11 = v10;
        if ( v10 < 0 )
        {
          v25 = 96;
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v26->lpVtbl[1].Release)(
                  v26,
                  &v27,
                  &v34);
          v11 = v10;
          if ( v10 < 0 )
          {
            v25 = 97;
          }
          else
          {
            v10 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 16),
                    v30,
                    v29,
                    (enum DXGI_FORMAT *)this + 22,
                    v28,
                    v27,
                    v34,
                    a3,
                    a4,
                    0,
                    v26);
            v11 = v10;
            if ( v10 >= 0 )
              goto LABEL_7;
            v25 = 111;
          }
        }
      }
    }
    v13 = v10;
    goto LABEL_16;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v11 = -2003292412;
    v13 = -2003292412;
    v25 = 120;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v25, 0LL);
    goto LABEL_7;
  }
  v31[0] = 0;
  *(_OWORD *)v36 = 0LL;
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v14 = *((_DWORD *)this + 18), a2->m128i_i32[0] >= v14)
      || (v15 = *((_DWORD *)this + 19), a2->m128i_i32[1] >= v15) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xA8u, 0LL);
    }
    else
    {
      v16 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v36 = *a2;
      v17 = v36[2];
      if ( v16 < 0 )
      {
        v17 = v16 + v36[2];
        v16 = 0;
        v36[0] = 0;
        v36[2] = v17;
      }
      if ( v17 + v16 > v14 )
      {
        v17 = v14 - v16;
        v36[2] = v14 - v16;
      }
      v18 = v36[1];
      v19 = v36[3];
      if ( (v36[1] & 0x80000000) != 0 )
      {
        v19 = v36[1] + v36[3];
        v36[1] = 0;
        v36[3] = v19;
        v18 = 0;
      }
      if ( (int)(v19 + v18) > v15 )
      {
        v19 = v15 - v18;
        v36[3] = v15 - v18;
      }
      if ( v17 <= 0 || v19 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xA2u, 0LL);
    }
  }
  else
  {
    v36[2] = *((_DWORD *)this + 18);
    v36[3] = *((_DWORD *)this + 19);
  }
  v11 = HrCalcDWordAlignedScanlineStride(*((unsigned int *)this + 18), *((_DWORD *)this + 22), v31);
  if ( v11 < 0 )
  {
    v24 = 181;
  }
  else
  {
    v20 = v31[0];
    v21 = v31[0] * (unsigned __int64)*((unsigned int *)this + 19);
    if ( v21 > 0xFFFFFFFF )
    {
      v11 = -2147024362;
      v25 = 183;
      goto LABEL_48;
    }
    v22 = v31[0] * *((_DWORD *)this + 19);
    v23 = MIDL_user_allocate((unsigned int)v21);
    v9 = v23;
    if ( !v23 )
    {
      v11 = -2147024882;
      v25 = 186;
LABEL_48:
      v13 = v11;
      goto LABEL_16;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, void *))(**((_QWORD **)this + 15) + 56LL))(
            *((_QWORD *)this + 15),
            v36,
            v20,
            v22,
            v23);
    if ( v11 < 0 )
    {
      v24 = 191;
    }
    else
    {
      v11 = CBitmap::HrLock(
              (CWICBitmapWrapper *)((char *)this - 16),
              v36[2],
              v36[3],
              (enum DXGI_FORMAT *)this + 22,
              v20,
              v22,
              v9,
              v32,
              v35,
              1,
              0LL);
      if ( v11 >= 0 )
        goto LABEL_7;
      v24 = 201;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v24, 0LL);
  if ( v9 )
    operator delete(v9);
LABEL_7:
  if ( v26 )
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v11;
}
