/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x140A55F80
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  struct _PRIVILEGE_SET *Pool; // rdi
  int v8; // eax
  unsigned int v9; // r13d
  unsigned int v10; // esi
  struct _PRIVILEGE_SET *v11; // rcx
  unsigned int *v12; // r15
  unsigned int v13; // ebp
  int v14; // esi
  __int64 v16; // [rsp+70h] [rbp+8h]

  v4 = 0;
  Pool = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
    return (unsigned int)-1073741811;
  v16 = *(_QWORD *)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9;
  v9 = a2 & ~(v8 - 1);
  v10 = (~(v8 - 1) & (a3 + a2 + v8 - 1)) - v9;
  if ( v10 < a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    v12 = a1 + 4;
    v13 = (~(v8 - 1) & (a3 + a2 + v8 - 1)) - v9;
    if ( v10 < 0x10000 )
      v13 = 0x10000;
    if ( !v11 )
      goto LABEL_6;
    if ( *v12 < v13 )
    {
      CmSiFreeMemory(v11);
    }
    else
    {
      Pool = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      v13 = *v12;
    }
    *((_QWORD *)a1 + 1) = 0LL;
    *v12 = 0;
    if ( !Pool )
    {
LABEL_6:
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
      if ( !Pool )
        return (unsigned int)-1073741801;
      v13 = v10;
    }
    v14 = guard_dispatch_icall_no_overrides(v16, a1[5], v9, Pool);
    if ( v14 < 0 )
    {
      CmSiFreeMemory(Pool);
      return (unsigned int)v14;
    }
    else
    {
      *((_QWORD *)a1 + 1) = Pool;
      *v12 = v13;
      *a4 = (char *)Pool + a2 % (*(_DWORD *)(v16 + 136) << 9);
    }
  }
  return v4;
}
