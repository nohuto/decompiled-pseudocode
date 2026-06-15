/*
 * XREFs of ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x180032180
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180005980 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x180034740 (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 * Callees:
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180011F20 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001E94C (--0-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800327C4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180032928 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcess::ForEachSession<IAudioSessionPolicyControl>(__int64 a1, __int64 a2)
{
  __int64 *v3; // r14
  __int64 ***v4; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rcx
  void *v8; // rbx
  void *v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+70h] [rbp+8h] BYREF
  void *v14; // [rsp+80h] [rbp+18h] BYREF
  int *v15; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = 0LL;
  v12 = 0LL;
  v4 = *(__int64 ****)(a1 + 72);
  v5 = *v4;
  v6 = (__int64 *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  while ( v5 != (__int64 **)v4 )
  {
    v14 = 0LL;
    if ( (int)wil::details::weak_query_policy::query(
                (struct IWeakReference *)v5[3],
                &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                &v14) >= 0 )
    {
      if ( v6 == v3 )
      {
        std::vector<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy> const &>(
          &v11,
          v6,
          &v14);
        v3 = v12;
        v6 = (__int64 *)*((_QWORD *)&v11 + 1);
      }
      else
      {
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
          v6++,
          (__int64 *)&v14);
        *((_QWORD *)&v11 + 1) = v6;
      }
      LOBYTE(v13) = 0;
      v15 = &v13;
      v10 = v14;
      v7 = *(_QWORD *)(a2 + 56);
      if ( !v7 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, void **, int **))(*(_QWORD *)v7 + 16LL))(v7, &v10, &v15);
      if ( (_BYTE)v13 )
      {
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v14);
        break;
      }
    }
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v14);
    v5 = (__int64 **)*v5;
  }
  v8 = (void *)v11;
  if ( (_QWORD)v11 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>>>(v11, v6);
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)(8 * (((char *)v3 - (_BYTE *)v8) >> 3)));
  }
  return 0LL;
}
