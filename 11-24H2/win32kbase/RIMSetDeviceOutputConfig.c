/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x1400C7244
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1400C7140 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14017B684 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401D7170 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1401E1800 (RIMFindMonitorForDigitizer.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E1C98 (RIMSetPointerDeviceInputSpace.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@@Z @ 0x1400C73D4 (-BindToInputSpace@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEBU.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C75AC (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C7774 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMEndAllActiveContacts @ 0x1400C7A70 (RIMEndAllActiveContacts.c)
 *     rimSetDeviceDisplayConfig @ 0x1401E2D30 (rimSetDeviceDisplayConfig.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  struct RawInputManagerObject *v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // r9
  struct INPUT_SPACE_REGION *v15; // [rsp+20h] [rbp-20h] BYREF
  tagDomLock *v16; // [rsp+28h] [rbp-18h] BYREF
  struct INPUT_SPACE *v17; // [rsp+30h] [rbp-10h] BYREF
  tagDomLock *v18; // [rsp+38h] [rbp-8h] BYREF

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 57);
      v10 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 40);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10, v9, 0x200u);
      else
        RIMEndAllActiveContacts(v10, a2, 0LL);
    }
    v17 = 0LL;
    UserSessionState = W32GetUserSessionState(a1);
    CEResourceLockShared::CEResourceLockShared(
      (CEResourceLockShared *)&v18,
      (struct CEResourceLock *)(UserSessionState + 18696));
    v15 = 0LL;
    v13 = W32GetUserSessionState(v12);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v16, (struct CEResourceLock *)(v13 + 18696));
    if ( InputConfig::GetPointerDeviceConfig(
           a1,
           a2,
           (struct CLockedInputSpace *)&v17,
           (struct CLockedInputSpaceRegion *)&v15) )
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedInputSpace *)&v17, (struct CLockedInputSpaceRegion *)&v15);
    }
    else
    {
      *((_DWORD *)a2 + 39) = 0;
    }
    InputTraceLogging::Pointer::BindToInputSpace(a1, a2, v17, v15);
    tagDomLock::UnLockExclusive((PERESOURCE *)v16);
    tagDomLock::UnLockExclusive((PERESOURCE *)v18);
  }
  if ( *((_DWORD *)a1 + 334) && a4 && *((_DWORD *)a1 + 338) != 4 )
  {
    while ( v4 < *(_DWORD *)a4 )
    {
      v14 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 216LL * v4);
      if ( v14[4] == *((_DWORD *)a1 + 467) && v14[5] == *((_DWORD *)a1 + 468) && v14[7] == *((_DWORD *)a1 + 470) )
      {
        rimSetDeviceDisplayConfig(a1, a2, a3);
        return;
      }
      ++v4;
    }
  }
}
