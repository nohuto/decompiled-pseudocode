/*
 * XREFs of ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18000D6B4
 * Callers:
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18000D62C (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180056E14 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     ??Rcase_insensitive_hash@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18000F708 (--Rcase_insensitive_hash@@QEBA_KAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18009C798 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x1800BFCCC (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800BFF80 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::UpdateEndpointUnderLock(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        int a3,
        const struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4)
{
  __int64 v5; // r15
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int128 v24; // [rsp+28h] [rbp-60h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h]

  v5 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v24 = 0LL;
  si128 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  std::wstring::_Construct<1,unsigned short const *>(&v24, a2);
  v11 = case_insensitive_hash::operator()(v10, &v24);
  v14 = *((_QWORD *)this + 100);
  v15 = *(_QWORD *)(v14 + 16 * (v11 & *((_QWORD *)this + 103)) + 8);
  if ( v15 == *((_QWORD *)this + 98) )
  {
LABEL_15:
    v15 = 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(v14 + 16 * (v11 & *((_QWORD *)this + 103)));
    while ( 1 )
    {
      v17 = std::wstring::c_str(v15 + 16, v12, v13);
      v19 = std::wstring::c_str(&v24, v17, v18);
      if ( !(unsigned int)_o__wcsicmp(v19, v20) )
        break;
      if ( v15 == v16 )
        goto LABEL_15;
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  if ( !v15 )
    v15 = *((_QWORD *)this + 98);
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v24, v12) )
    std::wstring::_Deallocate_for_capacity(v21, v24, si128.m128i_i64[1]);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v24) = 0;
  if ( v15 != *((_QWORD *)this + 98) )
  {
    v22 = 32 * v5;
    *(_BYTE *)(v22 + *(_QWORD *)(v15 + 48)) = *((_BYTE *)a4 + 32 * v5);
    *(_BYTE *)(v22 + *(_QWORD *)(v15 + 48) + 1) = *((_BYTE *)a4 + 32 * v5 + 1);
    *(_DWORD *)(v22 + *(_QWORD *)(v15 + 48) + 4) = *((_DWORD *)a4 + 8 * v5 + 1);
    *(_DWORD *)(v22 + *(_QWORD *)(v15 + 48) + 8) = *((_DWORD *)a4 + 8 * v5 + 2);
    *(_QWORD *)(v22 + *(_QWORD *)(v15 + 48) + 16) = *((_QWORD *)a4 + 4 * v5 + 2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
