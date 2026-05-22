/*
 * XREFs of ??1HidLampMultiUpdateReportParser@@UEAA@XZ @ 0x1800EC854
 * Callers:
 *     ??_GHidLampMultiUpdateReportParser@@UEAAPEAXI@Z @ 0x1800EC9E0 (--_GHidLampMultiUpdateReportParser@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall HidLampMultiUpdateReportParser::~HidLampMultiUpdateReportParser(HidLampMultiUpdateReportParser *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx

  *(_QWORD *)this = &HidLampMultiUpdateReportParser::`vftable';
  v2 = (char *)*((_QWORD *)this + 37);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 39) - (_QWORD)v2) >> 3)));
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 33);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 35) - (_QWORD)v3) >> 3)));
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 29);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 31) - (_QWORD)v4) >> 3)));
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 25);
  if ( v5 )
  {
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 27) - (_QWORD)v5) >> 3)));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 21);
  if ( v6 )
  {
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 23) - (_QWORD)v6) >> 3)));
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
