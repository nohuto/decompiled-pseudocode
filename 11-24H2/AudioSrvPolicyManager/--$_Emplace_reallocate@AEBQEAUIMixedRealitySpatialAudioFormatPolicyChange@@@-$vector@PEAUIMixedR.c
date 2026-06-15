/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x18002FE1C
 * Callers:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x18000C7D0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180033748 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudio.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18003F3C8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@AEAV?$allocator@PEAUIAudioAppVolumePolicyChange@@@0@AEA_K@Z @ 0x18002FDC4 (--$_Allocate_at_least_helper@V-$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@YAPEAPEAU.c)
 *     memmove_0 @ 0x180048BB8 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  _QWORD *result; // rax
  void *v20; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  v20 = (void *)v8;
  v12 = std::_Allocate_at_least_helper<std::allocator<IAudioAppVolumePolicyChange *>>(v10, (unsigned __int64 *)&v20);
  v13 = v12;
  v20 = v12;
  try
  {
    v14 = &v12[v6];
    *v14 = *a3;
    v15 = *(_BYTE **)(a1 + 8);
    v16 = *(_BYTE **)a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, (size_t)&a2[-*(_QWORD *)a1]);
      v17 = v14 + 1;
      v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[v9];
    *(_QWORD *)(a1 + 16) = &v13[v8];
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  return result;
}
