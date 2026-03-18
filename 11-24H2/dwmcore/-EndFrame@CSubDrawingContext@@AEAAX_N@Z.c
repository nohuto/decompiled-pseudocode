/*
 * XREFs of ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x1800F68F8
 * Callers:
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800F6810 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180057310 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x1800F6A10 (-RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CSubDrawingContext::EndFrame(CSubDrawingContext *this, char a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  _BYTE *v6; // rdx
  __int64 v7; // r8
  __int64 i; // rdx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    CScopedClipStack::RestoreScopeFromClipStack(
      (CScopedClipStack *)(*(_QWORD *)this + 744LL),
      (const struct CScopedClipStack *)(v4 + 744));
    v5 = (_BYTE *)(*((_QWORD *)this + 1) + 7980LL);
    v6 = (_BYTE *)(*(_QWORD *)this + 7980LL);
    *v6 |= *v5;
    v6[1] |= v5[1];
    v6[2] |= v5[2];
    v6[3] |= v5[3];
    v6[4] |= v5[4];
    *(_QWORD *)(*((_QWORD *)this + 1) + 216LL) = 0LL;
    CDrawingContext::PopAllStacks(*((CDrawingContext **)this + 1));
    if ( a2 )
    {
      *(_BYTE *)(*(_QWORD *)this + 8065LL) = 1;
      *(_BYTE *)(*(_QWORD *)this + 8066LL) = 0;
    }
    else
    {
      for ( i = 0LL; i < 2; ++i )
        *(_BYTE *)(*(_QWORD *)this + i + 8065) = *(_BYTE *)(i + *((_QWORD *)this + 1) + 8065);
    }
    if ( *((_BYTE *)this + 88) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
          v7,
          1u,
          &v9);
      *((_BYTE *)this + 88) = 0;
    }
  }
}
