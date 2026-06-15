/*
 * XREFs of ??1CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18003D5B0
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18003D610 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x18003BF64 (--1CStreamClassPolicyGains@@QEAA@XZ.c)
 */

void __fastcall CStreamClassPolicyGainsWrapper::~CStreamClassPolicyGainsWrapper(CStreamClassPolicyGainsWrapper *this)
{
  CStreamClassPolicyGains::~CStreamClassPolicyGains((CStreamClassPolicyGainsWrapper *)((char *)this + 488));
  CStreamClassPolicyGains::~CStreamClassPolicyGains((CStreamClassPolicyGainsWrapper *)((char *)this + 64));
  std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>::~_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CStreamClassPolicyGains>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>>,0>>((__int64 *)this);
}
