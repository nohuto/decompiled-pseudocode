/*
 * XREFs of ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z @ 0x18003E3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall std::error_category::equivalent(
        std::error_category *this,
        unsigned int a2,
        const struct std::error_condition *a3)
{
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(std::error_category *, _BYTE *, _QWORD))(*(_QWORD *)this + 24LL))(this, v6, a2);
  return *(_QWORD *)(v4 + 8) == *((_QWORD *)a3 + 1) && *(_DWORD *)v4 == *(_DWORD *)a3;
}
