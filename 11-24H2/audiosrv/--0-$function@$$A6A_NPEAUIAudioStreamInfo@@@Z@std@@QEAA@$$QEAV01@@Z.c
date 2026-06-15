/*
 * XREFs of ??0?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1800B644C
 * Callers:
 *     _lambda_c5ba6885c59c7d44add3d2e24646e672_::operator() @ 0x1800B7560 (_lambda_c5ba6885c59c7d44add3d2e24646e672_--operator().c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800BC4DC (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180027BB0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::function<bool (IAudioStreamInfo *)>::function<bool (IAudioStreamInfo *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    if ( v3 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, a1);
      std::_Func_class<void,>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v3;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  return a1;
}
