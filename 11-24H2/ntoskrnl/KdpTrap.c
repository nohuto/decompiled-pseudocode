/*
 * XREFs of KdpTrap @ 0x140B772B8
 * Callers:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     KdpStub @ 0x14041C950 (KdpStub.c)
 * Callees:
 *     KdpReport @ 0x1404CE548 (KdpReport.c)
 *     KdpCommandString @ 0x140B7AE2C (KdpCommandString.c)
 *     KdpPrint @ 0x140B7AF08 (KdpPrint.c)
 *     KdpPrompt @ 0x140B7B0AC (KdpPrompt.c)
 *     KdpSymbol @ 0x140B7B220 (KdpSymbol.c)
 */

char __fastcall KdpTrap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  char v6; // r10
  bool v8; // zf
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v20; // [rsp+20h] [rbp-28h]
  char v21; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *(_DWORD *)a3 == -2147483645;
  v21 = 0;
  if ( !v8 )
    return KdpReport(a1, a2, (int *)a3, a4, v20, a6);
  v9 = *(_QWORD *)(a3 + 32);
  if ( !v9 )
    return KdpReport(a1, a2, (int *)a3, a4, v20, a6);
  v10 = *(_QWORD *)(a4 + 248);
  v11 = 0LL;
  if ( (*(_DWORD *)(a4 + 48) & 0x100080) == 0x100080 )
    v11 = *(_QWORD *)(*(int *)(a4 + 1256) + a4 + 1240);
  v12 = v9 - 1;
  if ( !v12 )
  {
    v15 = KdpPrint(
            *(_DWORD *)(a4 + 184),
            *(_DWORD *)(a4 + 192),
            *(_QWORD *)(a4 + 128),
            *(unsigned __int16 *)(a4 + 136),
            a5,
            a1,
            a2,
            (__int64)&v21);
    v6 = v21;
    *(_QWORD *)(a4 + 120) = v15;
    goto LABEL_16;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    *(_QWORD *)(a4 + 120) = (unsigned __int16)KdpPrompt(
                                                *(_QWORD *)(a4 + 128),
                                                *(unsigned __int16 *)(a4 + 136),
                                                *(_QWORD *)(a4 + 184),
                                                *(unsigned __int16 *)(a4 + 192),
                                                a5,
                                                a1,
                                                a2);
    goto LABEL_14;
  }
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_12;
  if ( !--v14 )
  {
    v6 = 1;
LABEL_12:
    LOBYTE(v14) = a5;
    LOBYTE(a3) = v6;
    KdpSymbol(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), a3, v14, a4, a1, a2);
    goto LABEL_14;
  }
  if ( v14 == 1 )
  {
    LOBYTE(a3) = a5;
    KdpCommandString(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), a3, a4, a1, a2);
LABEL_14:
    v6 = 1;
  }
LABEL_16:
  v16 = *(_QWORD *)(a4 + 248);
  if ( v16 == v10 )
    *(_QWORD *)(a4 + 248) = v16 + 1;
  if ( (*(_DWORD *)(a4 + 48) & 0x100080) == 0x100080 )
  {
    v17 = *(int *)(a4 + 1256);
    v18 = *(_QWORD *)(v17 + a4 + 1240);
    if ( v18 == v11 )
      *(_QWORD *)(v17 + a4 + 1240) = v18 + 1;
  }
  return v6;
}
