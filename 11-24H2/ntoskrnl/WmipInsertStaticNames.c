/*
 * XREFs of WmipInsertStaticNames @ 0x1409B3544
 * Callers:
 *     WmipIncludeStaticNames @ 0x1409B1C2C (WmipIncludeStaticNames.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140443D48 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WmipStaticInstanceNameSize @ 0x1409B376C (WmipStaticInstanceNameSize.c)
 */

unsigned __int64 __fastcall WmipInsertStaticNames(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  _DWORD *v12; // r12
  wchar_t *v13; // rdi
  unsigned int v14; // ebp
  unsigned int v15; // r15d
  unsigned __int64 v16; // rcx
  _WORD *v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int16 v20; // ax
  _WORD *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rbx
  const wchar_t *v27; // r8
  unsigned int v28; // ebx
  unsigned int v29; // r15d
  wchar_t *v30; // rdi
  __int64 v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+28h] [rbp-60h]
  wchar_t pszDest[8]; // [rsp+30h] [rbp-58h] BYREF

  result = *(unsigned int *)(a3 + 16);
  if ( (result & 3) != 0 )
  {
    result = *a1;
    v7 = *(unsigned int *)(a3 + 72);
    if ( (int)result + 3 >= (unsigned int)result )
    {
      v8 = (result + 3) & 0xFFFFFFFC;
      v9 = v8;
      result = WmipStaticInstanceNameSize(a3);
      v10 = result;
      if ( (unsigned int)result <= ~v8 )
      {
        v11 = result + v8;
        LODWORD(v31) = v11;
        if ( v11 > a2 )
        {
          *a1 = 56;
          a1[11] = 32;
          a1[12] = v11;
          return result;
        }
        a1[14] = v9;
        v12 = (unsigned int *)((char *)a1 + v9);
        result = *(unsigned int *)(a3 + 16);
        v13 = (wchar_t *)((char *)&a1[v7] + v9);
        if ( (result & 1) != 0 )
        {
          if ( (result & 0x20000) != 0 )
            a1[11] |= 0x10000u;
          if ( !(_DWORD)v7 )
            goto LABEL_7;
          v14 = 0;
          do
          {
            v15 = v10 - 2;
            *v12++ = (_DWORD)v13 - (_DWORD)a1;
            v16 = (unsigned __int64)v15 >> 1;
            if ( v16 )
            {
              v17 = v13 + 1;
              v18 = 2147483646 - v16;
              v19 = *(_QWORD *)(a3 + 88) + 4LL - (_QWORD)(v13 + 1);
              do
              {
                if ( !(v18 + v16) )
                  break;
                v20 = *(_WORD *)((char *)v17 + v19);
                if ( !v20 )
                  break;
                *v17++ = v20;
                --v16;
              }
              while ( v16 );
              v21 = v17 - 1;
              if ( v16 )
                v21 = v17;
              *v21 = 0;
            }
            RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", v14 + **(_DWORD **)(a3 + 88), v31);
            RtlStringCbCatW(v13 + 1, v15, pszDest);
            v22 = -1LL;
            do
              ++v22;
            while ( v13[v22 + 1] );
            v23 = 2 * v22 + 2;
            ++v14;
            *v13 = v23;
            v10 = v15 - v23;
            result = (unsigned __int64)v23 >> 1;
            v13 += result + 1;
          }
          while ( v14 < (unsigned int)v7 );
        }
        else
        {
          if ( (result & 2) == 0 || !(_DWORD)v7 )
            goto LABEL_7;
          v24 = 0LL;
          v25 = v7;
          v32 = 0LL;
          do
          {
            *v12 = (_DWORD)v13 - (_DWORD)a1;
            v26 = -1LL;
            ++v12;
            v27 = *(const wchar_t **)(v24 + *(_QWORD *)(a3 + 88));
            do
              ++v26;
            while ( v27[v26] );
            v28 = 2 * v26 + 2;
            v29 = v10 - 2;
            *v13 = v28;
            v30 = v13 + 1;
            RtlStringCbCopyW(v30, v29, v27);
            v10 = v29 - v28;
            v24 = v32 + 8;
            result = (unsigned __int64)v28 >> 1;
            v32 += 8LL;
            v13 = &v30[result];
            --v25;
          }
          while ( v25 );
        }
        v11 = v31;
LABEL_7:
        *a1 = v11;
      }
    }
  }
  return result;
}
