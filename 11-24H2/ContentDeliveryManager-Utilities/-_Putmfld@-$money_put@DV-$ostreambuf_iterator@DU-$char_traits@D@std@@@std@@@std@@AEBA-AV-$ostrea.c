/*
 * XREFs of ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001F0F4
 * Callers:
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x180020D60 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DO@Z @ 0x180020F80 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_180020F80.c)
 * Callees:
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180006BFC (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BBC8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001C5DC (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001C728 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180067378 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
_OWORD *__fastcall std::money_put<char,std::ostreambuf_iterator<char>>::_Putmfld(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int8 *a8,
        char a9)
{
  __int64 v10; // r14
  unsigned __int8 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // r13
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  __int64 v16; // rbx
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  int v18; // eax
  unsigned int v19; // r15d
  unsigned __int64 v20; // rbx
  void **v21; // rax
  void **v22; // rax
  char v23; // r15
  void **v24; // rbx
  unsigned __int64 v25; // r14
  char v26; // cl
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 i; // rdx
  char v31; // cl
  unsigned __int64 v32; // rcx
  __int64 v33; // r15
  unsigned __int64 v34; // r15
  int v35; // ebx
  __int128 v36; // xmm0
  unsigned __int64 v37; // rax
  char v38; // al
  unsigned __int8 v39; // r14
  __int128 v40; // xmm0
  void **v41; // rbx
  unsigned __int8 *v42; // rbx
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r14
  unsigned __int8 *v45; // rbx
  unsigned __int64 v46; // rbx
  unsigned __int8 v47; // al
  unsigned __int64 v48; // rbx
  __int64 v49; // r14
  unsigned __int8 *v50; // rbx
  unsigned __int64 v51; // r14
  unsigned __int8 *v52; // rbx
  __int128 v53; // xmm0
  unsigned __int8 v54; // al
  unsigned __int8 *v55; // rax
  unsigned __int8 *v56; // rbx
  unsigned __int64 v57; // r14
  unsigned __int8 *v58; // rdx
  unsigned __int8 *v59; // rbx
  __int64 v60; // r14
  __int128 v61; // xmm0
  _OWORD *v62; // rbx
  int v64; // [rsp+2Ch] [rbp-D5h] BYREF
  int v65; // [rsp+30h] [rbp-D1h]
  unsigned int v66; // [rsp+34h] [rbp-CDh]
  unsigned __int64 v67; // [rsp+38h] [rbp-C9h]
  unsigned __int8 *v68; // [rsp+40h] [rbp-C1h]
  __int128 v69; // [rsp+48h] [rbp-B9h] BYREF
  __int64 v70; // [rsp+58h] [rbp-A9h]
  _OWORD *v71; // [rsp+60h] [rbp-A1h]
  __int64 v72; // [rsp+68h] [rbp-99h]
  unsigned __int8 *v73; // [rsp+70h] [rbp-91h]
  void *v74[2]; // [rsp+78h] [rbp-89h] BYREF
  unsigned __int64 v75; // [rsp+90h] [rbp-71h]
  void *v76[2]; // [rsp+98h] [rbp-69h] BYREF
  unsigned __int64 v77; // [rsp+A8h] [rbp-59h]
  unsigned __int64 v78; // [rsp+B0h] [rbp-51h]
  void *v79[3]; // [rsp+B8h] [rbp-49h] BYREF
  unsigned __int64 v80; // [rsp+D0h] [rbp-31h]
  void *v81[2]; // [rsp+D8h] [rbp-29h] BYREF
  __int64 v82; // [rsp+E8h] [rbp-19h]
  unsigned __int64 v83; // [rsp+F0h] [rbp-11h]

  v72 = -2LL;
  v71 = a2;
  v10 = a5;
  v70 = a5;
  v11 = a8;
  v68 = a8;
  v73 = a8;
  v12 = *(__int64 **)(a5 + 64);
  if ( a4 )
  {
    v13 = *v12;
    *(_QWORD *)&v69 = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v69);
    if ( v13 )
    {
      v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v15 )
        (**v15)(v15, 1LL);
    }
  }
  else
  {
    v16 = *v12;
    *(_QWORD *)&v69 = v16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v14 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v69);
    if ( v16 )
    {
      v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v17 )
        (**v17)(v17, 1LL);
    }
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 40LL))(v14, v79);
  v18 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 72LL))(v14);
  v19 = -v18;
  if ( v18 > 0 )
    v19 = v18;
  v66 = v19;
  v20 = v19;
  v67 = v19;
  if ( *((_QWORD *)a8 + 2) > (unsigned __int64)v19 )
  {
    v21 = v79;
    if ( v80 >= 0x10 )
      v21 = (void **)v79[0];
    if ( *(_BYTE *)v21 != 127 )
    {
      v22 = v79;
      if ( v80 >= 0x10 )
        v22 = (void **)v79[0];
      if ( *(char *)v22 > 0 )
      {
        v23 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 32LL))(v14);
        v24 = v79;
        if ( v80 >= 0x10 )
          v24 = (void **)v79[0];
        v25 = *((_QWORD *)a8 + 2) - v67;
        while ( 1 )
        {
          v26 = *(_BYTE *)v24;
          if ( *(_BYTE *)v24 == 127 || v26 <= 0 || v26 >= v25 )
            break;
          v25 -= v26;
          std::string::insert(a8, v25, 1uLL, v23);
          if ( *((char *)v24 + 1) > 0 )
            v24 = (void **)((char *)v24 + 1);
        }
        v19 = v66;
        v10 = v70;
        v20 = v67;
      }
    }
  }
  else
  {
    std::string::insert(a8, 0LL, v19 - *((_QWORD *)a8 + 2) + 1LL, a9);
  }
  v78 = 15LL;
  v77 = 0LL;
  LOBYTE(v76[0]) = 0;
  v27 = *(_QWORD *)v14;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v27 + 88))(v14, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 64LL))(v14, v74);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, int *))(v27 + 80))(v14, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 56LL))(v14, v74);
  }
  std::string::operator=(v76, v74);
  if ( v75 >= 0x10 )
    operator delete(v74[0]);
  v83 = 15LL;
  v82 = 0LL;
  LOBYTE(v81[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v14 + 48LL))(v14, v74);
    std::string::operator=(v81, v74);
    if ( v75 >= 0x10 )
      operator delete(v74[0]);
  }
  LOBYTE(v28) = 0;
  v29 = 0LL;
  for ( i = 0LL; i < 4; ++i )
  {
    v31 = *((_BYTE *)&v64 + i);
    switch ( v31 )
    {
      case ' ':
        ++v29;
LABEL_50:
        v28 = (unsigned __int8)v28;
        if ( i != 3 )
          v28 = 1LL;
        continue;
      case '$':
        v29 += v82;
        continue;
      case '+':
        v29 += v77;
        continue;
    }
    if ( v31 != 118 )
    {
      if ( v31 != 120 )
        continue;
      goto LABEL_50;
    }
    v32 = *((_QWORD *)a8 + 2);
    if ( v32 <= v20 )
      v32 = v20 + 1;
    v29 += v32 + (v19 != 0);
  }
  v33 = *(_QWORD *)(v10 + 40);
  if ( v33 <= 0 || v33 <= v29 )
    v34 = 0LL;
  else
    v34 = v33 - v29;
  v35 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v65 = v35;
  if ( v35 != 64 && (v35 != 256 || !(_BYTE)v28) )
  {
    v36 = *a3;
    v69 = *a3;
    if ( v34 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v69, a6);
        --v34;
      }
      while ( v34 );
      v36 = v69;
    }
    *a3 = v36;
    v34 = 0LL;
  }
  v37 = 0LL;
  *(_QWORD *)&v69 = 0LL;
  while ( 2 )
  {
    v38 = *((_BYTE *)&v64 + v37);
    if ( v38 != 32 )
    {
      switch ( v38 )
      {
        case '$':
          v59 = (unsigned __int8 *)v81;
          if ( v83 >= 0x10 )
            v59 = (unsigned __int8 *)v81[0];
          v40 = *a3;
          *(_OWORD *)v74 = *a3;
          v60 = v82;
          if ( !v82 )
            goto LABEL_91;
          do
          {
            std::ostreambuf_iterator<char>::operator=((__int64)v74, *v59++);
            --v60;
          }
          while ( v60 );
          break;
        case '+':
          if ( !v77 )
            goto LABEL_77;
          v58 = (unsigned __int8 *)v76;
          if ( v78 >= 0x10 )
            v58 = (unsigned __int8 *)v76[0];
          *(_OWORD *)v74 = *a3;
          std::ostreambuf_iterator<char>::operator=((__int64)v74, *v58);
          v40 = *(_OWORD *)v74;
          goto LABEL_76;
        case 'v':
          v44 = *((_QWORD *)v11 + 2);
          if ( !v66 )
          {
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v45 = v11;
            else
              v45 = *(unsigned __int8 **)v11;
            v40 = *a3;
            *(_OWORD *)v74 = *a3;
            if ( v44 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v74, *v45++);
                --v44;
              }
              while ( v44 );
              break;
            }
LABEL_91:
            v35 = v65;
LABEL_76:
            *a3 = v40;
            goto LABEL_77;
          }
          v46 = v67;
          if ( v44 > v67 )
          {
            v51 = v44 - v67;
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v52 = v11;
            else
              v52 = *(unsigned __int8 **)v11;
            v53 = *a3;
            *(_OWORD *)v74 = *a3;
            if ( v51 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v74, *v52++);
                --v51;
              }
              while ( v51 );
              v53 = *(_OWORD *)v74;
              v11 = v68;
            }
            *a3 = v53;
            v54 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int64, __int64))(*(_QWORD *)v14 + 24LL))(
                    v14,
                    i,
                    v28);
            std::ostreambuf_iterator<char>::operator=((__int64)a3, v54);
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v55 = v11;
            else
              v55 = *(unsigned __int8 **)v11;
            v56 = &v55[*((_QWORD *)v11 + 2) - v67];
            *(_OWORD *)v74 = *a3;
            v57 = v67;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)v74, *v56++);
              --v57;
            }
            while ( v57 );
          }
          else
          {
            std::ostreambuf_iterator<char>::operator=((__int64)a3, a9);
            v47 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v14 + 24LL))(v14);
            std::ostreambuf_iterator<char>::operator=((__int64)a3, v47);
            v40 = *a3;
            *(_OWORD *)v74 = *a3;
            v48 = v46 - *((_QWORD *)v11 + 2);
            if ( v48 )
            {
              do
              {
                std::ostreambuf_iterator<char>::operator=((__int64)v74, a9);
                --v48;
              }
              while ( v48 );
              v40 = *(_OWORD *)v74;
            }
            v49 = *((_QWORD *)v11 + 2);
            if ( *((_QWORD *)v11 + 3) < 0x10uLL )
              v50 = v11;
            else
              v50 = *(unsigned __int8 **)v11;
            *(_OWORD *)v74 = v40;
            if ( !v49 )
              goto LABEL_91;
            do
            {
              std::ostreambuf_iterator<char>::operator=((__int64)v74, *v50++);
              --v49;
            }
            while ( v49 );
          }
          break;
        case 'x':
          v39 = a6;
          goto LABEL_71;
        default:
          goto LABEL_77;
      }
      v40 = *(_OWORD *)v74;
      v11 = v68;
      goto LABEL_91;
    }
    *(_OWORD *)v74 = *a3;
    v39 = a6;
    std::ostreambuf_iterator<char>::operator=((__int64)v74, a6);
    *a3 = *(_OWORD *)v74;
LABEL_71:
    if ( v35 == 256 )
    {
      v40 = *a3;
      *(_OWORD *)v74 = *a3;
      if ( v34 )
      {
        do
        {
          std::ostreambuf_iterator<char>::operator=((__int64)v74, v39);
          --v34;
        }
        while ( v34 );
        v40 = *(_OWORD *)v74;
      }
      v34 = 0LL;
      goto LABEL_76;
    }
LABEL_77:
    v37 = v69 + 1;
    *(_QWORD *)&v69 = v37;
    if ( v37 < 4 )
      continue;
    break;
  }
  if ( v77 > 1 )
  {
    v41 = v76;
    if ( v78 >= 0x10 )
      v41 = (void **)v76[0];
    v42 = (unsigned __int8 *)v41 + 1;
    *(_OWORD *)v74 = *a3;
    v43 = v77 - 1;
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)v74, *v42++);
      --v43;
    }
    while ( v43 );
    *a3 = *(_OWORD *)v74;
  }
  *(_QWORD *)(v70 + 40) = 0LL;
  v61 = *a3;
  *(_OWORD *)v74 = *a3;
  if ( v34 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)v74, a6);
      --v34;
    }
    while ( v34 );
    v61 = *(_OWORD *)v74;
  }
  v62 = v71;
  *v71 = v61;
  if ( v83 >= 0x10 )
    operator delete(v81[0]);
  v83 = 15LL;
  v82 = 0LL;
  LOBYTE(v81[0]) = 0;
  if ( v78 >= 0x10 )
    operator delete(v76[0]);
  v78 = 15LL;
  v77 = 0LL;
  LOBYTE(v76[0]) = 0;
  if ( v80 >= 0x10 )
    operator delete(v79[0]);
  v80 = 15LL;
  v79[2] = 0LL;
  LOBYTE(v79[0]) = 0;
  if ( *((_QWORD *)v11 + 3) >= 0x10uLL )
    operator delete(*(void **)v11);
  *((_QWORD *)v11 + 3) = 15LL;
  *((_QWORD *)v11 + 2) = 0LL;
  *v11 = 0;
  return v62;
}
