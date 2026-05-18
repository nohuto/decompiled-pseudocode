/*
 * XREFs of sub_18002894C @ 0x18002894C
 * Callers:
 *     sub_180011600 @ 0x180011600 (sub_180011600.c)
 *     sub_180015998 @ 0x180015998 (sub_180015998.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_180025294 @ 0x180025294 (sub_180025294.c)
 *     sub_180025670 @ 0x180025670 (sub_180025670.c)
 *     sub_1800257F0 @ 0x1800257F0 (sub_1800257F0.c)
 *     sub_18002A090 @ 0x18002A090 (sub_18002A090.c)
 *     sub_18002BFE4 @ 0x18002BFE4 (sub_18002BFE4.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_180033660 @ 0x180033660 (sub_180033660.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 *     sub_18003DF60 @ 0x18003DF60 (sub_18003DF60.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 *     sub_18003E5B4 @ 0x18003E5B4 (sub_18003E5B4.c)
 *     sub_18003E8D0 @ 0x18003E8D0 (sub_18003E8D0.c)
 *     sub_18003EE4C @ 0x18003EE4C (sub_18003EE4C.c)
 *     sub_18003F3C8 @ 0x18003F3C8 (sub_18003F3C8.c)
 *     sub_18003FB38 @ 0x18003FB38 (sub_18003FB38.c)
 *     sub_18003FE3C @ 0x18003FE3C (sub_18003FE3C.c)
 *     sub_1800415A0 @ 0x1800415A0 (sub_1800415A0.c)
 *     sub_1800480C0 @ 0x1800480C0 (sub_1800480C0.c)
 *     sub_180055BB0 @ 0x180055BB0 (sub_180055BB0.c)
 *     sub_180057928 @ 0x180057928 (sub_180057928.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18005B214 @ 0x18005B214 (sub_18005B214.c)
 *     sub_18005B778 @ 0x18005B778 (sub_18005B778.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     sub_18006B58C @ 0x18006B58C (sub_18006B58C.c)
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_18007B850 @ 0x18007B850 (sub_18007B850.c)
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 *     sub_18007FA90 @ 0x18007FA90 (sub_18007FA90.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 *     sub_1800B62DC @ 0x1800B62DC (sub_1800B62DC.c)
 *     sub_1800B6488 @ 0x1800B6488 (sub_1800B6488.c)
 *     sub_1800B6634 @ 0x1800B6634 (sub_1800B6634.c)
 *     sub_1800B67E0 @ 0x1800B67E0 (sub_1800B67E0.c)
 *     sub_1800B698C @ 0x1800B698C (sub_1800B698C.c)
 *     sub_1800B9B9C @ 0x1800B9B9C (sub_1800B9B9C.c)
 *     sub_1800BAC30 @ 0x1800BAC30 (sub_1800BAC30.c)
 *     sub_1800BAC70 @ 0x1800BAC70 (sub_1800BAC70.c)
 *     sub_1800BCCB0 @ 0x1800BCCB0 (sub_1800BCCB0.c)
 *     sub_1800C3044 @ 0x1800C3044 (sub_1800C3044.c)
 *     sub_1800CB460 @ 0x1800CB460 (sub_1800CB460.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800284B0 @ 0x1800284B0 (sub_1800284B0.c)
 *     sub_180028A64 @ 0x180028A64 (sub_180028A64.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002894C(__int64 a1, __int64 a2)
{
  bool v2; // bl
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD v5[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v6[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v2 = 1;
  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    LOBYTE(a2) = 1;
    v2 = (unsigned __int8)sub_180028A64(a1, a2) != 0;
  }
  if ( !v2 )
  {
    std::string::string(
      v6,
      "Lockable::VerifyWriteAccess() -- EXCLUSIVE LOCK REQUIRED\n"
      "The requested operation requires that the current thread holds this lockable object's mutex lock exclusive (read/w"
      "rite) access.\n"
      "To acquire exclusive lock from C++, call Lockable::GetExclusiveLock() and hold the lock via: auto lock(object->Get"
      "ExclusiveLock()) { ... }\n"
      "To acquire exclusive lock from C#, call Lockable.GetExclusiveLock() and hold the lock via: using (object.GetExclus"
      "iveLock()) { ... }\n");
    v3 = std::string::string(
           v5,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_1800284B0(pExceptionObject, (__int64)v3, v4, (__int64)v6);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
}
