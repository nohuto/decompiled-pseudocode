/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x140716860
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueTrEERequest @ 0x14059C2DC (IopIssueTrEERequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopEfiStatusToNTSTATUS @ 0x1407165F0 (IopEfiStatusToNTSTATUS.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  signed __int64 v18; // rcx
  signed __int64 v19; // rcx
  _DWORD *v20; // rcx
  void *v21; // r12
  unsigned __int64 v22; // rbp
  _DWORD *v23; // rdi
  int v24; // ecx
  unsigned __int64 v25; // rbp
  int v26; // ecx
  int v27; // [rsp+50h] [rbp-88h] BYREF
  __int64 v28; // [rsp+58h] [rbp-80h]
  __int64 v29; // [rsp+60h] [rbp-78h]
  _OWORD *Pool2; // [rsp+68h] [rbp-70h]
  _DWORD *v31; // [rsp+70h] [rbp-68h]
  __int64 v32; // [rsp+78h] [rbp-60h]
  unsigned __int64 v33; // [rsp+80h] [rbp-58h]

  v27 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v29) = 0;
  v31 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x214uLL, 0x79536F49u);
  v10 = Pool2;
  if ( Pool2 )
  {
    v13 = (signed __int64 *)ExAllocatePool2(0x100uLL, 0x220uLL, 0x79536F49u);
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
      v8 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x214uLL, 0x79536F49u);
      if ( !v8 )
        goto LABEL_6;
      v14 = 288;
      v29 = 288LL;
      v9 = (signed __int64 *)ExAllocatePool2(0x100uLL, 0x120uLL, 0x79536F49u);
      if ( !v9 )
        goto LABEL_6;
    }
    else
    {
      v14 = v29;
    }
    v11 = a5;
    v15 = a5;
    v28 = a5;
    v16 = (unsigned int)*a6;
    *a6 = 0;
    v33 = a5 + v16;
    while ( 1 )
    {
      v32 = v11;
      v17 = (__int64)Pool2;
      *Pool2 = *(_OWORD *)(v13 + 1);
      memmove((void *)(v17 + 16), (char *)v13 + 28, *((unsigned int *)v13 + 6));
      *(_WORD *)(v17 + 2 * ((unsigned __int64)*((unsigned int *)v13 + 6) >> 1) + 16) = 0;
      v12 = IopIssueTrEERequest(1, a1, a2, v17, 0x214u, (__int64)v13, 0x220u, 0x1Cu, &v27);
      if ( v12 < 0 )
        break;
      v18 = *v13;
      if ( *v13 == 0x800000000000000EuLL )
      {
        v12 = 0;
        break;
      }
      if ( v18 < 0 )
      {
        v12 = IopEfiStatusToNTSTATUS(v18);
        break;
      }
      if ( !a4 || (unsigned __int8)guard_dispatch_icall_no_overrides(v13 + 1, (char *)v13 + 28) )
      {
        if ( a3 == 2 )
        {
          *v8 = *(_OWORD *)(v13 + 1);
          memmove(v8 + 1, (char *)v13 + 28, *((unsigned int *)v13 + 6));
          while ( 1 )
          {
            v12 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, (__int64)v9, v14, 0x18u, &v27);
            if ( v12 < 0 )
              goto LABEL_43;
            v19 = *v9;
            if ( *v9 == 0x8000000000000005uLL )
            {
              if ( !v11 )
                goto LABEL_29;
              v14 = *((_DWORD *)v9 + 4) + 32;
              v29 = v14;
              ExFreePoolWithTag(v9, 0);
              v9 = (signed __int64 *)ExAllocatePool2(0x100uLL, v14, 0x79536F49u);
              if ( !v9 )
              {
                v12 = -1073741670;
                goto LABEL_43;
              }
              v12 = -1073741789;
            }
            else if ( v19 < 0 )
            {
              v12 = IopEfiStatusToNTSTATUS(v19);
LABEL_29:
              if ( v12 < 0 )
                goto LABEL_43;
              v20 = (_DWORD *)v28;
              v21 = (void *)((*((unsigned int *)v13 + 6) + v28 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v22 = ((unsigned __int64)v21 + v9[2] + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v22 <= v33 )
              {
                if ( v11 )
                {
                  v23 = (_DWORD *)v28;
                  *(_OWORD *)(v28 + 16) = *(_OWORD *)(v13 + 1);
                  memmove(v23 + 8, (char *)v13 + 28, *((unsigned int *)v13 + 6));
                  v23[1] = (_DWORD)v21 - (_DWORD)v23;
                  memmove(v21, v9 + 3, v9[2]);
                  v20 = (_DWORD *)v28;
                  v23[2] = *((_DWORD *)v9 + 4);
                  v23[3] = *((_DWORD *)v9 + 2);
                  *v23 = v22 - (_DWORD)v23;
                  v11 = v32;
                }
              }
              else
              {
                v11 = 0LL;
              }
              v31 = v20;
              v28 = v22;
              v24 = *a6 - (_DWORD)v20 + v22;
              goto LABEL_40;
            }
            if ( v12 != -1073741789 )
              goto LABEL_29;
          }
        }
        v25 = (v15 + *((unsigned int *)v13 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v25 <= v33 )
        {
          if ( v11 )
          {
            *(_OWORD *)(v15 + 4) = *(_OWORD *)(v13 + 1);
            memmove((void *)(v15 + 20), (char *)v13 + 28, *((unsigned int *)v13 + 6));
            *(_DWORD *)v15 = v25 - v15;
          }
        }
        else
        {
          v11 = 0LL;
        }
        v31 = (_DWORD *)v15;
        v26 = *a6 - v15;
        v15 = v25;
        v24 = v25 + v26;
LABEL_40:
        v14 = v29;
        *a6 = v24;
      }
    }
LABEL_43:
    v10 = Pool2;
    if ( v31 && v11 )
      *v31 = 0;
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
