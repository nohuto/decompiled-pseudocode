/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x140073A80
 * Callers:
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x140070CA8 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     CreateSharedResourceObject @ 0x14007390C (CreateSharedResourceObject.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011D360 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x140148D10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1402239E0 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct DirectComposition::ResourceObject **a4)
{
  NTSTATUS v5; // eax
  struct DirectComposition::ResourceObject *v6; // rdi
  int v7; // ebx
  struct DirectComposition::ResourceObject *v8; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  Object = 0LL;
  *a4 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  v6 = (struct DirectComposition::ResourceObject *)Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      v8 = v6;
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 1) + 16LL))(*((_QWORD **)v6 + 1)) != 1 )
      {
        v7 = -1073741788;
        v8 = 0LL;
      }
      if ( v7 >= 0 )
      {
        *a4 = v8;
        return (unsigned int)v7;
      }
    }
    else
    {
      v7 = -1073741816;
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v7;
}
