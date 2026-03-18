/*
 * XREFs of ?SmBugcheckCallback@@YAXW4_KBUGCHECK_CALLBACK_REASON@@PEAU_KBUGCHECK_REASON_CALLBACK_RECORD@@PEAXK@Z @ 0x14060E360
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
  if ( qword_140E28838 )
  {
    v5 = *(_DWORD *)(qword_140E28838 + 12) + 56;
    if ( v5 <= *((_DWORD *)ReasonSpecificData + 3) )
    {
      ReasonSpecificData[4] = qword_140E28838;
      v4 = v5;
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_140037800;
    }
  }
  *((_DWORD *)ReasonSpecificData + 10) = v4;
}
