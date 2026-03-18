/*
 * XREFs of ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140198804
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140198688 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?VidSchSetMonitorPowerState@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IEQEBU_DXGK_DISPLAYMODE_INFO@@PEAT_DXGK_MONITORLINKINFO_CAPABILITIES@@@Z @ 0x140055564 (-VidSchSetMonitorPowerState@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IEQEBU_DXGK_DISPLAYMODE_INFO.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x140194BCC (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 */

__int64 __fastcall DISPLAY_SOURCE::Reset(DISPLAY_SOURCE *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  char *v2; // rdi
  __int64 v4; // rsi
  void *v5; // rcx
  void *v6; // rcx
  char *v7; // rbp
  void *v8; // rcx
  __int64 v9; // rcx

  v2 = (char *)this + 8;
  v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_QWORD *)this + 10) = 0LL;
  memset((char *)this + 88, 0, 0x200uLL);
  *((_DWORD *)this + 268) = -1;
  *((_DWORD *)this + 276) = -1;
  *((_DWORD *)this + 279) = -1;
  *((_DWORD *)this + 280) = -1;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_WORD *)this + 380) = 0;
  *(_WORD *)((char *)this + 765) = 0;
  *((_DWORD *)this + 270) = 0;
  *((_BYTE *)this + 1100) = 0;
  *((_BYTE *)this + 704) = 0;
  *(_QWORD *)((char *)this + 708) = 0LL;
  *((_BYTE *)this + 763) = 1;
  *((_QWORD *)this + 96) = 0LL;
  *(_QWORD *)((char *)this + 716) = 0LL;
  *(_QWORD *)((char *)this + 1108) = 0LL;
  v5 = (void *)*((_QWORD *)this + 100);
  if ( v5 )
    memset(v5, 0, *((unsigned int *)this + 204));
  v6 = (void *)*((_QWORD *)this + 106);
  if ( v6 )
  {
    memset(v6, 0, 4 * *(unsigned int *)(v4 + 2424) * (unsigned __int64)*(unsigned int *)(v4 + 2428));
    v7 = (char *)this + 8;
  }
  else
  {
    v7 = v2;
  }
  v8 = (void *)*((_QWORD *)this + 111);
  if ( v8 )
  {
    memset(v8, 0, 4 * *(unsigned int *)(v4 + 2428) * (unsigned __int64)*(unsigned int *)(v4 + 2424));
    v2 = v7;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 16LL) + 3128LL);
  if ( v9 )
    VIDSCH_EXPORT::VidSchSetMonitorPowerState(
      *(VIDSCH_EXPORT **)(v9 + 736),
      *(struct _VIDSCH_GLOBAL **)(v9 + 744),
      *((unsigned int *)this + 4),
      0,
      (DISPLAY_SOURCE *)((char *)this + 992),
      0LL);
  DISPLAY_SOURCE::ClearAllDisplayState(this);
  return 0LL;
}
