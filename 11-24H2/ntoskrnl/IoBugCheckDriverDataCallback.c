/*
 * XREFs of IoBugCheckDriverDataCallback @ 0x14058DB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IoBugCheckDriverDataCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax
  __int64 v5; // rcx

  v4 = 0;
  ReasonSpecificData[1] = xmmword_1400277C8;
  if ( *(_QWORD *)&KiBugCheckDriver && *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL) && **(_WORD **)&KiBugCheckDriver )
    v4 = (unsigned __int16)**(_WORD **)&KiBugCheckDriver;
  v5 = *((_QWORD *)ReasonSpecificData + 4);
  if ( v5 )
  {
    if ( v5 == *(_QWORD *)ReasonSpecificData )
    {
      *((_DWORD *)ReasonSpecificData + 10) = v4;
      *((_QWORD *)ReasonSpecificData + 4) = *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL);
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = v4;
  }
}
