/*
 * XREFs of sub_1800CA91C @ 0x1800CA91C
 * Callers:
 *     sub_1800C60C0 @ 0x1800C60C0 (sub_1800C60C0.c)
 *     sub_1800CA800 @ 0x1800CA800 (sub_1800CA800.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800CA91C(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  __int128 *v9; // rcx
  __int128 *v10; // r14
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, int *, __int128 *, __int64 *); // rdi
  int v13; // ebx
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17[3]; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-89h] BYREF
  int v19; // [rsp+70h] [rbp-69h] BYREF
  int v20; // [rsp+74h] [rbp-65h]
  int v21; // [rsp+78h] [rbp-61h]
  __int64 v22; // [rsp+7Ch] [rbp-5Dh]
  int v23; // [rsp+84h] [rbp-55h]
  _QWORD v24[4]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v26; // [rsp+E0h] [rbp+7h] BYREF

  v17[1] = (__int64)a1;
  v22 = 0LL;
  v23 = 0;
  v19 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = &v26;
  do
  {
    *(_DWORD *)v9 = v8++;
    v9 = (__int128 *)((char *)v9 + 4);
  }
  while ( v8 < 4 );
  v20 = *((_DWORD *)&v26 + *(unsigned int *)(a4 + 24));
  v21 = a6;
  sub_1800B9A04(a3, v17);
  v26 = 0LL;
  v10 = 0LL;
  if ( v20 == 2 )
  {
    LODWORD(v22) = 0x10000;
  }
  else
  {
    *(_QWORD *)&v26 = a5;
    v10 = &v26;
  }
  *a1 = 0LL;
  v11 = v17[0];
  v12 = *(__int64 (__fastcall **)(__int64, int *, __int128 *, __int64 *))(*(_QWORD *)v17[0] + 24LL);
  sub_18000E854(a1);
  v13 = v12(v11, &v19, v10, a1);
  sub_1800BB198(a3, v13);
  if ( v13 < 0 )
  {
    std::string::string(v24, "D3DBufferUtils::CreateBuffer() - Direct3D could not create the buffer");
    v15 = std::string::string(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\d3dbufferutils.cpp");
    sub_180068574(pExceptionObject, (__int64)v15, v16, v13, (__int64)v24, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18000E854(v17);
  return a1;
}
