/*
 * XREFs of Interrupter_FilterRemoveResourceRequirements @ 0x14007C2BC
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x140079B10 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x140048BF0 (Interrupter_SetSecondaryInterrupterCount.c)
 *     Interrupter_FilterMessageDescriptors @ 0x140074008 (Interrupter_FilterMessageDescriptors.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x14007BEB4 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterAllMSIResources @ 0x14007C014 (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_IoResList_GetMessageCountAndType @ 0x14007C358 (Interrupter_IoResList_GetMessageCountAndType.c)
 */

__int64 __fastcall Interrupter_FilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v6; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  v8 = 0;
  v10 = 0;
  v9 = 0;
  if ( (*(_QWORD *)(v2 + 736) & 0x200LL) != 0 )
  {
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
    return (unsigned int)Interrupter_FilterAllMSIResources(v6, a2);
  }
  else
  {
    Interrupter_IoResList_GetMessageCountAndType(a2, &v10, &v9, &v8);
    if ( v8 )
      Interrupter_DetermineSecondaryInterrupterCount(a1, v9);
    else
      Interrupter_SetSecondaryInterrupterCount(a1, 0);
    Interrupter_FilterMessageDescriptors(a1, a2, v10, *(_DWORD *)(a1 + 20) + 1);
  }
  return v3;
}
