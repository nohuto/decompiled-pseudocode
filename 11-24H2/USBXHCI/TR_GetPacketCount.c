/*
 * XREFs of TR_GetPacketCount @ 0x140020F50
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x140017BC0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001FE60 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall TR_GetPacketCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // di
  __int64 v12; // rbx
  unsigned __int16 v13; // cx

  v4 = a2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 720LL) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4)
    || *(_WORD *)(v6 + 100)
    || !*(_BYTE *)(v6 + 39)
    || ((*(_DWORD *)(v6 + 128) - 1) & 0xFFFFFFFB) != 0 )
  {
    v11 = *(_WORD *)(v6 + 100) & 0x7FF;
  }
  else
  {
    v11 = *(_WORD *)(v6 + 105);
  }
  v12 = *(_QWORD *)(a1 + 56);
  if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v8, v7, v9, v10)
    || *(_WORD *)(v12 + 100)
    || !*(_BYTE *)(v12 + 39)
    || ((*(_DWORD *)(v12 + 128) - 1) & 0xFFFFFFFB) != 0 )
  {
    v13 = *(_WORD *)(v12 + 100) & 0x7FF;
  }
  else
  {
    v13 = *(_WORD *)(v12 + 105);
  }
  return (v4 + (unsigned int)v11 - 1) / v13;
}
