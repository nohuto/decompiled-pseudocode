/*
 * XREFs of sub_1800D2970 @ 0x1800D2970
 * Callers:
 *     sub_1800D3878 @ 0x1800D3878 (sub_1800D3878.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800D32D0 @ 0x1800D32D0 (sub_1800D32D0.c)
 *     sub_1800D36F4 @ 0x1800D36F4 (sub_1800D36F4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2970(int a1, unsigned int a2, __int64 a3, int a4, int a5, _QWORD *a6, __int64 a7)
{
  int v9; // r11d
  _QWORD *v10; // r9
  unsigned __int8 v11; // di
  int v12; // r14d
  __int64 v13; // rbx
  unsigned int v14; // r15d
  __int64 result; // rax
  unsigned int v16; // esi
  unsigned int v17; // r10d
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  char v20; // al
  unsigned int v21; // [rsp+30h] [rbp-C8h]
  __int64 v23; // [rsp+48h] [rbp-B0h]
  _QWORD v24[4]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-80h] BYREF

  v23 = a3;
  v9 = a1;
  v10 = a6;
  if ( a5 == 1 )
  {
    v11 = 1;
    v12 = 1;
  }
  else
  {
    v11 = 0;
    v12 = 3;
  }
  v13 = 0LL;
  v14 = 0;
  result = 2 * (unsigned int)v11;
  v16 = a4 - result;
  while ( (unsigned int)v13 < v16 )
  {
    v17 = *(_DWORD *)(a3 + 4 * v13);
    v21 = v17;
    v18 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v13 + 1));
    v19 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v13 + 2));
    if ( v17 >= a2 || v18 >= a2 || v19 >= a2 )
    {
      std::string::string(v24, "Index out of range while computing normals");
      sub_1800D32D0(pExceptionObject, v24);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v10 && v14 == 100 * (v14 / 0x64) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 40LL))(*v10);
      v17 = v21;
      v9 = a1;
    }
    v20 = v11 && (v13 & 1) != 0;
    result = sub_1800D36F4(v9, v17, v18, v19, v20, a7);
    v13 = (unsigned int)(v12 + v13);
    ++v14;
    a3 = v23;
    v10 = a6;
  }
  return result;
}
