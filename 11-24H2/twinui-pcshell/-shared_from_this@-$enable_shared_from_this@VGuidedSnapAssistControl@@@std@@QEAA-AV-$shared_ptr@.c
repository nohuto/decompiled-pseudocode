/*
 * XREFs of ?shared_from_this@?$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA?AV?$shared_ptr@VGuidedSnapAssistControl@@@2@XZ @ 0x180208AB4
 * Callers:
 *     ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x1805BBB9C (-CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18008A788 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180296EB0 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::enable_shared_from_this<GuidedSnapAssistControl>::shared_from_this(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(std::_Ref_count_base **)(a1 + 8);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    std::_Throw_bad_weak_ptr();
  *v3 = *v4;
  v3[1] = v4[1];
  return v3;
}
