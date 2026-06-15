/*
 * XREFs of ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x140035710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1400357D0 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsDelegator::OnPropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  void *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  wil::details::weak_query_policy::query(
    *(struct IWeakReference **)(a1 + 16),
    &GUID_20049d40_56d5_400e_a2ef_385599feed49,
    &v13);
  v5 = v13;
  if ( !v13 )
  {
LABEL_4:
    if ( v5 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  v6 = *(_QWORD *)v13;
  *(_OWORD *)v10 = *(_OWORD *)a3;
  v11 = *(_DWORD *)(a3 + 16);
  v7 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(v6 + 24))(v13, a2, v10);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v5 = v13;
    goto LABEL_4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
    (const char *)(unsigned int)v7);
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  return v8;
}
