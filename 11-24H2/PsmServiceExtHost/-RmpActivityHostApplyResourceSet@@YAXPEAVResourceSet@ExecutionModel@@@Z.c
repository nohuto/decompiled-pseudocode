/*
 * XREFs of ?RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z @ 0x18002BB1C
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B864 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpActivityHostApplyResourceSet(struct ExecutionModel::ResourceSet *a1)
{
  __int64 v1; // rdx
  char *v2; // rdi
  __int64 v4; // rcx
  char **v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rbx
  __int64 v9; // rax

  v1 = *((_QWORD *)a1 + 165);
  v2 = (char *)a1 + 1296;
  v4 = *((_QWORD *)a1 + 162);
  if ( *(char **)(v4 + 8) != v2 )
    goto LABEL_5;
  v5 = (char **)*((_QWORD *)v2 + 1);
  if ( *v5 != v2 )
    goto LABEL_5;
  *v5 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_OWORD *)v2 = 0LL;
  --*(_DWORD *)(v1 + 1152);
  v6 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 332) = 2;
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(v6 + 16))(a1);
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a1 + 16LL))(a1);
  v7 = *((_QWORD *)a1 + 165);
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a1 + 8LL))(a1);
  v8 = (_DWORD *)(v7 + 1160);
  (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)a1 + 8LL))(a1);
  v9 = *(_QWORD *)v8;
  if ( *(_DWORD **)(*(_QWORD *)v8 + 8LL) != v8 )
LABEL_5:
    __fastfail(3u);
  *((_QWORD *)v2 + 1) = v8;
  *(_QWORD *)v2 = v9;
  *(_QWORD *)(v9 + 8) = v2;
  *(_QWORD *)v8 = v2;
  ++v8[4];
  *((_DWORD *)a1 + 332) = 1;
  *((_BYTE *)a1 + 12) = 1;
}
