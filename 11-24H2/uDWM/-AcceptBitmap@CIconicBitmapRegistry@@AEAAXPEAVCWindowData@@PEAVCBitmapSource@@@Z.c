/*
 * XREFs of ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800088D8
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180009648 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180007DE8 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18001B42C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001D3F4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180024F5C (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18006A350 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008CBC4 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800EC890 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

void __fastcall CIconicBitmapRegistry::AcceptBitmap(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2,
        struct CBitmapSource *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  CWindowIconic *v7; // rcx
  struct CWindowData ***v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // eax
  struct CWindowData *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_QWORD *)a2 + 54);
  *((_BYTE *)a2 + 738) &= ~0x10u;
  CIconicBitmapRegistry::RequestBitmap(this, v12, 0);
  if ( !IsWindowTab(v12) )
  {
    v8 = (struct CWindowData ***)((char *)this + 16);
    if ( (unsigned int)(*((_DWORD *)this + 10) + *((_DWORD *)this + 20) + *((_DWORD *)this + 21)) > *((_DWORD *)this + 2) )
      CIconicBitmapRegistry::ClearBitmap(this, **v8);
    if ( !v3 && !(unsigned int)DynArray<CWindowData *,0>::Find((char *)this + 16, &v12) )
    {
      v9 = *((_DWORD *)this + 10);
      v10 = v9 + 1;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
      }
      else if ( v10 > *((_DWORD *)this + 9) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 8LL, 1LL, &v12);
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xBEu, 0LL);
      }
      else
      {
        (*v8)[v9] = v12;
        *((_DWORD *)this + 10) = v10;
      }
    }
  }
  CWindowData::SetIconicBitmap(v12, a3);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v6, &UdwmManageIconicThumbnail_Info, 0LL, *((_QWORD *)v12 + 5));
  v7 = (CWindowIconic *)*((_QWORD *)v12 + 61);
  if ( v7 )
  {
    CWindowIconic::SetBitmap(v7, *((struct CBitmapSource **)v12 + 54), (*((_BYTE *)v12 + 738) & 4) != 0, 1);
    if ( !v3 )
      CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v12 + 61));
  }
}
