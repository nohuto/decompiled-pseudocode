/*
 * XREFs of FsRtlpDoBoost @ 0x14047A9E8
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     KeSetPriorityBoost @ 0x1402DFC90 (KeSetPriorityBoost.c)
 */

void __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  bool v5; // bl
  unsigned __int8 v9; // cl
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned __int8 v12; // cl

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1440) & 0xE00u) < 0x400 )
    v5 = (*a4 & 0x20) == 0;
  v9 = *(_BYTE *)(a2 + 195);
  v10 = v9;
  if ( v9 >= 0xFu )
    v10 = 15;
  v11 = (unsigned __int8)*a3;
  if ( v11 <= v10 )
  {
    LOBYTE(v11) = 15;
    if ( v9 < 0xFu )
      LOBYTE(v11) = v9;
  }
  *a3 = v11;
  v12 = *(_BYTE *)(a1 + 195);
  if ( v5 || (unsigned __int8)v11 > v12 )
  {
    if ( (unsigned __int8)v11 > v12 )
      KeSetPriorityBoost(a1, (unsigned __int8)v11);
    if ( v5 )
    {
      PsBoostThreadIoEx(a1, 0, 1, a5);
      *(_DWORD *)a4 |= 0x20u;
      IoBoostThreadIoPriority((KSPIN_LOCK *)a1, (*(_DWORD *)(a2 + 1440) >> 9) & 7, 0);
    }
  }
}
