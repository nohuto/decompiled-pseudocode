/*
 * XREFs of ?GetCanHandleCloseRequest@CTaskWindow@@UEAA_NXZ @ 0x180215340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTaskWindow::GetCanHandleCloseRequest(CTaskWindow *this)
{
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 6);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 424LL))(v1, &v4);
    return v4 != 0;
  }
  return v2;
}
