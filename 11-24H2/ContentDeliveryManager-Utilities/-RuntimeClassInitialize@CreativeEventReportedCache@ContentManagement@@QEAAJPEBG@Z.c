/*
 * XREFs of ?RuntimeClassInitialize@CreativeEventReportedCache@ContentManagement@@QEAAJPEBG@Z @ 0x18005732C
 * Callers:
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x180046FF4 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D810 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x180050C90 (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall ContentManagement::CreativeEventReportedCache::RuntimeClassInitialize(
        ContentManagement::CreativeEventReportedCache *this,
        const unsigned __int16 *a2)
{
  int CreativeEventCacheRegPath; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 72);
  *((_QWORD *)this + 10) = -1LL;
  *((_QWORD *)this + 11) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                a2,
                                (unsigned __int16 **)this + 9);
  if ( CreativeEventCacheRegPath < 0 )
  {
    v5 = 207LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventCacheRegPath);
    return (unsigned int)CreativeEventCacheRegPath;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 96);
  *((_QWORD *)this + 13) = -1LL;
  *((_QWORD *)this + 14) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                a2,
                                (unsigned __int16 **)this + 12);
  if ( CreativeEventCacheRegPath < 0 )
  {
    v5 = 208LL;
    goto LABEL_3;
  }
  return 0LL;
}
