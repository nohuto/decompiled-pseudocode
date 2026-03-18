/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1801880EC
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802192B0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180188434 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x180188858 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x180188908 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        int a3,
        enum DXGI_FORMAT *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  bool v14; // zf
  int v16; // eax
  unsigned int v17; // edi
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rax
  CBitmapLock *v20; // rbx
  __int64 (__fastcall *v21)(CMILRefCountImpl *); // rax
  unsigned __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // eax
  int v27; // r15d
  int v28; // ebp
  int v29; // r9d
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // r8d
  unsigned __int64 v33; // rcx
  unsigned int v35; // [rsp+20h] [rbp-48h]
  WICBitmapLockFlags v38; // [rsp+A8h] [rbp+40h]

  v14 = (a8 & 2) == 0;
  v38 = a8 & 2;
  if ( !v14 )
  {
    v16 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 116));
    v17 = v16;
    if ( v16 >= 0 )
      goto LABEL_4;
    v35 = 419;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v35, 0LL);
    return v17;
  }
  if ( (a8 & 1) == 0 )
  {
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1ABu, 0LL);
    return v17;
  }
  v16 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 116));
  v17 = v16;
  if ( v16 < 0 )
  {
    v35 = 423;
    goto LABEL_33;
  }
LABEL_4:
  v18 = (CBitmapLock *)operator new(0x80uLL);
  if ( !v18 )
  {
    v20 = 0LL;
    goto LABEL_36;
  }
  v19 = CBitmapLock::CBitmapLock(v18);
  v20 = v19;
  if ( !v19 )
  {
LABEL_36:
    v17 = -2147024882;
    v31 = 433;
    goto LABEL_14;
  }
  v21 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v19 + 8LL);
  if ( v21 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(v20);
  else
    v21(v20);
  v17 = 0;
  v22 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v23 = 0;
  if ( a3 )
  {
    v24 = a2 * (unsigned __int64)GetPixelFormatSize(*a4);
    if ( v24 > 0xFFFFFFFF )
    {
      v26 = 1632;
LABEL_11:
      v17 = -2147024362;
      v27 = -2147024362;
      v28 = -2147024362;
      v29 = -2147024362;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, v26, 0LL);
      v30 = 1678;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v30, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x5Cu, 0LL);
      v31 = 445;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v31, 0LL);
      if ( v38 )
      {
        *((_DWORD *)this + 29) = 0;
      }
      else if ( (a8 & 1) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)this + 29);
      }
      if ( v20 )
        (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v20 + 16LL))(v20);
      return v17;
    }
    if ( (int)v24 + 7 < (unsigned int)v24 )
    {
      v26 = 1633;
      goto LABEL_11;
    }
    v32 = (unsigned int)(v24 + 7) >> 3;
    if ( a5 < v32 )
    {
      v28 = -2147024809;
      v26 = 1638;
      v27 = -2147024809;
      v17 = -2147024809;
      v29 = -2147024809;
      goto LABEL_12;
    }
    v33 = a5 * (unsigned __int64)v25;
    if ( v33 > 0xFFFFFFFF )
    {
      v26 = 1641;
      goto LABEL_11;
    }
    v23 = v33 + v32;
    if ( (unsigned int)v33 + v32 < (unsigned int)v33 )
    {
      v26 = 1642;
      goto LABEL_11;
    }
  }
  if ( v23 > a6 )
  {
    v17 = -2003292276;
    v27 = -2003292276;
    v28 = -2003292276;
    v30 = 1682;
    goto LABEL_13;
  }
  *((_BYTE *)v20 + 124) = 1;
  *((_BYTE *)v20 + 125) = a10;
  *((_QWORD *)v20 + 8) = a11;
  if ( a11 )
    ((void (__fastcall *)(struct IUnknown *))a11->lpVtbl->AddRef)(a11);
  *((_DWORD *)v20 + 20) = a2;
  *((_DWORD *)v20 + 21) = a3;
  *(_QWORD *)((char *)v20 + 92) = *(_QWORD *)a4;
  *((enum DXGI_FORMAT *)v20 + 25) = a4[2];
  *((_QWORD *)v20 + 13) = a7;
  *((_DWORD *)v20 + 22) = a5;
  *((_DWORD *)v20 + 28) = a6;
  *((_QWORD *)v20 + 9) = v22;
  if ( v22 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  *((_DWORD *)v20 + 30) = a8;
  *a9 = v20;
  return v17;
}
