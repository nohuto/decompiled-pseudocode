/*
 * XREFs of ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180083638
 * Callers:
 *     ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800C990C (-PublishAudioEffects@CAudioStream@@AEAAXXZ.c)
 * Callees:
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800087B0 (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800837EC (-GetControllableEffects@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudi.c)
 *     ??1?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x180087958 (--1-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800A6B00 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 *     ?MergeEffectsLists@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@3@0@Z @ 0x1800C97E0 (-MergeEffectsLists@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::GetAudioEffects(CAudioStream *this, struct AudioEffectInternal **a2, unsigned int *a3)
{
  int ControllableEffects; // eax
  unsigned int v7; // ebx
  int DiscoveredEffects; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  struct AudioEffectInternal *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *a2 = 0LL;
  *a3 = 0;
  v23 = 0LL;
  v24 = 0LL;
  ControllableEffects = CAudioStream::GetControllableEffects(this, &v23);
  v7 = ControllableEffects;
  if ( ControllableEffects >= 0 )
  {
    v21 = 0LL;
    v22 = 0LL;
    DiscoveredEffects = CAudioStream::GetDiscoveredEffects((__int64)this, (__int64)&v21);
    v7 = DiscoveredEffects;
    if ( DiscoveredEffects < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x79F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)DiscoveredEffects);
LABEL_5:
      std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>(&v21);
      goto LABEL_16;
    }
    v19 = 0LL;
    v20 = 0LL;
    v10 = CAudioStream::MergeEffectsLists(v9, &v23, &v21, &v19);
    v7 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 1955LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)v11);
      std::vector<AudioEffectInternal>::_Tidy(&v19);
      goto LABEL_5;
    }
    v13 = v19;
    if ( (_QWORD)v19 != *((_QWORD *)&v19 + 1) )
    {
      v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v19 + 1) - v19) >> 3);
      v15 = (struct AudioEffectInternal *)CoTaskMemAlloc(8 * ((__int64)(*((_QWORD *)&v19 + 1) - v19) >> 3));
      if ( !v15 )
      {
        v7 = -2147024882;
        v11 = 2147942414LL;
        v12 = 1963LL;
        goto LABEL_8;
      }
      v16 = 0LL;
      do
      {
        v17 = 3 * v16;
        *(_OWORD *)((char *)v15 + 8 * v17) = *(_OWORD *)v13;
        *((_DWORD *)v15 + 2 * v17 + 4) = *(_DWORD *)(v13 + 16);
        *((_DWORD *)v15 + 2 * v17 + 5) = *(_DWORD *)(v13 + 20);
        v16 = (unsigned int)(v16 + 1);
        v13 += 24LL;
      }
      while ( v13 != *((_QWORD *)&v19 + 1) );
      *a2 = v15;
      *a3 = v14;
    }
    std::vector<AudioEffectInternal>::_Tidy(&v19);
    std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>(&v21);
    v7 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x79C,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)ControllableEffects);
LABEL_16:
  std::vector<AudioEffectInternal>::_Tidy(&v23);
  return v7;
}
