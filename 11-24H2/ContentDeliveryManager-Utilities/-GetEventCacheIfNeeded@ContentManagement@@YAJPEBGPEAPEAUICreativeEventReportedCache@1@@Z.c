/*
 * XREFs of ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x180051A10
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180054E80 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800551E0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x180046FF4 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 */

__int64 __fastcall ContentManagement::GetEventCacheIfNeeded(
        ContentManagement *this,
        unsigned __int16 *a2,
        struct ContentManagement::ICreativeEventReportedCache **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const unsigned __int16 *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (const unsigned __int16 *)this;
  *(_QWORD *)a2 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
         a2,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
