/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x140718CD0
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueTrEERequest @ 0x14059F35C (IopIssueTrEERequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     IopEfiStatusToNTSTATUS @ 0x140718A60 (IopEfiStatusToNTSTATUS.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  _OWORD *v8; // r15
  signed __int64 *v9; // r14
  void *v10; // r13
  __int64 v11; // rdi
  int v12; // ebx
  signed __int64 *v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 v20; // rcx
  signed __int64 v21; // rcx
  _DWORD *v22; // rcx
  void *v23; // r12
  unsigned __int64 v24; // rbp
  _DWORD *v25; // rdi
  int v26; // ecx
  unsigned __int64 v27; // rbp
  int v28; // ecx
  int v29; // [rsp+50h] [rbp-88h] BYREF
  __int64 v30; // [rsp+58h] [rbp-80h]
  __int64 v31; // [rsp+60h] [rbp-78h]
  _OWORD *Pool2; // [rsp+68h] [rbp-70h]
  _DWORD *v33; // [rsp+70h] [rbp-68h]
  __int64 v34; // [rsp+78h] [rbp-60h]
  unsigned __int64 v35; // [rsp+80h] [rbp-58h]

  v29 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v31) = 0;
  v33 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    v13 = (signed __int64 *)ExAllocatePool2(0x100uLL);
    if ( !v13 )
    {
LABEL_6:
      v11 = a5;
      v12 = -1073741670;
LABEL_46:
      ExFreePoolWithTag(v10, 0);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_52;
    }
    if ( a3 == 2 )
    {
      v8 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v8 )
        goto LABEL_6;
      v14 = 288;
      v31 = 288LL;
      v9 = (signed __int64 *)ExAllocatePool2(0x100uLL);
      if ( !v9 )
        goto LABEL_6;
    }
    else
    {
      v14 = v31;
    }
    v11 = a5;
    v15 = a5;
    v30 = a5;
    v16 = (unsigned int)*a6;
    *a6 = 0;
    v35 = a5 + v16;
    while ( 1 )
    {
      v34 = v11;
      v17 = (__int64)Pool2;
      *Pool2 = *(_OWORD *)(v13 + 1);
      memmove((void *)(v17 + 16), (char *)v13 + 28, *((unsigned int *)v13 + 6));
      *(_WORD *)(v17 + 2 * ((unsigned __int64)*((unsigned int *)v13 + 6) >> 1) + 16) = 0;
      v12 = IopIssueTrEERequest(1, a1, a2, v17, 0x214u, (__int64)v13, 0x220u, 0x1Cu, &v29);
      if ( v12 < 0 )
        break;
      v20 = *v13;
      if ( *v13 == 0x800000000000000EuLL )
      {
        v12 = 0;
        break;
      }
      if ( v20 < 0 )
      {
        v12 = IopEfiStatusToNTSTATUS(v20);
        break;
      }
      if ( !a4 || (unsigned __int8)guard_dispatch_icall_no_overrides(v13 + 1, (char *)v13 + 28, v18, v19) )
      {
        if ( a3 == 2 )
        {
          *v8 = *(_OWORD *)(v13 + 1);
          memmove(v8 + 1, (char *)v13 + 28, *((unsigned int *)v13 + 6));
          while ( 1 )
          {
            v12 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, (__int64)v9, v14, 0x18u, &v29);
            if ( v12 < 0 )
              goto LABEL_43;
            v21 = *v9;
            if ( *v9 == 0x8000000000000005uLL )
            {
              if ( !v11 )
                goto LABEL_29;
              v14 = *((_DWORD *)v9 + 4) + 32;
              v31 = v14;
              ExFreePoolWithTag(v9, 0);
              v9 = (signed __int64 *)ExAllocatePool2(0x100uLL);
              if ( !v9 )
              {
                v12 = -1073741670;
                goto LABEL_43;
              }
              v12 = -1073741789;
            }
            else if ( v21 < 0 )
            {
              v12 = IopEfiStatusToNTSTATUS(v21);
LABEL_29:
              if ( v12 < 0 )
                goto LABEL_43;
              v22 = (_DWORD *)v30;
              v23 = (void *)((*((unsigned int *)v13 + 6) + v30 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v24 = ((unsigned __int64)v23 + v9[2] + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v24 <= v35 )
              {
                if ( v11 )
                {
                  v25 = (_DWORD *)v30;
                  *(_OWORD *)(v30 + 16) = *(_OWORD *)(v13 + 1);
                  memmove(v25 + 8, (char *)v13 + 28, *((unsigned int *)v13 + 6));
                  v25[1] = (_DWORD)v23 - (_DWORD)v25;
                  memmove(v23, v9 + 3, v9[2]);
                  v22 = (_DWORD *)v30;
                  v25[2] = *((_DWORD *)v9 + 4);
                  v25[3] = *((_DWORD *)v9 + 2);
                  *v25 = v24 - (_DWORD)v25;
                  v11 = v34;
                }
              }
              else
              {
                v11 = 0LL;
              }
              v33 = v22;
              v30 = v24;
              v26 = *a6 - (_DWORD)v22 + v24;
              goto LABEL_40;
            }
            if ( v12 != -1073741789 )
              goto LABEL_29;
          }
        }
        v27 = (v15 + *((unsigned int *)v13 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v27 <= v35 )
        {
          if ( v11 )
          {
            *(_OWORD *)(v15 + 4) = *(_OWORD *)(v13 + 1);
            memmove((void *)(v15 + 20), (char *)v13 + 28, *((unsigned int *)v13 + 6));
            *(_DWORD *)v15 = v27 - v15;
          }
        }
        else
        {
          v11 = 0LL;
        }
        v33 = (_DWORD *)v15;
        v28 = *a6 - v15;
        v15 = v27;
        v26 = v27 + v28;
LABEL_40:
        v14 = v31;
        *a6 = v26;
      }
    }
LABEL_43:
    v10 = Pool2;
    if ( v33 && v11 )
      *v33 = 0;
    goto LABEL_46;
  }
  v11 = a5;
  v12 = -1073741670;
LABEL_52:
  if ( !v11 )
  {
    if ( *a6 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v12;
}
