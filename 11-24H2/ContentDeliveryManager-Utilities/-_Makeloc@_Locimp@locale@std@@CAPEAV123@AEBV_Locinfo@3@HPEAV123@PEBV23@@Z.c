/*
 * XREFs of ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180009B20
 * Callers:
 *     ?_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z @ 0x180009A3C (-_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180005124 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800051B4 (--1_Lockit@std@@QEAA@XZ.c)
 *     _Getctype @ 0x180005CD4 (_Getctype.c)
 *     ??$use_facet@V?$codecvt@DDH@std@@@std@@YAAEBV?$codecvt@DDH@0@AEBVlocale@0@@Z @ 0x180006580 (--$use_facet@V-$codecvt@DDH@std@@@std@@YAAEBV-$codecvt@DDH@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066CC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180006818 (--$use_facet@V-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180006964 (--$use_facet@V-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006AB0 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18000943C (-_Init@-$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x18000993C (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001525C (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015EC4 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001E950 (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180067300 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=10
void **__fastcall std::locale::_Locimp::_Makeloc(
        const struct std::_Locinfo *a1,
        int a2,
        void **a3,
        const struct std::locale *a4)
{
  int v8; // r15d
  unsigned __int64 v9; // rsi
  char *v10; // rax
  struct std::locale::facet *v11; // rbx
  unsigned __int64 v12; // rbx
  struct std::locale::facet *v13; // rax
  unsigned __int64 v14; // rbx
  struct std::_Facet_base *v15; // rax
  unsigned __int64 v16; // rbx
  struct std::_Facet_base *v17; // rax
  unsigned __int64 v18; // rsi
  struct std::locale::facet *v19; // rax
  struct std::locale::facet *v20; // rbx
  unsigned __int64 v21; // r8
  struct std::locale::facet *v22; // rdx
  unsigned __int64 v23; // rbx
  struct std::_Facet_base *v24; // rax
  unsigned __int64 v25; // rbx
  struct std::_Facet_base *v26; // rax
  char *v27; // rdx
  _Ctypevec v29; // [rsp+28h] [rbp-28h] BYREF
  char v30; // [rsp+98h] [rbp+48h] BYREF

  v8 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    if ( a4 )
    {
      v12 = std::ctype<char>::id;
      if ( !std::ctype<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::ctype<char>::id )
          std::ctype<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v12 = std::ctype<char>::id;
      }
      v13 = std::use_facet<std::ctype<char>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v13, v12);
    }
    else
    {
      v9 = std::ctype<char>::id;
      if ( !std::ctype<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::ctype<char>::id )
          std::ctype<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v9 = std::ctype<char>::id;
      }
      v10 = (char *)operator new(0x30uLL);
      v11 = (struct std::locale::facet *)v10;
      if ( v10 )
      {
        *((_DWORD *)v10 + 2) = 0;
        *(_QWORD *)v10 = &std::ctype<char>::`vftable';
        *(_Ctypevec *)(v10 + 16) = *Getctype(&v29);
      }
      else
      {
        v11 = 0LL;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v11, v9);
    }
  }
  if ( (a2 & 8) != 0 )
  {
    v14 = std::num_get<char,std::istreambuf_iterator<char>>::id;
    if ( a4 )
    {
      if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
          std::num_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v14 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      }
      v15 = std::use_facet<std::num_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
    }
    else
    {
      if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
          std::num_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v14 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      }
      v15 = (struct std::_Facet_base *)operator new(0x10uLL);
      if ( v15 )
      {
        *((_DWORD *)v15 + 2) = 0;
        *(_QWORD *)v15 = &std::num_get<char,std::istreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v15 = 0LL;
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v15, v14);
    v16 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
    if ( a4 )
    {
      if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
          std::num_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v16 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v17 = std::use_facet<std::num_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
    }
    else
    {
      if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
          std::num_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v16 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v17 = (struct std::_Facet_base *)operator new(0x10uLL);
      if ( v17 )
      {
        *((_DWORD *)v17 + 2) = 0;
        *(_QWORD *)v17 = &std::num_put<char,std::ostreambuf_iterator<char>>::`vftable';
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v17, v16);
    if ( a4 )
    {
      v23 = std::numpunct<char>::id;
      if ( !std::numpunct<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::numpunct<char>::id )
          std::numpunct<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v23 = std::numpunct<char>::id;
      }
      v24 = std::use_facet<std::numpunct<char>>((__int64 *)a4);
      v21 = v23;
      v22 = v24;
    }
    else
    {
      v18 = std::numpunct<char>::id;
      if ( !std::numpunct<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::numpunct<char>::id )
          std::numpunct<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v18 = std::numpunct<char>::id;
      }
      v19 = (struct std::locale::facet *)operator new(0x30uLL);
      v20 = v19;
      if ( v19 )
      {
        *((_DWORD *)v19 + 2) = 0;
        *(_QWORD *)v19 = &std::numpunct<char>::`vftable';
        std::numpunct<char>::_Init((__int64)v19, (__int64)a1, 0);
      }
      else
      {
        v20 = 0LL;
      }
      v21 = v18;
      v22 = v20;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v22, v21);
  }
  if ( v8 )
  {
    v25 = std::codecvt<char,char,int>::id;
    if ( a4 )
    {
      if ( !std::codecvt<char,char,int>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::codecvt<char,char,int>::id )
          std::codecvt<char,char,int>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v25 = std::codecvt<char,char,int>::id;
      }
      v26 = std::use_facet<std::codecvt<char,char,int>>((__int64 *)a4);
    }
    else
    {
      if ( !std::codecvt<char,char,int>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v30, 0);
        if ( !std::codecvt<char,char,int>::id )
          std::codecvt<char,char,int>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v30);
        v25 = std::codecvt<char,char,int>::id;
      }
      v26 = (struct std::_Facet_base *)operator new(0x10uLL);
      if ( v26 )
      {
        *((_DWORD *)v26 + 2) = 0;
        *(_QWORD *)v26 = &std::codecvt<char,char,int>::`vftable';
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v26, v25);
  }
  std::locale::_Locimp::_Makexloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  std::locale::_Locimp::_Makewloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  std::locale::_Locimp::_Makeushloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  *((_DWORD *)a3 + 8) |= a2;
  v27 = (char *)*((_QWORD *)a1 + 11);
  if ( !v27 )
    v27 = (char *)a1 + 96;
  std::_Yarn<char>::operator=(a3 + 5, v27);
  return a3;
}
