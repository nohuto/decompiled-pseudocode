/*
 * XREFs of sub_1800969CC @ 0x1800969CC
 * Callers:
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     sub_180096B90 @ 0x180096B90 (sub_180096B90.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800969CC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v4 + 88LL))(v4, &v8, 0LL);
    v6 = v8;
    v5 = (_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = v8;
    if ( v6 == 2 )
    {
      *(_OWORD *)(a1 + 40) = v9;
    }
    else if ( v6 != 5 )
    {
      goto LABEL_8;
    }
    sub_180096B90(a1);
    goto LABEL_8;
  }
  v5 = (_DWORD *)(a1 + 36);
LABEL_8:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *v5;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 40);
  return result;
}
