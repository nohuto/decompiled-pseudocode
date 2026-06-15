/*
 * XREFs of ?CleanupApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x140032370
 * Callers:
 *     ?DeleteApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z @ 0x14003222C (-DeleteApoNotification@@YAXPEAUAPO_NOTIFICATION@@@Z.c)
 *     _lambda_d3d8473ab69012044bcca3ea676e23db_::operator() @ 0x140032254 (_lambda_d3d8473ab69012044bcca3ea676e23db_--operator().c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CleanupApoNotification(struct APO_NOTIFICATION *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void **v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx

  v2 = (unsigned int)(*(_DWORD *)a1 - 1);
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      v10 = *((_QWORD *)a1 + 1);
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v2);
      v9 = (void *)*((_QWORD *)a1 + 2);
      if ( v9 )
        goto LABEL_22;
      break;
    case 2:
      v5 = *((_QWORD *)a1 + 1);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v4 = *((_QWORD *)a1 + 2);
      goto LABEL_7;
    case 3:
      v3 = *((_QWORD *)a1 + 1);
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v4 = *((_QWORD *)a1 + 5);
LABEL_7:
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return;
    case 4:
      v6 = *((_QWORD *)a1 + 1);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = (void **)*((_QWORD *)a1 + 2);
      if ( v7 )
      {
        v8 = *v7;
        if ( v8 )
          operator delete(v8);
        v9 = (void *)*((_QWORD *)a1 + 2);
LABEL_22:
        operator delete(v9);
      }
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a1 - 6) > 1 )
        return;
      v4 = *((_QWORD *)a1 + 1);
      goto LABEL_7;
  }
}
