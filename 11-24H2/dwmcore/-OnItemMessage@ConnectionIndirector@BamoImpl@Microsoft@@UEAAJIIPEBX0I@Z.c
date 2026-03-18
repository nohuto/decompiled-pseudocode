/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1801A7B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A7CB4 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801A7D34 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z @ 0x1801A7E70 (-IsPendingRemovalFromItemTable@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEBA_NI@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801A8D14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        unsigned int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rcx
  __int64 v12; // r8
  const void *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v19,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  v10 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v10 + 64)
    || Microsoft::BamoImpl::BaseBamoConnectionImpl::IsPendingRemovalFromItemTable(
         *((Microsoft::BamoImpl::BaseBamoConnectionImpl **)this + 2),
         a3) )
  {
    v15 = 0;
  }
  else if ( a4 )
  {
    v12 = a6;
    v13 = a5;
    *(_DWORD *)(v10 + 32) = a2;
    v14 = (*(__int64 (__fastcall **)(const void *, const void *, __int64))(*(_QWORD *)a4 + 32LL))(a4, v13, v12);
    *(_DWORD *)(v10 + 32) = 0;
    v15 = v14;
  }
  else
  {
    v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, -2018375668, 0);
    v15 = v17;
    if ( v17 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x76E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v17);
  }
  if ( v19 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v19 + 32));
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(&v19);
  return v15;
}
