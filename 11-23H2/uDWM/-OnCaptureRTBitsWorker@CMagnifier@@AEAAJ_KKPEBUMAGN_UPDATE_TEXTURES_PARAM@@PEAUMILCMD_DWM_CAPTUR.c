/*
 * XREFs of ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x1800C9F5C
 * Callers:
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800CB6D0 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnCaptureRTBitsWorker(
        CMagnifier *this,
        __int64 a2,
        char a3,
        const struct MAGN_UPDATE_TEXTURES_PARAM *a4,
        struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *a5)
{
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax

  if ( *((_DWORD *)this + 42) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int, const struct MAGN_UPDATE_TEXTURES_PARAM *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL) + 584LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
           *((unsigned int *)this + 43),
           *((unsigned int *)this + 44),
           a2,
           a3 & 1,
           a4);
    v7 = v6;
    if ( v6 >= 0 )
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
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129178, 8LL, v6, 0x1DEu);
    }
  }
  else
  {
    return (unsigned int)-2003292404;
  }
  return v7;
}
