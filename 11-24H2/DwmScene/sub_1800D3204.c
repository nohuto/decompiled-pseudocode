/*
 * XREFs of sub_1800D3204 @ 0x1800D3204
 * Callers:
 *     sub_1800D4140 @ 0x1800D4140 (sub_1800D4140.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800D3430 @ 0x1800D3430 (sub_1800D3430.c)
 *     sub_1800D3854 @ 0x1800D3854 (sub_1800D3854.c)
 *     sub_1800D4648 @ 0x1800D4648 (sub_1800D4648.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D3204(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // r11d
  _QWORD *v13; // r9
  unsigned __int8 v14; // si
  __int64 v15; // rbx
  unsigned int v16; // r15d
  __int64 result; // rax
  unsigned int v18; // ebp
  unsigned int v19; // r10d
  unsigned int v20; // r12d
  unsigned int v21; // r13d
  char v22; // di
  int v23; // ecx
  unsigned int v24; // [rsp+40h] [rbp-D8h]
  int v25; // [rsp+44h] [rbp-D4h]
  __int64 v27; // [rsp+70h] [rbp-A8h]
  _QWORD v28[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A0h] [rbp-78h] BYREF

  v27 = a3;
  v12 = a5;
  v13 = a7;
  if ( a6 == 1 )
  {
    v14 = 1;
    v25 = 1;
  }
  else
  {
    v14 = 0;
    v25 = 3;
  }
  v15 = 0LL;
  v16 = 0;
  result = 2 * (unsigned int)v14;
  v18 = a4 - result;
  while ( (unsigned int)v15 < v18 )
  {
    v19 = *(_DWORD *)(a3 + 4 * v15);
    v24 = v19;
    v20 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 1));
    v21 = *(_DWORD *)(a3 + 4LL * (unsigned int)(v15 + 2));
    if ( v19 >= a2 || v20 >= a2 || v21 >= a2 )
    {
      std::string::string(v28, "Index out of range while computing tangents and normals");
      sub_1800D3430(pExceptionObject, v28);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v13 && v16 == 100 * (v16 / 0x64) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 40LL))(*v13);
      v19 = v24;
      v12 = a5;
    }
    v22 = v14 && (v15 & 1) != 0;
    sub_1800D4648(a1, v12, v19, v20, v21, v22, a9, a10);
    result = sub_1800D3854(v23, v24, v20, v21, v22, a8);
    v15 = (unsigned int)(v25 + v15);
    ++v16;
    a3 = v27;
    v13 = a7;
    v12 = a5;
  }
  return result;
}
