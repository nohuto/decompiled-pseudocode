/*
 * XREFs of sub_140029000 @ 0x140029000
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006840 @ 0x140006840 (sub_140006840.c)
 *     sub_14000C164 @ 0x14000C164 (sub_14000C164.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140030144 @ 0x140030144 (sub_140030144.c)
 */

__int64 __fastcall sub_140029000(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  int v12; // edi
  int v13; // ebx

  v2 = -1073741823;
  v3 = sub_140006840(*(_DWORD *)(a1 + 72));
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    v5 = *(_DWORD *)(v3 + 4);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    v6 = qword_1400191B8;
    if ( (__int64 *)qword_1400191B8 == &qword_1400191B8 )
      goto LABEL_6;
    do
    {
      v7 = v6;
      if ( *(_DWORD *)(v6 + 32) == v4 )
        break;
      v6 = *(_QWORD *)v6;
      v7 = 0LL;
    }
    while ( (__int64 *)v6 != &qword_1400191B8 );
    if ( !v7 )
    {
LABEL_6:
      v8 = sub_140030144(v4);
      v7 = v8;
      if ( !v8 )
      {
LABEL_13:
        (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
        return v2;
      }
      KeInitializeAffinityEx2(v8 + 48, 32LL);
      v9 = (__int64 *)qword_1400191C0;
      if ( *(__int64 **)qword_1400191C0 != &qword_1400191B8 )
LABEL_15:
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = qword_1400191C0;
      *(_QWORD *)v7 = &qword_1400191B8;
      *v9 = v7;
      qword_1400191C0 = v7;
      *(_QWORD *)(v7 + 328) = v7 + 320;
      *(_QWORD *)(v7 + 320) = v7 + 320;
    }
    *(_QWORD *)(a1 + 1080) = v7;
    ++*(_DWORD *)(v7 + 40);
    if ( !*(_DWORD *)(a1 + 80) )
      KeAddProcessorAffinityEx(v7 + 48, *(unsigned int *)(a1 + 56));
    v10 = *(_QWORD **)(v7 + 24);
    v11 = (_QWORD *)(a1 + 1088);
    if ( *v10 == v7 + 16 )
    {
      *(_QWORD *)(a1 + 1096) = v10;
      *v11 = v7 + 16;
      *v10 = v11;
      *(_QWORD *)(v7 + 24) = v11;
      v12 = *(_DWORD *)(v7 + 40);
      v13 = *(_DWORD *)(v7 + 36);
      sub_14000C164(a1, v5);
      v2 = v13 != v12 ? 0x103 : 0;
      goto LABEL_13;
    }
    goto LABEL_15;
  }
  return v2;
}
