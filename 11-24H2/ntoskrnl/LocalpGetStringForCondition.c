/*
 * XREFs of LocalpGetStringForCondition @ 0x140865D50
 * Callers:
 *     LocalGetAceCondition @ 0x140865BE0 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EncloseSubCondition @ 0x140864EB8 (EncloseSubCondition.c)
 *     GetOperatorIndexByToken @ 0x140864F04 (GetOperatorIndexByToken.c)
 *     GetPrintableOperandValue @ 0x140866288 (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x140866540 (GetPrintableAttributeName.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     ULongAddStringSize @ 0x140A46238 (ULongAddStringSize.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        _DWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int v9; // r13d
  _DWORD *v10; // r15
  __int64 v11; // r12
  unsigned int PrintableAttributeName; // ebx
  int v13; // r8d
  int v14; // r14d
  const wchar_t *v15; // rsi
  char *v16; // rdi
  unsigned int v17; // r15d
  int OperatorIndexByToken; // eax
  unsigned int v19; // r9d
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  wchar_t **v29; // rdi
  unsigned int v30; // edx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  int v33; // ecx
  unsigned int v34; // r14d
  wchar_t *v35; // rdi
  __int64 v36; // r14
  wchar_t **v37; // r15
  bool v38; // zf
  bool v39; // zf
  unsigned int v40; // ecx
  bool v41; // zf
  unsigned int v42; // ecx
  wchar_t **v43; // rcx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  size_t v46; // r14
  NTSTATUS v47; // eax
  char v48; // al
  __int64 v49; // rdi
  __int64 v50; // rcx
  int v51; // [rsp+40h] [rbp-C0h]
  wchar_t *v52; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v55; // [rsp+58h] [rbp-A8h]
  _DWORD *v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  __int64 v59; // [rsp+78h] [rbp-88h]
  _QWORD v60[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v61[256]; // [rsp+90h] [rbp-70h] BYREF

  v59 = a5;
  v9 = a2;
  v10 = a1;
  v58 = a6;
  v11 = 0LL;
  PrintableAttributeName = 0;
  v60[0] = a3;
  v55 = a2;
  v56 = a1;
  v57 = a7;
  v52 = 0LL;
  memset_0(v61, 0, sizeof(v61));
  v51 = 0;
  v14 = 0;
  v54 = 0;
  if ( !v10 || !a3 || !v9 )
    return 87LL;
  if ( v9 < 6 || *v10 != 2020897377 )
    return 805LL;
  LODWORD(v15) = 4;
  while ( 1 )
  {
    v53 = (unsigned int)v15;
    if ( (unsigned int)v15 >= v9 )
      break;
    if ( v11 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_46;
    }
    v16 = (char *)v10 + (unsigned int)v15;
    v17 = (unsigned __int8)*v16;
    if ( v17 > 0x8A )
    {
      if ( v17 > 0xF8 )
      {
        if ( v17 != 249 && v17 != 250 && v17 - 251 > 1 )
          goto LABEL_66;
LABEL_14:
        LOBYTE(v13) = v17;
        PrintableAttributeName = GetPrintableAttributeName(
                                   (_DWORD)v16,
                                   v9 - (unsigned int)v15,
                                   v13,
                                   (unsigned int)&v52,
                                   (__int64)&v54);
        if ( PrintableAttributeName )
          goto LABEL_86;
        v61[v11] = v52;
LABEL_29:
        ++v14;
        v52 = 0LL;
        ++v11;
        v51 = v14;
        goto LABEL_30;
      }
      if ( v17 == 248 )
        goto LABEL_14;
      if ( v17 <= 0x91 )
      {
        if ( v17 != 145 )
        {
          v40 = v17 - 139;
          v39 = v17 == 139;
          goto LABEL_91;
        }
      }
      else if ( v17 != 146 && v17 != 147 )
      {
        v42 = v17 - 160;
        v41 = v17 == 160;
        goto LABEL_94;
      }
      goto LABEL_35;
    }
    if ( v17 == 138 )
      goto LABEL_35;
    if ( v17 > 0x80 )
    {
      if ( v17 != 129 && v17 != 130 && v17 != 131 )
      {
        v40 = v17 - 132;
        v39 = v17 == 132;
LABEL_91:
        if ( !v39 )
        {
          v44 = v40 - 1;
          if ( v44 )
          {
            v42 = v44 - 1;
            v41 = v42 == 0;
LABEL_94:
            if ( !v41 )
            {
              v45 = v42 - 1;
              if ( v45 )
              {
                if ( v45 - 1 > 1 )
                  goto LABEL_66;
              }
            }
          }
        }
      }
LABEL_35:
      if ( (unsigned __int8)(v17 + 96) <= 1u )
      {
        if ( v11 < 2 )
          goto LABEL_66;
        PrintableAttributeName = EncloseSubCondition((wchar_t **)&v61[v14 - 1]);
        if ( PrintableAttributeName )
          goto LABEL_46;
        v43 = (wchar_t **)&v61[v14 - 2];
      }
      else
      {
        if ( (_BYTE)v17 != 0xA2 )
        {
LABEL_37:
          OperatorIndexByToken = GetOperatorIndexByToken(*v16);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_68;
          v22 = 3LL * OperatorIndexByToken;
          v23 = -1LL;
          do
            ++v23;
          while ( *(_WORD *)(*(_QWORD *)(v20 + 8 * v22) + 2 * v23) );
          v24 = (unsigned int)(2 * v23);
          LODWORD(v52) = 2 * v23;
          if ( *(_BYTE *)(v20 + 8 * v22 + 16) )
          {
            if ( !v11 )
            {
LABEL_68:
              PrintableAttributeName = v19;
              goto LABEL_46;
            }
            v15 = (const wchar_t *)v60[v11 + 1];
            if ( (int)ULongAddStringSize(v24, v15, &v52) < 0 )
              goto LABEL_45;
            v46 = (unsigned int)((_DWORD)v52 + 8);
            v35 = (wchar_t *)SddlpAlloc(v46);
            if ( !v35 )
            {
LABEL_60:
              PrintableAttributeName = 8;
LABEL_61:
              v14 = v51;
LABEL_114:
              if ( v35 )
                SddlpFree(v35);
LABEL_46:
              if ( !v14 )
                return PrintableAttributeName;
              if ( !PrintableAttributeName )
                PrintableAttributeName = 1336;
              v53 = PrintableAttributeName;
              goto LABEL_116;
            }
            if ( (_BYTE)v17 == 0xA2 )
            {
              v47 = RtlStringCchPrintfW(v35, v46 >> 1, L"(%ls%ls)", (&Operators)[v22], v15);
            }
            else
            {
              v48 = *((_BYTE *)&Operators + 8 * v22 + 8);
              if ( (v48 == -121 || v48 == -115)
                && (!wcsnicmp(v15, L"@USER.", 6uLL)
                 || !wcsnicmp(v15, L"@DEVICE.", 8uLL)
                 || !wcsnicmp(v15, L"@TOKEN.", 7uLL)) )
              {
                v14 = v51;
                PrintableAttributeName = 1336;
                goto LABEL_114;
              }
              v47 = RtlStringCchPrintfW(v35, v46 >> 1, L"(%ls %ls)", (&Operators)[v22], v15);
            }
            if ( v47 < 0 )
              goto LABEL_85;
            v37 = (wchar_t **)&v60[v11 + 1];
            v36 = 0LL;
          }
          else
          {
            if ( v11 < 2 )
              goto LABEL_68;
            v25 = v60[v11 + 1];
            v26 = -1LL;
            do
              ++v26;
            while ( *(_WORD *)(v25 + 2 * v26) );
            v27 = 2LL * (unsigned int)v26;
            if ( v27 > v21 )
              goto LABEL_45;
            v30 = v24 + v27;
            if ( (int)v24 + (int)v27 < (unsigned int)v24 )
              goto LABEL_45;
            v15 = (const wchar_t *)v60[v11];
            v31 = -1LL;
            do
              ++v31;
            while ( v15[v31] );
            v32 = 2LL * (unsigned int)v31;
            if ( v32 > v21 || (v33 = v30 + v32, v30 + (unsigned int)v32 < v30) )
            {
LABEL_45:
              PrintableAttributeName = 534;
              goto LABEL_46;
            }
            v34 = v33 + 10;
            LODWORD(v52) = v33 + 10;
            v35 = (wchar_t *)SddlpAlloc((unsigned int)(v33 + 10));
            if ( !v35 )
              goto LABEL_60;
            if ( RtlStringCchPrintfW(v35, (unsigned __int64)v34 >> 1, L"(%ls %ls %ls)", v15, (&Operators)[v22], v25) < 0 )
            {
LABEL_85:
              PrintableAttributeName = 50;
              goto LABEL_61;
            }
            SddlpFree(v25);
            v36 = -1LL;
            v37 = (wchar_t **)&v60[v11];
            --v51;
          }
          SddlpFree(v15);
          LODWORD(v15) = v53;
          v9 = v55;
          v11 += v36;
          v14 = v51;
          *v37 = v35;
          v52 = 0LL;
          v54 = 1;
          goto LABEL_30;
        }
        if ( v11 < 1 )
          goto LABEL_66;
        v43 = (wchar_t **)&v61[v14 - 1];
      }
      PrintableAttributeName = EncloseSubCondition(v43);
      if ( PrintableAttributeName )
        goto LABEL_46;
      goto LABEL_37;
    }
    if ( v17 == 128 )
      goto LABEL_35;
    if ( (_BYTE)v17 )
    {
      if ( v17 != 1 && v17 != 2 && v17 != 3 && v17 != 4 && v17 != 16 && v17 != 24 && v17 != 80 && v17 != 81 )
        goto LABEL_66;
      PrintableAttributeName = GetPrintableOperandValue(
                                 (_DWORD)v16,
                                 v9 - (unsigned int)v15,
                                 (unsigned int)&v52,
                                 (unsigned int)&v54,
                                 v59,
                                 v58,
                                 v57,
                                 a8);
      if ( PrintableAttributeName )
      {
LABEL_86:
        v35 = v52;
        goto LABEL_114;
      }
      v61[v11] = v52;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v15 = (const wchar_t *)(unsigned int)((_DWORD)v15 + 1);
      v38 = (_DWORD)v15 == v9;
      if ( (unsigned int)v15 >= v9 )
        break;
      if ( *((_BYTE *)v56 + (_QWORD)v15) )
      {
        v38 = (_DWORD)v15 == v9;
        break;
      }
    }
    if ( !v38 )
    {
LABEL_66:
      PrintableAttributeName = 1336;
      goto LABEL_46;
    }
LABEL_30:
    LODWORD(v15) = v54 + (_DWORD)v15;
    v10 = v56;
  }
  if ( v14 != 1 )
    goto LABEL_46;
  v29 = (wchar_t **)v60[0];
  *(_QWORD *)v60[0] = v61[0];
  PrintableAttributeName = EncloseSubCondition(v29);
  v53 = PrintableAttributeName;
  if ( !PrintableAttributeName )
    return PrintableAttributeName;
  *v29 = 0LL;
LABEL_116:
  v49 = v14;
  do
  {
    v50 = v60[v49-- + 1];
    SddlpFree(v50);
  }
  while ( v49 );
  return v53;
}
