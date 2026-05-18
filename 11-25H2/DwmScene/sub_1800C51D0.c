/*
 * XREFs of sub_1800C51D0 @ 0x1800C51D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_18007F624 @ 0x18007F624 (sub_18007F624.c)
 *     sub_1800C2EB0 @ 0x1800C2EB0 (sub_1800C2EB0.c)
 *     sub_1800C5F38 @ 0x1800C5F38 (sub_1800C5F38.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C51D0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h]
  _QWORD v18[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  _InterlockedIncrement64((volatile signed __int64 *)&unk_1801C3550 + 20 * *(int *)(*a2 + 48));
  sub_18007F624(*a2, &v16, *(_DWORD *)(a1 + 88));
  if ( *(_DWORD *)(*a2 + 44) == 8 )
  {
    v10 = sub_1800C2EB0(v16, &v14);
    v11 = &v14;
  }
  else
  {
    if ( *(_DWORD *)(*a2 + 44) != 11 )
    {
      std::string::string(v19, "Invalid buffer type");
      v8 = std::string::string(
             v18,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
      sub_180068508(pExceptionObject, (__int64)v8, v9, (__int64)v19, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v10 = sub_1800C2EB0(v16, &v15);
    v11 = &v15;
  }
  v12 = *v10;
  sub_18000E854(v11);
  result = sub_1800C5F38(a1, v12, a3, a4);
  if ( v17 )
    return sub_18001050C(v17);
  return result;
}
