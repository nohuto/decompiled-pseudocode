/*
 * XREFs of ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18054F2CC
 * Callers:
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18022E70C (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?AddRemoteDesktop@CVirtualDesktopCollection@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18054F430 (-AddRemoteDesktop@CVirtualDesktopCollection@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9BC4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x180269D70 (-IsRemote@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 *     ?RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ @ 0x18054FB94 (-RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::AddDesktopHelper(
        CVirtualDesktopCollection *this,
        __int64 (__fastcall ***a2)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **))
{
  void *v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  void *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 (__fastcall ***v15)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **); // [rsp+20h] [rbp-10h] BYREF
  __int64 (__fastcall ***v16)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **); // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v18; // [rsp+60h] [rbp+30h] BYREF

  v18 = 0;
  if ( (int)CVirtualDesktopCollection::IsRemote(this, a2, &v18) >= 0 && v18 )
  {
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v5 = 0;
    v6 = *((_QWORD *)this + 11);
    if ( v6 != *((_QWORD *)this + 13)
      || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                 (__int64)this + 80,
                 v6 + 1,
                 v4),
          v5 >= 0) )
    {
      v7 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v7 + 1;
      v8 = (__int64 *)(*((_QWORD *)this + 10) + 8 * v7);
      if ( v8 )
      {
        *v8 = 0LL;
        if ( v8 != (__int64 *)&v15 )
        {
          *v8 = (__int64)a2;
          v15 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    if ( v5 < 0 )
    {
      v9 = 341LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v16 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    v5 = 0;
    v12 = *((_QWORD *)this + 7);
    if ( v12 != *((_QWORD *)this + 9)
      || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                 (__int64)this + 48,
                 v12 + 1,
                 v11),
          v5 >= 0) )
    {
      v13 = *((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v13 + 1;
      v14 = (__int64 *)(*((_QWORD *)this + 6) + 8 * v13);
      if ( v14 )
      {
        *v14 = 0LL;
        if ( v14 != (__int64 *)&v16 )
        {
          *v14 = (__int64)a2;
          v16 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    if ( v5 < 0 )
    {
      v9 = 346LL;
      goto LABEL_10;
    }
  }
  CVirtualDesktopCollection::RecalculateCopyOfAllDesktops(this);
  return 0LL;
}
