/*
 * XREFs of sub_1800D39D8 @ 0x1800D39D8
 * Callers:
 *     sub_1800452CC @ 0x1800452CC (sub_1800452CC.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18003AC48 @ 0x18003AC48 (sub_18003AC48.c)
 *     sub_1800D2940 @ 0x1800D2940 (sub_1800D2940.c)
 *     sub_1800D2AD0 @ 0x1800D2AD0 (sub_1800D2AD0.c)
 *     sub_1800D345C @ 0x1800D345C (sub_1800D345C.c)
 *     sub_1800D3484 @ 0x1800D3484 (sub_1800D3484.c)
 *     sub_1800D3538 @ 0x1800D3538 (sub_1800D3538.c)
 *     sub_1800D4B78 @ 0x1800D4B78 (sub_1800D4B78.c)
 *     sub_1800D4C30 @ 0x1800D4C30 (sub_1800D4C30.c)
 *     sub_1800D4CE8 @ 0x1800D4CE8 (sub_1800D4CE8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800D39D8(
        __int64 *a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        _QWORD *a9)
{
  __int64 v11; // rdi
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // r15
  _DWORD *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int128 v28; // [rsp+40h] [rbp-78h] BYREF
  const Spectre::Framework::GeometryProcessingException *v29; // [rsp+50h] [rbp-68h] BYREF
  void *v30[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-40h] BYREF
  char v33; // [rsp+88h] [rbp-30h]

  v11 = a2;
  if ( (unsigned __int8)sub_1800D4CE8(a2, "ComputeNormals") )
  {
    *(_QWORD *)&v28 = v11;
    v19 = (void *)o__aligned_malloc(12 * v11, 16LL);
    *(_OWORD *)v30 = 0LL;
    a8 = 0;
    v32[0] = v19;
    v32[1] = &a8;
    v20 = (_DWORD *)sub_18001B1F8(24LL);
    if ( v20 )
    {
      v20[2] = 1;
      v20[3] = 1;
      *(_QWORD *)v20 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_eee906239c744569acc5ea6e5be29b09_>::`vftable';
      *((_QWORD *)v20 + 2) = v19;
    }
    v30[0] = v19;
    v30[1] = v20;
    v33 = 0;
    sub_1800D345C((__int64)v32);
    if ( !v19 )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v19, 0, 12 * v11);
    try
    {
      v21 = *a1;
      if ( a5 )
      {
        if ( *a3 )
        {
          sub_1800D4B78(a4, a6);
          sub_1800D2AD0(v21, v11, *a3, a4, a6, a9, (__int64)v30[0]);
        }
        else
        {
          sub_1800D4C30((unsigned int)v11, a6);
          sub_1800D3538(v21, v11, a6, a9, (__int64)v30[0]);
        }
      }
      else
      {
        sub_1800D4B78(a4, a6);
        sub_1800D2940(v21, v11, *a3, a4, a6, a9, (__int64)v30[0]);
      }
    }
    catch ( Spectre::Utils::CancelledException )
    {
      throw;
    }
    catch ( const Spectre::Framework::GeometryProcessingException *v29 )
    {
      sub_1800138F8((__int64)v29 + 16);
      sub_18001CAFC(&stru_1801B9648, 3);
      v28 = 0LL;
      sub_1800D3484(a7, (__int64)&v28);
      if ( *((_QWORD *)&v28 + 1) )
        sub_18001060C(*((__int64 *)&v28 + 1));
      goto LABEL_24;
    }
    catch ( ... )
    {
      sub_18001CAFC(&stru_1801B9648, 3);
      v28 = 0LL;
      sub_1800D3484(a7, (__int64)&v28);
      if ( *((_QWORD *)&v28 + 1) )
        sub_18001060C(*((__int64 *)&v28 + 1));
LABEL_24:
      if ( v30[1] )
        sub_18001060C((__int64)v30[1]);
      v25 = a1[1];
      if ( v25 )
        sub_18001060C(v25);
      result = (__int64)a3;
      v26 = a3[1];
      if ( v26 )
        result = sub_18001060C(v26);
      v13 = a7;
LABEL_31:
      v27 = *(_QWORD *)(v13 + 56);
      if ( v27 )
      {
        LOBYTE(v15) = v27 != v13;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, v15);
        *(_QWORD *)(v13 + 56) = 0LL;
      }
    }
    if ( (_DWORD)v11 )
    {
      v22 = 0LL;
      do
      {
        sub_18003AC48((unsigned __int64 *)((char *)v30[0] + v22));
        v22 = v23 + 12;
      }
      while ( v24 != 1 );
    }
    v13 = a7;
    result = sub_1800D3484(a7, (__int64)v30);
    v16 = v30[1];
  }
  else
  {
    v28 = 0LL;
    v13 = a7;
    result = sub_1800D3484(a7, (__int64)&v28);
    v16 = (void *)*((_QWORD *)&v28 + 1);
  }
  if ( v16 )
    result = sub_18001060C((__int64)v16);
  v17 = a1[1];
  if ( v17 )
    result = sub_18001060C(v17);
  v18 = a3[1];
  if ( v18 )
    result = sub_18001060C(v18);
  goto LABEL_31;
}
