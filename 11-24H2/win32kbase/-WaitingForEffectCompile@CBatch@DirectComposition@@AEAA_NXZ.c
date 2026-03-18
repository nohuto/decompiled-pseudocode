/*
 * XREFs of ?WaitingForEffectCompile@CBatch@DirectComposition@@AEAA_NXZ @ 0x14022578C
 * Callers:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z @ 0x1400DCB0C (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z.c)
 * Callees:
 *     ?EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z @ 0x1402243A0 (-EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z.c)
 */

char __fastcall DirectComposition::CBatch::WaitingForEffectCompile(DirectComposition::CBatch *this)
{
  unsigned __int64 v1; // rdx
  char v2; // bl
  __int64 v3; // rax
  const unsigned __int64 *v4; // rdx

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 40) + 272LL) < v1 )
    {
      v4 = (const unsigned __int64 *)*((_QWORD *)this + 13);
      v2 = 1;
      if ( v4 )
        return DirectComposition::CConnection::EffectHashesCompiled(
                 *(DirectComposition::CConnection **)(v3 + 40),
                 v4,
                 *((_DWORD *)this + 28)) == 0;
    }
  }
  return v2;
}
