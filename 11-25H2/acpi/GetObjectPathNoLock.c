/*
 * XREFs of GetObjectPathNoLock @ 0x140012D50
 * Callers:
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     GetObjectPathNoLock @ 0x140012D50 (GetObjectPathNoLock.c)
 *     FindNSObj @ 0x140042958 (FindNSObj.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x140012D50 (GetObjectPathNoLock.c)
 */

_BYTE *__fastcall GetObjectPathNoLock(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 ObjectPathNoLock; // rax
  _BYTE *v5; // rsi
  _BYTE *result; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rcx
  _BYTE *v9; // rdi
  __int64 v10; // rdx
  _BYTE *Pool2; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  _BYTE *v15; // rdx
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _BYTE *v21; // rax
  __int64 v22; // rax
  _BYTE *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  char *v26; // r9
  char v27; // cl
  _BYTE *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  _BYTE *v32; // rax
  __int64 v33; // rax
  _BYTE *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rbp
  char v38; // cl

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = -1LL;
    if ( v2 )
    {
      ObjectPathNoLock = GetObjectPathNoLock(v2);
      v5 = (_BYTE *)ObjectPathNoLock;
      if ( !ObjectPathNoLock )
        return 0LL;
      v10 = -1LL;
      do
        ++v10;
      while ( *(_BYTE *)(ObjectPathNoLock + v10) );
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v10 + 9, 1381258079LL);
      v9 = Pool2;
      if ( Pool2 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v5[v12] );
        v13 = v12 + 1;
        if ( v13 )
        {
          if ( v13 <= 0x7FFFFFFF )
          {
            v14 = 2147483646 - v13;
            v15 = Pool2;
            v16 = v5 - Pool2;
            do
            {
              if ( !(v14 + v13) )
                break;
              v17 = v15[v16];
              if ( !v17 )
                break;
              *v15++ = v17;
              --v13;
            }
            while ( v13 );
            Pool2 = v15 - 1;
            if ( v13 )
              Pool2 = v15;
          }
          *Pool2 = 0;
        }
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( v5[v18] );
          v19 = v18 + 9;
          if ( (unsigned __int64)(v19 - 1) <= 0x7FFFFFFE )
          {
            v20 = v19;
            v21 = v9;
            do
            {
              if ( !*v21 )
                break;
              ++v21;
              --v20;
            }
            while ( v20 );
            if ( v20 )
            {
              v22 = v19 - v20;
              v23 = &v9[v19 - v20];
              v24 = v19 - v22;
              if ( v19 != v22 )
              {
                v25 = 2147483646LL;
                v26 = (char *)("." - v23);
                do
                {
                  if ( !v25 )
                    break;
                  v27 = v23[(_QWORD)v26];
                  if ( !v27 )
                    break;
                  *v23 = v27;
                  --v25;
                  ++v23;
                  --v24;
                }
                while ( v24 );
              }
              v28 = v23 - 1;
              if ( v24 )
                v28 = v23;
              *v28 = 0;
            }
          }
        }
        v29 = -1LL;
        do
          ++v29;
        while ( v5[v29] );
        v30 = v29 + 9;
        if ( (unsigned __int64)(v30 - 1) <= 0x7FFFFFFE )
        {
          v31 = v30;
          v32 = v9;
          do
          {
            if ( !*v32 )
              break;
            ++v32;
            --v31;
          }
          while ( v31 );
          v33 = v30 - v31;
          if ( v31 )
          {
            v34 = &v9[v33];
            v35 = v30 - v33;
            if ( v30 != v33 )
            {
              v36 = 4LL;
              v37 = a1 - (_QWORD)v34;
              do
              {
                if ( !v36 )
                  break;
                v38 = v34[v37 + 40];
                if ( !v38 )
                  break;
                *v34 = v38;
                --v36;
                ++v34;
                --v35;
              }
              while ( v35 );
            }
            v7 = v34 - 1;
            if ( v35 )
              v7 = v34;
            *v7 = 0;
          }
        }
      }
      ExFreePoolWithTag(v5, 0x5254535Fu);
      if ( !v9 )
        return v9;
      goto LABEL_9;
    }
    result = (_BYTE *)ExAllocatePool2(64LL, 8LL, 1381258079LL);
    v9 = result;
    if ( result )
    {
      *result = 92;
      do
LABEL_9:
        ++v3;
      while ( v9[v3] );
      if ( (int)v3 - 1LL >= 0 )
      {
        v8 = &v9[(int)v3 - 1];
        do
        {
          if ( *v8 != 95 )
            break;
          *v8-- = 0;
        }
        while ( v8 - v9 >= 0 );
      }
      return v9;
    }
  }
  else
  {
    result = (_BYTE *)ExAllocatePool2(64LL, 1LL, 1381258079LL);
    if ( result )
      *result = 0;
  }
  return result;
}
