/*
 * XREFs of EtwTraceXSchedulerPriorityUpdate @ 0x1404C1AE8
 * Callers:
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceXSchedulerPriorityUpdate(__int64 a1, char a2, char a3, char a4, char *a5)
{
  int v5; // r10d
  char v6; // al
  char v7; // al
  int v9; // [rsp+30h] [rbp-30h] BYREF
  char v10; // [rsp+34h] [rbp-2Ch]
  char v11; // [rsp+35h] [rbp-2Bh]
  char v12; // [rsp+36h] [rbp-2Ah]
  char v13; // [rsp+37h] [rbp-29h]
  int v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+3Ch] [rbp-24h]
  int *v16; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp-14h]

  v5 = 0;
  v9 = *(_DWORD *)(a1 + 1296);
  v10 = a2;
  v15 = 0;
  v12 = a5[2];
  v14 = *((_DWORD *)a5 + 1);
  v6 = *a5;
  v11 = a4;
  v13 = a3;
  if ( (v6 & 1) != 0 )
  {
    v5 = 1;
    v15 = 1;
  }
  if ( (v6 & 2) != 0 )
  {
    v5 |= 2u;
    v15 = v5;
  }
  if ( (v6 & 4) != 0 )
  {
    v5 |= 8u;
    v15 = v5;
  }
  if ( (v6 & 8) != 0 )
  {
    v5 |= 0x10u;
    v15 = v5;
  }
  if ( (v6 & 0x10) != 0 )
  {
    v5 |= 0x20u;
    v15 = v5;
  }
  v7 = a5[1];
  if ( (v7 & 1) != 0 )
  {
    v5 |= 0x100u;
    v15 = v5;
  }
  if ( (v7 & 2) != 0 )
    v15 = v5 | 0x200;
  v18 = 0;
  v16 = &v9;
  v17 = 16;
  return EtwTraceKernelEvent((int)&v16, 1, 0xA0000020, 3955, 5245442);
}
