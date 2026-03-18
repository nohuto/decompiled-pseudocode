/*
 * XREFs of DxgMmsDbgTriageDumpCallback @ 0x14004C3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiAddTriageData@@YAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@PEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x14004D82C (-VidMmiAddTriageData@@YAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@PEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z.c)
 *     ?VidSchiAddTriageData@@YAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@PEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x14005380C (-VidSchiAddTriageData@@YAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@PEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z.c)
 */

void __fastcall DxgMmsDbgTriageDumpCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        struct _KBUGCHECK_TRIAGE_DUMP_DATA *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *v5; // rdi

  if ( (ReasonSpecificData->Flags & 1) != 0 )
  {
    v5 = qword_140081250;
    if ( qword_140081250 )
    {
      if ( ReasonSpecificData->BugCheckCode == 270
        || ReasonSpecificData->BugCheckCode == 275
        || ReasonSpecificData->BugCheckCode == 278
        || ReasonSpecificData->BugCheckCode == 281 )
      {
        VidMmiAddTriageData(ReasonSpecificData, qword_140081250);
        VidSchiAddTriageData(ReasonSpecificData, v5);
        v5 = qword_140081250;
      }
      ReasonSpecificData->DataArray = v5;
    }
  }
}
