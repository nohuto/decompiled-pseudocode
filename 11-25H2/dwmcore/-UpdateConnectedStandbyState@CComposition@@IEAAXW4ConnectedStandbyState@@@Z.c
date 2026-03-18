/*
 * XREFs of ?UpdateConnectedStandbyState@CComposition@@IEAAXW4ConnectedStandbyState@@@Z @ 0x18023187C
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1802310B0 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 *     wistd::__function::__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl(void)_::operator() @ 0x1802654B0 (wistd--__function--__func__lambda_3fad6944f04fc72d524adc62a5a93b57__void___cdecl(void)_--operato.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::UpdateConnectedStandbyState(__int64 a1, unsigned int a2)
{
  CGlobalComposition *v2; // rbx
  __int64 result; // rax

  v2 = g_pComposition;
  if ( *((_DWORD *)g_pComposition + 1620) != a2 )
  {
    *((_DWORD *)g_pComposition + 1620) = a2;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      result = McTemplateU0t_EventWriteTransfer((__int64)Microsoft_Windows_Dwm_Compositor_Context, (__int64)"\x1B", a2);
    if ( *((_DWORD *)v2 + 1620) == -1 )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 78) + 72LL))(*((_QWORD *)v2 + 78));
  }
  return result;
}
