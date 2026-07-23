/*
 * XREFs of SepParseElamCertResources @ 0x140A90DEC
 * Callers:
 *     SeRegisterElamCertResources @ 0x14078E1F8 (SeRegisterElamCertResources.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SepParseElamCertResources(unsigned __int16 *a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned __int64 v4; // r12
  _BYTE *v5; // rsi
  unsigned int i; // r13d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _WORD *v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  unsigned __int16 *v12; // r15
  wchar_t *v13; // r14
  unsigned int v14; // ebp
  bool v15; // r9
  _BYTE *v16; // r8
  char v17; // dl
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  bool v20; // zf
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char v24; // dl
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  _WORD *v33; // rax
  unsigned __int64 v34; // rcx
  unsigned int v35; // edi
  wchar_t *v36; // rbx
  wchar_t *v37; // rax
  unsigned int j; // r8d
  __int16 v39; // ax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int16 v42; // r8
  __int64 v43; // rcx
  const wchar_t *v44; // rbx
  __int64 v45; // rax
  _WORD *v46; // rcx
  unsigned int v47; // [rsp+40h] [rbp-238h]
  _WORD v48[28]; // [rsp+48h] [rbp-230h] BYREF
  _BYTE v49[448]; // [rsp+80h] [rbp-1F8h] BYREF

  v2 = 0;
  if ( (unsigned __int64)(a2 - 2) <= 0xFFFD )
  {
    v3 = *a1;
    v4 = (unsigned __int64)a1 + a2;
    v47 = v3;
    v5 = a1 + 1;
    for ( i = 0; ; ++i )
    {
      if ( i >= v3 )
        return (unsigned int)v2;
      if ( (unsigned __int64)(v5 + 2) > v4 )
        return 3221225485LL;
      v7 = (v4 - (unsigned __int64)v5) >> 1;
      if ( !v5 || v7 > 0x7FFFFFFF )
        return 3221225485LL;
      v8 = (v4 - (unsigned __int64)v5) >> 1;
      v9 = v5;
      if ( v7 )
      {
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 );
      }
      result = v8 == 0 ? 0xC000000D : 0;
      if ( v8 )
        v11 = v7 - v8;
      else
        v11 = 0LL;
      if ( !v8 )
        return result;
      v12 = (unsigned __int16 *)&v5[2 * v11 + 2];
      v13 = v12 + 1;
      if ( (unsigned __int64)(v12 + 1) >= v4 )
        return 3221225485LL;
      v14 = 0;
      v15 = 1;
      while ( *(_WORD *)v5 )
      {
        if ( v14 >= 0x40 )
          return 3221225485LL;
        if ( v15 )
        {
          if ( v14 >= 0x40uLL )
            _report_rangecheckfailure();
          v17 = 0;
          v16 = &v49[v14];
          *v16 = 0;
        }
        else
        {
          v16 = &v49[v14];
          v17 = 16 * *v16;
          *v16 = v17;
        }
        v18 = *(unsigned __int16 *)v5;
        if ( v18 > 0x41 )
        {
          if ( v18 > 0x61 )
          {
            v28 = v18 - 98;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  if ( v30 - 1 > 1 )
                    return 3221225485LL;
                }
              }
            }
          }
          else if ( v18 != 97 )
          {
            v25 = v18 - 66;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 - 1 > 1 )
                    return 3221225485LL;
                }
              }
            }
LABEL_42:
            v24 = v17 - 55;
            goto LABEL_48;
          }
          v24 = v17 - 87;
          goto LABEL_48;
        }
        if ( v18 == 65 )
          goto LABEL_42;
        if ( v18 > 0x34 )
        {
          v22 = v18 - 53;
          if ( v22 )
          {
            v21 = v22 - 1;
            v20 = v21 == 0;
LABEL_32:
            if ( !v20 )
            {
              v23 = v21 - 1;
              if ( v23 )
              {
                if ( v23 - 1 > 1 )
                  return 3221225485LL;
              }
            }
          }
LABEL_35:
          v24 = v17 - 48;
LABEL_48:
          *v16 = *v5 + v24;
          if ( !v15 )
            ++v14;
          goto LABEL_50;
        }
        if ( v18 == 52 )
          goto LABEL_35;
        v19 = v18 - 32;
        if ( v19 )
        {
          v21 = v19 - 16;
          v20 = v21 == 0;
          goto LABEL_32;
        }
        if ( !v15 )
          return 3221225485LL;
LABEL_50:
        if ( *(_WORD *)v5 != 32 )
          v15 = !v15;
        v5 += 2;
      }
      if ( !v15 || *v12 != 32772 && *v12 != 32780 && (unsigned int)*v12 - 32781 > 1 )
        return 3221225485LL;
      v31 = (v4 - (unsigned __int64)v13) >> 1;
      if ( v12 == (unsigned __int16 *)-2LL || v31 > 0x7FFFFFFF )
        return 3221225485LL;
      v32 = (v4 - (unsigned __int64)v13) >> 1;
      v33 = v12 + 1;
      if ( v31 )
      {
        do
        {
          if ( !*v33 )
            break;
          ++v33;
          --v32;
        }
        while ( v32 );
      }
      result = v32 == 0 ? 0xC000000D : 0;
      if ( v32 )
        v34 = v31 - v32;
      else
        v34 = 0LL;
      if ( !v32 )
        return result;
      v35 = 0;
      v36 = &v12[v34 + 1];
      v5 = v36 + 1;
      if ( v34 )
      {
        v37 = wcschr(v12 + 1, 0x3Bu);
        if ( v37 )
          v36 = v37;
        do
        {
          if ( !v36 )
            break;
          if ( (unsigned __int64)(v36 - v13) >= 0x40 )
            return 3221225485LL;
          for ( j = 0; v13 != v36; *(_WORD *)&v49[128 * (unsigned __int64)v35 + 64 + 2 * v40] = v39 )
          {
            v39 = *v13++;
            v40 = j++;
          }
          v41 = j;
          v42 = 2 * j;
          *(_WORD *)&v49[128 * (unsigned __int64)v35 + 64 + 2 * v41] = 0;
          v43 = 2LL * v35;
          v48[4 * v43] = v42;
          v48[4 * v43 + 1] = v42 + 2;
          *(_QWORD *)&v48[4 * v43 + 4] = &v49[128 * (unsigned __int64)v35 + 64];
          if ( !*v36 )
            break;
          v44 = v36 + 1;
          if ( !*v44 )
            break;
          v13 = (wchar_t *)v44;
          v36 = wcschr(v44, 0x3Bu);
          if ( !v36 )
          {
            v45 = -1LL;
            do
              ++v45;
            while ( v13[v45] );
            v36 = &v13[v45];
          }
          ++v35;
        }
        while ( v35 < 3 );
        v46 = v48;
      }
      else
      {
        v46 = 0LL;
      }
      if ( !qword_140F04B70 )
        return (unsigned int)-1073741637;
      LOBYTE(v46) = 7;
      v2 = guard_dispatch_icall_no_overrides(v46, v49);
      if ( v2 < 0 )
        return (unsigned int)v2;
      v3 = v47;
    }
  }
  return 3221225485LL;
}
