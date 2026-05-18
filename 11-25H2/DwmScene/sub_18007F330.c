/*
 * XREFs of sub_18007F330 @ 0x18007F330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180027AB4 @ 0x180027AB4 (sub_180027AB4.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_18007F47C @ 0x18007F47C (sub_18007F47C.c)
 *     sub_18007F930 @ 0x18007F930 (sub_18007F930.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_18007F330(__int64 a1, _QWORD *a2)
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
    if ( sub_18004099C(a1 + 120, (__int64)&v8) == *(_QWORD *)(a1 + 120) )
    {
      LOBYTE(v4) = sub_18007F47C(a1, a2);
    }
    else
    {
      LOBYTE(v4) = sub_180027AB4(a1, v5);
      if ( !(_BYTE)v4 )
        LOBYTE(v4) = sub_18007F930(a1, *a2);
    }
    if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( !v4 || *(_DWORD *)(v4 + 24) != 2 )
      {
        *(_OWORD *)v7 = 0LL;
        LOBYTE(v4) = (unsigned __int8)sub_180011010((_QWORD *)(a1 + 136), v7);
        if ( v7[1] )
          LOBYTE(v4) = sub_18001050C(v7[1]);
      }
    }
  }
  return v4;
}
