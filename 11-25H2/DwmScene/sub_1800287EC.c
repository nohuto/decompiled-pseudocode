/*
 * XREFs of sub_1800287EC @ 0x1800287EC
 * Callers:
 *     sub_180011500 @ 0x180011500 (sub_180011500.c)
 *     sub_180015898 @ 0x180015898 (sub_180015898.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     sub_180025134 @ 0x180025134 (sub_180025134.c)
 *     sub_180025510 @ 0x180025510 (sub_180025510.c)
 *     sub_180025690 @ 0x180025690 (sub_180025690.c)
 *     sub_180029F30 @ 0x180029F30 (sub_180029F30.c)
 *     sub_18002BE84 @ 0x18002BE84 (sub_18002BE84.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_180031F90 @ 0x180031F90 (sub_180031F90.c)
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 *     sub_18003DE00 @ 0x18003DE00 (sub_18003DE00.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 *     sub_18003E454 @ 0x18003E454 (sub_18003E454.c)
 *     sub_18003E770 @ 0x18003E770 (sub_18003E770.c)
 *     sub_18003ECEC @ 0x18003ECEC (sub_18003ECEC.c)
 *     sub_18003F268 @ 0x18003F268 (sub_18003F268.c)
 *     sub_18003F9D8 @ 0x18003F9D8 (sub_18003F9D8.c)
 *     sub_18003FCDC @ 0x18003FCDC (sub_18003FCDC.c)
 *     sub_180041440 @ 0x180041440 (sub_180041440.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     sub_180055A50 @ 0x180055A50 (sub_180055A50.c)
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18005B0B4 @ 0x18005B0B4 (sub_18005B0B4.c)
 *     sub_18005B618 @ 0x18005B618 (sub_18005B618.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_18006B42C @ 0x18006B42C (sub_18006B42C.c)
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 *     sub_18006CB88 @ 0x18006CB88 (sub_18006CB88.c)
 *     sub_18007B6F0 @ 0x18007B6F0 (sub_18007B6F0.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_18007F930 @ 0x18007F930 (sub_18007F930.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B6328 @ 0x1800B6328 (sub_1800B6328.c)
 *     sub_1800B64D4 @ 0x1800B64D4 (sub_1800B64D4.c)
 *     sub_1800B6680 @ 0x1800B6680 (sub_1800B6680.c)
 *     sub_1800B682C @ 0x1800B682C (sub_1800B682C.c)
 *     sub_1800B9A3C @ 0x1800B9A3C (sub_1800B9A3C.c)
 *     sub_1800BAAD0 @ 0x1800BAAD0 (sub_1800BAAD0.c)
 *     sub_1800BAB10 @ 0x1800BAB10 (sub_1800BAB10.c)
 *     sub_1800BCB50 @ 0x1800BCB50 (sub_1800BCB50.c)
 *     sub_1800C2EE4 @ 0x1800C2EE4 (sub_1800C2EE4.c)
 *     sub_1800CB300 @ 0x1800CB300 (sub_1800CB300.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_180028904 @ 0x180028904 (sub_180028904.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800287EC(__int64 a1, __int64 a2)
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
    v2 = (unsigned __int8)sub_180028904(a1, a2) != 0;
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
    sub_180028350(pExceptionObject, (__int64)v3, v4, (__int64)v6);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
}
