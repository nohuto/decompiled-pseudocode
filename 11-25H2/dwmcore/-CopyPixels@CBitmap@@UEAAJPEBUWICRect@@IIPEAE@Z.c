/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801872D0
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180186BB4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?CopyPixels@CBitmap@@WCA@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180261040 (-CopyPixels@CBitmap@@WCA@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180187A60 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180187F24 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMi.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x180188954 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x180188A10 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180188B00 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180188BB0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x180188C98 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        struct _RTL_CRITICAL_SECTION *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  int v10; // eax
  unsigned int v11; // ebx
  CSystemMemoryBitmap *p_OwningThread; // rcx
  __int64 (__fastcall *v13)(CSystemMemoryBitmap *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **); // rax
  int v14; // eax
  __int64 (__fastcall *v15)(CBitmapLock *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  __int64 (__fastcall *v17)(CBitmapLock *__hidden, unsigned int *); // rax
  int Stride; // eax
  __int64 (__fastcall *v19)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rax
  int DataPointer; // eax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-71h]
  unsigned int v24; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-3Dh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-39h] BYREF
  struct IBitmapLock *v27; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v28; // [rsp+68h] [rbp-29h] BYREF
  unsigned __int8 *Src; // [rsp+70h] [rbp-21h] BYREF
  __int128 v30; // [rsp+78h] [rbp-19h] BYREF
  __int128 v31; // [rsp+88h] [rbp-9h] BYREF

  v5 = this + 1;
  v27 = 0LL;
  v28 = 0;
  v26 = 0;
  v25 = 0;
  Src = 0LL;
  v24 = 0;
  v31 = 0LL;
  v30 = 0LL;
  EnterCriticalSection(this + 1);
  if ( !a5 )
  {
    v11 = -2147024809;
    v23 = 163;
    goto LABEL_22;
  }
  if ( !a2 )
  {
    if ( this[2].LockCount > 0x7FFFFFFFu )
    {
      DWORD2(v31) = -1;
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xABu, 0LL);
      goto LABEL_18;
    }
    DWORD2(v31) = this[2].LockCount;
    if ( this[2].RecursionCount > 0x7FFFFFFFu )
    {
      HIDWORD(v31) = -1;
      v11 = -2147024362;
      v23 = 172;
      goto LABEL_22;
    }
    HIDWORD(v31) = this[2].RecursionCount;
    a2 = (const struct WICRect *)&v31;
  }
  v10 = CBitmap::HrCheckPixelRect(this, a2, &v30);
  v11 = v10;
  if ( v10 < 0 )
  {
    v23 = 177;
LABEL_28:
    v22 = v10;
    goto LABEL_23;
  }
  v10 = HrCheckBufferSize((enum DXGI_FORMAT)LODWORD(this[2].LockSemaphore), a3, a2, a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v23 = 182;
    goto LABEL_28;
  }
  p_OwningThread = (CSystemMemoryBitmap *)&this->OwningThread;
  v13 = (__int64 (__fastcall *)(CSystemMemoryBitmap *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **))*((_QWORD *)this->OwningThread + 3);
  if ( v13 == CSystemMemoryBitmap::Lock )
    v14 = CSystemMemoryBitmap::Lock(p_OwningThread, a2, WICBitmapLockRead, &v27);
  else
    v14 = v13(p_OwningThread, a2, WICBitmapLockRead, &v27);
  v11 = v14;
  if ( v14 < 0 )
  {
    v23 = 184;
  }
  else
  {
    v15 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v27 + 32LL);
    if ( v15 == CBitmapLock::GetSize )
      Size = CBitmapLock::GetSize(v27, &v28, &v26);
    else
      Size = v15(v27, &v28, &v26);
    v11 = Size;
    if ( Size < 0 )
    {
      v23 = 186;
    }
    else
    {
      v17 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)v27 + 40LL);
      if ( v17 == CBitmapLock::GetStride )
        Stride = CBitmapLock::GetStride(v27, &v25);
      else
        Stride = v17(v27, &v25);
      v11 = Stride;
      if ( Stride < 0 )
      {
        v23 = 187;
      }
      else
      {
        v19 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(*(_QWORD *)v27 + 48LL);
        if ( v19 == CBitmapLock::GetDataPointer )
          DataPointer = CBitmapLock::GetDataPointer(v27, &v24, &Src);
        else
          DataPointer = v19(v27, &v24, &Src);
        v11 = DataPointer;
        if ( DataPointer >= 0 )
        {
          v10 = CBitmap::CopyPixelsHelper(
                  (enum DXGI_FORMAT)LODWORD(this[2].LockSemaphore),
                  a2->Width,
                  v26,
                  v25,
                  v24,
                  Src,
                  a3,
                  a4,
                  a5);
          v11 = v10;
          if ( v10 >= 0 )
            goto LABEL_18;
          v23 = 202;
          goto LABEL_28;
        }
        v23 = 189;
      }
    }
  }
LABEL_22:
  v22 = v11;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, v23, 0LL);
LABEL_18:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v27);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v11;
}
