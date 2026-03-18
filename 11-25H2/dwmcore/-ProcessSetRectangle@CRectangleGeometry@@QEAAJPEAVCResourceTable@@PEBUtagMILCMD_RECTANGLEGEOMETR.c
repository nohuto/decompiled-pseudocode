/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180023768
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180021B30 (-SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5700 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  unsigned int v3; // ebx
  __int64 i; // rbp
  __int64 v7; // rdx
  char *v8; // r8
  __int64 (__fastcall *v9)(CBrush *, const struct AnimationHelper::AnimatedProperty *, const void *); // r9
  int v10; // eax
  int v12; // eax

  v3 = 0;
  if ( *((_BYTE *)a3 + 41) )
  {
    v12 = CResource::SetPropertyImpl(
            this,
            (const struct AnimationHelper::AnimatedProperty *)&CRectangleGeometry::sc_CornerRadius,
            (char *)a3 + 8);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x14Cu, 0LL);
      return v3;
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      _mm_lfence();
      v7 = (__int64)*(&off_180306EB0 + i);
      v8 = (char *)a3 + qword_1803C7590[i];
      v9 = *(__int64 (__fastcall **)(CBrush *, const struct AnimationHelper::AnimatedProperty *, const void *))(v7 + 24);
      if ( v9 == CGeometry::SetTrimInvalidatingAnimatedProperty )
      {
        v10 = CGeometry::SetTrimInvalidatingAnimatedProperty(
                this,
                (const struct AnimationHelper::AnimatedProperty *)v7,
                v8);
      }
      else if ( v9 == CComponentTransform2D::SetRotationAngle )
      {
        v10 = CComponentTransform2D::SetRotationAngle(this, (const struct AnimationHelper::AnimatedProperty *)v7, v8);
      }
      else if ( v9 == CBrush::SetAnimatedProperty )
      {
        v10 = CBrush::SetAnimatedProperty(this, (const struct AnimationHelper::AnimatedProperty *)v7, v8);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(CRectangleGeometry *, __int64, char *))(v7 + 24))(this, v7, v8);
      }
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x157u, 0LL);
        return v3;
      }
    }
  }
  *((_BYTE *)this + 188) = *((_BYTE *)a3 + 41) != 0;
  *((_BYTE *)this + 132) = *((_BYTE *)a3 + 40) != 0;
  *((_BYTE *)this + 192) = *((_BYTE *)a3 + 42) != 0;
  return v3;
}
