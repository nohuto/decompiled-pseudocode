/*
 * XREFs of ?QueryService@CLauncherUIMode@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803A3DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$Site@UIServiceProvider@@@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@XZ @ 0x1803A1848 (--$Site@UIServiceProvider@@@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIServiceProvider@@@WRL@Micro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherUIMode::QueryService(
        CLauncherUIMode *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_SInPlaceBrowser.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_SInPlaceBrowser.Revision )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_SInPlaceBrowser.SubAuthority;
  if ( !v7 && (*((_BYTE *)this + 104) & 1) != 0 )
    return (unsigned int)-2147467263;
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IFolderView.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IFolderView.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IFolderView.Data4;
  if ( v8 || (*((_BYTE *)this + 104) & 2) == 0 )
  {
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4fdd8ae5_be97_43b0_a418_6216a0314385.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4fdd8ae5_be97_43b0_a418_6216a0314385.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4fdd8ae5_be97_43b0_a418_6216a0314385.Data4;
    if ( !v10 && (*((_BYTE *)this + 104) & 0x10) != 0 )
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_667708d1_a931_4a85_9999_609eaa7dd85a.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_667708d1_a931_4a85_9999_609eaa7dd85a.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_667708d1_a931_4a85_9999_609eaa7dd85a.Data4;
    if ( !v11 )
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4;
    if ( !v12 )
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IExecuteCommandHost.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IExecuteCommandHost.Data1 )
      v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IExecuteCommandHost.Data4;
    if ( !v13 && *((_DWORD *)this + 27) != -1 )
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2e7d8d8c_f368_42f1_88d8_1d717c3f1e34.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2e7d8d8c_f368_42f1_88d8_1d717c3f1e34.Data1 )
      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2e7d8d8c_f368_42f1_88d8_1d717c3f1e34.Data4;
    if ( !v14 )
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_728e9d41_2d68_4714_99bd_fae3742125d5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_728e9d41_2d68_4714_99bd_fae3742125d5.Data1 )
      v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_728e9d41_2d68_4714_99bd_fae3742125d5.Data4;
    if ( !v15 )
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data1 )
      v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8d547fa1_cc45_40c8_b7c1_d48c183f13f3.Data4;
    if ( !v16 && (*((_BYTE *)this + 104) & 0x20) != 0 )
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ExecuteLogUsage.Revision;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ExecuteLogUsage.Revision )
      v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ExecuteLogUsage.SubAuthority;
    if ( v17 || *((char *)this + 104) >= 0 )
    {
      CWRLObjectWithGITSite::Site<IServiceProvider>((__int64)this - 40, &v19);
      if ( v19 )
        v9 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v19 + 24LL))(
               v19,
               a2,
               a3,
               a4);
      else
        v9 = -2147467263;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    }
    else
    {
      return (**((unsigned int (__fastcall ***)(char *, const struct _GUID *, void **))this - 5))(
               (char *)this - 40,
               a3,
               a4);
    }
  }
  else
  {
    return (unsigned int)-2147467263;
  }
  return v9;
}
