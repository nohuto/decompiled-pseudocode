/*
 * XREFs of ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1801CF00C
 * Callers:
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1801CEC10 (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1801CF130 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1801D047C (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18025AC40 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180268A5C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        ...)
{
  _QWORD *v3; // rsi
  _QWORD *v7; // rdi
  __int128 v8; // xmm6
  struct Microsoft::BamoImpl::BaseBamoPeerImpl *Impl; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  _QWORD *v17; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD *);
  v3 = v17;
  *v17 = 0LL;
  v7 = DefaultHeap::AllocClear(0x100uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v7 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v7 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v7);
  v8 = *a3;
  v7[1] = &BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`vftable';
  v7[31] = 0LL;
  *v7 = &DataProviderRegistrarConnection::`vftable';
  Impl = dataprovider_AutoBamos::BamoPeer::GetImpl((dataprovider_AutoBamos::BamoPeer *)v7);
  v13 = v8;
  v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(Impl, a1, a2, &v13);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v15 = 0LL;
    *v3 = v7;
    wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>((__int64 *)va);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0xB45,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10);
    Microsoft::Bamo::BaseBamoConnection::Release((Microsoft::Bamo::BaseBamoConnection *)v7);
    return v11;
  }
}
