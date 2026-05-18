/*
 * XREFs of sub_1800C5330 @ 0x1800C5330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_18007F784 @ 0x18007F784 (sub_18007F784.c)
 *     sub_1800C3010 @ 0x1800C3010 (sub_1800C3010.c)
 *     sub_1800C6098 @ 0x1800C6098 (sub_1800C6098.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C5330(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
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

  _InterlockedIncrement64((volatile signed __int64 *)&unk_1801C4560 + 20 * *(int *)(*a2 + 48));
  sub_18007F784(*a2, &v16, *(_DWORD *)(a1 + 88));
  if ( *(_DWORD *)(*a2 + 44) == 8 )
  {
    v10 = sub_1800C3010(v16, &v14);
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
      sub_180068668(pExceptionObject, (__int64)v8, v9, (__int64)v19, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v10 = sub_1800C3010(v16, &v15);
    v11 = &v15;
  }
  v12 = *v10;
  sub_18000E954(v11);
  result = sub_1800C6098(a1, v12, a3, a4);
  if ( v17 )
    return sub_18001060C(v17);
  return result;
}
