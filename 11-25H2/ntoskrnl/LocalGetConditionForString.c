/*
 * XREFs of LocalGetConditionForString @ 0x1409E97F8
 * Callers:
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 * Callees:
 *     iswspace @ 0x1404FC3B0 (iswspace.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IsArrayType @ 0x140787EAC (IsArrayType.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     SddlpAlloc @ 0x1409E93A4 (SddlpAlloc.c)
 *     GetOperatorIndexByToken @ 0x1409E9798 (GetOperatorIndexByToken.c)
 *     FreeOperandValue @ 0x1409E97C0 (FreeOperandValue.c)
 *     GetConditionToken @ 0x1409EA014 (GetConditionToken.c)
 *     GetOperandValue @ 0x1409EA0A4 (GetOperandValue.c)
 *     IsValueSizeFixed @ 0x1409EA210 (IsValueSizeFixed.c)
 *     AppendCondition @ 0x1409EA260 (AppendCondition.c)
 */

__int64 __fastcall LocalGetConditionForString(wint_t *a1, __int64 a2, const void **a3, unsigned int *a4)
{
  wint_t *v4; // r12
  void **v6; // r15
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
  __int64 j; // r8
  char v20; // r12
  __int64 v21; // r15
  char v22; // r12
  unsigned int v23; // eax
  char v24; // r10
  unsigned int v25; // ebx
  wint_t *v26; // r12
  __int64 v27; // rcx
  _QWORD *v28; // r9
  __int64 v29; // rdi
  int v30; // eax
  wchar_t **v31; // r10
  __int64 v32; // r8
  char v33; // r11
  char v34; // r10
  __int64 i; // r8
  int v36; // r9d
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // cl
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // r8d
  char v47; // r10
  int v48; // r9d
  unsigned int v49; // ebx
  const void **v50; // rax
  _BYTE *v51; // rax
  int OperatorIndexByToken; // eax
  PVOID v53; // rax
  PVOID v54; // rdi
  int v55; // eax
  PVOID v56; // rdi
  char v57; // cl
  char v58; // cl
  char v59; // al
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  char v62; // [rsp+50h] [rbp-B0h]
  _BYTE v63[7]; // [rsp+51h] [rbp-AFh] BYREF
  const void **v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD *v67; // [rsp+68h] [rbp-98h] BYREF
  wint_t *v68; // [rsp+70h] [rbp-90h]
  _QWORD v69[33]; // [rsp+78h] [rbp-88h]

  v4 = a1;
  v68 = a1;
  v64 = a3;
  v69[0] = a2;
  v62 = 0;
  v6 = (void **)a3;
  v66 = 0;
  v67 = 0LL;
  v7 = 0;
  *(_WORD *)v63 = 0;
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
    v16 = SddlpAlloc((unsigned int)v14);
    *v6 = v16;
    if ( !v16 )
    {
LABEL_109:
      appended = 8;
      goto LABEL_15;
    }
    *v16 = 2020897377;
    *(_DWORD *)&v63[3] = 4;
    while ( 1 )
    {
      if ( !*v4 )
      {
LABEL_57:
        v29 = v7;
        while ( v29 )
        {
          v59 = *((_BYTE *)v69 + v29-- + 7);
          v63[0] = v59;
          if ( v59 == -2 )
          {
            appended = 1336;
            break;
          }
          LODWORD(Size) = 1;
          appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], (int)v63, Size);
          if ( appended )
            goto LABEL_15;
        }
        *a4 = *(_DWORD *)&v63[3];
        *(_QWORD *)v69[0] = v4;
LABEL_15:
        if ( v67 )
          FreeOperandValue(v67);
        if ( *a4 != 4 && !appended )
          return appended;
        v6 = (void **)v64;
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
      v68 = v4;
    }
    if ( v7 == 255 )
    {
      appended = 1001;
      goto LABEL_15;
    }
    ConditionToken = GetConditionToken(v4, &v66);
    v20 = ConditionToken;
    if ( ConditionToken )
    {
      if ( ConditionToken == -2 )
      {
        if ( (v9 & 0xFFFFFFFC) != 0 || v9 == 2 )
          goto LABEL_91;
        v42 = v7;
        v9 = 1;
        ++v7;
        *((_BYTE *)&v69[1] + v42) = -2;
      }
      else
      {
        v21 = v7;
        if ( ConditionToken == -1 )
        {
          if ( !v7 || v9 == 3 || v9 == 1 )
            goto LABEL_91;
          v22 = *((_BYTE *)v69 + v7 + 7);
          v23 = *(_DWORD *)&v63[3];
          v24 = v62;
          v63[0] = v22 == -2;
          while ( v21 )
          {
            v24 = *((_BYTE *)v69 + v21-- + 7);
            --v7;
            v62 = v24;
            if ( v24 == -2 )
              goto LABEL_55;
            v25 = v23 + 1;
            if ( v23 + 1 < v23 )
              goto LABEL_14;
            if ( v25 > *a4 )
            {
              v53 = SddlpAlloc(v25);
              v54 = v53;
              if ( !v53 )
                goto LABEL_109;
              memmove(v53, *v64, *a4);
              SddlpFree((void *)*v64);
              v24 = v62;
              *v64 = v54;
              v23 = *(_DWORD *)&v63[3];
              *a4 = v25;
            }
            *(_DWORD *)&v63[3] = v25;
            *((_BYTE *)*v64 + v23) = v24;
            v23 = v25;
            appended = 0;
          }
          if ( v24 != -2 )
            goto LABEL_91;
LABEL_55:
          if ( !v7 )
          {
            LODWORD(v6) = (_DWORD)v64;
            v4 = &v68[v66];
            goto LABEL_57;
          }
          OperatorIndexByToken = GetOperatorIndexByToken(*((_BYTE *)v69 + v7 + 7));
          if ( OperatorIndexByToken != -1
            && v22 != -2
            && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 19)
            && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8) != 0xA2 )
          {
            goto LABEL_91;
          }
          v9 = 2;
        }
        else
        {
          v30 = GetOperatorIndexByToken(ConditionToken);
          v31 = &Operators;
          v32 = 3LL * v30;
          v65 = *((_DWORD *)&Operators + 6 * v30 + 3);
          if ( v9 != 4 && *((_BYTE *)&Operators + 24 * v30 + 18) && (v9 != 2 || !v63[0]) )
            goto LABEL_91;
          v33 = (char)(&Operators)[3 * v30 + 1];
          if ( v33 )
          {
            if ( v9 > 1 )
            {
              if ( v9 != 3 )
                goto LABEL_91;
              v55 = GetOperatorIndexByToken(*((_BYTE *)v69 + v7 + 7));
              if ( BYTE3(v31[3 * v55 + 2]) )
                goto LABEL_91;
            }
          }
          v34 = BYTE3(v31[v32 + 2]);
          if ( !v34 && (v9 & 0xFFFFFFFC) == 0 && v9 != 2 )
            goto LABEL_91;
          if ( (unsigned int)(v10 - 4) <= 1 )
            goto LABEL_91;
          if ( v7 && v34 )
          {
            for ( i = v7 - 1; i >= 0; i = v39 - 1 )
            {
              if ( (unsigned int)GetOperatorIndexByToken(*((_BYTE *)&v69[1] + i)) != -1 )
              {
                v41 = 3LL * (int)GetOperatorIndexByToken(*((_BYTE *)&v69[1] + v40));
                if ( !*((_BYTE *)&Operators + 8 * v41 + 19) || *((_BYTE *)&Operators + 8 * v41 + 8) == 0xA2 )
                  break;
                goto LABEL_91;
              }
            }
          }
          if ( v33 || (v10 = 5, !v34) )
            v10 = 0;
          while ( v21 )
          {
            v43 = *((_BYTE *)v69 + v21 + 7);
            if ( v43 == -2
              || (v62 = *((_BYTE *)v69 + v21 + 7),
                  v45 = GetOperatorIndexByToken(v43),
                  v48 > *((_DWORD *)&Operators + 6 * v45 + 3)) )
            {
              v44 = v7++;
              *((_BYTE *)&v69[1] + v44) = v20;
              break;
            }
            --v7;
            v49 = v46 + 1;
            --v21;
            if ( v46 + 1 < v46 )
              goto LABEL_14;
            if ( v49 > *a4 )
            {
              v56 = SddlpAlloc(v49);
              if ( !v56 )
                goto LABEL_109;
              memmove(v56, *v64, *a4);
              SddlpFree((void *)*v64);
              v50 = v64;
              v46 = *(_DWORD *)&v63[3];
              v47 = v62;
              *v64 = v56;
              *a4 = v49;
            }
            else
            {
              v50 = v64;
            }
            v51 = *v50;
            *(_DWORD *)&v63[3] = v49;
            v51[v46] = v47;
            appended = 0;
          }
          v9 = 3;
        }
        LODWORD(v6) = (_DWORD)v64;
      }
      v26 = v68;
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
      v36 = v7 - 1;
      for ( j = v7 - 1; j >= 0; j = v38 - 1 )
      {
        v62 = *((_BYTE *)&v69[1] + j);
        v37 = GetOperatorIndexByToken(v62);
        if ( v37 != -1 )
        {
          j = (__int64)&Operators;
          v18 = 3 * v37;
          v57 = *((_BYTE *)&Operators + 24 * v37 + 8);
          if ( (unsigned __int8)(v57 + 119) > 3u
            && (unsigned __int8)(v57 + 112) > 3u
            && BYTE1((&Operators)[3 * v37 + 1]) )
          {
            v10 = 4;
          }
          if ( v57 == -121 || v57 == -115 )
            v63[1] = 1;
          break;
        }
        --v36;
      }
      if ( v36 < 0 )
        v10 = 4;
    }
    v9 = v10;
