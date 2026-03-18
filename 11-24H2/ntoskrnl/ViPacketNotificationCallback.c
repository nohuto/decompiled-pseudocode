/*
 * XREFs of ViPacketNotificationCallback @ 0x140B9B530
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x1405A2FFC (IovIsDisabledWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfIrpDatabaseUninitialize @ 0x140BA4110 (VfIrpDatabaseUninitialize.c)
 */

void __fastcall ViPacketNotificationCallback(_QWORD *Entry, __int64 a2, int a3)
{
  int v4; // r8d
  void *v5; // rcx

  v4 = a3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = (void *)Entry[28];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x6D646C56u);
      ExFreeToNPagedLookasideList(&ViPacketLookaside, Entry);
      if ( !_InterlockedDecrement(&ViPacketCount) && IovIsDisabledWithoutReboot() )
        VfIrpDatabaseUninitialize();
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(a2 + 16) &= 0x3FFFFFFFu;
  }
}
