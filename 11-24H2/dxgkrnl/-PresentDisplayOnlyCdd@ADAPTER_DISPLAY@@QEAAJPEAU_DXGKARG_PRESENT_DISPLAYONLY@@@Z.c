/*
 * XREFs of ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x14019A350
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401DD13C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1403A2F5C (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentDisplayOnlyCdd(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  __int64 v2; // rax
  __int64 VidPnSourceId; // rcx
  __int64 v4; // r8

  v2 = *((_QWORD *)this + 58);
  if ( v2
    && (VidPnSourceId = a2->VidPnSourceId, (unsigned int)VidPnSourceId < *(_DWORD *)v2)
    && (v4 = *(_QWORD *)(v2 + 8)) != 0 )
  {
    return BLTQUEUE::PresentDisplayOnly(v4 + 3040 * VidPnSourceId, a2, 0LL, 1LL);
  }
  else
  {
    return 3221225485LL;
  }
}
