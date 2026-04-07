/*
 * XREFs of ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800064C4
 * Callers:
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180004C7C (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180007C94 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180007DE8 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x18004E3F0 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18006A350 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

void __fastcall CIconicBitmapRegistry::RegisterBitmapInUse(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  char v4; // r8
  char *v5; // rcx
  __int64 v6; // r11
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  struct CWindowData *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( !IsWindowTab(a2) )
  {
    v5 = (char *)this + 16;
    if ( v4 )
    {
      ++*((_DWORD *)this + 20);
      DynArray<CStoryboard const *,0>::Remove(v5, &v10);
    }
    else if ( !(unsigned int)DynArray<CWindowData *,0>::Find(v5, &v10) )
    {
      --*((_DWORD *)this + 20);
      v7 = *(_DWORD *)(v6 + 24);
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
      }
      else if ( v8 > *(_DWORD *)(v6 + 20) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet(v6, 8LL, 1LL, &v10);
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xBEu, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL * v7) = a2;
        *(_DWORD *)(v6 + 24) = v8;
      }
    }
  }
}
