/*
 * XREFs of sub_1800D3B6C @ 0x1800D3B6C
 * Callers:
 *     sub_180045654 @ 0x180045654 (sub_180045654.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18007CB44 @ 0x18007CB44 (sub_18007CB44.c)
 *     sub_180082B48 @ 0x180082B48 (sub_180082B48.c)
 *     sub_1800D2AFC @ 0x1800D2AFC (sub_1800D2AFC.c)
 *     sub_1800D2CD0 @ 0x1800D2CD0 (sub_1800D2CD0.c)
 *     sub_1800D32FC @ 0x1800D32FC (sub_1800D32FC.c)
 *     sub_1800D3324 @ 0x1800D3324 (sub_1800D3324.c)
 *     sub_1800D34A8 @ 0x1800D34A8 (sub_1800D34A8.c)
 *     sub_1800D480C @ 0x1800D480C (sub_1800D480C.c)
 *     sub_1800D4A18 @ 0x1800D4A18 (sub_1800D4A18.c)
 *     sub_1800D4AD0 @ 0x1800D4AD0 (sub_1800D4AD0.c)
 *     sub_1800D4B88 @ 0x1800D4B88 (sub_1800D4B88.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_1800D3B6C(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        char a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 v12; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *result; // rax
  __int64 v22; // rcx
  void *v23; // rdi
  _DWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // [rsp+50h] [rbp-98h]
  __int128 v37; // [rsp+58h] [rbp-90h] BYREF
  char v38; // [rsp+68h] [rbp-80h]
  void *v39[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v40; // [rsp+80h] [rbp-68h]
  __int64 v41; // [rsp+88h] [rbp-60h]
  __int64 v42[3]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+A8h] [rbp-40h] BYREF
  const Spectre::Framework::GeometryProcessingException *v44; // [rsp+B8h] [rbp-30h] BYREF

  v12 = a4;
  if ( (unsigned __int8)sub_1800D4B88(a4, "ComputeTangents") )
  {
    v23 = (void *)o__aligned_malloc(16 * v12, 16LL);
    *(_OWORD *)v39 = 0LL;
    LOBYTE(a11) = 0;
    *(_QWORD *)&v37 = v23;
    *((_QWORD *)&v37 + 1) = &a11;
    v24 = (_DWORD *)sub_18001B098(24LL);
    if ( v24 )
    {
      v24[2] = 1;
      v24[3] = 1;
      *(_QWORD *)v24 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_dc718d396f0c2d0078465762313bdcf6_>::`vftable';
      *((_QWORD *)v24 + 2) = v23;
    }
    v39[0] = v23;
    v39[1] = v24;
    v38 = 0;
    sub_1800D32FC((__int64)&v37);
    if ( !v39[0] )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v39[0], 0, 16 * v12);
    sub_180082B48(v42, (unsigned int)(2 * v12), v25);
    v36 = v42[0];
    a11 = v42[0] + 12 * v12;
    v26 = *a1;
    v41 = *a1;
    v40 = *a2;
    *(_QWORD *)&v37 = *a3;
    if ( a7 )
    {
      v27 = a5;
      if ( *a5 )
      {
        sub_1800D4A18(a6, a8);
        sub_1800D2CD0(v41, v12, *a5, a6, v40, a8, a12, v36, a11);
      }
      else
      {
        sub_1800D4AD0((unsigned int)v12, a8);
        sub_1800D34A8(v26, v12, v40, a8, a12, v36, a11);
      }
    }
    else
    {
      try
      {
        sub_1800D4A18(a6, a8);
        v27 = a5;
        sub_1800D2AFC(v41, v12, *a5, a6, v40, a8, a12, v36, a11);
      }
      catch ( Spectre::Utils::CancelledException )
      {
        throw;
      }
      catch ( const Spectre::Framework::GeometryProcessingException *v44 )
      {
        sub_1800137F8((__int64)v44 + 16);
        sub_18001C99C(&stru_1801B8648, 3);
        v37 = 0LL;
        sub_1800D3324(a10, (__int64)&v37);
        if ( *((_QWORD *)&v37 + 1) )
          sub_18001050C(*((__int64 *)&v37 + 1));
        goto LABEL_32;
      }
      catch ( ... )
      {
        sub_18001C99C(&stru_1801B8648, 3);
        v37 = 0LL;
        sub_1800D3324(a10, (__int64)&v37);
        if ( *((_QWORD *)&v37 + 1) )
          sub_18001050C(*((__int64 *)&v37 + 1));
LABEL_32:
        sub_18007CB44((__int64)v42);
        if ( v39[1] )
          sub_18001050C((__int64)v39[1]);
        v31 = a1[1];
        if ( v31 )
          sub_18001050C(v31);
        v32 = a2[1];
        if ( v32 )
          sub_18001050C(v32);
        v33 = a3[1];
        if ( v33 )
          sub_18001050C(v33);
        result = a5;
        v34 = a5[1];
        if ( v34 )
          result = (__int64 *)sub_18001050C(v34);
        v16 = a10;
LABEL_43:
        v35 = *(_QWORD *)(v16 + 56);
        if ( v35 )
        {
          LOBYTE(v17) = v35 != v16;
          result = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 32LL))(v35, v17);
          *(_QWORD *)(v16 + 56) = 0LL;
        }
      }
    }
    sub_1800D480C(v39[0], v12, v37, v36, a11, a9);
    v16 = a10;
    sub_1800D3324(a10, (__int64)v39);
    result = (__int64 *)sub_18007CB44((__int64)v42);
    if ( v39[1] )
      result = (__int64 *)sub_18001050C((__int64)v39[1]);
    v28 = a1[1];
    if ( v28 )
      result = (__int64 *)sub_18001050C(v28);
    v29 = a2[1];
    if ( v29 )
      result = (__int64 *)sub_18001050C(v29);
    v30 = a3[1];
    if ( v30 )
      result = (__int64 *)sub_18001050C(v30);
    v22 = v27[1];
  }
  else
  {
    v37 = 0LL;
    v16 = a10;
    sub_1800D3324(a10, (__int64)&v37);
    if ( *((_QWORD *)&v37 + 1) )
      sub_18001050C(*((__int64 *)&v37 + 1));
    v18 = a1[1];
    if ( v18 )
      sub_18001050C(v18);
    v19 = a2[1];
    if ( v19 )
      sub_18001050C(v19);
    v20 = a3[1];
    if ( v20 )
      sub_18001050C(v20);
    result = a5;
    v22 = a5[1];
  }
  if ( v22 )
    result = (__int64 *)sub_18001050C(v22);
  goto LABEL_43;
}
