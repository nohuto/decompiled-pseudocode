/*
 * XREFs of ??1CPolicyConfig@@UEAA@XZ @ 0x1800CBAE4
 * Callers:
 *     ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x1800CBF00 (--_GCPolicyConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180017248 (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CPolicyConfig::~CPolicyConfig(CPolicyConfig *this)
{
  std::vector<Microsoft::WRL::WeakRef>::_Tidy((__int64)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
