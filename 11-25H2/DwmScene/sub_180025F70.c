/*
 * XREFs of sub_180025F70 @ 0x180025F70
 * Callers:
 *     <none>
 * Callees:
 *     ??8error_category@std@@QEBA_NAEBV01@@Z @ 0x180024914 (--8error_category@std@@QEBA_NAEBV01@@Z.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

bool __fastcall sub_180025F70(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  bool v5; // al
  _DWORD *v6; // r8
  char v7; // dl
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v9, a2);
  v5 = std::error_category::operator==(*(_QWORD *)(v4 + 8), *(_QWORD *)(a3 + 8));
  v7 = 0;
  if ( v5 )
    return *v6 == *(_DWORD *)a3;
  return v7;
}
