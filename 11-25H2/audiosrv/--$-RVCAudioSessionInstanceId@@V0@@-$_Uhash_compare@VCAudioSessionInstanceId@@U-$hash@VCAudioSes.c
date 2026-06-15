/*
 * XREFs of ??$?RVCAudioSessionInstanceId@@V0@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_NAEBVCAudioSessionInstanceId@@0@Z @ 0x1800564F0
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800C7624 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@U.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v5; // bl
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax

  v5 = 0;
  if ( (unsigned int)_o__wcsicmp(*(_QWORD *)a2) )
    return 1;
  v6 = *(_DWORD *)(a2 + 64);
  if ( v6 != *(_DWORD *)(a3 + 64) || !v6 && *(_DWORD *)(a2 + 56) != *(_DWORD *)(a3 + 56) )
    return 1;
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 != *(_DWORD *)(a3 + 48) || !v7 && (unsigned int)_o__wcsicmp(*(_QWORD *)(a2 + 8)) )
    return 1;
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)(a3 + 24);
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a3 + 32);
  if ( v8 )
    return 1;
  return v5;
}
