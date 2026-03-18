/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800247F0
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800238F4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180024010 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?LockForRead@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180024750 (-LockForRead@CSystemMemoryBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 * Callees:
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180024CB4 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMi.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800251C4 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800255E8 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x180025698 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18022A5E4 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemMemoryBitmap::Lock(
        CSystemMemoryBitmap *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  char *v7; // r14
  int v8; // eax
  int v9; // esi
  char *v10; // r15
  unsigned __int8 PixelFormatSize; // al
  int v12; // r9d
  unsigned int v13; // ebx
  unsigned int v14; // r13d
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // ebx
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rax
  CBitmapLock *v20; // rdi
  unsigned int (__fastcall *v21)(CMILRefCountImpl *__hidden); // rax
  __int64 v22; // rbx
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // eax
  int v27; // ebp
  int v28; // esi
  int v29; // r9d
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // r8d
  unsigned __int64 v33; // rcx
  int v35; // eax
  unsigned int v36; // [rsp+20h] [rbp-A8h]
  void *v37; // [rsp+30h] [rbp-98h]
  unsigned int v38; // [rsp+60h] [rbp-68h]
  __int64 v39; // [rsp+68h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+70h] [rbp-58h]
  __int128 v41; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+D0h] [rbp+8h]

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v41 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = (char *)this - 16;
  v8 = CBitmap::HrCheckPixelRect((char *)this - 16, a2, &v41);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x49u, 0LL);
  v10 = (char *)this + 88;
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 22));
  v12 = v41 * PixelFormatSize;
  if ( v9 < 0 )
    goto LABEL_34;
  v13 = DWORD2(v41) - v41;
  v42 = DWORD2(v41) - v41;
  v38 = *((_DWORD *)this + 32);
  v39 = *((_QWORD *)this + 15) + v12 / 8 + (__int64)(int)(DWORD1(v41) * v38);
  v14 = HIDWORD(v41) - DWORD1(v41);
  if ( HIDWORD(v41) == DWORD1(v41) )
    v15 = 0;
  else
    v15 = (int)(v13 * PixelFormatSize + 7) / 8 + *((_DWORD *)this + 32) * (v14 - 1);
  if ( (((_BYTE)v41 * PixelFormatSize) & 7) != 0 )
  {
    LODWORD(v37) = *((_DWORD *)this + 32);
    v35 = CBitmap::HrLockUnaligned(
            (CSystemMemoryBitmap *)((char *)this - 16),
            v13,
            v14,
            (CSystemMemoryBitmap *)((char *)this + 88),
            ((_BYTE)v41 * PixelFormatSize) & 7,
            DWORD2(v41) * (unsigned int)PixelFormatSize - v12,
            v37,
            v15,
            (void *)(*((_QWORD *)this + 15) + v12 / 8 + (__int64)(DWORD1(v41) * (int)v37)),
            a3,
            a4);
    v9 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x8Fu, 0LL);
    goto LABEL_34;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v9 = -2147024809;
      v17 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1ABu, 0LL);
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x7Bu, 0LL);
      goto LABEL_34;
    }
    v16 = CBitmapLockState::LockRead((CBitmapLockState *)(v7 + 116));
    v17 = v16;
    v9 = v16;
    if ( v16 >= 0 )
      goto LABEL_10;
    v36 = 423;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v36, 0LL);
    goto LABEL_33;
  }
  v16 = CBitmapLockState::LockWrite((CBitmapLockState *)(v7 + 116));
  v17 = v16;
  v9 = v16;
  if ( v16 < 0 )
  {
    v36 = 419;
    goto LABEL_43;
  }
LABEL_10:
  v18 = (CBitmapLock *)operator new(0x80uLL);
  if ( !v18 )
  {
    v20 = 0LL;
    goto LABEL_46;
  }
  v19 = CBitmapLock::CBitmapLock(v18);
  v20 = v19;
  if ( !v19 )
  {
LABEL_46:
    v17 = -2147024882;
    v31 = 433;
    goto LABEL_20;
  }
  v21 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v19 + 8LL);
  if ( v21 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(v20);
  else
    v21(v20);
  v9 = 0;
  v22 = (unsigned __int64)(v7 + 24) & -(__int64)(v7 != 0LL);
  v23 = 0;
  if ( v14 )
  {
    v24 = v42 * (unsigned __int64)GetPixelFormatSize(*(enum DXGI_FORMAT *)v10);
    if ( v24 > 0xFFFFFFFF )
    {
      v26 = 1632;
LABEL_17:
      v17 = -2147024362;
      v27 = -2147024362;
      v28 = -2147024362;
      v29 = -2147024362;
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, v26, 0LL);
      v30 = 1678;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v30, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x5Cu, 0LL);
      v31 = 445;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v31, 0LL);
      if ( (a3 & 2) != 0 )
      {
        *((_DWORD *)v7 + 29) = 0;
      }
      else if ( (a3 & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v7 + 29);
      }
      if ( v20 )
        (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v20 + 16LL))(v20);
      v9 = v17;
      goto LABEL_33;
    }
    if ( (int)v24 + 7 < (unsigned int)v24 )
    {
      v26 = 1633;
      goto LABEL_17;
    }
    v32 = (unsigned int)(v24 + 7) >> 3;
    if ( v38 < v32 )
    {
      v28 = -2147024809;
      v26 = 1638;
      v27 = -2147024809;
      v17 = -2147024809;
      v29 = -2147024809;
      goto LABEL_18;
    }
    v33 = v38 * (unsigned __int64)v25;
    if ( v33 > 0xFFFFFFFF )
    {
      v26 = 1641;
      goto LABEL_17;
    }
    v23 = v32 + v33;
    if ( v32 + (unsigned int)v33 < (unsigned int)v33 )
    {
      v26 = 1642;
      goto LABEL_17;
    }
  }
  if ( v23 > v15 )
  {
    v17 = -2003292276;
    v30 = 1682;
    v27 = -2003292276;
    v28 = -2003292276;
    goto LABEL_19;
  }
  *((_WORD *)v20 + 62) = 1;
  *((_QWORD *)v20 + 8) = v7;
  if ( v7 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  *((_DWORD *)v20 + 20) = v42;
  *((_DWORD *)v20 + 21) = v14;
  *(_QWORD *)((char *)v20 + 92) = *(_QWORD *)v10;
  *((_DWORD *)v20 + 25) = *((_DWORD *)v10 + 2);
  *((_DWORD *)v20 + 22) = v38;
  *((_QWORD *)v20 + 13) = v39;
  *((_DWORD *)v20 + 28) = v15;
  *((_QWORD *)v20 + 9) = v22;
  if ( v22 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22 + 8LL))((unsigned __int64)(v7 + 24) & -(__int64)(v7 != 0LL));
  *((_DWORD *)v20 + 30) = a3;
  *a4 = v20;
LABEL_34:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
