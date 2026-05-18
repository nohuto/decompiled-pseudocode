/*
 * XREFs of sub_180096B2C @ 0x180096B2C
 * Callers:
 *     sub_18009784C @ 0x18009784C (sub_18009784C.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 * Callees:
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180096B2C(__int64 a1, __int64 a2)
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
    sub_180096CF0(a1);
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
