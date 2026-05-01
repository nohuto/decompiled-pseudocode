/*
 * XREFs of std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x1802A7114
 * Callers:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802A4DEC (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::PinConsentPromptManager::PinConsentPromptManager @ 0x1802A71EC (_anonymous_namespace_--PinConsentPromptManager--PinConsentPromptManager.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::make_shared__anonymous_namespace_::PinConsentPromptManager_(__int64 a1)
{
  char *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  std::_Ref_count_base *v8; // rax

  v2 = (char *)operator new(0x40uLL);
  *(_OWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 1;
  v3 = v2 + 16;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = off_1807269A8;
  anonymous_namespace_::PinConsentPromptManager::PinConsentPromptManager(v2 + 16);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v2 + 16;
  *(_QWORD *)(a1 + 8) = v2;
  if ( v2 != (char *)-16LL )
  {
    v4 = *((_QWORD *)v2 + 3);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
      v5 = *(volatile signed __int32 **)(a1 + 8);
      if ( v5 )
      {
        v6 = v3;
        v7 = *(_QWORD *)(a1 + 8);
        _InterlockedIncrement(v5 + 3);
      }
      else
      {
        v7 = 0LL;
        v6 = 0LL;
      }
      *v3 = v6;
      v8 = (std::_Ref_count_base *)v3[1];
      v3[1] = v7;
      if ( v8 )
        std::_Ref_count_base::_Decwref(v8);
      if ( v5 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
