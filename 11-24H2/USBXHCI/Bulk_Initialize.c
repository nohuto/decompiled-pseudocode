/*
 * XREFs of Bulk_Initialize @ 0x140082100
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Bulk_Initialize(__int64 a1)
{
  char v1; // di
  int v3; // ebp
  __int64 v4; // rbx
  unsigned __int16 v5; // ax
  __int64 v6; // rax

  v1 = 0;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  *(_QWORD *)(a1 + 400) = a1 + 392;
  *(_QWORD *)(a1 + 392) = a1 + 392;
  v3 = 1;
  *(_QWORD *)(a1 + 416) = a1 + 408;
  *(_QWORD *)(a1 + 408) = a1 + 408;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x20000LL) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      || *(_WORD *)(v4 + 100)
      || !*(_BYTE *)(v4 + 39)
      || ((*(_DWORD *)(v4 + 128) - 1) & 0xFFFFFFFB) != 0 )
    {
      v5 = *(_WORD *)(v4 + 100) & 0x7FF;
    }
    else
    {
      v5 = *(_WORD *)(v4 + 105);
    }
    if ( v5 >= 8u && *(char *)(*(_QWORD *)(a1 + 56) + 98LL) >= 0 )
      v1 = 1;
  }
  *(_BYTE *)(a1 + 328) = v1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL);
  if ( (v6 & 0x8000000000LL) == 0 && (v6 & 8) == 0 )
    v3 = 5;
  *(_DWORD *)(a1 + 352) = v3;
  return 0LL;
}
