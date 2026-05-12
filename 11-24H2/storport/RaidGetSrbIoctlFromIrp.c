/*
 * XREFs of RaidGetSrbIoctlFromIrp @ 0x14001EC18
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiMiniportIoctl @ 0x140035FB8 (RaUnitScsiMiniportIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetSrbIoctlFromIrp(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4, int a5)
{
  __int64 v5; // rax
  __int64 v7; // r10
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rax

  v5 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(a1 + 24);
  v9 = *(unsigned int *)(v5 + 16);
  if ( (unsigned int)v9 < 0x1C )
    return 3221225485LL;
  if ( *(_DWORD *)v7 != 28 )
    return 3221225561LL;
  v10 = *(unsigned int *)(v7 + 24) + 28LL;
  if ( v10 > 0xFFFFFFFF )
    return 3221225485LL;
  v11 = *(_DWORD *)(v5 + 8);
  if ( v11 < (unsigned int)v10 && (unsigned int)v9 < (unsigned int)v10 )
    return 3221225507LL;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  if ( a5 == 1 )
  {
    v14 = *(_QWORD *)(v7 + 4);
    if ( v14 != 0x4B53494452425948LL
      && v14 != 0x4B53494449534353LL
      && v14 != 0x455241574D524946LL
      && v14 != 0x464E494555455551LL
      && v14 != 0x5551455441455243LL
      && v14 != 0x55514554454C4544LL
      && v14 != 0x464E495255444E45LL
      && v14 != 0x524F545350534155LL )
    {
      return 3221225488LL;
    }
    v15 = *(_QWORD *)(v7 + 4);
    if ( v15 != 0x464E495255444E45LL
      && v15 != 0x455241574D524946LL
      && v15 != 0x4B53494452425948LL
      && v15 != 0x464E494555455551LL
      && v15 != 0x5551455441455243LL
      && v15 != 0x55514554454C4544LL
      && *(_BYTE *)(a1 + 64) )
    {
      return 3221225506LL;
    }
  }
  v12 = *(_DWORD *)(v7 + 16);
  if ( v12 == 1771008 )
  {
    if ( (unsigned int)v9 >= 0x22 )
    {
      if ( *(_WORD *)(v7 + 32) != 224 || !*(_BYTE *)(a1 + 64) )
        return 0LL;
      return 3221225506LL;
    }
    return 3221225485LL;
  }
  if ( v12 != 1771040 )
    return 0LL;
  if ( (unsigned int)v9 < 0x34 )
    return 3221225485LL;
  if ( *(_DWORD *)(v7 + 36) != 1 && *(_BYTE *)(a1 + 64) )
    return 3221225506LL;
  if ( (unsigned int)v9 < (unsigned int)v10 )
    return 3221225485LL;
  return v9 < *(unsigned int *)(v7 + 44) + (unsigned __int64)*(unsigned int *)(v7 + 48) ? 0xC000000D : 0;
}
