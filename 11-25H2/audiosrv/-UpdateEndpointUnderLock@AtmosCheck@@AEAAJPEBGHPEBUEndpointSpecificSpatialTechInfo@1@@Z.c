/*
 * XREFs of ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18006BD6C
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x1800097E4 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18006BCE4 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 * Callees:
 *     ??Rcase_insensitive_hash@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180014DE8 (--Rcase_insensitive_hash@@QEBA_KAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18009FED4 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x1800C108C (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800C1360 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
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
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 v19; // [rsp+28h] [rbp-60h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h]

  v5 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v19 = 0LL;
  si128 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  std::wstring::_Construct<1,unsigned short const *>(&v19, a2, v9);
  v11 = case_insensitive_hash::operator()(v10, (__int64)&v19);
  v12 = *((_QWORD *)this + 79);
  v13 = *(_QWORD *)(v12 + 16 * (v11 & *((_QWORD *)this + 82)) + 8);
  if ( v13 == *((_QWORD *)this + 77) )
  {
LABEL_15:
    v13 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(v12 + 16 * (v11 & *((_QWORD *)this + 82)));
    while ( 1 )
    {
      std::wstring::c_str(v13 + 16);
      v15 = std::wstring::c_str((__int64)&v19);
      if ( !(unsigned int)_o__wcsicmp(v15) )
        break;
      if ( v13 == v14 )
        goto LABEL_15;
      v13 = *(_QWORD *)(v13 + 8);
    }
  }
  if ( !v13 )
    v13 = *((_QWORD *)this + 77);
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v19) )
    std::wstring::_Deallocate_for_capacity(v16, v19, si128.m128i_i64[1]);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v19) = 0;
  if ( v13 != *((_QWORD *)this + 77) )
  {
    v17 = 32 * v5;
    *(_BYTE *)(v17 + *(_QWORD *)(v13 + 48)) = *((_BYTE *)a4 + 32 * v5);
    *(_BYTE *)(v17 + *(_QWORD *)(v13 + 48) + 1) = *((_BYTE *)a4 + 32 * v5 + 1);
    *(_DWORD *)(v17 + *(_QWORD *)(v13 + 48) + 4) = *((_DWORD *)a4 + 8 * v5 + 1);
    *(_DWORD *)(v17 + *(_QWORD *)(v13 + 48) + 8) = *((_DWORD *)a4 + 8 * v5 + 2);
    *(_QWORD *)(v17 + *(_QWORD *)(v13 + 48) + 16) = *((_QWORD *)a4 + 4 * v5 + 2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
