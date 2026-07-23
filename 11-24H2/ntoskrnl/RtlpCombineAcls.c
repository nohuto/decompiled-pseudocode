/*
 * XREFs of RtlpCombineAcls @ 0x14090FEF0
 * Callers:
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        _QWORD *a7,
        _DWORD *a8)
{
  unsigned int v8; // r15d
  char *v13; // rdi
  unsigned int v14; // r14d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned __int8 *v17; // r8
  unsigned int v18; // ebx
  unsigned __int8 *v19; // r12
  unsigned int v20; // ebx
  char *Pool2; // rax
  __int64 v22; // rax
  char *v23; // r14
  unsigned __int16 *v24; // rbp
  unsigned int i; // r12d
  unsigned __int16 *v27; // rsi
  unsigned int k; // r12d
  unsigned __int16 *v29; // rsi
  unsigned int v30; // r8d
  unsigned __int8 *v31; // rcx
  unsigned int v32; // r12d
  unsigned __int16 *j; // rsi
  unsigned int v34; // r8d
  unsigned __int8 *v35; // rcx
  unsigned int v36; // r8d
  unsigned __int8 *v37; // rcx
  unsigned int v38; // r8d
  unsigned __int8 *v39; // rcx
  unsigned int v40; // r8d
  unsigned __int8 *v41; // r9
  unsigned __int16 *v42; // rbp
  unsigned int v43; // edx
  unsigned __int16 *v44; // rsi
  unsigned int v45; // ebp
  unsigned int v46; // [rsp+60h] [rbp+8h]

  v8 = 0;
  v13 = 0LL;
  v14 = 2;
  if ( a1 || a2 || a3 || a4 || a5 || a6 )
  {
    v15 = 8;
    if ( a1 )
    {
      v40 = 0;
      v41 = a1 + 8;
      while ( v40 < *((unsigned __int16 *)a1 + 2) )
      {
        switch ( *v41 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v15 + *((unsigned __int16 *)v41 + 1) < v15 )
              goto LABEL_9;
            v15 += *((unsigned __int16 *)v41 + 1);
            if ( a8 )
              *a8 |= 8u;
            if ( *a1 > v14 )
              v14 = *a1;
            break;
          default:
            break;
        }
        ++v40;
        v41 += *((unsigned __int16 *)v41 + 1);
      }
    }
    if ( a2 )
    {
      v16 = 0;
      v17 = a2 + 8;
      while ( v16 < *((unsigned __int16 *)a2 + 2) )
      {
        if ( *v17 == 17 )
        {
          if ( v15 + *((unsigned __int16 *)v17 + 1) < v15 )
          {
LABEL_9:
            v18 = -1073741675;
            goto LABEL_32;
          }
          v15 += *((unsigned __int16 *)v17 + 1);
          if ( a8 )
            *a8 |= 0x10u;
          if ( *a2 > v14 )
            v14 = *a2;
        }
        ++v16;
        v17 += *((unsigned __int16 *)v17 + 1);
      }
    }
    if ( a5 )
    {
      v30 = 0;
      v31 = a5 + 8;
      while ( v30 < *((unsigned __int16 *)a5 + 2) )
      {
        if ( *v31 == 20 )
        {
          if ( v15 + *((unsigned __int16 *)v31 + 1) < v15 )
            goto LABEL_9;
          v15 += *((unsigned __int16 *)v31 + 1);
          if ( a8 )
            *a8 |= 0x80u;
          if ( *a5 > v14 )
            v14 = *a5;
        }
        ++v30;
        v31 += *((unsigned __int16 *)v31 + 1);
      }
    }
    v19 = a6;
    if ( a6 )
    {
      v36 = 0;
      v37 = a6 + 8;
      while ( v36 < *((unsigned __int16 *)a6 + 2) )
      {
        if ( *v37 == 21 )
        {
          if ( v15 + *((unsigned __int16 *)v37 + 1) < v15 )
            goto LABEL_38;
          v15 += *((unsigned __int16 *)v37 + 1);
          if ( a8 )
            *a8 |= 0x100u;
          if ( *a6 > v14 )
            v14 = *a6;
        }
        ++v36;
        v37 += *((unsigned __int16 *)v37 + 1);
      }
    }
    if ( a3 )
    {
      v38 = 0;
      v39 = a3 + 8;
      while ( v38 < *((unsigned __int16 *)a3 + 2) )
      {
        if ( *v39 == 18 )
        {
          if ( v15 + *((unsigned __int16 *)v39 + 1) < v15 )
            goto LABEL_38;
          v15 += *((unsigned __int16 *)v39 + 1);
          if ( a8 )
            *a8 |= 0x20u;
          if ( *a3 > v14 )
            v14 = *a3;
        }
        ++v38;
        v39 += *((unsigned __int16 *)v39 + 1);
      }
    }
    if ( a4 )
    {
      v34 = 0;
      v35 = a4 + 8;
      while ( v34 < *((unsigned __int16 *)a4 + 2) )
      {
        if ( *v35 == 19 )
        {
          if ( v15 + *((unsigned __int16 *)v35 + 1) < v15 )
            goto LABEL_38;
          v15 += *((unsigned __int16 *)v35 + 1);
          if ( a8 )
            *a8 |= 0x40u;
          if ( *a4 > v14 )
            v14 = *a4;
        }
        ++v34;
        v35 += *((unsigned __int16 *)v35 + 1);
      }
    }
    if ( v15 + 3 < v15 )
    {
LABEL_38:
      v18 = -1073741675;
    }
    else
    {
      v20 = (v15 + 3) & 0xFFFFFFFC;
      Pool2 = (char *)ExAllocatePool2(0x100uLL, v20, 0x64536553u);
      v13 = Pool2;
      if ( Pool2 )
      {
        if ( v20 < 8 )
        {
          v18 = -1073741789;
          ExFreePoolWithTag(Pool2, 0);
          v13 = 0LL;
        }
        else if ( v14 - 2 > 2 || v20 > 0xFFFC )
        {
          v18 = -1073741811;
          ExFreePoolWithTag(Pool2, 0);
          v13 = 0LL;
        }
        else
        {
          memset_0(Pool2, 0, v20);
          v22 = (unsigned __int16)v20;
          v18 = 0;
          *v13 = v14;
          v23 = v13 + 8;
          *((_WORD *)v13 + 1) = v22;
          v13[1] = 0;
          *((_DWORD *)v13 + 1) = 0;
          if ( v13 + 8 > &v13[v22] )
            v23 = 0LL;
          if ( a1 )
          {
            v42 = (unsigned __int16 *)(a1 + 8);
            v43 = 0;
            v46 = 0;
            if ( *((_WORD *)a1 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v42 == 16 )
                {
LABEL_86:
                  memmove(v23, v42, v42[1]);
                  ++*((_WORD *)v13 + 2);
                  v43 = v46;
                  v23 += v42[1];
                }
                else
                {
                  switch ( *(_BYTE *)v42 )
                  {
                    case 2:
                    case 3:
                    case 7:
                    case 8:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                      goto LABEL_86;
                    default:
                      break;
                  }
                }
                ++v43;
                v42 = (unsigned __int16 *)((char *)v42 + v42[1]);
                v46 = v43;
              }
              while ( v43 < *((unsigned __int16 *)a1 + 2) );
              v19 = a6;
            }
          }
          if ( a2 )
          {
            v24 = (unsigned __int16 *)(a2 + 8);
            for ( i = 0; i < *((unsigned __int16 *)a2 + 2); v24 = (unsigned __int16 *)((char *)v24 + v24[1]) )
            {
              if ( *(_BYTE *)v24 == 17 )
              {
                memmove(v23, v24, v24[1]);
                ++*((_WORD *)v13 + 2);
                v23 += v24[1];
              }
              ++i;
            }
            v19 = a6;
          }
          if ( a5 )
          {
            v44 = (unsigned __int16 *)(a5 + 8);
            v45 = 0;
            if ( *((_WORD *)a5 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v44 == 20 )
                {
                  memmove(v23, v44, v44[1]);
                  ++*((_WORD *)v13 + 2);
                  v23 += v44[1];
                }
                ++v45;
                v44 = (unsigned __int16 *)((char *)v44 + v44[1]);
              }
              while ( v45 < *((unsigned __int16 *)a5 + 2) );
              v19 = a6;
            }
          }
          if ( v19 )
          {
            v32 = 0;
            for ( j = (unsigned __int16 *)(a6 + 8);
                  v32 < *((unsigned __int16 *)a6 + 2);
                  j = (unsigned __int16 *)((char *)j + j[1]) )
            {
              if ( *(_BYTE *)j == 21 )
              {
                memmove(v23, j, j[1]);
                ++*((_WORD *)v13 + 2);
                v23 += j[1];
              }
              ++v32;
            }
          }
          if ( a3 )
          {
            v27 = (unsigned __int16 *)(a3 + 8);
            for ( k = 0; k < *((unsigned __int16 *)a3 + 2); v27 = (unsigned __int16 *)((char *)v27 + v27[1]) )
            {
              if ( *(_BYTE *)v27 == 18 )
              {
                memmove(v23, v27, v27[1]);
                ++*((_WORD *)v13 + 2);
                v23 += v27[1];
              }
              ++k;
            }
          }
          if ( a4 )
          {
            v29 = (unsigned __int16 *)(a4 + 8);
            if ( *((_WORD *)a4 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v29 == 19 )
                {
                  memmove(v23, v29, v29[1]);
                  ++*((_WORD *)v13 + 2);
                  v23 += v29[1];
                }
                ++v8;
                v29 = (unsigned __int16 *)((char *)v29 + v29[1]);
              }
              while ( v8 < *((unsigned __int16 *)a4 + 2) );
            }
          }
        }
      }
      else
      {
        v18 = -1073741801;
      }
    }
LABEL_32:
    *a7 = v13;
    return v18;
  }
  else
  {
    *a7 = 0LL;
    return 0LL;
  }
}
