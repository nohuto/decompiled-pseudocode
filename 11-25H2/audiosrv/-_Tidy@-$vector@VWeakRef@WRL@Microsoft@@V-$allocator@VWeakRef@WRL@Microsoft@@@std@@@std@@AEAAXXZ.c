/*
 * XREFs of ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180023F84
 * Callers:
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18002752C (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180087270 (--1-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BF6A0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800C6838 (--1CAudioSessionManager@@QEAA@XZ.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x1800CC3E4 (--1CPolicyConfig@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800F9D6C (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x1801056A0 (--1-$_Tidy_guard@V-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@s.c)
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x1801058A0 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Delete_this @ 0x180108820 (std--_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_--_Delete_this.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180022D4C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::_Tidy(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  void *v4; // rcx
  __int64 v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    while ( v1 != v3 )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v1++);
    v4 = *(void **)a1;
    v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    v7 = *(void **)a1;
    v6 = (const struct std::nothrow_t *)(v5 & 0xFFFFFFFFFFFFFFF8uLL);
    v8 = (unsigned __int64)v6;
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v8);
      v4 = v7;
      v6 = (const struct std::nothrow_t *)v8;
    }
    operator delete(v4, v6);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
