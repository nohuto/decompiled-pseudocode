/*
 * XREFs of ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800C5250
 * Callers:
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C52CC (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C547C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C5628 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800C5860 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C5A30 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x1800C5BA8 (McTemplateU0qq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CIndirectTouchVisual::SetETWAnimation(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rcx

  if ( a2 != *(_DWORD *)(a1 + 304) )
  {
    result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
    v5 = (unsigned int *)(a1 + 424);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    {
      McTemplateU0qq_EtwEventWriteTransfer(a1, &UdwmIndirectTouchVisual_Stop, *v5);
      result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
        result = McTemplateU0qq_EtwEventWriteTransfer(v6, &UdwmIndirectTouchVisual_Start, *v5);
    }
  }
  *(_DWORD *)(a1 + 304) = a2;
  return result;
}
