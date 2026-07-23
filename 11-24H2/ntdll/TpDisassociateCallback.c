/*
 * XREFs of TpDisassociateCallback @ 0x1800F1DC0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 */

void __cdecl TpDisassociateCallback(PTP_CALLBACK_INSTANCE Instance)
{
  _RTL_SRWLOCK *CleanupGroupMember; // rbx
  char v2; // al
  unsigned int v3; // eax
  unsigned __int64 Value; // rdx

  if ( !Instance
    || (CleanupGroupMember = (_RTL_SRWLOCK *)Instance->CleanupGroupMember) == 0LL
    || Instance->CleanupGroup
    || (v2 = *((_BYTE *)Instance + 76), (v2 & 2) != 0) )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    *((_BYTE *)Instance + 76) = v2 | 2;
    v3 = Instance->CallbackEpilogFlags & 0xFFFFFFBF;
    Instance->CallbackEpilogFlags = v3;
    Value = CleanupGroupMember[2].Value;
    Instance->CleanupGroup = (_TP_CLEANUP_GROUP *)Value;
    if ( Value )
    {
      Instance->CallbackEpilogFlags = v3 | 0x20;
      TppBarrierAdjust((_RTL_SRWLOCK *)(Value + 32), 1, 0);
    }
    TppBarrierAdjust(CleanupGroupMember + 7, -1, 0);
  }
}
