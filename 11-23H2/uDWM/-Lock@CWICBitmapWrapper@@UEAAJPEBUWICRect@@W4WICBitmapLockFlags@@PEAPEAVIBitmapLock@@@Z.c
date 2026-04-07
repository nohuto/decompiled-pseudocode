/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18005A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180020F48 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180022A44 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18005A7B8 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  char *v5; // rcx
  int v9; // eax
  int v10; // ebx
  int v12; // r9d
  INT v13; // r8d
  INT v14; // r9d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r8d
  signed int v18; // ecx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rcx
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  void *v25; // r14
  int v26; // eax
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // [rsp+20h] [rbp-89h]
  struct IUnknown *v32; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned int v35; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-35h] BYREF
  enum WICBitmapLockFlags v37; // [rsp+78h] [rbp-31h]
  __int64 v38; // [rsp+80h] [rbp-29h] BYREF
  void *v39; // [rsp+88h] [rbp-21h] BYREF
  struct IBitmapLock **v40; // [rsp+90h] [rbp-19h]
  char *v41; // [rsp+98h] [rbp-11h] BYREF
  unsigned int v42[4]; // [rsp+A0h] [rbp-9h] BYREF

  v40 = a4;
  v37 = a3;
  v5 = (char *)this + 88;
  v38 = 0LL;
  v32 = 0LL;
  v41 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(*((_QWORD *)this + 27), &IID_IWICBitmap, &v38);
  if ( v38 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v38 + 64LL))(
           v38,
           a2,
           (unsigned int)a3,
           &v32);
    v10 = v9;
    if ( v9 < 0 )
    {
      v31 = 94;
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v32->lpVtbl[1].QueryInterface)(
             v32,
             &v36,
             &v35);
      v10 = v9;
      if ( v9 < 0 )
      {
        v31 = 96;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v32->lpVtbl[1].AddRef)(v32, &v34);
        v10 = v9;
        if ( v9 < 0 )
        {
          v31 = 97;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v32->lpVtbl[1].Release)(
                 v32,
                 &v33,
                 &v39);
          v10 = v9;
          if ( v9 < 0 )
          {
            v31 = 98;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v36,
                   v35,
                   (CWICBitmapWrapper *)((char *)this + 176),
                   v34,
                   v33,
                   v39,
                   a3,
                   a4,
                   0,
                   v32);
            v10 = v9;
            if ( v9 >= 0 )
            {
              v32 = 0LL;
              goto LABEL_10;
            }
            v31 = 114;
          }
        }
      }
    }
    v12 = v9;
    goto LABEL_53;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v10 = -2003292412;
    v31 = 132;
LABEL_52:
    v12 = v10;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v31, 0LL);
    goto LABEL_54;
  }
  *(_OWORD *)v42 = 0LL;
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v13 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v13)
      || (v14 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v14) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xBAu, 0LL);
    }
    else
    {
      v15 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v42 = *a2;
      v16 = v42[2];
      v42[0] = v15;
      if ( v15 < 0 )
      {
        v16 = v15 + v42[2];
        v15 = 0;
        v42[0] = 0;
        v42[2] = v16;
      }
      if ( v16 + v15 > v13 )
      {
        v16 = v13 - v15;
        v42[2] = v13 - v15;
      }
      v17 = v42[1];
      v18 = v42[3];
      if ( (v42[1] & 0x80000000) != 0 )
      {
        v18 = v42[1] + v42[3];
        v42[1] = 0;
        v42[3] = v18;
        v17 = 0;
      }
      if ( (int)(v18 + v17) > v14 )
      {
        v18 = v14 - v17;
        v42[3] = v14 - v17;
      }
      if ( v16 <= 0 || v18 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xB2u, 0LL);
    }
  }
  else
  {
    v42[2] = *((_DWORD *)this + 40);
    v42[3] = *((_DWORD *)this + 41);
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 44));
  if ( !PixelFormatSize || (v20 = *((_DWORD *)this + 40), v20 > 0x7FFFFFF8u / PixelFormatSize) )
  {
    v31 = 199;
    goto LABEL_51;
  }
  v21 = (((v20 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v22 = *((unsigned int *)this + 41) * (unsigned __int64)v21;
  v23 = v21;
  if ( v22 > 0xFFFFFFFF )
  {
    v31 = 201;
LABEL_51:
    v10 = -2147024362;
    goto LABEL_52;
  }
  v24 = *((_DWORD *)this + 41) * v21;
  v25 = (void *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  (unsigned int)v22);
  if ( !v25 )
  {
    v10 = -2147024882;
    v31 = 204;
    goto LABEL_52;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, void *))(**((_QWORD **)this + 27) + 56LL))(
          *((_QWORD *)this + 27),
          v42,
          v23,
          v24,
          v25);
  v10 = v26;
  if ( v26 >= 0 )
  {
    v10 = CBitmap::HrLock(
            (CWICBitmapWrapper *)((char *)this - 24),
            v42[2],
            v42[3],
            (CWICBitmapWrapper *)((char *)this + 176),
            v23,
            v24,
            v25,
            v37,
            v40,
            1,
            0LL);
    v27 = (unsigned int)v10;
    if ( v10 >= 0 )
      goto LABEL_54;
    v28 = 219;
  }
  else
  {
    LODWORD(v27) = v26;
    v28 = 209;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, v28, 0LL);
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v25);
LABEL_54:
  if ( v32 )
    ((void (__fastcall *)(struct IUnknown *, __int64, __int64, __int64))v32->lpVtbl->Release)(v32, v29, v30, v27);
LABEL_10:
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v41);
  return (unsigned int)v10;
}
