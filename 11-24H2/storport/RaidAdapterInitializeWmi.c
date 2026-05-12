/*
 * XREFs of RaidAdapterInitializeWmi @ 0x140038AF0
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidDeleteDeferredQueue @ 0x14003A6A4 (RaidDeleteDeferredQueue.c)
 *     RaidInitializeDeferredQueue @ 0x14006B018 (RaidInitializeDeferredQueue.c)
 */

__int64 __fastcall RaidAdapterInitializeWmi(__int64 a1)
{
  _BYTE *v1; // rbx
  NTSTATUS v2; // ebp
  char v3; // al
  _BYTE *v5; // rdi
  __int64 v6; // r8

  v1 = (_BYTE *)(a1 + 104);
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 104);
  v5 = (_BYTE *)(a1 + 104);
  if ( (v3 & 2) == 0 && *(_BYTE *)(a1 + 531) )
  {
    v2 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), (v3 & 4 | 2u) >> 1);
    if ( v2 >= 0 )
    {
      *v1 |= 4u;
      v2 = RaidInitializeDeferredQueue(a1 + 1392, *(_QWORD *)(a1 + 8), v6, 176LL, RaidAdapterWmiDeferredRoutine);
      if ( v2 >= 0 )
        goto LABEL_5;
      v5 = (_BYTE *)(a1 + 104);
    }
    if ( (*v1 & 4) != 0 )
    {
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
      *v1 &= ~4u;
    }
    RaidDeleteDeferredQueue(a1 + 1392);
  }
LABEL_5:
  *v5 |= 2u;
  return (unsigned int)v2;
}
