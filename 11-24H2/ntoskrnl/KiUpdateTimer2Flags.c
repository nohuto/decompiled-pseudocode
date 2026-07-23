/*
 * XREFs of KiUpdateTimer2Flags @ 0x1403AF1F0
 * Callers:
 *     KeDisableTimer2 @ 0x1403AED68 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     KiTraceSetTimer2 @ 0x1403AFE00 (KiTraceSetTimer2.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 * Callees:
 *     KiFinalizeTimer2Disablement @ 0x1403AF288 (KiFinalizeTimer2Disablement.c)
 */

char __fastcall KiUpdateTimer2Flags(volatile signed __int32 *a1, int a2, char a3)
{
  volatile signed __int32 v3; // r10d
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // edx
  signed __int32 v9; // r9d
  signed __int32 v10; // eax
  signed __int32 v11; // ecx

  v3 = *a1;
  v6 = ((((a3 & 1) == 0) + 30) << 7) & 0xFFFFF0FF;
  if ( (a3 & 2) == 0 )
    v6 = (((a3 & 1) == 0) + 30) << 7;
  v7 = a2 << 8;
  v8 = ~v6;
  v9 = v7 | v3 & v8;
  v10 = _InterlockedCompareExchange(a1, v9, *a1);
  if ( v3 != v10 )
  {
    do
    {
      v11 = v10;
      v9 = v7 | v10 & v8;
      v10 = _InterlockedCompareExchange(a1, v9, v10);
    }
    while ( v11 != v10 );
  }
  if ( (a3 & 4) == 0 || (v9 & 0x3F00) != 0x2000 )
    return 0;
  KiFinalizeTimer2Disablement(a1);
  return 1;
}
