/*
 * XREFs of HalpCreateNMIErrorRecord @ 0x140541638
 * Callers:
 *     HalpCreateErrorRecord @ 0x14053C7A0 (HalpCreateErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140419EA0 (WheaInitializeRecordHeader.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpCreateNMIErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // ecx

  v8 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader((_DWORD *)a3);
  v10 = v9;
  v11 = v9 + 192;
  *(_WORD *)(a3 + 10) = 3;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  *(GUID *)(a3 + 80) = NMI_NOTIFY_TYPE_GUID;
  if ( v11 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 128, a3 + v10);
  *(_DWORD *)(a3 + 212) |= 1u;
  *(_DWORD *)(a3 + 128) = v10;
  *(_DWORD *)(a3 + 200) = v11;
  *(_WORD *)(a3 + 208) = 768;
  *(_DWORD *)(a3 + 204) = 12;
  v12 = v11;
  v13 = v11 + 12;
  *(GUID *)(a3 + 216) = NMI_SECTION_GUID;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v13 > a4 )
    return (unsigned int)-1073741789;
  *(_QWORD *)(v12 + a3) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(v12 + a3 + 8) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a3 + 272) = v13;
  v14 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a3 + 276) = v14;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = WHEA_ERROR_PACKET_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v14 + v13 > a4 )
    return (unsigned int)-1073741789;
  else
    memmove((void *)(a3 + v13), (const void *)a2, *(unsigned int *)(a2 + 8));
  return v8;
}
