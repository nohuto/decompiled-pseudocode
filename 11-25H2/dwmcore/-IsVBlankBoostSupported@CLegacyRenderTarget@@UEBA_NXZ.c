/*
 * XREFs of ?IsVBlankBoostSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x18022E9F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacyRenderTarget::IsVBlankBoostSupported(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx
  bool result; // al
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 5);
  result = v1
        && (v3 = 0,
            (*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v1 + 24) + 248LL))(v1 + 24, &v3))
        && v3 > 1;
  return result;
}
