/*
 * XREFs of ?OnDisconnectedCallout@BamoInputSiteElementProxy@@EEAAJXZ @ 0x1800426B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180042788 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043580 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoInputSiteElementProxy::OnDisconnectedCallout(BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rdi
  void (__fastcall ***v3)(char *); // rbx
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // ebx
  int v8[2]; // [rsp+20h] [rbp-28h] BYREF
  char *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  v3 = (void (__fastcall ***)(char *))((char *)this + 16);
  v4 = (BamoInputSiteElementProxy *)((char *)this + 16) != 0LL ? 3 : 0;
  v9 = (char *)this + 16;
  if ( this != (BamoInputSiteElementProxy *)-16LL )
    (**v3)((char *)this + 16);
  v10 = v4;
  *(_QWORD *)v8 = 0LL;
  if ( !*((_DWORD *)v2 + 47) )
  {
    *(_QWORD *)v8 = v2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v2);
  }
  if ( v3 )
  {
    v5 = ((__int64 (__fastcall *)(__int64))(*(v3 - 2))[11])((__int64)(v3 - 2));
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v5,
        v8[0]);
  }
  v6 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)this + 40LL))(this);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v8);
  return v6;
}
