/*
 * XREFs of ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18016CC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::IsEqualByApp(CImmersiveApp *this, struct IImmersiveApplication *a2, int *a3)
{
  int v3; // ebx
  struct IImmersiveApplication *v6; // rcx
  int (__fastcall **v7)(struct IImmersiveApplication *, GUID *, __int64 *); // rax
  int v8; // edi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v6 = (CImmersiveApp *)((char *)this - 88);
  if ( v6 && a2 )
  {
    if ( v6 == a2 )
      goto LABEL_10;
    v7 = *(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))v6;
    v11 = 0LL;
    v10 = 0LL;
    if ( (*v7)(v6, &GUID_00000000_0000_0000_c000_000000000046, &v11) >= 0 )
    {
      v8 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
             a2,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v10);
      if ( v8 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v8 >= 0 && v11 == v10 )
LABEL_10:
        v3 = 1;
    }
  }
  *a3 = v3;
  return 0LL;
}
