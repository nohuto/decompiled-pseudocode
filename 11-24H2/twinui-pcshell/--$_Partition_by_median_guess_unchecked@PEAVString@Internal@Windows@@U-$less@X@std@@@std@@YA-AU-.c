/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1800A7D38
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1800A7C34 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x1800A95C0 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1800A9740 (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 *     ??$_Guess_median_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x180200668 (--$_Guess_median_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Inter.c)
 */

Windows::Internal::String **__fastcall std::_Partition_by_median_guess_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String **a1,
        Windows::Internal::String *a2,
        Windows::Internal::String *a3)
{
  Windows::Internal::String *v3; // rbx
  Windows::Internal::String *v5; // rdi
  Windows::Internal::String *v6; // rsi
  HSTRING v7; // rdx
  HSTRING v8; // rcx
  HSTRING v9; // rdx
  HSTRING v10; // rcx
  HSTRING v11; // rdx
  HSTRING v12; // rcx
  Windows::Internal::String *v13; // r14
  Windows::Internal::String *v14; // r15
  HSTRING v15; // rdx
  HSTRING v16; // rcx
  HSTRING v17; // rdx
  HSTRING v18; // rcx
  bool v19; // zf
  Windows::Internal::String *v20; // r12
  HSTRING v21; // rdx
  HSTRING v22; // rcx
  HSTRING v23; // rbx
  HSTRING v24; // rbx
  Windows::Internal::String **v25; // rax
  HSTRING v26; // rbx
  HSTRING v27; // rbx
  __int64 v28; // rbx
  HSTRING v29; // rbx
  HSTRING v30; // rbx
  HSTRING v33; // [rsp+80h] [rbp+58h] BYREF
  INT32 result; // [rsp+88h] [rbp+60h] BYREF

  v3 = a2;
  v5 = (Windows::Internal::String *)((char *)a2 + 8 * ((a3 - a2) >> 4));
  std::_Guess_median_unchecked<Windows::Internal::String *,std::less<void>>(a2, v5, (char *)a3 - 8);
  v6 = (Windows::Internal::String *)((char *)v5 + 8);
  while ( v3 < v5 )
  {
    v7 = *(HSTRING *)v5;
    v8 = (HSTRING)*((_QWORD *)v5 - 1);
    result = 0;
    WindowsCompareStringOrdinal(v8, v7, &result);
    if ( result == -1 || (unsigned __int8)Windows::Internal::operator<(v5, (char *)v5 - 8) )
    {
      v3 = a2;
      break;
    }
    v5 = (Windows::Internal::String *)((char *)v5 - 8);
    v3 = a2;
  }
  while ( v6 < a3 )
  {
    v9 = *(HSTRING *)v5;
    v10 = *(HSTRING *)v6;
    result = 0;
    WindowsCompareStringOrdinal(v10, v9, &result);
    if ( result == -1 )
      break;
    v11 = *(HSTRING *)v6;
    v12 = *(HSTRING *)v5;
    result = 0;
    WindowsCompareStringOrdinal(v12, v11, &result);
    if ( result == -1 )
      break;
    v6 = (Windows::Internal::String *)((char *)v6 + 8);
  }
  v13 = v6;
  v14 = v5;
  while ( v13 < a3 )
  {
    v15 = *(HSTRING *)v13;
    v16 = *(HSTRING *)v5;
    result = 0;
    WindowsCompareStringOrdinal(v16, v15, &result);
    if ( result != -1 )
    {
      v17 = *(HSTRING *)v5;
      v18 = *(HSTRING *)v13;
      result = 0;
      WindowsCompareStringOrdinal(v18, v17, &result);
      if ( result == -1 )
        break;
      if ( v6 != v13 )
      {
        v26 = *(HSTRING *)v6;
        *(_QWORD *)v6 = 0LL;
        Windows::Internal::String::Release(v6);
        *(_QWORD *)v6 = *(_QWORD *)v13;
        *(_QWORD *)v13 = 0LL;
        Windows::Internal::String::Release(v13);
        v33 = 0LL;
        *(_QWORD *)v13 = v26;
        Windows::Internal::String::~String(&v33);
      }
      v6 = (Windows::Internal::String *)((char *)v6 + 8);
    }
LABEL_26:
    v13 = (Windows::Internal::String *)((char *)v13 + 8);
LABEL_27:
    v3 = a2;
  }
  v19 = v14 == v3;
  if ( v14 <= v3 )
    goto LABEL_21;
  v20 = (Windows::Internal::String *)((char *)v14 - 8);
  while ( 1 )
  {
    v21 = *(HSTRING *)v5;
    v22 = *(HSTRING *)v20;
    result = 0;
    WindowsCompareStringOrdinal(v22, v21, &result);
    if ( result != -1 )
      break;
LABEL_19:
    v14 = (Windows::Internal::String *)((char *)v14 - 8);
    v20 = (Windows::Internal::String *)((char *)v20 - 8);
    if ( v3 >= v14 )
      goto LABEL_20;
  }
  if ( !(unsigned __int8)Windows::Internal::operator<(v5, v20) )
  {
    v5 = (Windows::Internal::String *)((char *)v5 - 8);
    if ( v5 != v20 )
    {
      v27 = *(HSTRING *)v5;
      *(_QWORD *)v5 = 0LL;
      Windows::Internal::String::Release(v5);
      *(_QWORD *)v5 = *(_QWORD *)v20;
      *(_QWORD *)v20 = 0LL;
      Windows::Internal::String::Release(v20);
      v33 = 0LL;
      *(_QWORD *)v20 = v27;
      Windows::Internal::String::~String(&v33);
      v3 = a2;
    }
    goto LABEL_19;
  }
LABEL_20:
  v19 = v14 == v3;
LABEL_21:
  if ( !v19 )
  {
    v14 = (Windows::Internal::String *)((char *)v14 - 8);
    if ( v13 != a3 )
    {
      v30 = *(HSTRING *)v13;
      *(_QWORD *)v13 = 0LL;
      Windows::Internal::String::Release(v13);
      *(_QWORD *)v13 = *(_QWORD *)v14;
      *(_QWORD *)v14 = 0LL;
      Windows::Internal::String::Release(v14);
      *(_QWORD *)v14 = v30;
      v33 = 0LL;
      Windows::Internal::String::~String(&v33);
      goto LABEL_26;
    }
    v5 = (Windows::Internal::String *)((char *)v5 - 8);
    if ( v14 != v5 )
    {
      v28 = *(_QWORD *)v14;
      *(_QWORD *)v14 = 0LL;
      Windows::Internal::String::Release(v14);
      *(_QWORD *)v14 = *(_QWORD *)v5;
      *(_QWORD *)v5 = 0LL;
      Windows::Internal::String::Release(v5);
      *(_QWORD *)v5 = v28;
      v33 = 0LL;
      Windows::Internal::String::~String(&v33);
    }
    v29 = *(HSTRING *)v5;
    *(_QWORD *)v5 = 0LL;
    v6 = (Windows::Internal::String *)((char *)v6 - 8);
    Windows::Internal::String::Release(v5);
    *(_QWORD *)v5 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    Windows::Internal::String::Release(v6);
    *(_QWORD *)v6 = v29;
    v33 = 0LL;
    Windows::Internal::String::~String(&v33);
    goto LABEL_27;
  }
  if ( v13 != a3 )
  {
    if ( v6 != v13 )
    {
      v23 = *(HSTRING *)v5;
      *(_QWORD *)v5 = 0LL;
      Windows::Internal::String::Release(v5);
      *(_QWORD *)v5 = *(_QWORD *)v6;
      *(_QWORD *)v6 = 0LL;
      Windows::Internal::String::Release(v6);
      *(_QWORD *)v6 = v23;
    }
    v24 = *(HSTRING *)v5;
    *(_QWORD *)v5 = 0LL;
    v6 = (Windows::Internal::String *)((char *)v6 + 8);
    Windows::Internal::String::Release(v5);
    *(_QWORD *)v5 = *(_QWORD *)v13;
    *(_QWORD *)v13 = 0LL;
    Windows::Internal::String::Release(v13);
    v5 = (Windows::Internal::String *)((char *)v5 + 8);
    *(_QWORD *)v13 = v24;
    goto LABEL_26;
  }
  v25 = a1;
  *a1 = v5;
  a1[1] = v6;
  return v25;
}
