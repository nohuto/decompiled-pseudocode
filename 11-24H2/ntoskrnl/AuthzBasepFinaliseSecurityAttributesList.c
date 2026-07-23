/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x1403B8CD0
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140697D2C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall AuthzBasepFinaliseSecurityAttributesList(__int64 a1, char a2)
{
  _QWORD **v4; // rsi
  _QWORD *result; // rax
  char *v6; // rbx
  char v7; // bp
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  int v10; // ecx
  char **v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  int v15; // edx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  void **v19; // rcx
  _QWORD *v20; // rcx
  void **v21; // rax
  void **v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  void **v25; // rax
  char *v26; // r14
  _QWORD **v27; // r8
  void **v28; // rdx
  __int64 v29; // r9
  _QWORD *v30; // rax
  int v31; // eax
  char *v32; // r11
  PVOID v33; // r11

  v4 = (_QWORD **)(a1 + 32);
  while ( 1 )
  {
    result = *v4;
    if ( *v4 == v4 )
      return result;
    v6 = (char *)(result - 2);
    if ( a2 )
    {
      v7 = 0;
      if ( (*((_DWORD *)v6 + 14) & 2) != 0 )
      {
        v8 = *result;
        if ( *(_QWORD **)(*result + 8LL) != result || (v9 = (_QWORD *)result[1], (_QWORD *)*v9 != result) )
LABEL_26:
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *((_DWORD *)v6 + 14) &= ~2u;
        if ( a1 )
          --*(_DWORD *)(a1 + 24);
      }
      v10 = *((_DWORD *)v6 + 14) & 1;
      if ( (*((_DWORD *)v6 + 14) & 4) != 0 )
      {
        if ( v10 )
        {
          v20 = *(_QWORD **)v6;
          if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
            goto LABEL_26;
          v21 = (void **)*((_QWORD *)v6 + 1);
          if ( *v21 != v6 )
            goto LABEL_26;
          *v21 = v20;
          v20[1] = v21;
          *((_DWORD *)v6 + 14) &= ~1u;
          if ( a1 )
            --*(_DWORD *)a1;
        }
        v22 = (void **)(v6 + 72);
        while ( 1 )
        {
          v23 = *v22;
          if ( *v22 == v22 )
            break;
          if ( (v23[4] & 2) != 0 )
          {
            v27 = (_QWORD **)v23[2];
            if ( v27[1] != v23 + 2 )
              goto LABEL_26;
            v28 = (void **)v23[3];
            if ( *v28 != v23 + 2 )
              goto LABEL_26;
            *v28 = v27;
            v27[1] = v28;
            *((_DWORD *)v23 + 8) &= ~2u;
            --*((_DWORD *)v6 + 22);
          }
          if ( (v23[4] & 1) != 0 )
          {
            v24 = (_QWORD *)*v23;
            if ( *(_QWORD **)(*v23 + 8LL) != v23 )
              goto LABEL_26;
            v25 = (void **)v23[1];
            if ( *v25 != v23 )
              goto LABEL_26;
            *v25 = v24;
            v24[1] = v25;
            *((_DWORD *)v23 + 8) &= ~1u;
            --*((_DWORD *)v6 + 15);
            if ( (v23[4] & 4) != 0 )
              --*((_DWORD *)v6 + 16);
          }
          ExFreePoolWithTag(v23, 0);
        }
        v26 = (char *)*((_QWORD *)v6 + 12);
        while ( v26 != v6 + 96 )
        {
          v31 = *((_DWORD *)v26 + 4);
          v32 = v26 - 16;
          v26 = *(char **)v26;
          if ( (v31 & 1) == 0 )
          {
            AuthzBasepRemoveSecurityAttributeValueFromLists(v6, v32, 0LL);
            ExFreePoolWithTag(v33, 0);
          }
        }
        v7 = 1;
      }
      else
      {
        if ( !v10 )
        {
          v11 = *(char ***)(a1 + 16);
          if ( *v11 != (char *)(a1 + 8) )
            goto LABEL_26;
          *(_QWORD *)v6 = a1 + 8;
          *((_QWORD *)v6 + 1) = v11;
          *v11 = v6;
          *(_QWORD *)(a1 + 16) = v6;
          *((_DWORD *)v6 + 14) |= 1u;
          ++*(_DWORD *)a1;
        }
        v12 = v6 + 96;
        while ( 1 )
        {
          v13 = (_QWORD *)*v12;
          if ( (_QWORD *)*v12 == v12 )
            break;
          v14 = v13 - 2;
          v15 = v13[2] & 4;
          if ( (v13[2] & 2) != 0 )
          {
            v29 = *v13;
            if ( *(_QWORD **)(*v13 + 8LL) != v13 )
              goto LABEL_26;
            v30 = (_QWORD *)v13[1];
            if ( (_QWORD *)*v30 != v13 )
              goto LABEL_26;
            *v30 = v29;
            *(_QWORD *)(v29 + 8) = v30;
            *((_DWORD *)v14 + 8) &= ~2u;
            --*((_DWORD *)v6 + 22);
          }
          v16 = *((_DWORD *)v14 + 8);
          if ( v15 )
          {
            if ( (v16 & 1) != 0 )
            {
              v17 = *v14;
              if ( *(_QWORD **)(*v14 + 8LL) != v14 )
                goto LABEL_26;
              v18 = (_QWORD *)v14[1];
              if ( (_QWORD *)*v18 != v14 )
                goto LABEL_26;
              *v18 = v17;
              *(_QWORD *)(v17 + 8) = v18;
              *((_DWORD *)v14 + 8) &= ~1u;
              --*((_DWORD *)v6 + 15);
              if ( (v14[4] & 4) != 0 )
                --*((_DWORD *)v6 + 16);
            }
            ExFreePoolWithTag(v14, 0);
          }
          else if ( (v16 & 1) == 0 )
          {
            v19 = (void **)*((_QWORD *)v6 + 10);
            if ( *v19 != v6 + 72 )
              goto LABEL_26;
            *v14 = v6 + 72;
            v14[1] = v19;
            *v19 = v14;
            *((_QWORD *)v6 + 10) = v14;
            *((_DWORD *)v14 + 8) |= 1u;
            ++*((_DWORD *)v6 + 15);
          }
        }
      }
    }
    else
    {
      v7 = AuthzBasepRollbackSecurityAttributeChanges(a1, result - 2);
    }
    if ( v7 )
      ExFreePoolWithTag(v6, 0);
  }
}
