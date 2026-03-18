/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18010FF8C
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180037894 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AFF0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x18020B3AC (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 * Callees:
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180110070 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  unsigned int i; // eax
  _QWORD ***v10; // rdi
  _QWORD **v11; // rdi
  _QWORD *j; // rbx

  v1 = *((_QWORD *)this + 43);
  v3 = (*((_QWORD *)this + 44) - v1) >> 4;
  if ( v3 )
  {
    v4 = 16 * v3;
    v5 = v4 + v1;
    while ( v1 != v5 )
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v1 + 8);
      v1 += 16LL;
    }
    *((_QWORD *)this + 44) -= v4;
  }
  v6 = *((_QWORD *)this + 29);
  if ( *(int *)v6 < 0 )
  {
    v7 = *(unsigned int *)(v6 + 4);
    v8 = (_BYTE *)(v6 + 8);
    for ( i = 0; i < (unsigned int)v7; ++v8 )
    {
      if ( *v8 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v7 )
      v10 = 0LL;
    else
      v10 = (_QWORD ***)(v7 + 15 + v6 + 8LL * i - (((_BYTE)v7 + 15) & 7));
    v11 = *v10;
    if ( v11 )
    {
      for ( j = *v11; j != v11; j = (_QWORD *)*j )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(j - 42);
    }
  }
}
