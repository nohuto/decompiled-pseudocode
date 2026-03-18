/*
 * XREFs of ?UpdateAnimateResources@CComposition@@IEAAXXZ @ 0x18007D6D0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18007D840 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::UpdateAnimateResources(CComposition *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  int i; // ebx
  CAnimation *v6; // rcx
  __int64 (*v7)(void); // rax
  char updated; // al
  char v9; // cl
  unsigned int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start,
      a3,
      1u,
      &v11);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UpdateAnimations_Start, a3, 1u, &v11);
  for ( i = *((_DWORD *)this + 1476); i; v4 = v10 )
  {
    v6 = *(CAnimation **)(*((_QWORD *)this + 735) + 8LL * (unsigned int)--i);
    v7 = **(__int64 (***)(void))v6;
    if ( (char *)v7 == (char *)CAnimation::UpdateAnimateValues )
      updated = CAnimation::UpdateAnimateValues(v6);
    else
      updated = v7();
    v9 = updated;
    v10 = v4 + 1;
    if ( !v9 )
      v10 = v4;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UpdateAnimations_Stop, v4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop,
      a3,
      1u,
      &v11);
}
