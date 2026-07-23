/*
 * XREFs of GetPrintableOperandValue @ 0x140866288
 * Callers:
 *     LocalpGetStringForCondition @ 0x140865D50 (LocalpGetStringForCondition.c)
 *     GetPrintableOperandValue @ 0x140866288 (GetPrintableOperandValue.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SddlpReAlloc @ 0x140796D08 (SddlpReAlloc.c)
 *     GetPrintableOperandValue @ 0x140866288 (GetPrintableOperandValue.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     ULongAddStringSize @ 0x140A46238 (ULongAddStringSize.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        unsigned __int8 *a1,
        int a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int PrintableOperandValue; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r13d
  _WORD *v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v22; // r13
  unsigned __int8 v23; // r12
  unsigned __int8 v24; // bl
  _WORD *v25; // rax
  _WORD *v26; // r11
  int v27; // ecx
  int v28; // ecx
  unsigned int v29; // r12d
  __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  wchar_t *v34; // rax
  unsigned int v35; // r13d
  _WORD *v36; // rax
  int v37; // r9d
  unsigned int v38; // r8d
  unsigned int v39; // eax
  unsigned __int8 *v40; // rcx
  _WORD *v41; // r8
  SIZE_T v42; // rax
  __int64 v43; // rcx
  wchar_t *v44; // rax
  unsigned __int64 v45; // rcx
  unsigned int v46; // r12d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  _WORD *v50; // rax
  unsigned int v51; // r11d
  __int64 v52; // r13
  int v53; // r9d
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  const wchar_t *v56; // r8
  wchar_t *v57; // r11
  __int64 v58; // r9
  int v59; // [rsp+20h] [rbp-D1h]
  __int64 v60; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-A9h] BYREF
  unsigned int v62; // [rsp+4Ch] [rbp-A5h]
  int v63; // [rsp+50h] [rbp-A1h]
  __int64 v64; // [rsp+58h] [rbp-99h]
  SIZE_T v65; // [rsp+60h] [rbp-91h]
  __int64 v66; // [rsp+68h] [rbp-89h]
  __int64 v67; // [rsp+70h] [rbp-81h]
  int v68[2]; // [rsp+78h] [rbp-79h]
  wchar_t pszDest[8]; // [rsp+80h] [rbp-71h] BYREF
  _BYTE Sid[80]; // [rsp+90h] [rbp-61h] BYREF

  v67 = a6;
  v66 = a7;
  *(_QWORD *)v68 = a5;
  PrintableOperandValue = 0;
  v60 = 0LL;
  v61 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v13 = *a1 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 12;
            if ( !v17 )
            {
              if ( (unsigned int)(a2 - 1) >= 4 )
              {
                v18 = *(_DWORD *)(a1 + 1);
                *a4 = 5;
                if ( a2 - 5 >= v18 )
                {
                  if ( v18 + 6 >= v18 )
                  {
                    v19 = (_WORD *)SddlpAlloc(v18 + 6);
                    *(_QWORD *)a3 = v19;
                    if ( v19 )
                    {
                      *v19 = 34;
                      memmove((void *)(*(_QWORD *)a3 + 2LL), &a1[*a4], v18);
                      v20 = (unsigned __int64)v18 >> 1;
                      *(_WORD *)(*(_QWORD *)a3 + 2 * v20 + 2) = 34;
                      *(_WORD *)(*(_QWORD *)a3 + 2 * v20 + 4) = 0;
                      *a4 += v18;
                      goto LABEL_14;
                    }
                    goto LABEL_19;
                  }
                  return 534;
                }
              }
              return 1336;
            }
            v27 = v17 - 8;
            if ( !v27 )
            {
              if ( (unsigned int)(a2 - 1) < 4 )
                return 1336;
              v46 = *(_DWORD *)(a1 + 1);
              *a4 = 5;
              if ( a2 - 5 < v46 || !v46 )
                return 1336;
              v47 = 2LL * v46;
              if ( v47 > 0xFFFFFFFF )
                return 534;
              if ( (int)v47 + 2 < (unsigned int)v47 )
                return 534;
              v48 = 2LL * (unsigned int)(v47 + 2);
              if ( v48 > 0xFFFFFFFF )
                return 534;
              v49 = (unsigned int)v48;
              v50 = (_WORD *)SddlpAlloc((unsigned int)v48);
              *(_QWORD *)a3 = v50;
              if ( v50 )
              {
                *v50 = 35;
                v51 = 0;
                v52 = 0LL;
                do
                {
                  v53 = 2 * v51;
                  v54 = v52 + (unsigned int)*a4;
                  ++v51;
                  ++v52;
                  v55 = a1[v54];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v53 + 1)) = a0123456789abcd_0[v55 >> 4];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v53 + 2)) = a0123456789abcd_0[v55 & 0xF];
                }
                while ( v51 < v46 );
                PrintableOperandValue = 0;
                *(_WORD *)(*(_QWORD *)a3 + 2 * (v49 >> 1) - 2) = 0;
                *a4 += v46;
                goto LABEL_14;
              }
              goto LABEL_19;
            }
            v28 = v27 - 56;
            if ( !v28 )
            {
              if ( (unsigned int)(a2 - 1) < 4 )
                return 1336;
              v35 = *(_DWORD *)(a1 + 1);
              *a4 = 5;
              if ( !v35 || a2 - 5 < v35 )
                return 1336;
              v64 = 6LL;
              v36 = (_WORD *)SddlpAlloc(6uLL);
              *(_QWORD *)a3 = v36;
              if ( v36 )
              {
                *v36 = 123;
                v37 = *a4;
                v38 = 0;
                v62 = 0;
                v63 = v37;
                v39 = 6;
                while ( v35 > v38 )
                {
                  v40 = &a1[v38 + v37];
                  if ( *v40 == 80 )
                  {
                    PrintableOperandValue = 1336;
                    goto LABEL_14;
                  }
                  PrintableOperandValue = GetPrintableOperandValue(
                                            (_DWORD)v40,
                                            a2 - v38 - v37,
                                            (unsigned int)&v60,
                                            (_DWORD)a4,
                                            *(__int64 *)v68,
                                            v67,
                                            v66,
                                            a8);
                  if ( PrintableOperandValue )
                    goto LABEL_14;
                  v62 += *a4;
                  if ( (int)ULongAddStringSize((unsigned int)v64, v60, &v61) < 0 || v61 + 4 < v61 )
                    goto LABEL_39;
                  v41 = *(_WORD **)a3;
                  v42 = v61 + 4;
                  v43 = -1LL;
                  v65 = v42;
                  v61 += 4;
                  do
                    ++v43;
                  while ( v41[v43] );
                  v44 = (wchar_t *)SddlpReAlloc(2 * v43, v42, v41);
                  *(_QWORD *)a3 = v44;
                  if ( !v44 )
                    goto LABEL_19;
                  if ( RtlStringCchPrintfW(
                         &v44[((unsigned __int64)(unsigned int)v64 >> 1) - 2],
                         (unsigned __int64)(unsigned int)(v65 - v64 + 4) >> 1,
                         L"%ls, ",
                         v60) < 0 )
                    goto LABEL_38;
                  SddlpFree(v60);
                  v38 = v62;
                  v37 = v63;
                  v60 = 0LL;
                  v39 = v65;
                  v64 = (unsigned int)v65;
                }
                v45 = (unsigned __int64)v39 >> 1;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v45 - 8) = 125;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v45 - 6) = 0;
                *a4 = v37 + v35;
                goto LABEL_14;
              }
              goto LABEL_19;
            }
            if ( v28 != 1 )
              return 1336;
            if ( (unsigned int)(a2 - 1) < 4 )
              return 1336;
            v29 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( v29 > 0x44 || a2 - 5 < v29 )
              return 1336;
            memmove(Sid, a1 + 5, v29);
            PrintableOperandValue = LocalGetStringForSid(Sid, v59, a8);
            if ( !PrintableOperandValue )
            {
              *a4 += v29;
              v30 = -1LL;
              do
                ++v30;
              while ( *(_WORD *)(v60 + 2 * v30) );
              v31 = (unsigned int)(v30 + 6);
              if ( (unsigned int)v31 >= (unsigned int)v30 )
              {
                v32 = 2 * v31;
                if ( v32 <= 0xFFFFFFFF )
                {
                  v33 = (unsigned int)v32;
                  v34 = (wchar_t *)SddlpAlloc((unsigned int)v32);
                  *(_QWORD *)a3 = v34;
                  if ( v34 )
                  {
                    if ( RtlStringCchPrintfW(v34, v33 >> 1, L"SID(%ls)", v60) >= 0 )
                      goto LABEL_14;
                    goto LABEL_38;
                  }
LABEL_19:
                  PrintableOperandValue = 8;
                  goto LABEL_14;
                }
              }
LABEL_39:
              PrintableOperandValue = 534;
            }
LABEL_14:
            if ( v60 )
              SddlpFree(v60);
            return PrintableOperandValue;
          }
        }
      }
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v22 = *(_QWORD *)(a1 + 1);
    v23 = a1[9];
    v24 = a1[10];
    v25 = (_WORD *)SddlpAlloc(0x40uLL);
    *(_QWORD *)a3 = v25;
    v26 = v25;
    if ( !v25 )
      goto LABEL_19;
    if ( v23 == 1 )
    {
      *v25 = 43;
    }
    else
    {
      if ( v23 != 2 )
        goto LABEL_70;
      *v25 = 45;
    }
    v26 = v25 + 1;
LABEL_70:
    if ( v24 == 1 )
    {
      *v26 = 48;
      v56 = L"%I64o";
    }
    else if ( v24 == 3 )
    {
      *(_DWORD *)v26 = 7864368;
      v56 = L"%I64x";
    }
    else
    {
      v56 = L"%I64u";
    }
    if ( RtlStringCchCopyW(pszDest, 8uLL, v56) < 0 )
      goto LABEL_38;
    if ( v22 || v24 != 1 )
    {
      v58 = -v22;
      if ( v23 != 2 )
        v58 = v22;
      if ( RtlStringCchPrintfW(v57, 32 - (((__int64)v57 - *(_QWORD *)a3) >> 1), pszDest, v58) < 0 )
      {
LABEL_38:
        PrintableOperandValue = 50;
        goto LABEL_14;
      }
    }
    *a4 += 10;
    goto LABEL_14;
  }
  return 87LL;
}
