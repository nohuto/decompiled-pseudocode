/*
 * XREFs of ?AddSecondaryWindowRepresentationToPrimary@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@@Z @ 0x18003D084
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18003CF04 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentationToPrimary(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v6; // eax
  struct CSecondaryWindowRepresentation *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 130);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
  }
  else
  {
    v4 = 0;
    if ( v3 > *((_DWORD *)this + 129) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 496, 8, 1, &v7);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xBEu, 0LL);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 62) + 8LL * v2) = a2;
      *((_DWORD *)this + 130) = v3;
    }
  }
  return v4;
}
