/*
 * XREFs of ?SmBugcheckCallback@@YAXW4_KBUGCHECK_CALLBACK_REASON@@PEAU_KBUGCHECK_REASON_CALLBACK_RECORD@@PEAXK@Z @ 0x14060C920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SmBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax

  v4 = 0;
  if ( qword_140E28978 )
  {
    v5 = *(_DWORD *)(qword_140E28978 + 12) + 56;
    if ( v5 <= *((_DWORD *)ReasonSpecificData + 3) )
    {
      ReasonSpecificData[4] = qword_140E28978;
      v4 = v5;
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_140037C70;
    }
  }
  *((_DWORD *)ReasonSpecificData + 10) = v4;
}
