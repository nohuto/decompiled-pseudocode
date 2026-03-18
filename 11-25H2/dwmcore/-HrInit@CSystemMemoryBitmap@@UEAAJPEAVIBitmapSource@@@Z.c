/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1802BFE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180186120 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801D5AA4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180261060 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  void *v15; // rcx
  _DWORD v17[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v5 = inited;
    if ( inited >= 0 )
    {
      v6 = (unsigned int *)((char *)this + 144);
      v7 = HrCalcDWordAlignedScanlineStride(
             *((unsigned int *)this + 22),
             *((_DWORD *)this + 26),
             (unsigned int *)this + 36);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v8 = HrMalloc(*v6, *((unsigned int *)this + 23), (void **)this + 17);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v9 = *((_DWORD *)this + 23);
          v10 = *((_DWORD *)this + 22);
          v11 = *v6;
          v12 = *v6;
          v17[0] = 0;
          v17[1] = 0;
          v17[2] = v10;
          v13 = *(_QWORD *)a2;
          v17[3] = v9;
          v14 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v13 + 48))(
                  a2,
                  v17,
                  v12,
                  (unsigned int)(v9 * v11),
                  *((_QWORD *)this + 17));
          v5 = v14;
          if ( v14 >= 0 )
            return v5;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x11Du, 0LL);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x113u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x10Bu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x105u, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  v15 = (void *)*((_QWORD *)this + 17);
  if ( v15 )
  {
    operator delete(v15);
    *((_QWORD *)this + 17) = 0LL;
  }
  return v5;
}
