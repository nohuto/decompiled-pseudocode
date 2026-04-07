/*
 * XREFs of ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18004D01C
 * Callers:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180007C98 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009C74 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180033828 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180033C68 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180033F9C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18004D118 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18004FA0C (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // esi
  volatile signed __int32 *v2; // rbx
  int v4; // eax
  int v5; // eax
  volatile signed __int32 *v6; // rdi
  int inserted; // eax
  unsigned int v9; // [rsp+20h] [rbp-10h]
  CBaseObject *v10; // [rsp+50h] [rbp+20h] BYREF
  CBaseObject *v11; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v4 = CVisual::Create(&v10);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xC7u, 0LL);
      v6 = (volatile signed __int32 *)v10;
    }
    else
    {
      v5 = CRenderDataVisual::Create(&v11);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC8u, 0LL);
        v6 = (volatile signed __int32 *)v10;
        v2 = (volatile signed __int32 *)v11;
      }
      else
      {
        v6 = (volatile signed __int32 *)v10;
        v2 = (volatile signed __int32 *)v11;
        inserted = VisualCollection::InsertRelative(
                     (CBaseObject *)((char *)v10 + 32),
                     (unsigned __int64)v11,
                     0LL,
                     0,
                     v9);
        v1 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xC9u, 0LL);
        }
        else
        {
          *((_QWORD *)this + 6) = v6;
          if ( v6 )
          {
            _InterlockedIncrement(v6 + 2);
            v6 = (volatile signed __int32 *)v10;
            v2 = (volatile signed __int32 *)v11;
          }
          *((_QWORD *)this + 7) = v2;
          if ( v2 )
          {
            _InterlockedIncrement(v2 + 2);
            v6 = (volatile signed __int32 *)v10;
            v2 = (volatile signed __int32 *)v11;
          }
          CSecondaryWindowRepresentation::SetDirtyFlags(this, 4u);
          CSecondaryWindowRepresentation::SetDirtyFlags(this, 0x10u);
          CSecondaryWindowRepresentation::OnWindowOffsetUpdated(this);
        }
      }
    }
    if ( v6 )
      CBaseObject::Release((CBaseObject *)v6);
    if ( v2 )
      CBaseObject::Release((CBaseObject *)v2);
  }
  return v1;
}
