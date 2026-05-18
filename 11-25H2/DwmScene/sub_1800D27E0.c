/*
 * XREFs of sub_1800D27E0 @ 0x1800D27E0
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
__int64 __fastcall sub_1800D27E0(int a1, unsigned int a2, __int64 a3, int a4, int a5, _QWORD *a6, __int64 a7)
{
  __int64 v8; // r9
  int v10; // r11d
  _QWORD *v11; // r10
  unsigned __int8 v12; // di
  int v13; // ebp
  __int64 v14; // rbx
  unsigned int v15; // r12d
  __int64 result; // rax
  unsigned int v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  char v21; // al
  unsigned int v22; // [rsp+30h] [rbp-C8h]
  _QWORD v25[4]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-80h] BYREF

  v8 = a3;
  v10 = a1;
  v11 = a6;
  if ( a5 == 1 )
  {
    v12 = 1;
    v13 = 1;
  }
  else
  {
    v12 = 0;
    v13 = 3;
  }
  v14 = 0LL;
  v15 = 0;
  result = 2 * (unsigned int)v12;
  v17 = a4 - result;
  while ( (unsigned int)v14 < v17 )
  {
    v18 = *(unsigned __int16 *)(v8 + 2 * v14);
    v22 = v18;
    if ( v18 >= a2
      || (v19 = *(unsigned __int16 *)(v8 + 2LL * (unsigned int)(v14 + 1)), v19 >= a2)
      || (v20 = *(unsigned __int16 *)(v8 + 2LL * (unsigned int)(v14 + 2)), v20 >= a2) )
    {
      std::string::string(v25, "Index out of range while computing normals");
      sub_1800D32D0(pExceptionObject, v25);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
    if ( *v11 )
    {
      if ( v15 == 100 * (v15 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 40LL))(*v11);
        v10 = a1;
      }
      v18 = v22;
    }
    v21 = v12 && (v14 & 1) != 0;
    result = sub_1800D36F4(v10, v18, v19, v20, v21, a7);
    v14 = (unsigned int)(v13 + v14);
    ++v15;
    v8 = a3;
  }
  return result;
}
