/*
 * XREFs of CmpParseInfBuffer @ 0x140C1A5C4
 * Callers:
 *     EmpParseInfDatabase @ 0x140C187C4 (EmpParseInfDatabase.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAppendLine @ 0x140C19F60 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x140C19FE8 (CmpAppendSection.c)
 *     CmpAppendValue @ 0x140C1A0FC (CmpAppendValue.c)
 *     CmpGetToken @ 0x140C1A318 (CmpGetToken.c)
 */

__int64 __fastcall CmpParseInfBuffer(const char *a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  char v5; // si
  char v6; // r12
  __int64 result; // rax
  _QWORD *v8; // r14
  unsigned int v9; // r15d
  void *v10; // r13
  unsigned __int64 v11; // rax
  char v12; // bl
  int v13; // edi
  char v14; // al
  PVOID v15; // rcx
  char appended; // al
  PVOID P; // [rsp+20h] [rbp-30h]
  const char *v18; // [rsp+28h] [rbp-28h] BYREF
  const char *v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+A8h] [rbp+58h]

  v3 = a2;
  v21 = 0;
  v5 = 0;
  v6 = 0;
  v20 = 0LL;
  result = ExAllocatePool2(0x100uLL, 0x30uLL, 0x69704D43uLL);
  v8 = (_QWORD *)result;
  if ( !result )
    return result;
  v9 = 1;
  *(_QWORD *)result = 0LL;
  *(_QWORD *)(result + 8) = 0LL;
  v10 = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 24) = 0LL;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0LL;
  v11 = (unsigned __int64)&a1[v3];
  v18 = a1;
  v19 = &a1[v3];
  v12 = 0;
  P = 0LL;
  v23 = 1;
  do
  {
    CmpGetToken(&v18, v11, (__int64)&v20);
    if ( v9 > 6 )
    {
      if ( v9 == 7 )
      {
        v13 = v20;
        if ( (_DWORD)v20 == 4 )
        {
LABEL_69:
          if ( !CmpAppendValue((__int64)v8, *((__int64 *)&v20 + 1), v21) )
            goto LABEL_26;
          v9 = 9;
          goto LABEL_71;
        }
        if ( (_DWORD)v20 == 6 )
        {
          *((_QWORD *)&v20 + 1) = &EmptyValue;
          LOBYTE(v21) = 0;
          v6 = 0;
          if ( CmpAppendValue((__int64)v8, (__int64)&EmptyValue, 0) )
            goto LABEL_71;
          goto LABEL_87;
        }
LABEL_26:
        v12 = 1;
        v5 = 1;
      }
      else
      {
        if ( v9 != 8 )
        {
          if ( v9 - 9 <= 1 )
          {
            v13 = v20;
            if ( !(_DWORD)v20 )
              goto LABEL_28;
            if ( (_DWORD)v20 == 1 )
              goto LABEL_55;
            if ( (_DWORD)v20 != 6 )
              goto LABEL_26;
            v9 = 7;
            goto LABEL_71;
          }
LABEL_18:
          v12 = 1;
          v5 = 1;
          goto LABEL_72;
        }
        v13 = v20;
        if ( !(_DWORD)v20 )
        {
          LOBYTE(v21) = 0;
          *((_QWORD *)&v20 + 1) = &EmptyValue;
          v6 = 0;
          if ( !CmpAppendValue((__int64)v8, (__int64)&EmptyValue, 0) )
            v5 = 1;
          goto LABEL_28;
        }
        if ( (_DWORD)v20 != 1 )
        {
          if ( (_DWORD)v20 != 4 )
            goto LABEL_26;
          goto LABEL_69;
        }
        LOBYTE(v21) = 0;
        *((_QWORD *)&v20 + 1) = &EmptyValue;
        v6 = 0;
        if ( CmpAppendValue((__int64)v8, (__int64)&EmptyValue, 0) )
          goto LABEL_55;
        v5 = 1;
        v12 = 1;
      }
LABEL_72:
      *a3 = v23;
      if ( P && v6 )
        ExFreePoolWithTag(P, 0);
      if ( v10 && v6 )
        ExFreePoolWithTag(v10, 0);
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
      goto LABEL_90;
    }
    if ( v9 == 6 )
    {
      v13 = v20;
      if ( !(_DWORD)v20 )
      {
        if ( CmpAppendLine(v8, 0LL, 0) && CmpAppendValue((__int64)v8, (__int64)v10, v6) )
        {
          v10 = 0LL;
          goto LABEL_28;
        }
LABEL_87:
        v12 = 1;
        v5 = 1;
        goto LABEL_71;
      }
      if ( (_DWORD)v20 != 1 )
      {
        if ( (_DWORD)v20 == 5 )
        {
          appended = CmpAppendLine(v8, (__int64)v10, v6);
          if ( appended )
          {
            v9 = 8;
          }
          else
          {
            v12 = 1;
            v5 = 1;
          }
          if ( appended )
            v10 = 0LL;
          goto LABEL_71;
        }
        if ( (_DWORD)v20 != 6 )
          goto LABEL_26;
        if ( CmpAppendLine(v8, 0LL, 0) && CmpAppendValue((__int64)v8, (__int64)v10, v6) )
        {
          v10 = 0LL;
          v9 = 7;
          goto LABEL_71;
        }
        goto LABEL_87;
      }
      if ( !CmpAppendLine(v8, 0LL, 0) || !CmpAppendValue((__int64)v8, (__int64)v10, v6) )
        goto LABEL_87;
      v10 = 0LL;
LABEL_55:
      v9 = 5;
      goto LABEL_71;
    }
    if ( v9 != 1 )
    {
      switch ( v9 )
      {
        case 2u:
          v13 = v20;
          if ( (_DWORD)v20 != 3 )
          {
            if ( (_DWORD)v20 != 4 )
              goto LABEL_26;
            v9 = 3;
            v6 = v21;
            P = (PVOID)*((_QWORD *)&v20 + 1);
            goto LABEL_71;
          }
          *((_QWORD *)&v20 + 1) = &EmptyValue;
          v6 = 0;
          LOBYTE(v21) = 0;
          break;
        case 3u:
          v13 = v20;
          if ( (_DWORD)v20 != 3 )
            goto LABEL_26;
          break;
        case 4u:
          v13 = v20;
          if ( (_DWORD)v20 )
          {
            if ( (_DWORD)v20 != 1 )
              goto LABEL_18;
            v14 = CmpAppendSection((__int64)v8, (__int64)P, v6);
            if ( v14 )
            {
              v9 = 5;
            }
            else
            {
              v12 = 1;
              v5 = 1;
            }
            v15 = P;
            if ( v14 )
              v15 = 0LL;
            P = v15;
            goto LABEL_71;
          }
          if ( !CmpAppendSection((__int64)v8, (__int64)P, v6) )
            goto LABEL_26;
          P = 0LL;
LABEL_28:
          v12 = 1;
          goto LABEL_71;
        default:
          v13 = v20;
          if ( !(_DWORD)v20 )
            goto LABEL_28;
          if ( (_DWORD)v20 != 1 )
          {
            if ( (_DWORD)v20 == 2 )
            {
              v9 = 2;
            }
            else
            {
              if ( (_DWORD)v20 != 4 )
              {
                v12 = v9 - 4;
                v5 = v9 - 4;
                goto LABEL_72;
              }
              v10 = (void *)*((_QWORD *)&v20 + 1);
              v9 = 6;
              v6 = v21;
            }
          }
          goto LABEL_71;
      }
      v9 = 4;
      goto LABEL_71;
    }
    v13 = v20;
    if ( !(_DWORD)v20 )
      goto LABEL_28;
    if ( (_DWORD)v20 != 1 )
    {
      if ( (_DWORD)v20 != 2 )
        goto LABEL_26;
      v9 = 2;
    }
LABEL_71:
    if ( v5 )
      goto LABEL_72;
    if ( v13 == 1 )
      ++v23;
LABEL_90:
    v11 = (unsigned __int64)v19;
  }
  while ( !v12 );
  if ( v8 )
    v8[1] = 0LL;
  return (__int64)v8;
}
