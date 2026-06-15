/*
 * XREFs of ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400185CC
 * Callers:
 *     ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x140017EA0 (-OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008444 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400324EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003F2BC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     ?GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x14003F8C4 (-GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x14003F968 (-GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPOEndpointNotificationsHandler::OnPropertyValueChanged(
        CAPOEndpointNotificationsHandler *this,
        struct _tagpropertykey *a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  struct IPropertyStore **v10; // rdx
  int FxPropertyStore; // eax
  __int64 v12; // rdx
  __int64 **i; // rbx
  __int64 v15[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char *v19; // [rsp+90h] [rbp+40h] BYREF
  _DWORD *v20; // [rsp+98h] [rbp+48h]

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  LOBYTE(v19) = 0;
  v16[0] = v4;
  v16[1] = &v19;
  v5 = operator new(0x18uLL);
  v20 = v5;
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_14009DEE0;
  *((_QWORD *)v5 + 2) = v4;
  v15[0] = (__int64)v4;
  v15[1] = (__int64)v5;
  v17 = 0;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___(v16);
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 102LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)v7);
    goto LABEL_17;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 2;
  v9 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>((char *)this + 40, v4 + 2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 107LL;
    goto LABEL_5;
  }
  v10 = (struct IPropertyStore **)(v4 + 4);
  if ( a2->pid == 5
    && __PAIR128__(_mm_srli_si128((__m128i)a2->fmtid, 8).m128i_u64[0], *(_QWORD *)&a2->fmtid.Data1) == *(_OWORD *)&PKEY_AudioEndpoint_Disable_SysFx.fmtid )
  {
    FxPropertyStore = CAPOEndpointNotificationsHandler::GetFxPropertyStore(this, v10);
    v6 = FxPropertyStore;
    if ( FxPropertyStore < 0 )
    {
      v12 = 87LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)FxPropertyStore);
      v7 = v6;
      v8 = 108LL;
      goto LABEL_5;
    }
  }
  else
  {
    FxPropertyStore = CAPOEndpointNotificationsHandler::GetEndpointPropertyStore(this, v10);
    v6 = FxPropertyStore;
    if ( FxPropertyStore < 0 )
    {
      v12 = 91LL;
      goto LABEL_12;
    }
  }
  *(GUID *)(v4 + 6) = a2->fmtid;
  v4[10] = a2->pid;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v19 = (char *)this + 48;
  for ( i = (__int64 **)*((_QWORD *)this + 11); i; i = (__int64 **)*i )
    CAPOProcessingHostObject::QueueNotification((struct _RTL_CRITICAL_SECTION *)i[1], v15);
  CSAutoLock<1>::~CSAutoLock<1>(&v19);
  v6 = 0;
LABEL_17:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
