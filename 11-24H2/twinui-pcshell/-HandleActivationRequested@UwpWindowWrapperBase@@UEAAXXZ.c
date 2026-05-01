/*
 * XREFs of ?HandleActivationRequested@UwpWindowWrapperBase@@UEAAXXZ @ 0x18020E030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::HandleActivationRequested(UwpWindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 224LL))(*((_QWORD *)this + 33));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 256LL))((char *)this - 16);
}
