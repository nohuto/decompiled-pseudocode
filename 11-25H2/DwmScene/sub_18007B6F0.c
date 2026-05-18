/*
 * XREFs of sub_18007B6F0 @ 0x18007B6F0
 * Callers:
 *     sub_180041440 @ 0x180041440 (sub_180041440.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18007A970 @ 0x18007A970 (sub_18007A970.c)
 *     sub_18007AA40 @ 0x18007AA40 (sub_18007AA40.c)
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 *     sub_18007B904 @ 0x18007B904 (sub_18007B904.c)
 *     sub_18007BA90 @ 0x18007BA90 (sub_18007BA90.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18007B6F0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h]
  __int64 v16; // [rsp+48h] [rbp-61h] BYREF
  __int64 v17; // [rsp+50h] [rbp-59h]
  _QWORD *v18; // [rsp+58h] [rbp-51h]
  _QWORD v19[4]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-9h] BYREF

  v18 = a2;
  if ( !*(_DWORD *)(*a2 + 244LL) || a1[4] == a1[5] )
  {
    v4 = a2[1];
  }
  else
  {
    sub_1800287EC(*a2 + 24LL, (__int64)a2);
    if ( !a1[16] )
    {
      sub_18007A970(*(_QWORD *)(*a2 + 3648LL), &v14);
      v5 = v14;
      v6 = v15;
      v14 = 0LL;
      v15 = 0LL;
      a1[16] = v5;
      v7 = a1[17];
      a1[17] = v6;
      if ( v7 )
      {
        sub_18001050C(v7);
        if ( v15 )
          sub_18001050C(v15);
      }
    }
    v8 = *(_DWORD *)(*a2 + 244LL);
    if ( !(unsigned __int8)sub_18007BA90(a1[16], v8) )
    {
      v9 = *a2;
      sub_18007AA40((__int64 *)(*a2 + 496LL), &v16);
      v10 = v16;
      v11 = (_QWORD *)sub_180011C64(v9 + 8, &v14);
      sub_180027B50(v10, v11);
      if ( v15 )
        sub_18001050C(v15);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)v16 + 40LL))(
              v16,
              a1[4],
              ((unsigned int)a1[5] - (unsigned int)a1[4]) & 0xFFFFFFFC,
              2LL,
              a1[2] + 16LL) )
      {
        std::string::string(v20, "ShaderPropertyBlock::AttachDevice() -- failed to create constant buffer");
        v12 = std::string::string(
                v19,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sh"
                "aderpropertyblock.cpp");
        sub_180038A58(pExceptionObject, (__int64)v12, v13, (__int64)v20, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      sub_18007B904(a1[16], &v16);
      LODWORD(v14) = v8;
      *(_DWORD *)(*(_QWORD *)sub_18007ADF4(a1 + 11, (__int64)v19, (unsigned int *)&v14) + 32LL) = 0;
      if ( v17 )
        sub_18001050C(v17);
    }
    v4 = a2[1];
  }
  if ( v4 )
    sub_18001050C(v4);
}
