/*
 * XREFs of AuthzBasepAddAccessTypeList @ 0x140446210
 * Callers:
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x14041B4B0 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepUpdateParentTypeList @ 0x1404ADF00 (AuthzBasepUpdateParentTypeList.c)
 *     AuthzBasepSetAppContainerAccessReasons @ 0x140697DE8 (AuthzBasepSetAppContainerAccessReasons.c)
 */

unsigned int __fastcall AuthzBasepAddAccessTypeList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  char v6; // r14
  __int64 v7; // r15
  unsigned int v9; // r13d
  unsigned int v11; // edi
  unsigned __int16 *v12; // rsi
  int v13; // ecx
  unsigned int result; // eax
  __int64 v15; // r10
  __int64 v16; // r8
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // r10
  int v20; // r8d
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 i; // r11
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  int v31; // edx
  int v32; // edx
  int v33; // ecx

  v6 = 0;
  v7 = a3;
  v9 = a2;
  if ( a6 )
  {
    switch ( a6 )
    {
      case 1:
        v11 = a5;
        v12 = (unsigned __int16 *)(a1 + 48LL * a3);
        v13 = *((_DWORD *)v12 + 7);
        a2 = (unsigned int)~*((_DWORD *)v12 + 8);
        result = v13 | a5 & ~*((_DWORD *)v12 + 8);
        *((_DWORD *)v12 + 7) = result;
        if ( v13 != result )
        {
          v15 = *((_QWORD *)v12 + 5);
          v16 = 0LL;
          v17 = a5 & a2 & ~v13;
          a2 = 1LL;
          if ( v15 )
          {
            while ( (_DWORD)a2 )
            {
              if ( ((unsigned int)a2 & v17) != 0 && !*(_DWORD *)(v15 + 4 * v16) )
              {
                result = a4 | 0x10000;
                *(_DWORD *)(v15 + 4 * v16) = a4 | 0x10000;
              }
              v16 = (unsigned int)(v16 + 1);
              a2 = (unsigned int)(2 * a2);
            }
          }
          goto LABEL_11;
        }
        goto LABEL_10;
      case 2:
        v11 = a5;
        v12 = (unsigned __int16 *)(a1 + 48LL * a3);
        v24 = *((_DWORD *)v12 + 8);
        a2 = (unsigned int)~*((_DWORD *)v12 + 7);
        result = v24 | a5 & ~*((_DWORD *)v12 + 7);
        *((_DWORD *)v12 + 8) = result;
        if ( v24 != result )
        {
          result = AuthzBasepSetAccessReasons(a5 & a2 & ~v24, 0x20000, a4, *((_QWORD *)v12 + 5), 0);
          goto LABEL_11;
        }
        goto LABEL_10;
      case 3:
        v11 = a5;
        v12 = (unsigned __int16 *)(a1 + 48LL * a3);
        result = *((_DWORD *)v12 + 7);
        v23 = a5 & result;
        *((_DWORD *)v12 + 7) = v23;
        if ( result != (_DWORD)v23 )
        {
          result = AuthzBasepSetAppContainerAccessReasons(v23, a2, a4, *((_QWORD *)v12 + 5));
          goto LABEL_11;
        }
LABEL_10:
        v6 = 1;
LABEL_11:
        if ( v9 == 1 )
          return result;
        if ( !v6 )
          result = AuthzBasepUpdateParentTypeList(a1, v9, v7, a4, a6);
        for ( i = (unsigned int)(v7 + 1); ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v9 )
            return result;
          result = *v12;
          if ( *(_WORD *)(a1 + 48 * i) <= (unsigned __int16)result )
            return result;
          if ( !a6 )
            break;
          if ( a6 == 1 )
          {
            result = *(_DWORD *)(a1 + 48 * i + 28);
            v32 = ~*(_DWORD *)(a1 + 48 * i + 32);
            v33 = v32 & ~result;
            a2 = result | v11 & v32;
            *(_DWORD *)(a1 + 48 * i + 28) = a2;
LABEL_40:
            v30 = v11 & v33;
            if ( !v30 )
              continue;
            v31 = 0x10000;
            goto LABEL_42;
          }
          if ( a6 == 2 )
          {
            result = *(_DWORD *)(a1 + 48 * i + 32);
            v28 = ~*(_DWORD *)(a1 + 48 * i + 28);
            v29 = v28 & ~result;
            a2 = result | v11 & v28;
            *(_DWORD *)(a1 + 48 * i + 32) = a2;
            v30 = v11 & v29;
            if ( !v30 )
              continue;
            v31 = 0x20000;
LABEL_42:
            result = AuthzBasepSetAccessReasons(v30, v31, a4, *(_QWORD *)(a1 + 48 * i + 40), 0);
            continue;
          }
          v26 = (v11 & *(_DWORD *)(a1 + 48 * i + 28)) == 0;
          v27 = v11 & *(_DWORD *)(a1 + 48 * i + 28);
          *(_DWORD *)(a1 + 48 * i + 28) = v27;
          if ( !v26 )
            result = AuthzBasepSetAppContainerAccessReasons(v27, a2, a4, *(_QWORD *)(a1 + 48 * i + 40));
        }
        a2 = *(unsigned int *)(a1 + 48 * i + 24);
        v33 = a2;
        result = a2 & ~v11;
        *(_DWORD *)(a1 + 48 * i + 24) = result;
        goto LABEL_40;
    }
  }
  else
  {
    v11 = a5;
    a2 = a1 + 48LL * a3;
    v18 = *(_DWORD *)(a2 + 24);
    result = v18 & ~a5;
    *(_DWORD *)(a2 + 24) = result;
    if ( v18 != result )
    {
      v19 = *(_QWORD *)(a2 + 40);
      v20 = a5 & v18;
      v21 = 0LL;
      v22 = 1;
      v12 = (unsigned __int16 *)(a1 + 48 * v7);
      if ( v19 )
      {
        while ( 1 )
        {
          v12 = (unsigned __int16 *)(a1 + 48 * v7);
          if ( !v22 )
            break;
          if ( (v22 & v20) != 0 && !*(_DWORD *)(v19 + 4 * v21) )
          {
            result = a4 | 0x10000;
            *(_DWORD *)(v19 + 4 * v21) = a4 | 0x10000;
          }
          v21 = (unsigned int)(v21 + 1);
          v22 *= 2;
        }
      }
      goto LABEL_11;
    }
  }
  return result;
}
