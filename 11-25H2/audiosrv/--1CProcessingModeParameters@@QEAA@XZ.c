/*
 * XREFs of ??1CProcessingModeParameters@@QEAA@XZ @ 0x1800272C0
 * Callers:
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180027278 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18002752C (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006D94C (--1CAudioStream@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessingModeParameters::~CProcessingModeParameters(CProcessingModeParameters *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    CoTaskMemFree(v2);
  if ( *(_QWORD *)this )
  {
    std::_Deallocate<16,0>(
      *(char **)this,
      (const struct std::nothrow_t *)(4 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 2)));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
