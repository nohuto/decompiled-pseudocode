/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800A39F8
 * Callers:
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A33B0 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x1800A38AC (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800A3B4C (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  GUID *v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int64 v15; // r9
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a3 - *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1;
  if ( *a3 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1 )
    v4 = a3[1] - *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4;
  if ( v4 )
  {
    v5 = *a3 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
    if ( *a3 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
      v5 = a3[1] - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
    if ( v5 )
    {
      v6 = *a3 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
        v6 = a3[1] - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
      if ( v6 )
      {
        v7 = *a3 - *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1;
        if ( *a3 == *(_QWORD *)&GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data1 )
          v7 = a3[1] - *(_QWORD *)GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90.Data4;
        if ( v7 )
        {
          v8 = *a3 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
          if ( *a3 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
            v8 = a3[1] - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
          if ( v8 )
            return (unsigned int)PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
                                   a1,
                                   a2,
                                   a3,
                                   a2);
          v9 = *a2;
          v10 = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
          v11 = a1[6];
        }
        else
        {
          v9 = *a2;
          v10 = &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90;
          v11 = a1[7];
        }
      }
      else
      {
        v9 = *a2;
        v10 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
        v11 = a1[8];
      }
    }
    else
    {
      v9 = *a2;
      v10 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
      v11 = a1[9];
    }
    v12 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v9 + 24))(a2, v10, v11);
    v13 = v12;
    if ( v12 >= 0 )
      return 0;
    v15 = (unsigned int)v12;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x295,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v15);
    return v13;
  }
  v16 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD))(*a2 + 24))(
          a2,
          &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8,
          a1[10]);
  v13 = v16;
  if ( v16 < 0 )
  {
    v15 = (unsigned int)v16;
    goto LABEL_23;
  }
  return 0LL;
}
