/*
 * XREFs of sub_1800CAA7C @ 0x1800CAA7C
 * Callers:
 *     sub_1800C6220 @ 0x1800C6220 (sub_1800C6220.c)
 *     sub_1800CA960 @ 0x1800CA960 (sub_1800CA960.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800CAA7C(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
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
  sub_1800B9B64(a3, v17);
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
  sub_18000E954(a1);
  v13 = v12(v11, &v19, v10, a1);
  sub_1800BB2F8(a3, v13);
  if ( v13 < 0 )
  {
    std::string::string(v24, "D3DBufferUtils::CreateBuffer() - Direct3D could not create the buffer");
    v15 = std::string::string(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\d3dbufferutils.cpp");
    sub_1800686D4(pExceptionObject, (__int64)v15, v16, v13, (__int64)v24, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18000E954(v17);
  return a1;
}
