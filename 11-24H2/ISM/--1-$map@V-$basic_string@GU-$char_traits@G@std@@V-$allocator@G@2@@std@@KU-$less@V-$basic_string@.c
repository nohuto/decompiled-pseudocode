/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@@std@@QEAA@XZ @ 0x18009C5E0
 * Callers:
 *     __lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()_::_1_::dtor$12 @ 0x1801D2E65 (__lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator()_--_1_--dtor$12.c)
 *     __lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator()_::_1_::dtor$5 @ 0x1801D4E29 (__lambda_2f33fc4b0ac679fd125de0d601496fc7_--operator()_--_1_--dtor$5.c)
 *     _HapticProcessor::HapticProcessor_::_1_::dtor$1 @ 0x1801D4FEA (_HapticProcessor--HapticProcessor_--_1_--dtor$1.c)
 *     __lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator()_::_1_::dtor$2 @ 0x1801D95AD (__lambda_9db3a47598234cc48958c5ce7f83f5e9_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<std::wstring,unsigned long>::~map<std::wstring,unsigned long>(char **a1)
{
  std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(a1);
}
