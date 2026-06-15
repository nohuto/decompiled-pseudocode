/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x18001C60C
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000ACF4 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18000B440 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180006D70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Construct_in_place@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAPEBG@Z @ 0x18000D130 (--$_Construct_in_place@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  unsigned int v11; // edi
  __int64 result; // rax
  int v13[2]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+44h] [rbp-24h]
  int *v19; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _WORD *v21; // [rsp+78h] [rbp+10h] BYREF

  v21 = a2;
  v7 = (volatile signed __int32 *)operator new(0x30uLL);
  try
  {
    v8 = v7;
    if ( v7 )
    {
      *(_OWORD *)v7 = 0LL;
      *((_DWORD *)v7 + 2) = 1;
      *((_DWORD *)v7 + 3) = 1;
      *(_QWORD *)v7 = &std::_Ref_count_obj2<std::wstring>::`vftable';
      std::_Construct_in_place<std::wstring,unsigned short const * &>((__int64)(v7 + 4), &v21);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
      _InterlockedIncrement(v8 + 2);
    *(_QWORD *)v13 = &off_180052990;
    v14 = v8 + 4;
    v15 = v8;
    v16 = a3;
    v17 = a4;
    v18 = a5;
    v19 = v13;
    v9 = QueueGenericWorkItem((__int64 *)v13);
    v11 = v9;
    if ( v9 >= 0 )
    {
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EE,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pickerhostcontext.cpp",
        (const char *)(unsigned int)v9);
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
      result = v11;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F2,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pick"
                                         "erhostcontext.cpp",
                           v10);
  }
  return result;
}
