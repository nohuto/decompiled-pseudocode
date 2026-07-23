/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x140972D50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  int Length; // eax
  unsigned int v3; // r15d
  char v4; // bl
  PANSI_STRING v5; // r8
  unsigned __int16 v7; // cx
  char *Buffer; // rax
  unsigned __int8 *v9; // r9
  unsigned int v10; // edx
  unsigned __int16 v11; // r11
  __int64 v12; // rcx
  __int16 v13; // bp
  __int16 *v14; // rdx
  int v15; // r14d
  unsigned __int16 v16; // r10
  unsigned __int8 *v17; // r8
  __int16 v18; // dx
  __int16 v19; // ax
  __int64 v20; // r13
  unsigned int v21; // edi
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int16 v26; // si
  __int16 *v27; // r11
  int v28; // eax
  unsigned __int16 v29; // si
  __int64 v30; // r10
  __int16 v31; // r14
  char *v32; // r9
  __int16 v33; // r8
  __int16 v34; // bp
  __int16 v35; // r14
  __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int16 v40; // bx
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rax
  PANSI_STRING v44; // r8
  unsigned __int16 i; // dx
  unsigned __int8 *v46; // r9
  __int16 v47; // r8
  __int16 v48; // r9
  __int16 v49; // ax
  char *v50; // rax
  char *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  __int64 v55; // rdx
  int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // [rsp+20h] [rbp-B8h]
  __int16 v60; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v61; // [rsp+24h] [rbp-B4h]
  __int16 v62; // [rsp+28h] [rbp-B0h]
  char *v63; // [rsp+30h] [rbp-A8h]
  unsigned int v64; // [rsp+38h] [rbp-A0h]
  _OWORD *P; // [rsp+48h] [rbp-90h]
  __int16 *v67; // [rsp+50h] [rbp-88h]
  __int16 v68; // [rsp+60h] [rbp-78h] BYREF
  char v69; // [rsp+80h] [rbp-58h] BYREF

  Length = Name->Length;
  v3 = 0;
  v4 = 0;
  v62 = 0;
  v5 = Name;
  P = 0LL;
  v59 = 0;
  if ( !(_WORD)Length )
    return Length + Expression->Length == 0;
  v7 = Expression->Length;
  if ( !v7 )
    return Length + Expression->Length == 0;
  if ( v7 == 1 && *Expression->Buffer == 42 )
    return 1;
  Buffer = Expression->Buffer;
  if ( *Buffer != 42 )
  {
LABEL_11:
    v63 = &v69;
    v13 = 2 * Expression->Length;
    v68 = 0;
    v60 = v13;
    v14 = &v68;
    v15 = 1;
    v64 = 1;
    v16 = 0;
    v61 = 0;
    while ( 1 )
    {
      v67 = v14;
      if ( v4 )
      {
        v23 = (unsigned int)(v15 - 1);
LABEL_49:
        v40 = v14[v23];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v40 == v13;
      }
      if ( v16 >= v5->Length )
      {
        v23 = (unsigned int)(v15 - 1);
        v59 = 1;
        if ( v14[v23] == v13 )
          goto LABEL_49;
      }
      else
      {
        v17 = (unsigned __int8 *)&v5->Buffer[v16];
        v18 = (char)*v17;
        if ( *v17 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v18) )
        {
          v19 = 2;
          v62 = v18 + ((char)v17[1] << 8);
        }
        else
        {
          v19 = 1;
          v62 = (char)*v17;
        }
        v14 = v67;
        v61 = v19 + v16;
      }
      LODWORD(v20) = 0;
      v21 = 0;
      while ( 2 )
      {
        v24 = (unsigned int)v20;
        v20 = (unsigned int)(v20 + 1);
        v25 = ((unsigned int)(unsigned __int16)v14[v24] + 1) >> 1;
        v26 = 0;
        v27 = (__int16 *)v63;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v28 = Expression->Length;
                if ( (_WORD)v25 == (_WORD)v28 )
                  goto LABEL_58;
                v29 = v25 + v26;
                LOWORD(v25) = v29;
                v30 = v29;
                v31 = 2 * v29;
                if ( v29 == (_WORD)v28 )
                {
                  v13 = v60;
                  v53 = v21++;
                  v27[v53] = v60;
                  goto LABEL_40;
                }
                if ( v29 == v28 - 1
                  && (v50 = Expression->Buffer, v33 = v50[v29], (unsigned __int8)v50[v29] >= 0x80u)
                  && (_BYTE)NlsMbOemCodePageTag
                  && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v33) )
                {
                  v26 = 1;
                }
                else
                {
                  v32 = Expression->Buffer;
                  v33 = v32[v29];
                  if ( (unsigned __int8)v32[v29] >= 0x80u
                    && (_BYTE)NlsMbOemCodePageTag
                    && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v33) )
                  {
                    v26 = 2;
                    v34 = v33 + (v32[v30 + 1] << 8);
                    goto LABEL_30;
                  }
                  v26 = 1;
                }
                v34 = v33;
