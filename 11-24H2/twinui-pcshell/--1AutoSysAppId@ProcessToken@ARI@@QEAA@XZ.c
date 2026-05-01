/*
 * XREFs of ??1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ @ 0x18005DCAC
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18005D4A0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?Free@ARI@@YAXPEAX@Z @ 0x18005E354 (-Free@ARI@@YAXPEAX@Z.c)
 */

void __fastcall ARI::ProcessToken::AutoSysAppId::~AutoSysAppId(ARI::ProcessToken::AutoSysAppId *this, void *a2)
{
  void *v3; // rcx

  v3 = *(void **)this;
  if ( v3 )
  {
    ARI::Free(v3, a2);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
}
