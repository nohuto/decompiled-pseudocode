/*
 * XREFs of ?get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800A9A80
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800A95A0 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_Properties(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &GUID_58b612f7_0fbb_480d_abea_5ce1a45a9ec7,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 57LL;
  }
  else
  {
    v5 = 56LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\conten"
             "tdeliverymanagerappinfo.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v8);
  return v4;
}
