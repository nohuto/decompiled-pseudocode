/*
 * XREFs of ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1802363E0
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180187A60 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180188434 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x180188858 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x180188908 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1802616FC (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::HrLockUnaligned(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned __int8 *a9,
        enum WICBitmapLockFlags a10,
        struct IBitmapLock **a11)
{
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r9d
  CBitmapLock *v18; // rax
  CProjectedShadowReceiver *v19; // rsi
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-68h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (a10 & 2) != 0 )
  {
    v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 116));
    v16 = v15;
    if ( v15 < 0 )
    {
      v22 = 492;
LABEL_4:
      v17 = v15;
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v22, 0LL);
      return v16;
    }
  }
  else
  {
    if ( (a10 & 1) == 0 )
    {
      v16 = -2147024809;
      v17 = -2147024809;
      v22 = 500;
      goto LABEL_18;
    }
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 116));
    v16 = v15;
    if ( v15 < 0 )
    {
      v22 = 496;
      goto LABEL_4;
    }
  }
  v18 = (CBitmapLock *)DefaultHeap::AllocClear(0x98uLL);
  v19 = v18;
  if ( !v18 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CBitmapLock::CBitmapLock(v18);
  *((_QWORD *)v19 + 13) = 0LL;
  *(_QWORD *)v19 = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBaseT<IBitmapLock,IBitmapLock,CMilObjectDeleter>'};
  *((_QWORD *)v19 + 2) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CProjectedShadowReceiver::AddRef(v19);
  v20 = CBitmapLockUnaligned::HrInit(v19, this, a2, a3, a4, (unsigned int)a7, a8, a9, a10, a5, a6);
  v16 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x206u, 0LL);
    if ( (a10 & 2) != 0 )
    {
      *((_DWORD *)this + 29) = 0;
    }
    else if ( (a10 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 29);
    }
    (*(void (__fastcall **)(CProjectedShadowReceiver *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  else
  {
    *a11 = v19;
  }
  return v16;
}
