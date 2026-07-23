/*
 * XREFs of IopCheckBackupRestorePrivilege @ 0x1408AA2E0
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepConcatenatePrivileges @ 0x1409C23F0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopCheckBackupRestorePrivilege(__int64 a1, _DWORD *a2, char a3, int a4)
{
  char v5; // dl
  int v7; // ecx
  char v8; // r14
  int v9; // ebp
  int v10; // r15d
  unsigned int v11; // r10d
  unsigned int v12; // edi
  int v13; // edi
  __int64 v14; // rcx
  char v15; // al
  PVOID *v16; // r13
  _DWORD *v17; // r14
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  PVOID *v22; // r14
  _DWORD *v23; // rsi
  int v24; // ecx
  int v25; // eax
  void *Pool2; // rdi
  _DWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // edx
  int v31; // eax
  void *v32; // rsi
  _DWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rdx
  char v36; // [rsp+30h] [rbp-68h]
  int v37; // [rsp+38h] [rbp-60h] BYREF
  int v38; // [rsp+3Ch] [rbp-5Ch]
  LUID Src; // [rsp+40h] [rbp-58h] BYREF
  int v40; // [rsp+48h] [rbp-50h]

  v36 = a3;
  v5 = 0;
  v7 = *(_DWORD *)(a1 + 12);
  v8 = 0;
  if ( (v7 & 0x100) != 0 || (*a2 & 0x4000) == 0 )
    return;
  *(_DWORD *)(a1 + 12) = v7 | 0x100;
  v9 = *(_DWORD *)(a1 + 16) | 0x11F01BF;
  v10 = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x2000000) == 0 )
    v9 = *(_DWORD *)(a1 + 16);
  v11 = 0;
  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    v5 = 1;
    v12 = v9;
    goto LABEL_20;
  }
  v12 = v9;
  if ( (v9 & 0x11200A9) != 0 )
  {
    v13 = 1;
    Src = SeBackupPrivilege;
    v37 = 1;
    v38 = 1;
    v40 = 0;
    if ( a3 )
    {
      v14 = *(_QWORD *)(a1 + 32);
      if ( v14 )
      {
        if ( *(int *)(a1 + 40) < 2 )
        {
          v12 = v9;
          goto LABEL_20;
        }
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 48);
      }
      v15 = SepPrivilegeCheck(v14, (__int64)&Src, 1u, 1, a3);
      v11 = 0;
      v12 = v9;
      if ( !v15 )
        goto LABEL_19;
      v13 = v37;
    }
    v16 = *(PVOID **)(a1 + 72);
    v17 = *v16;
    v18 = *(_DWORD *)*v16;
    if ( (unsigned int)(v18 + v13) > 3 )
    {
      if ( v17 )
      {
        if ( v18 )
          v25 = 12 * v18 + 8;
        else
          v25 = 8;
      }
      else
      {
        v25 = 0;
      }
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)(v25 + 12 * v13 + 8), 0x72506553u);
      if ( Pool2 )
      {
        v27 = *v16;
        if ( *v16 )
        {
          if ( *v27 )
            v28 = 12 * *v27 + 8;
          else
            v28 = 8;
        }
        else
        {
          v28 = 0;
        }
        memmove(Pool2, v27, v28);
        SepConcatenatePrivileges(Pool2, v29, &v37);
        if ( *(_BYTE *)(a1 + 11) )
          ExFreePoolWithTag(*v16, 0);
        *v16 = Pool2;
        *(_BYTE *)(a1 + 11) = 1;
      }
    }
    else
    {
      if ( v17 )
      {
        if ( v18 )
          v19 = (unsigned int)(12 * v18 + 8);
        else
          v19 = 8LL;
      }
      else
      {
        v19 = 0LL;
      }
      memmove((char *)v17 + v19, &Src, (unsigned int)(12 * v13));
      *v17 += v13;
    }
    *(_DWORD *)(a1 + 20) |= v9 & 0x11200A9;
    *(_DWORD *)(a1 + 16) &= 0xFEEDFF56;
    v12 = v9 & 0xFEEDFF56;
    *(_DWORD *)(a1 + 12) |= 2u;
    v8 = 1;
    v11 = 0;
LABEL_19:
    a3 = v36;
    v5 = 0;
  }
LABEL_20:
  v20 = v12 & 0x11F0116;
  if ( !v20 && !v5 )
    goto LABEL_22;
  Src = SeRestorePrivilege;
  v37 = 1;
  v38 = 1;
  v40 = 0;
  if ( !a3 )
    goto LABEL_30;
  v21 = *(_QWORD *)(a1 + 32);
  if ( v21 )
  {
    if ( *(int *)(a1 + 40) < 2 )
    {
LABEL_22:
      if ( !v8 )
        *a2 &= ~0x4000u;
      return;
    }
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 48);
  }
  if ( !SepPrivilegeCheck(v21, (__int64)&Src, 1u, 1, a3) )
    goto LABEL_22;
  v10 = v37;
  v11 = 0;
LABEL_30:
  v22 = *(PVOID **)(a1 + 72);
  v23 = *v22;
  v24 = *(_DWORD *)*v22;
  if ( (unsigned int)(v24 + v10) <= 3 )
  {
    if ( v23 )
    {
      if ( v24 )
        v11 = 12 * v24 + 8;
      else
        v11 = 8;
    }
    memmove((char *)v23 + v11, &Src, (unsigned int)(12 * v10));
    *v23 += v10;
    goto LABEL_35;
  }
  if ( v10 )
    v30 = 12 * v10 + 8;
  else
    v30 = 8;
  if ( v23 )
  {
    if ( v24 )
      v31 = 12 * v24 + 8;
    else
      v31 = 8;
  }
  else
  {
    v31 = 0;
  }
  v32 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)(v31 + v30), 0x72506553u);
  if ( !v32 )
  {
LABEL_35:
    *(_DWORD *)(a1 + 20) |= v20;
    *(_DWORD *)(a1 + 16) &= 0xFEE0FEE9;
    *(_DWORD *)(a1 + 12) |= 4u;
    return;
  }
  v33 = *v22;
  if ( *v22 )
  {
    if ( *v33 )
      v34 = 12 * *v33 + 8;
    else
      v34 = 8;
  }
  else
  {
    v34 = 0;
  }
  memmove(v32, v33, v34);
  SepConcatenatePrivileges(v32, v35, &v37);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*v22, 0);
  *v22 = v32;
  *(_DWORD *)(a1 + 20) |= v20;
  *(_DWORD *)(a1 + 16) &= 0xFEE0FEE9;
  *(_DWORD *)(a1 + 12) |= 4u;
  *(_BYTE *)(a1 + 11) = 1;
}
