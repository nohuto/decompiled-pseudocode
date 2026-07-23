/*
 * XREFs of KdpCopyContext @ 0x140B771E8
 * Callers:
 *     KdpReport @ 0x1404CE548 (KdpReport.c)
 *     KdpSetContextEx @ 0x1405ACCD4 (KdpSetContextEx.c)
 *     KdpGetContext @ 0x140B792F8 (KdpGetContext.c)
 *     KdpSetContext @ 0x140B7A424 (KdpSetContext.c)
 *     KdpCommandString @ 0x140B7AE2C (KdpCommandString.c)
 *     KdpSymbol @ 0x140B7B220 (KdpSymbol.c)
 * Callees:
 *     KdpQuickMoveMemory @ 0x140B77490 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpCopyContext(char *a1, int a2, _BYTE *a3)
{
  char *v3; // r10
  int v4; // r9d
  _BYTE *v5; // rcx
  _BYTE *v6; // r11
  char *v7; // rdx
  int v8; // r8d
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 v13; // r8

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a3;
  v7 = (char *)(v3 - a3);
  v8 = 1232;
  do
  {
    v5[(_QWORD)v7] = *v5;
    ++v5;
    --v8;
  }
  while ( v8 );
  *((_DWORD *)v3 + 12) = v4;
  if ( (v4 & 0x100040) == 0x100040 )
  {
    v9 = *((_DWORD *)v3 + 313);
    v10 = *((unsigned int *)v6 + 313);
    if ( v9 <= (unsigned int)v10 )
      v10 = v9;
    KdpQuickMoveMemory(&v3[*((int *)v3 + 312) + 1232], &v6[*((int *)v6 + 312) + 1232], v10);
  }
  result = 1048704LL;
  if ( (v4 & 0x100080) == 0x100080 )
  {
    v12 = *((_DWORD *)v3 + 315);
    v13 = *((unsigned int *)v6 + 315);
    if ( v12 <= (unsigned int)v13 )
      v13 = v12;
    return KdpQuickMoveMemory(&v3[*((int *)v3 + 314) + 1232], &v6[*((int *)v6 + 314) + 1232], v13);
  }
  return result;
}
