/*
 * XREFs of ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x14005C6C4
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x14003CF88 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModesFromEstablishedTimings(
        MonDescParser::EDID_MODES *this,
        unsigned __int64 a2,
        struct _VideoModeDescriptor *a3)
{
  unsigned __int16 v4; // r8
  unsigned __int16 v7; // di
  __int64 v8; // r9
  USHORT v9; // bp
  USHORT v10; // r14
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  bool v16; // cf

  v4 = 0;
  v7 = 0;
  v8 = **(_QWORD **)this;
  v9 = *(unsigned __int8 *)(v8 + 21);
  v10 = *(unsigned __int8 *)(v8 + 22);
  v11 = (*(unsigned __int8 *)(v8 + 37) >> 7) | (2
                                              * ((unsigned __int8)HIBYTE(*(_WORD *)(v8 + 35)) | ((unsigned __int8)*(_WORD *)(v8 + 35) << 8)));
  if ( !v11 )
  {
LABEL_6:
    v16 = v4 < a2;
    return v16 ? 0xC01D0008 : 0;
  }
  while ( v4 < a2 )
  {
    if ( (v11 & 1) != 0 )
    {
      v12 = v4;
      v13 = 56LL * v7;
      ++v4;
      v14 = *(_OWORD *)((char *)&unk_1400BE390 + v13 + 16);
      *(_OWORD *)&a3[v12].PixelClockRate = *(_OWORD *)((char *)&unk_1400BE390 + v13);
      v15 = *(_OWORD *)((char *)&unk_1400BE390 + v13 + 32);
      *(_OWORD *)&a3[v12].HorizontalRefreshRateDenominator = v14;
      *(_QWORD *)&v14 = *(_QWORD *)((char *)&unk_1400BE390 + v13 + 48);
      *(_OWORD *)&a3[v12].HorizontalSyncPulseWidth = v15;
      *(_QWORD *)&a3[v12].IsSyncOnRGB = v14;
      a3[v12].HorizontalImageSize = v9;
      a3[v12].VerticalImageSize = v10;
      a3[v12].Origin = *((_BYTE *)this + 8);
    }
    ++v7;
    v11 >>= 1;
    if ( !v11 )
      goto LABEL_6;
  }
  v16 = 0;
  if ( v4 != a2 )
    return v16 ? 0xC01D0008 : 0;
  return 3221225507LL;
}
