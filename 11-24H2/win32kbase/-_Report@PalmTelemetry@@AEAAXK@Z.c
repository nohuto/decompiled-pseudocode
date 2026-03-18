/*
 * XREFs of ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1401F2460
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x14010A94C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1400B1ED0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ApiSetGetUserHandedness @ 0x140125320 (ApiSetGetUserHandedness.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x140198A4C (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x14019A614 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall PalmTelemetry::_Report(PalmTelemetry *this, int a2)
{
  unsigned __int64 v2; // r13
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r15d
  int v10; // edi
  int v11; // r14d
  int v12; // esi
  int v13; // ebp
  int v14; // ebx
  int UserHandedness; // eax
  __int64 v16; // rdx
  char *v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+B0h] [rbp+8h] BYREF
  int v19; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v20; // [rsp+C8h] [rbp+20h] BYREF

  v2 = 0LL;
  v20 = 0LL;
  v4 = *((_DWORD *)this + 4);
  v17 = (char *)this + 28;
  if ( !v4 || (unsigned int)(a2 - v4) >= 0x2710 )
  {
    v5 = 0LL;
    v19 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      do
      {
        v6 = v5 + *((_DWORD *)this + 6);
        v7 = v6 / 0x1AA;
        v8 = v6 % 0x1AA;
        if ( (_DWORD)v5 )
          LODWORD(v18) = 0;
        else
          LODWORD(v18) = *((_DWORD *)this + 519);
        v9 = *((_DWORD *)this + 6 * v8 + 525);
        v10 = *((_DWORD *)this + 6 * v8 + 521);
        v11 = *((_DWORD *)this + 6 * v8 + 524) / 100;
        LODWORD(v7) = (unsigned __int64)(1374389535LL * *((int *)this + 6 * v8 + 523)) >> 32;
        v12 = *((_DWORD *)this + 6 * v8 + 520);
        v13 = *((_DWORD *)this + 6 * v8 + 523) / 100;
        v14 = *((_DWORD *)this + 6 * v8 + 522);
        UserHandedness = ApiSetGetUserHandedness(v5, v7);
        RtlStringCchPrintfA(
          v17,
          2048 - v2,
          "%lu,%lu,0x%x,0x%x,%lu,%lu,%lu,%lu;",
          UserHandedness,
          v12,
          v10,
          v14,
          v13,
          v11,
          v9,
          v18);
        RtlStringCchLengthA((const char *)this + 28, v16, &v20);
        v2 = v20;
        if ( v20 + 48 >= 0x800 )
        {
          v18 = 1LL;
          wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_PenTapped__private_descriptor, 1, 2u, 1LL);
          if ( (unsigned int)dword_14029AF10 > 5 && tlgKeywordOn((__int64)&dword_14029AF10, 0x400000000000LL) )
          {
            v18 = (__int64)this + 28;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (__int64)&dword_14029AF10,
              byte_14027A5BF,
              0LL,
              0LL,
              (void **)&v18);
          }
          memset((char *)this + 28, 0, 0x800uLL);
          v2 = 0LL;
          v20 = 0LL;
        }
        v5 = (unsigned int)(v19 + 1);
        v17 = (char *)this + v2 + 28;
        v19 = v5;
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 3) );
      if ( v2 )
      {
        v18 = 1LL;
        wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_PenTapped__private_descriptor, 1, 2u, 1LL);
        if ( (unsigned int)dword_14029AF10 > 5 && tlgKeywordOn((__int64)&dword_14029AF10, 0x400000000000LL) )
        {
          v18 = (__int64)this + 28;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_14029AF10,
            byte_14027A5BF,
            0LL,
            0LL,
            (void **)&v18);
        }
      }
    }
    *((_DWORD *)this + 4) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
}
