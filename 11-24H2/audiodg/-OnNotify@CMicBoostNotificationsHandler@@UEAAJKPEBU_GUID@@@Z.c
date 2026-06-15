/*
 * XREFs of ?OnNotify@CMicBoostNotificationsHandler@@UEAAJKPEBU_GUID@@@Z @ 0x1400603E0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400321EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003EFBC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMicBoostNotificationsHandler::OnNotify(
        CMicBoostNotificationsHandler *this,
        __int64 a2,
        const struct _GUID *a3)
{
  struct _GUID *v5; // rdi
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  __int64 **i; // rbx
  __int64 v13[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+98h] [rbp+38h] BYREF

  v5 = (struct _GUID *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14[0] = v5;
  LOBYTE(v17) = 0;
  v14[1] = &v17;
  v6 = operator new(0x18uLL);
  v13[0] = (__int64)v5;
  v13[1] = (__int64)v6;
  v15 = 0;
  v6[2] = 1;
  v6[3] = 1;
  *(_QWORD *)v6 = off_14009EE20;
  *((_QWORD *)v6 + 2) = v5;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v14);
  if ( !v5 )
  {
    v7 = -2147024882;
    v8 = 137LL;
    v9 = 2147942414LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)v9);
    goto LABEL_20;
  }
  memset_0(v5, 0, 0x48uLL);
  v5->Data1 = 6;
  if ( !a3 )
    a3 = &GUID_00000000_0000_0000_0000_000000000000;
  v5[1] = *a3;
  v10 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(
          (__int64 *)this + 4,
          v5->Data4);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 143LL;
LABEL_7:
    v9 = (unsigned int)v10;
    goto LABEL_8;
  }
  v5[2].Data1 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *))(**((_QWORD **)this + 7) + 40LL))(
          *((_QWORD *)this + 7),
          0LL,
          &v5[2].Data2);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 145LL;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned int *))(**((_QWORD **)this + 7) + 32LL))(
          *((_QWORD *)this + 7),
          0LL,
          v5[2].Data4,
          &v5[2].Data4[4],
          &v5[3].Data1);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 146LL;
    goto LABEL_7;
  }
  if ( *((_QWORD *)this + 6) )
  {
    *(_DWORD *)&v5[3].Data2 = 1;
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**((_QWORD **)this + 6) + 32LL))(
            *((_QWORD *)this + 6),
            v5[3].Data4);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = 150LL;
      goto LABEL_7;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  for ( i = (__int64 **)*((_QWORD *)this + 14); i; i = (__int64 **)*i )
    CAPOProcessingHostObject::QueueNotification((struct _RTL_CRITICAL_SECTION *)i[1], v13);
  CSAutoLock<1>::~CSAutoLock<1>(&v17);
  v7 = 0;
LABEL_20:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  return v7;
}