LABEL_42:
    LOBYTE(j) = 0;
    v26 = v68;
    LOBYTE(v18) = v10 == 4;
    appended = GetOperandValue((_DWORD)v68, v18, j, (unsigned int)&v67, (__int64)&v66, 0, 0, 0, 0);
    if ( appended )
      goto LABEL_15;
    if ( v63[1] )
    {
      v63[1] = 0;
      v58 = *((_BYTE *)v67 + 1);
      if ( ((v58 + 7) & 0xFC) == 0 && v58 != -6 )
      {
LABEL_91:
        appended = 1336;
        goto LABEL_15;
      }
    }
    LODWORD(Sizea) = 1;
    appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], (int)v67 + 1, Sizea);
    if ( appended )
      goto LABEL_15;
    LOBYTE(v27) = *((_BYTE *)v67 + 1);
    if ( !(unsigned __int8)IsValueSizeFixed(v27) )
    {
      LODWORD(Size) = 4;
      appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], (int)v28 + 4, Size);
      if ( appended )
        goto LABEL_15;
      v28 = v67;
    }
    if ( *((_DWORD *)v28 + 1) )
    {
      LODWORD(Size) = *((_DWORD *)v28 + 1);
      appended = AppendCondition((int)v6, (int)a4, (int)&v63[3], v28[1], Size);
      if ( appended )
        goto LABEL_15;
      v28 = v67;
    }
    FreeOperandValue(v28);
    v67 = 0LL;
    v10 = 3;
LABEL_52:
    v4 = &v26[v66];
    goto LABEL_53;
  }
  return 87LL;
}
