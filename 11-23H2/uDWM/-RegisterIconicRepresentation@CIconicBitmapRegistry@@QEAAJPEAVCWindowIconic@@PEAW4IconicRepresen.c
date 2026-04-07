/*
 * XREFs of ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x1800C34D0
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106658 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180106EA4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x1800C2C38 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800C326C (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x1800C3708 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowIconic *a2,
        enum IconicRepresentationType *a3)
{
  __int64 v4; // rsi
  bool v6; // r14
  HWND v8; // r15
  char v9; // dl
  char v10; // r8
  char v11; // cl
  char CanAcceptBitmap; // r9
  char v13; // dl

  v4 = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)a2 + 4) == 2;
  v8 = *(HWND *)(v4 + 40);
  if ( *((_BYTE *)a2 + 20) )
  {
    if ( *((_QWORD *)this + 12) && *((struct CWindowIconic **)this + 12) != a2 )
      CIconicBitmapRegistry::OnLivePreviewDismissed(this);
    if ( !*((_QWORD *)this + 12) )
    {
      *((_QWORD *)this + 12) = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    v9 = *((_BYTE *)this + 90);
    v10 = *((_BYTE *)this + 88);
    v11 = *((_BYTE *)this + 89);
    CanAcceptBitmap = (*(_BYTE *)(v4 + 674) & 2) != 0;
    v4 = -(__int64)(*(_QWORD *)(v4 + 856) != 0LL) - 1;
  }
  else
  {
    CanAcceptBitmap = CIconicBitmapRegistry::CanAcceptBitmap(this, *((struct CWindowData **)a2 + 9));
    v13 = *(_BYTE *)(v4 + 674);
    v11 = (v13 & 8) != 0;
    v9 = (v13 & 0x10) != 0;
    v10 = *(_QWORD *)(v4 + 432) != 0LL;
  }
  return CIconicBitmapRegistry::_RegisterIconicRepresentation(
           this,
           (struct CWindowData *)v4,
           v8,
           CanAcceptBitmap,
           v9,
           v10,
           v11,
           v6,
           a3);
}
