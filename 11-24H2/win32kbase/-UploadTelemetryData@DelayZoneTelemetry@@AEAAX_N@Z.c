/*
 * XREFs of ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x14015147C
 * Callers:
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x14021F69C (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x14021F7B0 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x14021F900 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1400B1ED0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x140198A4C (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x14019A614 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall DelayZoneTelemetry::UploadTelemetryData(DelayZoneTelemetry *this, char a2)
{
  const char *v2; // r14
  char v4; // r12
  char *v5; // r10
  unsigned __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+B0h] [rbp+8h] BYREF

  v13 = 0LL;
  v2 = (char *)this + 16;
  v4 = 0;
  v5 = (char *)this + 16;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a2 || (unsigned int)(v6 - *((_DWORD *)this + 3)) >= 0x2710 )
  {
    v7 = *((_DWORD *)this + 2);
    v8 = 0;
    if ( v7 <= 0xD5 )
    {
      *((_DWORD *)this + 2) = v7;
      if ( !v7 )
        return;
    }
    else
    {
      *((_DWORD *)this + 2) = 213;
    }
    v9 = v13;
    do
    {
      if ( !*v2 )
      {
        RtlStringCchPrintfA(v5, 2048 - v9, "%lu,%lu_", *(_DWORD *)this, *((_DWORD *)this + 1));
        RtlStringCchLengthA(v2, v11, &v13);
        v9 = v13;
        v5 = (char *)this + v13 + 16;
      }
      v10 = v8 % 0xD5;
      RtlStringCchPrintfA(
        v5,
        2048 - v9,
        "%d,%ld,%ld,%d,%lu,0x%x,%d,%d,%d,%ld,%ld,%lu;",
        *((_DWORD *)this + 12 * v10 + 516),
        *((_DWORD *)this + 12 * v10 + 517),
        *((_DWORD *)this + 12 * v10 + 518),
        *((_DWORD *)this + 12 * v10 + 519),
        *((_DWORD *)this + 12 * v10 + 520),
        *((_DWORD *)this + 12 * v10 + 521),
        *((_DWORD *)this + 12 * v10 + 522),
        *((_DWORD *)this + 12 * v10 + 523),
        *((_DWORD *)this + 12 * v10 + 524),
        *((_DWORD *)this + 12 * v10 + 525),
        *((_DWORD *)this + 12 * v10 + 526),
        *((_DWORD *)this + 12 * v10 + 527));
      RtlStringCchLengthA(v2, v12, &v13);
      v9 = v13;
      if ( v13 + 96 >= 0x800 )
      {
        if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
        {
          v13 = (unsigned __int64)v2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_14029AF48,
            byte_14027F15D,
            0LL,
            0LL,
            (void **)&v13);
        }
        v9 = 0LL;
        v13 = 0LL;
        v4 = 1;
        memset((char *)this + 17, 0, 0x7FFuLL);
        *v2 = 0;
      }
      ++v8;
      v5 = (char *)this + v9 + 16;
    }
    while ( v8 < *((_DWORD *)this + 2) );
    if ( v9 )
    {
      if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
      {
        v13 = (unsigned __int64)this + 16;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_14029AF48,
          byte_14027F15D,
          0LL,
          0LL,
          (void **)&v13);
      }
    }
    else if ( !v4 )
    {
      return;
    }
    *((_DWORD *)this + 2) = 0;
    memset((char *)this + 2064, 0, 0x27F0uLL);
    memset((char *)this + 17, 0, 0x7FFuLL);
    *((_BYTE *)this + 16) = 0;
    *((_DWORD *)this + 3) = v6;
  }
}
