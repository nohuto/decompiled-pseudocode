/*
 * XREFs of ?QueryService@CImmersiveShellComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18010F660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellComponent::QueryService(
        CImmersiveShellComponent *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  __int64 i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // rbx
  unsigned int v15; // edi

  v8 = (char *)this - 8;
  result = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 72LL))((char *)this - 8);
  if ( (int)result < 0 )
  {
    v10 = 0LL;
    for ( i = 0LL; ; i += 32LL )
    {
      if ( v10 >= *((_QWORD *)this + 3) )
        return (*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                 v8,
                 a2,
                 a3,
                 a4);
      v12 = *((_QWORD *)this + 2);
      v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(i + v12);
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(i + v12) )
        v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)(i + v12 + 8);
      if ( !v13 )
        break;
      ++v10;
    }
    v14 = *(char **)(32 * v10 + v12 + 16);
    if ( v14 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
      v14 = v8;
    }
    v15 = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v14)(v14, a3, a4);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
    return v15;
  }
  return result;
}
