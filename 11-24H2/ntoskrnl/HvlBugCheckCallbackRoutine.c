/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x140587390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( Address )
  {
    if ( (*((_DWORD *)Address + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = Address;
      *((_DWORD *)ReasonSpecificData + 10) = dword_140F8E1B8 << 12;
    }
  }
}
