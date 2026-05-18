/*
 * XREFs of sub_1800D2E98 @ 0x1800D2E98
 * Callers:
 *     sub_1800D3FE0 @ 0x1800D3FE0 (sub_1800D3FE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800D32D0 @ 0x1800D32D0 (sub_1800D32D0.c)
 *     sub_1800D36F4 @ 0x1800D36F4 (sub_1800D36F4.c)
 *     sub_1800D44E8 @ 0x1800D44E8 (sub_1800D44E8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2E98(
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
  __int64 v11; // r9
  int v13; // r11d
  _QWORD *v14; // r10
  unsigned __int8 v15; // si
  __int64 v16; // rbx
  unsigned int v17; // r13d
  __int64 result; // rax
  unsigned int v19; // ebp
  unsigned int v20; // edx
  unsigned int v21; // r12d
  unsigned int v22; // r15d
  char v23; // di
  int v24; // ecx
  unsigned int v25; // [rsp+40h] [rbp-D8h]
  int v26; // [rsp+44h] [rbp-D4h]
  _QWORD v29[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+A0h] [rbp-78h] BYREF

  v11 = a3;
  v13 = a5;
  v14 = a7;
  if ( a6 == 1 )
  {
    v15 = 1;
    v26 = 1;
  }
  else
  {
    v15 = 0;
    v26 = 3;
  }
  v16 = 0LL;
  v17 = 0;
  result = 2 * (unsigned int)v15;
  v19 = a4 - result;
  while ( (unsigned int)v16 < v19 )
  {
    v20 = *(unsigned __int16 *)(v11 + 2 * v16);
    v25 = v20;
    if ( v20 >= a2
      || (v21 = *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v16 + 1)), v21 >= a2)
      || (v22 = *(unsigned __int16 *)(v11 + 2LL * (unsigned int)(v16 + 2)), v22 >= a2) )
    {
      std::string::string(v29, "Index out of range while computing tangents and normals");
      sub_1800D32D0(pExceptionObject, v29);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v14 )
    {
      if ( v17 == 100 * (v17 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 40LL))(*v14);
        v13 = a5;
      }
      v20 = v25;
    }
    v23 = v15 && (v16 & 1) != 0;
    sub_1800D44E8(a1, v13, v20, v21, v22, v23, a9, a10);
    result = sub_1800D36F4(v24, v25, v21, v22, v23, a8);
    v16 = (unsigned int)(v26 + v16);
    ++v17;
    v11 = a3;
    v14 = a7;
    v13 = a5;
  }
  return result;
}
