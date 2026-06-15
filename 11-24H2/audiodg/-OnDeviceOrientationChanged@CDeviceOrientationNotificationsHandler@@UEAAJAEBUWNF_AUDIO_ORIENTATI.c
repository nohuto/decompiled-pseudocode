/*
 * XREFs of ?OnDeviceOrientationChanged@CDeviceOrientationNotificationsHandler@@UEAAJAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z @ 0x14005D4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400321EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTATION_TYPE@@@Z @ 0x14005C8D0 (-ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTAT.c)
 */

__int64 __fastcall CDeviceOrientationNotificationsHandler::OnDeviceOrientationChanged(
        CDeviceOrientationNotificationsHandler *this,
        const struct WNF_AUDIO_ORIENTATION_STATE *a2)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  __int64 **i; // rbx
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v13; // [rsp+28h] [rbp-30h]
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14[0] = v4;
  LOBYTE(v17) = 0;
  v14[1] = &v17;
  v5 = operator new(0x18uLL);
  *(_QWORD *)v12 = v4;
  v13 = v5;
  v15 = 0;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_14009EC48;
  *((_QWORD *)v5 + 2) = v4;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v14);
  if ( !v4 )
  {
    v6 = -2147024882;
    v7 = 82LL;
    v8 = 2147942414LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
      (const char *)v8);
    goto LABEL_10;
  }
  memset_0(v4, 0, 0x48uLL);
  *v4 = 5;
  v9 = ConvertOrientationType(*(_DWORD *)a2, v4 + 2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = (unsigned int)v9;
    v7 = 87LL;
    goto LABEL_5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  for ( i = (__int64 **)*((_QWORD *)this + 10); i; i = (__int64 **)*i )
    CAPOProcessingHostObject::QueueNotification((struct _RTL_CRITICAL_SECTION *)i[1], (__int64 *)v12);
  CSAutoLock<1>::~CSAutoLock<1>(&v17);
  v6 = 0;
LABEL_10:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
