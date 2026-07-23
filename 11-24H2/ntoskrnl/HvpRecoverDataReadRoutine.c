/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x140A4DED0
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  struct _PRIVILEGE_SET *Pool; // rdi
  unsigned int v8; // esi
  struct _PRIVILEGE_SET *v9; // rcx
  unsigned int *v10; // r15
  unsigned int v11; // ebp
  int v12; // esi
  __int64 v14; // [rsp+70h] [rbp+8h]

  v4 = 0;
  Pool = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
    return (unsigned int)-1073741811;
  v14 = *(_QWORD *)a1;
  v8 = (~((*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1) & (a3 + a2 + (*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1))
     - (a2 & ~((*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1));
  if ( v8 < a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    v10 = a1 + 4;
    v11 = v8;
    if ( v8 < 0x10000 )
      v11 = 0x10000;
    if ( !v9 )
      goto LABEL_6;
    if ( *v10 < v11 )
    {
      CmSiFreeMemory(v9);
    }
    else
    {
      Pool = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      v11 = *v10;
    }
    *((_QWORD *)a1 + 1) = 0LL;
    *v10 = 0;
    if ( !Pool )
    {
LABEL_6:
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, v8, 0x6F494D43u);
      if ( !Pool )
        return (unsigned int)-1073741801;
      v11 = v8;
    }
    v12 = guard_dispatch_icall_no_overrides(v14, a1[5]);
    if ( v12 < 0 )
    {
      CmSiFreeMemory(Pool);
      return (unsigned int)v12;
    }
    else
    {
      *((_QWORD *)a1 + 1) = Pool;
      *v10 = v11;
      *a4 = (char *)Pool + a2 % (*(_DWORD *)(v14 + 136) << 9);
    }
  }
  return v4;
}
