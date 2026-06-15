/*
 * XREFs of ?QueueInitialDeviceOrientationNotification@@YAJPEAVCAPOProcessingHostObject@@@Z @ 0x1400625F0
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x1400150B0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400321EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTATION_TYPE@@@Z @ 0x14005C8D0 (-ConvertOrientationType@@YAJW4DisplayRotation@Core@Display@Devices@Windows@@PEAW4DEVICE_ORIENTAT.c)
 *     ??$wnf_query_nothrow@UWNF_AUDIO_ORIENTATION_STATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_AUDIO_ORIENTATION_STATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x140061490 (--$wnf_query_nothrow@UWNF_AUDIO_ORIENTATION_STATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_AU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall QueueInitialDeviceOrientationNotification(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v5; // rbx
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v16; // [rsp+78h] [rbp+28h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF
  _DWORD *v18; // [rsp+88h] [rbp+38h]

  v17 = 0;
  v16 = 0;
  if ( (int)wil::wnf_query_nothrow<WNF_AUDIO_ORIENTATION_STATE>((__int64)a1, &v16, &v17, a4) >= 0 && v16 )
  {
    v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = 0;
    v13[0] = v5;
    v13[1] = &v16;
    v6 = operator new(0x18uLL);
    v18 = v6;
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = off_14009F140;
    *((_QWORD *)v6 + 2) = v5;
    v12[0] = (__int64)v5;
    v12[1] = (__int64)v6;
    v14 = 0;
    std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v13);
    if ( !v5 )
    {
      v7 = -2147024882;
      v8 = 2147942414LL;
      v9 = 360LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)v8);
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
      return v7;
    }
    memset_0(v5, 0, 0x48uLL);
    *v5 = 5;
    v10 = ConvertOrientationType(v17, v5 + 2);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 365LL;
      goto LABEL_7;
    }
    CAPOProcessingHostObject::QueueNotification(a1, v12);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  }
  return 0LL;
}
