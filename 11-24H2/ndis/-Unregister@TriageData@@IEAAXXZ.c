/*
 * XREFs of ?Unregister@TriageData@@IEAAXXZ @ 0x1400E4C08
 * Callers:
 *     ??1?$ObjectTriageData@X@@UEAA@XZ @ 0x1400912D4 (--1-$ObjectTriageData@X@@UEAA@XZ.c)
 *     ??1TriageData@@UEAA@XZ @ 0x1400E4A3C (--1TriageData@@UEAA@XZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 */

void __fastcall TriageData::Unregister(TriageData *this)
{
  int v2; // edx

  if ( this->m_registered )
  {
    if ( !KeDeregisterBugCheckReasonCallback(&this->m_callbackRecord)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v2,
        1,
        11,
        (struct _GUID *)&WPP_8ca2e1ba93e737954baa53d4a7df69b8_Traceguids);
    }
    this->m_registered = 0;
  }
}
