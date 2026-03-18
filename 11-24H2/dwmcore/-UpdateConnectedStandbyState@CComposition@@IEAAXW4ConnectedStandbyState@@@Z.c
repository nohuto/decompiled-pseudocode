/*
 * XREFs of ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x180225C8C
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x180230080 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 *     wistd::__function::__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl(void)_::operator() @ 0x18025A530 (wistd--__function--__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl(void)_--operato.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ULONG __fastcall CComposition::UpdateConnectedStandbyState(__int64 a1, unsigned int a2)
{
  CGlobalComposition *v2; // rbx
  ULONG result; // eax

  v2 = g_pComposition;
  if ( *((_DWORD *)g_pComposition + 1614) != a2 )
  {
    *((_DWORD *)g_pComposition + 1614) = a2;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      result = McTemplateU0t_EventWriteTransfer(
                 Microsoft_Windows_Dwm_Compositor_Context,
                 (const EVENT_DESCRIPTOR *)"\x1B",
                 a2);
    if ( *((_DWORD *)v2 + 1614) == -1 )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 78) + 72LL))(*((_QWORD *)v2 + 78));
  }
  return result;
}
