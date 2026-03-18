/*
 * XREFs of LocalpGetStringForCondition @ 0x1409E765C
 * Callers:
 *     LocalGetAceCondition @ 0x1409E74EC (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     EncloseSubCondition @ 0x1409E67F4 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1409E7B94 (GetPrintableOperandValue.c)
 *     GetPrintableAttributeName @ 0x1409E7E00 (GetPrintableAttributeName.c)
 *     SddlpAlloc @ 0x1409E93A4 (SddlpAlloc.c)
 *     GetOperatorIndexByToken @ 0x1409E9798 (GetOperatorIndexByToken.c)
 *     ULongAddStringSize @ 0x140A4C988 (ULongAddStringSize.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r14d
  wchar_t *v16; // rsi
  _BYTE *v17; // rdi
  unsigned int v18; // r15d
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int OperatorIndexByToken; // eax
  unsigned int v30; // r9d
  __int64 v31; // r10
  unsigned __int64 v32; // r11
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rcx
  _WORD *v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  void **v40; // rdi
  unsigned int v41; // edx
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  int v44; // ecx
  unsigned int v45; // r14d
  void *v46; // rdi
  __int64 v47; // r14
  _QWORD *v48; // r15
  bool v49; // zf
  bool v50; // zf
  bool v51; // zf
  void **v52; // rcx
  size_t v53; // r14
  NTSTATUS v54; // eax
  char v55; // al
  __int64 v56; // rdi
  void *v57; // rcx
  int v58; // [rsp+40h] [rbp-C0h]
  void *v59; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v62; // [rsp+58h] [rbp-A8h]
  _DWORD *v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h]
  _QWORD v67[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v68[256]; // [rsp+90h] [rbp-70h] BYREF

  v66 = a5;
  v9 = a2;
  v10 = a1;
  v65 = a6;
  v11 = 0LL;
  PrintableAttributeName = 0;
  v67[0] = a3;
  v62 = a2;
  v63 = a1;
  v64 = a7;
  v59 = 0LL;
  memset_0(v68, 0, sizeof(v68));
  v58 = 0;
  v15 = 0;
  v61 = 0;
  if ( !v10 || !a3 || !v9 )
    return 87LL;
  if ( v9 < 6 || *v10 != 2020897377 )
    return 805LL;
  LODWORD(v16) = 4;
  while ( 1 )
  {
    v60 = (unsigned int)v16;
    if ( (unsigned int)v16 >= v9 )
      break;
    if ( v11 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_46;
    }
    v17 = (char *)v10 + (unsigned int)v16;
    v18 = (unsigned __int8)*v17;
    v19 = (unsigned __int8)*v17;
    if ( v18 > 0x8A )
    {
      if ( (unsigned int)v19 > 0xF8 )
      {
        v20 = v19 - 249;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( (unsigned int)(v21 - 1) > 1 )
              goto LABEL_66;
          }
        }
LABEL_14:
        LOBYTE(v14) = *v17;
        PrintableAttributeName = GetPrintableAttributeName(
                                   (_DWORD)v17,
                                   v9 - (unsigned int)v16,
                                   v14,
                                   (unsigned int)&v59,
                                   (__int64)&v61);
        if ( PrintableAttributeName )
          goto LABEL_86;
        v68[v11] = v59;
LABEL_29:
        ++v15;
        v59 = 0LL;
        ++v11;
        v58 = v15;
        goto LABEL_30;
      }
      if ( (_DWORD)v19 == 248 )
        goto LABEL_14;
      if ( (unsigned int)v19 <= 0x91 )
      {
        if ( (_DWORD)v19 != 145 )
        {
          LODWORD(v19) = v19 - 139;
          v50 = (_DWORD)v19 == 0;
          v19 = (unsigned int)v19;
          goto LABEL_91;
        }
      }
      else
      {
        v19 = (unsigned int)(v19 - 146);
        if ( (_DWORD)v19 )
        {
          v19 = (unsigned int)(v19 - 1);
          if ( (_DWORD)v19 )
          {
            LODWORD(v19) = v19 - 13;
            v51 = (_DWORD)v19 == 0;
            v19 = (unsigned int)v19;
            goto LABEL_94;
          }
        }
      }
      goto LABEL_35;
    }
    if ( v18 == 138 )
      goto LABEL_35;
    if ( (unsigned int)v19 > 0x80 )
    {
      v19 = (unsigned int)(v19 - 129);
      if ( (_DWORD)v19 )
      {
        v19 = (unsigned int)(v19 - 1);
        if ( (_DWORD)v19 )
        {
          v19 = (unsigned int)(v19 - 1);
          if ( (_DWORD)v19 )
          {
            LODWORD(v19) = v19 - 1;
            v50 = (_DWORD)v19 == 0;
            v19 = (unsigned int)v19;
LABEL_91:
            if ( !v50 )
            {
              v19 = (unsigned int)(v19 - 1);
              if ( (_DWORD)v19 )
              {
                LODWORD(v19) = v19 - 1;
                v51 = (_DWORD)v19 == 0;
                v19 = (unsigned int)v19;
LABEL_94:
                if ( !v51 )
                {
                  v19 = (unsigned int)(v19 - 1);
                  if ( (_DWORD)v19 )
                  {
                    v19 = (unsigned int)(v19 - 1);
                    if ( (unsigned int)v19 > 1 )
                      goto LABEL_66;
                  }
                }
              }
            }
          }
        }
      }
LABEL_35:
      if ( (unsigned __int8)(v18 + 96) <= 1u )
      {
        if ( v11 < 2 )
          goto LABEL_66;
        PrintableAttributeName = EncloseSubCondition((void **)&v68[v15 - 1]);
        if ( PrintableAttributeName )
          goto LABEL_46;
        v52 = (void **)&v68[v15 - 2];
      }
      else
      {
        if ( (_BYTE)v18 != 0xA2 )
        {
LABEL_37:
          LOBYTE(v19) = *v17;
          OperatorIndexByToken = GetOperatorIndexByToken(v19, v13, v14, 1336LL);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_68;
          v33 = 3LL * OperatorIndexByToken;
          v34 = -1LL;
          do
            ++v34;
          while ( *(_WORD *)(*(_QWORD *)(v31 + 8 * v33) + 2 * v34) );
          v35 = (unsigned int)(2 * v34);
          LODWORD(v59) = 2 * v34;
          if ( *(_BYTE *)(v31 + 8 * v33 + 16) )
          {
            if ( !v11 )
            {
LABEL_68:
              PrintableAttributeName = v30;
              goto LABEL_46;
            }
            v16 = (wchar_t *)v67[v11 + 1];
            if ( (int)ULongAddStringSize(v35, v16, &v59) < 0 )
              goto LABEL_45;
            v53 = (unsigned int)((_DWORD)v59 + 8);
            v46 = (void *)SddlpAlloc(v53);
            if ( !v46 )
            {
LABEL_60:
              PrintableAttributeName = 8;
LABEL_61:
              v15 = v58;
LABEL_114:
              if ( v46 )
                SddlpFree(v46);
LABEL_46:
              if ( !v15 )
                return PrintableAttributeName;
              if ( !PrintableAttributeName )
                PrintableAttributeName = 1336;
              v60 = PrintableAttributeName;
              goto LABEL_116;
            }
            if ( (_BYTE)v18 == 0xA2 )
            {
              v54 = RtlStringCchPrintfW((NTSTRSAFE_PWSTR)v46, v53 >> 1, L"(%ls%ls)", (&Operators)[v33], v16);
            }
            else
            {
              v55 = *((_BYTE *)&Operators + 8 * v33 + 8);
              if ( (v55 == -121 || v55 == -115)
                && (!wcsnicmp(v16, L"@USER.", 6uLL)
                 || !wcsnicmp(v16, L"@DEVICE.", 8uLL)
                 || !wcsnicmp(v16, L"@TOKEN.", 7uLL)) )
              {
                v15 = v58;
                PrintableAttributeName = 1336;
                goto LABEL_114;
              }
              v54 = RtlStringCchPrintfW((NTSTRSAFE_PWSTR)v46, v53 >> 1, L"(%ls %ls)", (&Operators)[v33], v16);
            }
            if ( v54 < 0 )
              goto LABEL_85;
            v48 = &v67[v11 + 1];
            v47 = 0LL;
          }
          else
          {
            if ( v11 < 2 )
              goto LABEL_68;
            v36 = (_WORD *)v67[v11 + 1];
            v37 = -1LL;
            do
              ++v37;
            while ( v36[v37] );
            v38 = 2LL * (unsigned int)v37;
            if ( v38 > v32 )
              goto LABEL_45;
            v41 = v35 + v38;
            if ( (int)v35 + (int)v38 < (unsigned int)v35 )
              goto LABEL_45;
            v16 = (wchar_t *)v67[v11];
            v42 = -1LL;
            do
              ++v42;
            while ( v16[v42] );
            v43 = 2LL * (unsigned int)v42;
            if ( v43 > v32 || (v44 = v41 + v43, v41 + (unsigned int)v43 < v41) )
            {
LABEL_45:
              PrintableAttributeName = 534;
              goto LABEL_46;
            }
            v45 = v44 + 10;
            LODWORD(v59) = v44 + 10;
            v46 = (void *)SddlpAlloc((unsigned int)(v44 + 10));
            if ( !v46 )
              goto LABEL_60;
            if ( RtlStringCchPrintfW(
                   (NTSTRSAFE_PWSTR)v46,
                   (unsigned __int64)v45 >> 1,
                   L"(%ls %ls %ls)",
                   v16,
                   (&Operators)[v33],
                   v36) < 0 )
            {
LABEL_85:
              PrintableAttributeName = 50;
              goto LABEL_61;
            }
            SddlpFree(v36);
            v47 = -1LL;
            v48 = &v67[v11];
            --v58;
          }
          SddlpFree(v16);
          LODWORD(v16) = v60;
          v9 = v62;
          v11 += v47;
          v15 = v58;
          *v48 = v46;
          v59 = 0LL;
          v61 = 1;
          goto LABEL_30;
        }
        if ( v11 < 1 )
          goto LABEL_66;
        v52 = (void **)&v68[v15 - 1];
      }
      PrintableAttributeName = EncloseSubCondition(v52);
      if ( PrintableAttributeName )
        goto LABEL_46;
      goto LABEL_37;
    }
    if ( (_DWORD)v19 == 128 )
      goto LABEL_35;
    if ( (_BYTE)v18 )
    {
      v22 = v19 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 12;
              if ( v26 )
              {
                v27 = v26 - 8;
                if ( v27 )
                {
                  v28 = v27 - 56;
                  if ( v28 )
                  {
                    if ( v28 != 1 )
                      goto LABEL_66;
                  }
                }
              }
            }
          }
        }
      }
      PrintableAttributeName = GetPrintableOperandValue(
                                 (_DWORD)v17,
                                 v9 - (unsigned int)v16,
                                 (unsigned int)&v59,
                                 (unsigned int)&v61,
                                 v66,
                                 v65,
                                 v64,
                                 a8);
      if ( PrintableAttributeName )
      {
LABEL_86:
        v46 = v59;
        goto LABEL_114;
      }
      v68[v11] = v59;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v16 = (wchar_t *)(unsigned int)((_DWORD)v16 + 1);
      v49 = (_DWORD)v16 == v9;
      if ( (unsigned int)v16 >= v9 )
        break;
      if ( *((_BYTE *)v63 + (_QWORD)v16) )
      {
        v49 = (_DWORD)v16 == v9;
        break;
      }
    }
    if ( !v49 )
    {
LABEL_66:
      PrintableAttributeName = 1336;
      goto LABEL_46;
    }
LABEL_30:
    LODWORD(v16) = v61 + (_DWORD)v16;
    v10 = v63;
  }
  if ( v15 != 1 )
    goto LABEL_46;
  v40 = (void **)v67[0];
  *(_QWORD *)v67[0] = v68[0];
  PrintableAttributeName = EncloseSubCondition(v40);
  v60 = PrintableAttributeName;
  if ( !PrintableAttributeName )
    return PrintableAttributeName;
  *v40 = 0LL;
LABEL_116:
  v56 = v15;
  do
  {
    v57 = (void *)v67[v56-- + 1];
    SddlpFree(v57);
  }
  while ( v56 );
  return v60;
}
