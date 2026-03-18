/*
 * XREFs of ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140013840 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001F73C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14001F8D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FBC0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     GreSfmCloseCompositorRef @ 0x14002AC68 (GreSfmCloseCompositorRef.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x14002C4A8 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x140095C94 (GreDecBitmapExclusiveRefCnt.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401A17FC (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 *     ??1SURFREFAPI@@QEAA@XZ @ 0x1401D8C90 (--1SURFREFAPI@@QEAA@XZ.c)
 *     GrepSfmRemoveSurfaces @ 0x14020E640 (GrepSfmRemoveSurfaces.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@SAXPEAX@Z @ 0x14030D720 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper.c)
 *     ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x14030FBAC (-CleanupRoutine@-$HmgLockResult@VMETA@@@@QEAAXXZ.c)
 *     NtGdiCreateServerMetaFile @ 0x14030FC00 (NtGdiCreateServerMetaFile.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@SAXPEAX@Z @ 0x140320AE0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@.c)
 * Callees:
 *     <none>
 */

void __fastcall OBJECT::InterlockedDecrementExclusiveLockCount(OBJECT *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( *((_WORD *)this + 6) == 0xFFFF )
    OBJECT::ReportOverflow(this, 3u);
}
