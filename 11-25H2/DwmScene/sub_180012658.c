/*
 * XREFs of sub_180012658 @ 0x180012658
 * Callers:
 *     sub_180016018 @ 0x180016018 (sub_180016018.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011CE0 @ 0x180011CE0 (sub_180011CE0.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180012658(__int64 a1, int a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 48) = a2;
  sub_18001244C((__int64 *)(a1 + 16), a3);
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 != 1 )
        v8 = 0;
    }
    else
    {
      v8 = 2;
    }
    v9 = sub_1800323A0(*(_QWORD *)(*a3 + 24LL), 1LL);
    v10 = sub_180011CE0(*(_QWORD *)(a1 + 16), &v13);
    sub_180011010((_QWORD *)(a1 + 32), v10);
    if ( v14 )
      sub_18001050C(v14);
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 120LL) = v8;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 128LL) = 1000;
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 108LL) = 3;
    v11 = *(_QWORD *)(a1 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C4CC8, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C5088, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801C5448, 0LL) )
    {
      v6 = 1;
    }
    *(_BYTE *)(v11 + 124) = v6;
  }
  return 0LL;
}
