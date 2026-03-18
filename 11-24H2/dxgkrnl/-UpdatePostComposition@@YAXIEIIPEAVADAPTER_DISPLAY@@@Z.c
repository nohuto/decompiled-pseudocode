/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x14041F864
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14004A04C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14006B408 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  __int64 v7; // r15
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // r9
  char v12; // cl
  _QWORD *v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a1;
  v9 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct ADAPTER_DISPLAY *)((char *)a5 + 480), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v10 = *((_QWORD *)a5 + 16);
  v11 = 4024 * v7;
  v12 = *(_BYTE *)(v10 + 4024 * v7 + 704);
  if ( a2 )
  {
    if ( !v12 || *(_DWORD *)(v10 + v11 + 708) != a3 || *(_DWORD *)(v10 + v11 + 712) != a4 )
    {
      *(_DWORD *)(v10 + v11 + 708) = a3;
      *(_DWORD *)(*((_QWORD *)a5 + 16) + v11 + 712) = a4;
      *(_BYTE *)(*((_QWORD *)a5 + 16) + v11 + 704) = a2;
LABEL_8:
      v9 = 1;
    }
  }
  else if ( v12 )
  {
    *(_DWORD *)(v10 + v11 + 708) = 0;
    *(_DWORD *)(*((_QWORD *)a5 + 16) + v11 + 712) = 0;
    *(_BYTE *)(*((_QWORD *)a5 + 16) + v11 + 704) = 0;
    goto LABEL_8;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( !(unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v9 )
    {
      v13 = (_QWORD *)operator new(0x18uLL, 0x4B677844u, 256LL);
      v14 = v13;
      if ( v13 )
      {
        v13[1] = 0LL;
        v13[2] = 0LL;
        *v13 = 0LL;
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v13, *((struct DXGADAPTER **)a5 + 2));
        v14[4] = v7;
        Current = DXGPROCESS::GetCurrent(v15);
        DXGWORKQUEUE::QueueWork(
          (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
          (void (*)(void *))lambda_24e08458ef26c9ee62f207e756e9a646_::_lambda_invoker_cdecl_,
          v14);
      }
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
}
