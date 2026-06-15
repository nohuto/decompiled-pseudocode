/*
 * XREFs of ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180047C84
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@4@@Z @ 0x18010A958 (-KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetop.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180047F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CKsNotificationsMonitor::Initialize(CKsNotificationsMonitor *this, struct IUnknown *a2, char *a3)
{
  struct IUnknown **v6; // rcx
  __int64 v7; // rbx
  SIZE_T v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  char *v13; // r14
  __int16 v14; // ax
  struct IPart *v15; // rcx
  struct IPart *v16; // rbx
  int v17; // ebx
  struct IPart *v19; // [rsp+40h] [rbp+8h] BYREF

  v19 = 0LL;
  v6 = (struct IUnknown **)((char *)this + 88);
  if ( *v6 != a2 )
    ATL::AtlComPtrAssign(v6, a2);
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)&a3[2 * v7] );
  v8 = 2 * v7 + 2;
  v9 = CoTaskMemAlloc(v8);
  v10 = v9;
  *((_QWORD *)this + 2) = v9;
  if ( v9 )
  {
    v11 = v8 >> 1;
    if ( v11 )
    {
      if ( v11 <= 0x7FFFFFFF )
      {
        v12 = 2147483646 - v11;
        v13 = (char *)(a3 - (char *)v9);
        do
        {
          if ( !(v12 + v11) )
            break;
          v14 = *(_WORD *)((char *)v10 + (_QWORD)v13);
          if ( !v14 )
            break;
          *v10++ = v14;
          --v11;
        }
        while ( v11 );
        v9 = v10 - 1;
        if ( v11 )
          v9 = v10;
      }
      *v9 = 0;
    }
    v15 = v19;
    if ( v19 != (struct IPart *)a2 )
    {
      v16 = v19;
      v15 = 0LL;
      v19 = 0LL;
      if ( a2 )
      {
        ((void (__fastcall *)(struct IUnknown *, GUID *, struct IPart **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
          &v19);
        v15 = v19;
      }
      if ( v16 )
      {
        ((void (__fastcall *)(struct IPart *))v16->lpVtbl->Release)(v16);
        v15 = v19;
      }
    }
    v17 = ((__int64 (__fastcall *)(struct IPart *, char *))v15->lpVtbl->GetLocalId)(v15, (char *)this + 8);
    if ( v17 >= 0 )
    {
      v17 = ((__int64 (__fastcall *)(struct IPart *, char *))v19->lpVtbl->GetName)(v19, (char *)this + 80);
      if ( v17 >= 0 )
      {
        v17 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CKsNotificationsMonitor *))a2->lpVtbl[4].Release)(
                a2,
                &CKsNotificationsMonitor::m_ctx,
                this);
        if ( v17 >= 0 )
          *((_DWORD *)this + 3) = 1;
      }
    }
  }
  else
  {
    v17 = -2147024882;
  }
  if ( v19 )
    ((void (__fastcall *)(struct IPart *))v19->lpVtbl->Release)(v19);
  return (unsigned int)v17;
}
