/*
 * XREFs of ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180693720
 * Callers:
 *     ?PinShellLink@CPinnedList@@W7EAAJPEBGPEAUIShellLinkW@@@Z @ 0x180688300 (-PinShellLink@CPinnedList@@W7EAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     DSA_GetItemPtr @ 0x1801F8A80 (DSA_GetItemPtr.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x18022581C (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA?AV01@XZ @ 0x18068A3B0 (--$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA-AV01@XZ.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x18068A6FC (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068AEEC (--1CPinList@@QEAA@XZ.c)
 *     ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ @ 0x18068B010 (--1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18068B434 (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x18068B464 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068C608 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEBGPEAUIShellLinkW@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180692D90 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x180693A9C (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180694BA0 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x1806950E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180695AAC (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x180696CC8 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x180696D5C (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x1806975D4 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinnedList::PinShellLink(CPinnedList *this, char *a2, struct IShellLinkW *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  LPVOID *v8; // rbx
  int v9; // edi
  HRESULT v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  int appended; // eax
  PINENTRY *ItemPtr; // rax
  __int64 (__fastcall *v15)(CPinnedList *, struct _ITEMIDLIST *, __int128 *); // rdi
  __int64 v16; // rdx
  struct _ITEMIDLIST *v18; // [rsp+30h] [rbp-D0h] BYREF
  HDSA hdsa[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  LPWSTR *ppwsz; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[336]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR psz[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  WCHAR Filename[264]; // [rsp+3D0h] [rbp+2D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+618h] [rbp+518h]

  memset_0(v23, 0, sizeof(v23));
  TaskbarPinningTelemetry::PinningActivity::Start<>((TaskbarPinningTelemetry::PinningActivity *)v23);
  v6 = (*(__int64 (__fastcall **)(char *, WCHAR *, __int64))(*((_QWORD *)this - 2) + 104LL))(
         (char *)this - 16,
         psz,
         260LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
    v8 = (LPVOID *)ppwsz;
    if ( !ppwsz )
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91F,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)0x8007000ELL);
LABEL_5:
      v7 = v9;
      goto LABEL_31;
    }
    v10 = SHStrDupW(psz, ppwsz);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x920,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v10);
LABEL_8:
      CBackupLocationManager::`scalar deleting destructor'(v8);
      goto LABEL_5;
    }
    v18 = 0LL;
    v9 = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)v8, a2, a3, &v18);
    if ( v9 < 0 )
    {
      v11 = 2339LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v9);
LABEL_12:
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v18);
      goto LABEL_8;
    }
    v9 = SetPinSourceForPinnedItem(v18, &v18, 0LL);
    if ( v9 < 0 )
    {
      v11 = 2340LL;
      goto LABEL_11;
    }
    v9 = CacheAppIDInIDList(v18);
    if ( v9 < 0 )
    {
      v11 = 2341LL;
      goto LABEL_11;
    }
    *(_OWORD *)hdsa = 0LL;
    v9 = CPinList::Load(hdsa, (CPinnedList *)((char *)this - 16));
    if ( v9 >= 0 )
    {
      appended = CPinList::AppendPidl((CPinList *)hdsa, (CPinnedList *)((char *)this - 16), v18);
      if ( appended >= 0 )
      {
        ItemPtr = (PINENTRY *)DSA_GetItemPtr(hdsa[0], appended);
        PINENTRY::UpdateShellLink(ItemPtr);
        v21 = 0LL;
        v20 = 0uLL;
        v15 = *(__int64 (__fastcall **)(CPinnedList *, struct _ITEMIDLIST *, __int128 *))(*(_QWORD *)this + 88LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
        *((_QWORD *)&v20 + 1) = -1LL;
        v21 = -1LL;
        v9 = v15(this, v18, &v20);
        if ( v9 >= 0 )
        {
          if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
            TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(v23, v20, Filename, 17LL);
          v9 = CPinList::Save((CPinList *)hdsa, (CPinnedList *)((char *)this - 16));
          if ( v9 >= 0 )
          {
            CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)this - 16), v18, 0);
            wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
              v23,
              0LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
            CPinList::~CPinList((CPinList *)hdsa);
            CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v18);
            CBackupLocationManager::`scalar deleting destructor'(v8);
            v7 = 0;
            goto LABEL_31;
          }
          v16 = 2361LL;
        }
        else
        {
          v16 = 2354LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v9);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
        goto LABEL_20;
      }
      v9 = -2147024882;
      v12 = 2346LL;
    }
    else
    {
      v12 = 2344LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v9);
LABEL_20:
    CPinList::~CPinList((CPinList *)hdsa);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x91C,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)(unsigned int)v6);
LABEL_31:
  TaskbarPinningTelemetry::PinningActivity::~PinningActivity((TaskbarPinningTelemetry::PinningActivity *)v23);
  return v7;
}
