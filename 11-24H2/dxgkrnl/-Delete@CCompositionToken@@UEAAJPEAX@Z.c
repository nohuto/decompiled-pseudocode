/*
 * XREFs of ?Delete@CCompositionToken@@UEAAJPEAX@Z @ 0x140044290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionToken::Delete(CCompositionToken *this, void *a2)
{
  (*(void (__fastcall **)(char *, void *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, a2);
  return 0LL;
}
