/*
 * XREFs of LocalGetConditionForString @ 0x1408640EC
 * Callers:
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 * Callees:
 *     iswspace @ 0x1404FC3F0 (iswspace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IsArrayType @ 0x14079738C (IsArrayType.c)
 *     GetConditionToken @ 0x140864908 (GetConditionToken.c)
 *     GetOperandValue @ 0x140864998 (GetOperandValue.c)
 *     FreeOperandValue @ 0x140864B04 (FreeOperandValue.c)
 *     IsValueSizeFixed @ 0x140864B3C (IsValueSizeFixed.c)
 *     AppendCondition @ 0x140864B8C (AppendCondition.c)
 *     GetOperatorIndexByToken @ 0x140864F04 (GetOperatorIndexByToken.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall LocalGetConditionForString(wint_t *a1, __int64 a2, const void **a3, unsigned int *a4)
{
  wint_t *v4; // r12
  const void **v6; // r15
  int v7; // esi
  unsigned int appended; // ebx
  unsigned int v9; // edi
  int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  _DWORD *v16; // rax
  char ConditionToken; // al
  int v18; // edx
  __int64 i; // r8
  __int64 v20; // rcx
  char v21; // r12
  __int64 v22; // r15
  char v23; // r12
  unsigned int v24; // eax
  char v25; // r10
  unsigned int v26; // ebx
  wint_t *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdi
  int v31; // eax
  wchar_t **v32; // r10
  __int64 v33; // r8
  __int64 v34; // rcx
  char v35; // r11
  char v36; // r10
  __int64 v37; // r8
  int v38; // r9d
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // r8d
  char v49; // r10
  int v50; // r9d
  unsigned int v51; // ebx
  const void **v52; // rax
  _BYTE *v53; // rax
  __int64 v54; // rcx
  int OperatorIndexByToken; // eax
  void *v56; // rax
  const void *v57; // rdi
  int v58; // eax
  void *v59; // rdi
  char v60; // cl
  char v61; // cl
  char v62; // al
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  char v65; // [rsp+50h] [rbp-B0h]
  _BYTE v66[7]; // [rsp+51h] [rbp-AFh] BYREF
  const void **v67; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h] BYREF
  wint_t *v71; // [rsp+70h] [rbp-90h]
  _QWORD v72[33]; // [rsp+78h] [rbp-88h]

  v4 = a1;
  v71 = a1;
  v67 = a3;
  v72[0] = a2;
  v65 = 0;
  v6 = a3;
  v69 = 0;
  v70 = 0LL;
  v7 = 0;
  *(_WORD *)v66 = 0;
  appended = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 && a2 && a3 && a4 )
  {
    *a3 = 0LL;
    v11 = -1LL;
    *a4 = 0;
    do
      ++v11;
    while ( a1[v11] );
    if ( (unsigned int)v11 < 3 || *a1 != 40 )
    {
      appended = 1336;
      goto LABEL_143;
    }
    v12 = v11 + 1;
    v13 = -1;
    if ( v12 )
      v13 = v12;
    *a4 = v13;
    if ( !v12 )
    {
LABEL_14:
      appended = 534;
      goto LABEL_15;
    }
    v14 = 2LL * v13;
    if ( v14 > 0xFFFFFFFF )
    {
      *a4 = -1;
      goto LABEL_14;
    }
    *a4 = v14;
    v16 = (_DWORD *)SddlpAlloc((unsigned int)v14);
    *v6 = v16;
    if ( !v16 )
    {
LABEL_109:
      appended = 8;
      goto LABEL_15;
    }
    *v16 = 2020897377;
    *(_DWORD *)&v66[3] = 4;
    while ( 1 )
    {
      if ( !*v4 )
      {
LABEL_57:
        v30 = v7;
        while ( v30 )
        {
          v62 = *((_BYTE *)v72 + v30-- + 7);
          v66[0] = v62;
          if ( v62 == -2 )
          {
            appended = 1336;
            break;
          }
          LODWORD(Size) = 1;
          appended = AppendCondition((int)v6, (int)a4, (int)&v66[3], (int)v66, Size);
          if ( appended )
            goto LABEL_15;
        }
        *a4 = *(_DWORD *)&v66[3];
        *(_QWORD *)v72[0] = v4;
LABEL_15:
        if ( v70 )
          FreeOperandValue(v70);
        if ( *a4 != 4 && !appended )
          return appended;
        v6 = v67;
LABEL_143:
        if ( *v6 )
        {
          SddlpFree(*v6);
          *v6 = 0LL;
          *a4 = 0;
        }
        return appended;
      }
      if ( !iswspace(*v4) )
        break;
      ++v4;
LABEL_53:
      v71 = v4;
    }
    if ( v7 == 255 )
    {
      appended = 1001;
      goto LABEL_15;
    }
    ConditionToken = GetConditionToken(v4, &v69);
    v20 = 0LL;
    v21 = ConditionToken;
    if ( ConditionToken )
    {
      if ( ConditionToken == -2 )
      {
        if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 )
          goto LABEL_91;
        v45 = v7;
        v9 = 1;
        ++v7;
        *((_BYTE *)&v72[1] + v45) = -2;
      }
      else
      {
        v22 = v7;
        if ( ConditionToken == -1 )
        {
          if ( !v7 || v9 == 3 || v9 == 1 )
            goto LABEL_91;
          v23 = *((_BYTE *)v72 + v7 + 7);
          v24 = *(_DWORD *)&v66[3];
          v25 = v65;
          v66[0] = v23 == -2;
          while ( v22 )
          {
            v25 = *((_BYTE *)v72 + v22-- + 7);
            --v7;
            v65 = v25;
            if ( v25 == -2 )
              goto LABEL_55;
            v26 = v24 + 1;
            if ( v24 + 1 < v24 )
              goto LABEL_14;
            if ( v26 > *a4 )
            {
              v56 = (void *)SddlpAlloc(v26);
              v57 = v56;
              if ( !v56 )
                goto LABEL_109;
              memmove(v56, *v67, *a4);
              SddlpFree(*v67);
              v25 = v65;
              *v67 = v57;
              v24 = *(_DWORD *)&v66[3];
              *a4 = v26;
            }
            *(_DWORD *)&v66[3] = v26;
            *((_BYTE *)*v67 + v24) = v25;
            v24 = v26;
            appended = 0;
          }
          if ( v25 != -2 )
            goto LABEL_91;
LABEL_55:
          if ( !v7 )
          {
            LODWORD(v6) = (_DWORD)v67;
            v4 = &v71[v69];
            goto LABEL_57;
          }
          v54 = v7;
          LOBYTE(v54) = *((_BYTE *)v72 + v7 + 7);
          OperatorIndexByToken = GetOperatorIndexByToken(v54);
          if ( OperatorIndexByToken != -1
            && v23 != -2
            && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 19)
            && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8) != 0xA2 )
          {
            goto LABEL_91;
          }
          v9 = 2;
        }
        else
        {
          LOBYTE(v20) = ConditionToken;
          v31 = GetOperatorIndexByToken(v20);
          v32 = &Operators;
          v33 = 3LL * v31;
          v34 = 0LL;
          v68 = *((_DWORD *)&Operators + 6 * v31 + 3);
          if ( v9 != 4 && *((_BYTE *)&Operators + 24 * v31 + 18) && (v9 != 2 || !v66[0]) )
            goto LABEL_91;
          v35 = (char)(&Operators)[3 * v31 + 1];
          if ( v35 )
          {
            if ( v9 > 1 )
            {
              if ( v9 != 3 )
                goto LABEL_91;
              LOBYTE(v34) = *((_BYTE *)v72 + v7 + 7);
              v58 = GetOperatorIndexByToken(v34);
              v34 = 0LL;
              if ( BYTE3(v32[3 * v58 + 2]) )
                goto LABEL_91;
            }
          }
          v36 = BYTE3(v32[v33 + 2]);
          if ( !v36 && (v9 & 0xFFFFFFFC) == 0 && v9 != 2 )
            goto LABEL_91;
          if ( (unsigned int)(v10 - 4) <= 1 )
            goto LABEL_91;
          if ( v7 && v36 )
          {
            v37 = v7 - 1;
            while ( v37 >= 0 )
            {
              LOBYTE(v34) = *((_BYTE *)&v72[1] + v37);
              if ( (unsigned int)GetOperatorIndexByToken(v34) != -1 )
              {
                v43 = v42;
                LOBYTE(v43) = *((_BYTE *)&v72[1] + v42);
                v44 = 3LL * (int)GetOperatorIndexByToken(v43);
                v34 = 0LL;
                if ( !*((_BYTE *)&Operators + 8 * v44 + 19) || *((_BYTE *)&Operators + 8 * v44 + 8) == 0xA2 )
                  break;
                goto LABEL_91;
              }
              v37 = v41 - 1;
              v34 = 0LL;
            }
          }
          if ( v35 || (v10 = 5, !v36) )
            v10 = 0;
          while ( v22 )
          {
            LOBYTE(v34) = *((_BYTE *)v72 + v22 + 7);
            if ( (_BYTE)v34 == 0xFE
              || (v65 = *((_BYTE *)v72 + v22 + 7),
                  v47 = GetOperatorIndexByToken(v34),
                  v50 > *((_DWORD *)&Operators + 6 * v47 + 3)) )
            {
              v46 = v7++;
              *((_BYTE *)&v72[1] + v46) = v21;
              break;
            }
            --v7;
            v51 = v48 + 1;
            --v22;
            if ( v48 + 1 < v48 )
              goto LABEL_14;
            if ( v51 > *a4 )
            {
              v59 = (void *)SddlpAlloc(v51);
              if ( !v59 )
                goto LABEL_109;
              memmove(v59, *v67, *a4);
              SddlpFree(*v67);
              v52 = v67;
              v48 = *(_DWORD *)&v66[3];
              v49 = v65;
              *v67 = v59;
              *a4 = v51;
            }
            else
            {
              v52 = v67;
            }
            v53 = *v52;
            *(_DWORD *)&v66[3] = v51;
            v53[v48] = v49;
            v34 = 0LL;
            appended = 0;
          }
          v9 = 3;
        }
        LODWORD(v6) = (_DWORD)v67;
      }
      v27 = v71;
      goto LABEL_52;
    }
    if ( (v9 & 0xFFFFFFFC) != 0 || v10 == 3 || v9 == 2 )
      goto LABEL_91;
    if ( !v10 )
    {
      v10 = 5;
      if ( !v7 )
      {
        v9 = 4;
        v10 = 4;
        goto LABEL_42;
      }
      v38 = v7 - 1;
      for ( i = v7 - 1; i >= 0; i = v40 - 1 )
      {
        v65 = *((_BYTE *)&v72[1] + i);
        v39 = ((__int64 (*)(void))GetOperatorIndexByToken)();
        if ( v39 != -1 )
        {
          i = (__int64)&Operators;
          v18 = 3 * v39;
          v60 = *((_BYTE *)&Operators + 24 * v39 + 8);
          if ( (unsigned __int8)(v60 + 119) > 3u
            && (unsigned __int8)(v60 + 112) > 3u
            && BYTE1((&Operators)[3 * v39 + 1]) )
          {
            v10 = 4;
          }
          if ( v60 == -121 || v60 == -115 )
            v66[1] = 1;
          break;
        }
        --v38;
      }
      if ( v38 < 0 )
        v10 = 4;
    }
    v9 = v10;
LABEL_42:
    LOBYTE(i) = 0;
    v27 = v71;
    LOBYTE(v18) = v10 == 4;
    appended = GetOperandValue((_DWORD)v71, v18, i, (unsigned int)&v70, (__int64)&v69, 0, 0, 0, 0);
    if ( appended )
      goto LABEL_15;
    if ( v66[1] )
    {
      v66[1] = 0;
      v61 = *(_BYTE *)(v70 + 1);
      if ( ((v61 + 7) & 0xFC) == 0 && v61 != -6 )
      {
LABEL_91:
        appended = 1336;
        goto LABEL_15;
      }
    }
    LODWORD(Sizea) = 1;
    appended = AppendCondition((int)v6, (int)a4, (int)&v66[3], (int)v70 + 1, Sizea);
    if ( appended )
      goto LABEL_15;
    LOBYTE(v28) = *(_BYTE *)(v70 + 1);
    if ( !(unsigned __int8)IsValueSizeFixed(v28) )
    {
      LODWORD(Size) = 4;
      appended = AppendCondition((int)v6, (int)a4, (int)&v66[3], (int)v29 + 4, Size);
      if ( appended )
        goto LABEL_15;
      v29 = v70;
    }
    if ( *(_DWORD *)(v29 + 4) )
    {
      LODWORD(Size) = *(_DWORD *)(v29 + 4);
      appended = AppendCondition((int)v6, (int)a4, (int)&v66[3], *(_QWORD *)(v29 + 8), Size);
      if ( appended )
        goto LABEL_15;
      v29 = v70;
    }
    FreeOperandValue(v29);
    v70 = 0LL;
    v10 = 3;
LABEL_52:
    v4 = &v27[v69];
    goto LABEL_53;
  }
  return 87LL;
}
