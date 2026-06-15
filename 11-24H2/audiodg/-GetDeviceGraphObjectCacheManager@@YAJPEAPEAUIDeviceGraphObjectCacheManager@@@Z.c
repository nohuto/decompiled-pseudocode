/*
 * XREFs of ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x140005A9C
 * Callers:
 *     ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140005904 (-GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F3D0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x14004BD10 (--$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDeviceGraphO.c)
 *     atexit @ 0x1400590A4 (atexit.c)
 *     _Init_thread_footer @ 0x140059248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400592B0 (_Init_thread_header.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceGraphObjectCacheManager(struct IDeviceGraphObjectCacheManager **a1)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( dword_1400C5800 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_1400C5800);
    if ( dword_1400C5800 == -1 )
    {
      v5 = (__int64 *)Microsoft::WRL::Details::Make<CDeviceGraphObjectCacheManager,>(&v10);
      v6 = *v5;
      *v5 = 0LL;
      qword_1400C57F8 = v6;
      v7 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      atexit(GetDeviceGraphObjectCacheManager_::_2_::_dynamic_atexit_destructor_for__pCDGOCM__);
      Init_thread_footer(&dword_1400C5800);
    }
  }
  if ( qword_1400C57F8 )
  {
    v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDeviceGraphObjectCacheManager **))qword_1400C57F8)(
           qword_1400C57F8,
           &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
           a1);
    if ( v2 >= 0 )
      return 0LL;
    v4 = 623LL;
  }
  else
  {
    v2 = -2147024882;
    v4 = 621LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)v2,
    v8);
  return (unsigned int)v2;
}
