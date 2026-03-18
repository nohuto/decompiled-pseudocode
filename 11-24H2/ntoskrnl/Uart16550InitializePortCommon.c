/*
 * XREFs of Uart16550InitializePortCommon @ 0x1406A4BA4
 * Callers:
 *     IaLpssInitializePort @ 0x1406A45E0 (IaLpssInitializePort.c)
 *     IaLpssSetPowerD0 @ 0x1406A4880 (IaLpssSetPowerD0.c)
 *     Uart16550InitializePort @ 0x1406A4B80 (Uart16550InitializePort.c)
 *     Uart16550LegacyInitializePort @ 0x1406A4C60 (Uart16550LegacyInitializePort.c)
 *     Uart16550MmInitializePort @ 0x1406A4CD0 (Uart16550MmInitializePort.c)
 * Callees:
 *     Uart16550SetBaud @ 0x1406A4E70 (Uart16550SetBaud.c)
 *     UartpSetAccess @ 0x1406A55BC (UartpSetAccess.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall Uart16550InitializePortCommon(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9

  v5 = a4;
  v6 = a3;
  LOBYTE(a4) = a5;
  v7 = a2;
  LOBYTE(a3) = v5;
  LOBYTE(a2) = v6;
  UartpSetAccess(v7, a2, a3, a4);
  LOBYTE(v8) = 3;
  v11 = guard_dispatch_icall_no_overrides(v7, v8, v9, v10);
  LOBYTE(v12) = 3;
  LOBYTE(v13) = v11 & 0x7F;
  guard_dispatch_icall_no_overrides(v7, v12, v13, v14);
  LOBYTE(v15) = 1;
  guard_dispatch_icall_no_overrides(v7, v15, 0LL, v16);
  LOBYTE(v17) = 6;
  LOBYTE(v18) = 2;
  guard_dispatch_icall_no_overrides(v7, v18, v17, v19);
  Uart16550SetBaud(v7, *(unsigned int *)(v7 + 8));
  LOBYTE(v20) = 1;
  LOBYTE(v21) = 2;
  guard_dispatch_icall_no_overrides(v7, v21, v20, v22);
  LOBYTE(v23) = 3;
  LOBYTE(v24) = 4;
  guard_dispatch_icall_no_overrides(v7, v24, v23, v25);
  LOBYTE(v26) = 6;
  if ( (guard_dispatch_icall_no_overrides(v7, v26, v27, v28) & 0x40) != 0 )
    *(_WORD *)(v7 + 12) |= 2u;
  return 1;
}
