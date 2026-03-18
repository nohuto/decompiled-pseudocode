/*
 * XREFs of ?ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ @ 0x18013E870
 * Callers:
 *     ?AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z @ 0x180030FEC (-AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18013FC00 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CRenderTargetManager::ApplyClockBoost(CRenderTargetManager *this)
{
  _QWORD *v2; // rax
  __int64 i; // rdx
  unsigned __int8 v4; // si
  bool result; // al
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp

  if ( !*(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 753LL) && !*((_BYTE *)g_pComposition + 6495) )
  {
    if ( *((_DWORD *)g_pComposition + 1601) || (v2 = (_QWORD *)*((_QWORD *)g_pComposition + 82), *v2) )
    {
LABEL_11:
      v4 = 1;
      goto LABEL_8;
    }
    for ( i = v2[4]; i != v2[5]; i += 104LL )
    {
      if ( *((_QWORD *)g_pComposition + 111) - *(_QWORD *)(i + 88) < 0xAuLL )
        goto LABEL_11;
    }
  }
  v4 = 0;
LABEL_8:
  if ( !*((_BYTE *)this + 749) && v4 == *((_BYTE *)this + 755) )
    return 0;
  if ( *((_DWORD *)g_pComposition + 1629) && (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0t_EventWriteTransfer((__int64)Microsoft_Windows_Dwm_Compositor_Context, (__int64)&ClockBoostChanged, v4);
  *((_BYTE *)this + 744) = 1;
  v6 = (_QWORD *)*((_QWORD *)this + 3);
  v7 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v6 != v7 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 192LL))(*v6, v4);
    ++v6;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  result = 1;
  *((_BYTE *)this + 749) = 0;
  *((_BYTE *)this + 755) = v4;
  return result;
}
