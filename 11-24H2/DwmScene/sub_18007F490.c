/*
 * XREFs of sub_18007F490 @ 0x18007F490
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180027C14 @ 0x180027C14 (sub_180027C14.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_18007F5DC @ 0x18007F5DC (sub_18007F5DC.c)
 *     sub_18007FA90 @ 0x18007FA90 (sub_18007FA90.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_18007F490(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r14d
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v4) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 && *(_QWORD *)(a1 + 136) )
  {
    v5 = *(_DWORD *)(*a2 + 244LL);
    v8 = v5;
    if ( sub_180040AFC(a1 + 120, (__int64)&v8) == *(_QWORD *)(a1 + 120) )
    {
      LOBYTE(v4) = sub_18007F5DC(a1, a2);
    }
    else
    {
      LOBYTE(v4) = sub_180027C14(a1, v5);
      if ( !(_BYTE)v4 )
        LOBYTE(v4) = sub_18007FA90(a1, *a2);
    }
    if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( !v4 || *(_DWORD *)(v4 + 24) != 2 )
      {
        *(_OWORD *)v7 = 0LL;
        LOBYTE(v4) = (unsigned __int8)sub_180011110((_QWORD *)(a1 + 136), v7);
        if ( v7[1] )
          LOBYTE(v4) = sub_18001060C(v7[1]);
      }
    }
  }
  return v4;
}
