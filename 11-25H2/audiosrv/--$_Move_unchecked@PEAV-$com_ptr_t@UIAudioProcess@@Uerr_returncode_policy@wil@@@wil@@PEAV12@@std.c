/*
 * XREFs of ??$_Move_unchecked@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180026374
 * Callers:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180026200 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Move_unchecked<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  for ( i = a1; i != a2; ++i )
  {
    v6 = *i;
    *i = 0LL;
    v7 = *a3;
    *a3 = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    ++a3;
  }
  return a3;
}
