/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14001FD90
 * Callers:
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001F73C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14001F8D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x14019B328 (-iSetMapMode@DC@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rdx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_QWORD *)this + 122);
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    *(_DWORD *)(v1 + 340) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 340) |= 0x6090u;
}
