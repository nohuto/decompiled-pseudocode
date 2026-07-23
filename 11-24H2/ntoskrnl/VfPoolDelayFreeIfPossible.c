/*
 * XREFs of VfPoolDelayFreeIfPossible @ 0x1404B5DC0
 * Callers:
 *     VfUtilFreePoolCheckIRQL @ 0x1404B5DA0 (VfUtilFreePoolCheckIRQL.c)
 *     VfUtilFreePoolDispatchLevel @ 0x14060E8B0 (VfUtilFreePoolDispatchLevel.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VfPoolDelayFreeIfPossible(PSLIST_ENTRY ListEntry, unsigned int a2)
{
  char *v2; // rbx
  unsigned __int16 v3; // di

  if ( a2 <= 1
    && (v2 = (char *)&VfPoolDelayFreeData + 64 * (__int64)(int)a2,
        _InterlockedIncrement((volatile signed __int32 *)v2 + 13),
        *((_DWORD *)v2 + 12)) )
  {
    v3 = *(_WORD *)v2;
    if ( *(_WORD *)v2 >= 0x200u )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 14);
      ExFreePoolWithTag(ListEntry, 0);
LABEL_5:
      KeSetEvent((PRKEVENT)(v2 + 16), 1, 0);
      return;
    }
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
    if ( v3 >= 0x40u )
      goto LABEL_5;
  }
  else
  {
    ExFreePoolWithTag(ListEntry, 0);
  }
}
