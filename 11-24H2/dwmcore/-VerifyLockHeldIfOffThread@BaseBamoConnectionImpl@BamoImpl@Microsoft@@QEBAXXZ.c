/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18021CECC
 * Callers:
 *     ?GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ @ 0x18021CE70 (-GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ.c)
 *     ?GetRestrictToProcessIds@BamoDataSourceProxy@@UEAAPEAVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x18021CEA0 (-GetRestrictToProcessIds@BamoDataSourceProxy@@UEAAPEAVBamoList_uint_Proxy@dataprovider_AutoBamos.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  DWORD CurrentThreadId; // edi
  const char *v3; // r9
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    CurrentThreadId = GetCurrentThreadId();
    if ( *((_DWORD *)this + 46) != CurrentThreadId )
    {
      v4 = *((_DWORD *)this + 6);
      if ( v4 )
      {
        if ( v4 != CurrentThreadId )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x959,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v3);
      }
      else
      {
        v5 = *((_QWORD *)this + 7);
        v10 = 0;
        v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 88LL))(v5, &v10);
        if ( v6 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x963,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v6,
            v8);
        if ( CurrentThreadId != v10 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x965,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v7);
      }
    }
  }
}
