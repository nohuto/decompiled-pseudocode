/*
 * XREFs of ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x18006B70C
 * Callers:
 *     ?OnCaptureRTBits@CMagnifier@@QEAAX_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@PEAJ@Z @ 0x18006B6E4 (-OnCaptureRTBits@CMagnifier@@QEAAX_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_META.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SyncCaptureBits@CMagnifierRenderTargetProxy@@QEAAJII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18006B7D0 (-SyncCaptureBits@CMagnifierRenderTargetProxy@@QEAAJII_KU-$TMILFlagsEnum@W4FlagsEnum@MilRenderPas.c)
 */

__int64 __fastcall CMagnifier::OnCaptureRTBitsWorker(
        CMagnifier *this,
        int a2,
        char a3,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a4,
        struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *a5)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // ecx

  if ( *((_DWORD *)this + 42) )
  {
    v6 = CMagnifierRenderTargetProxy::SyncCaptureBits(
           *((_QWORD *)this + 3),
           *((_DWORD *)this + 43),
           *((_DWORD *)this + 44),
           a2,
           a3 & 1,
           (__int64)a4);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180106E30, 8LL, v6, 0x1DCu, 0LL);
    }
    else
    {
      *((_DWORD *)a5 + 6) = *((_DWORD *)this + 42);
      *((_DWORD *)a5 + 7) = *((_DWORD *)this + 45);
      *((_DWORD *)a5 + 8) = *((_DWORD *)this + 43);
      v8 = *((_DWORD *)this + 44);
      *((_DWORD *)a5 + 5) = 0;
      *((_DWORD *)a5 + 2) = 0;
      *(_QWORD *)((char *)a5 + 12) = 0LL;
      *((_DWORD *)a5 + 9) = v8;
    }
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v7;
}