LABEL_30:
                if ( v21 >= 0xE && !P )
                {
                  P = (_OWORD *)ExAllocatePool2(0x122uLL, 8LL * Expression->Length + 8, 0x64725346u);
                  v27 = (__int16 *)P;
                  v51 = v63;
                  v63 = (char *)P;
                  *P = *(_OWORD *)v51;
                  P[1] = *((_OWORD *)v51 + 1);
                  v52 = Expression->Length;
                  *(_OWORD *)((char *)P + 4 * v52 + 4) = *(_OWORD *)v67;
                  *(_OWORD *)((char *)P + 4 * v52 + 20) = *((_OWORD *)v67 + 1);
                  v67 = (__int16 *)P + 2 * Expression->Length + 2;
                }
                if ( v34 != 42 )
                  break;
LABEL_43:
                v38 = v21;
                v39 = v21 + 1;
                v27[v38] = v31;
                v27[v39] = v31 + 1;
                v21 = v39 + 1;
              }
              if ( v34 != 60 )
                break;
              if ( v59 || v62 != 46 )
                goto LABEL_43;
              v44 = Name;
              for ( i = v61; i < Name->Length; i += v49 )
              {
                v46 = (unsigned __int8 *)&v44->Buffer[i];
                v47 = (char)*v46;
                if ( *v46 >= 0x80u
                  && (_BYTE)NlsMbOemCodePageTag
                  && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v47) )
                {
                  v49 = 2;
                  v48 = v47 + ((char)v46[1] << 8);
                }
                else
                {
                  v48 = (char)*v46;
                  v49 = 1;
                }
                if ( v48 == 46 )
                  goto LABEL_43;
                v44 = Name;
              }
              v58 = v21++;
              v27[v58] = v31 + 1;
            }
            v35 = 2 * v26 + v31;
            if ( v34 != 62 )
              break;
            if ( !v59 && v62 != 46 )
            {
              v42 = v21++;
              v27[v42] = v35;
              goto LABEL_58;
            }
          }
          if ( v34 != 34 )
            break;
          if ( !v59 )
          {
            v36 = v62;
            if ( v62 == 46 )
              goto LABEL_57;
            goto LABEL_38;
          }
        }
        if ( v59 )
        {
LABEL_58:
          v13 = v60;
          goto LABEL_40;
        }
        if ( v34 == 63 )
        {
LABEL_57:
          v43 = v21++;
          v27[v43] = v35;
          goto LABEL_58;
        }
        v36 = v62;
LABEL_38:
        v41 = v34 == v36;
        v13 = v60;
        if ( v41 )
        {
          v37 = v21++;
          v27[v37] = v35;
        }
LABEL_40:
        v14 = v67;
        if ( (unsigned int)v20 < v64 )
        {
          while ( v3 < v21 )
          {
            do
            {
              if ( (unsigned __int16)v67[v20] >= (unsigned __int16)v27[v3] )
                break;
              v20 = (unsigned int)(v20 + 1);
            }
            while ( (unsigned int)v20 < v64 );
            ++v3;
            if ( (unsigned int)v20 >= v64 )
              goto LABEL_41;
          }
          continue;
        }
        break;
      }
LABEL_41:
      if ( !v21 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        return 0;
      }
      v16 = v61;
      v15 = v21;
      v5 = Name;
      v3 = 0;
      v4 = v59;
      v63 = (char *)v67;
      v14 = v27;
      v64 = v21;
    }
  }
  v9 = (unsigned __int8 *)(Buffer + 1);
  v10 = 0;
  v11 = *(_OWORD *)Expression - 1;
  while ( v10 < (unsigned __int16)(*(_OWORD *)Expression - 1) )
  {
    v12 = v9[v10];
    if ( (unsigned __int8)v12 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v12) )
    {
      ++v10;
    }
    else if ( (v12 & 0x80u) == 0LL && (*((_BYTE *)qword_140013670 + (char)v12) & 8) != 0 )
    {
      v5 = Name;
      goto LABEL_11;
    }
    ++v10;
  }
  v54 = Name->Length;
  if ( (unsigned __int16)v54 >= (unsigned __int16)(Expression->Length - 1) )
  {
    v55 = v54 - (unsigned int)v11;
    if ( !(_BYTE)NlsMbOemCodePageTag || !(_DWORD)v55 )
      return memcmp(v9, &Name->Buffer[v55], v11) == 0;
    do
    {
      v56 = 1;
      v57 = (unsigned __int8)Name->Buffer[v3];
      if ( (unsigned __int8)v57 >= 0x80u && *((_WORD *)NlsOemLeadByteInfo + v57) )
        v56 = 2;
      v3 += v56;
    }
    while ( v3 < (unsigned int)v55 );
    v9 = (unsigned __int8 *)(Buffer + 1);
    if ( v3 <= (unsigned int)v55 )
      return memcmp(v9, &Name->Buffer[v55], v11) == 0;
  }
  return 0;
}
