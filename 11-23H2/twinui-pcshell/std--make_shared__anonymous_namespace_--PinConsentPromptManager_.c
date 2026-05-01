/*
 * XREFs of std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x180088CD4
 * Callers:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180088BE8 (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager___ @ 0x180088D80 (std--_Ref_count_obj2__anonymous_namespace_--PinConsentPromptManager_--_Ref_count_obj2__anonymous.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::make_shared__anonymous_namespace_::PinConsentPromptManager_(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // rax
  void *v8; // [rsp+20h] [rbp-28h]

  v8 = operator new(0x40uLL);
  v2 = std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager___(v8);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  v3 = (_QWORD *)(v2 + 16);
  *(_QWORD *)a1 = v2 + 16;
  if ( v2 != -16 )
  {
    v4 = *(_QWORD *)(v2 + 24);
    if ( !v4 || !*(_DWORD *)(v4 + 8) )
    {
      if ( v2 )
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
      v5 = *(volatile signed __int32 **)(a1 + 8);
      if ( v5 )
      {
        *(_QWORD *)&v6 = v2 + 16;
        *((_QWORD *)&v6 + 1) = *(_QWORD *)(a1 + 8);
        _InterlockedIncrement(v5 + 3);
      }
      else
      {
        v6 = 0LL;
      }
      *v3 = v6;
      *(_QWORD *)&v6 = v3[1];
      v3[1] = *((_QWORD *)&v6 + 1);
      if ( (_QWORD)v6 )
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
      if ( v5 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
