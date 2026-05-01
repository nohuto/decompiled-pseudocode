/*
 * XREFs of ?HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180067650
 * Callers:
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C444 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall HampHostShouldSendPsmQuiesceNotifications(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  bool result; // al
  char v3; // cl

  result = 1;
  v3 = *((_BYTE *)a1 + 592);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      result = 0;
      if ( *(char *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                            + 120)
                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                   - 2132) < 0 )
        return (*((_DWORD *)a1 + 166) & 0xFF00) == 4352;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
