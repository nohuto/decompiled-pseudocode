/*
 * XREFs of TR_CalculateTDSize @ 0x140021070
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x140017BC0 (Bulk_Stage_MapIntoRing.c)
 *     Control_Transfer_MapIntoRing @ 0x14001E7C0 (Control_Transfer_MapIntoRing.c)
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall TR_CalculateTDSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // edi
  __int64 v6; // rbx
  unsigned __int16 v7; // ax
  unsigned int v8; // edi

  v4 = a3;
  v5 = a2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 720LL) || (_BYTE)a4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4)
    || *(_WORD *)(v6 + 100)
    || !*(_BYTE *)(v6 + 39)
    || ((*(_DWORD *)(v6 + 128) - 1) & 0xFFFFFFFB) != 0 )
  {
    v7 = *(_WORD *)(v6 + 100) & 0x7FF;
  }
  else
  {
    v7 = *(_WORD *)(v6 + 105);
  }
  v8 = v5 - v4 / v7;
  if ( v8 > 0x1F )
    return 31;
  return v8;
}
