/*
 * XREFs of FxpBugCheckCallback @ 0x1400ABAC0
 * Callers:
 *     <none>
 * Callees:
 *     FxpBugCheckCallbackFilter @ 0x1400ABB70 (FxpBugCheckCallbackFilter.c)
 */

void __fastcall FxpBugCheckCallback(
        _KBUGCHECK_CALLBACK_REASON Reason,
        _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _GUID *ReasonSpecificData,
        unsigned int ReasonSpecificLength)
{
  unsigned int v4; // eax
  unsigned __int8 **p_Component; // rbx
  unsigned __int64 Checksum; // rsi
  unsigned int v8; // esi

  v4 = *(_DWORD *)&ReasonSpecificData->Data4[4];
  if ( v4 >= 0x1000 )
  {
    p_Component = &Record[-8].Component;
    Checksum = Record[-6].Checksum;
    if ( Checksum )
    {
      v8 = *(_DWORD *)(Checksum + 24) + 72;
      if ( v8 <= v4 )
      {
        if ( FxpBugCheckCallbackFilter((_FX_DRIVER_GLOBALS *)&Record[-8].Component) )
        {
          unk_1400C8088 = p_Component;
LABEL_9:
          *(_QWORD *)&ReasonSpecificData[2].Data1 = p_Component[13];
          *(_DWORD *)ReasonSpecificData[2].Data4 = v8;
          ReasonSpecificData[1] = WdfDumpGuid;
          return;
        }
        if ( !unk_1400C8088
          && *((_BYTE *)p_Component + 348)
          && *(unsigned __int8 ***)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) == p_Component )
        {
          goto LABEL_9;
        }
      }
    }
  }
}
