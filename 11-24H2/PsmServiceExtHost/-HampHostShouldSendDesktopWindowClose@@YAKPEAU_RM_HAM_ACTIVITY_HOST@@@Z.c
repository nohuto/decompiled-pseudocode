/*
 * XREFs of ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800678B0
 * Callers:
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C3C4 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C850 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall HampHostShouldSendDesktopWindowClose(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 - 2132) & 0x40) != 0
    && *((_BYTE *)a1 + 592) == 1 )
  {
    return (*((_DWORD *)a1 + 166) & 0xFF00) == 1024;
  }
  return result;
}
