/*
 * XREFs of HalpCreateNMIErrorRecord @ 0x140543CE8
 * Callers:
 *     HalpCreateErrorRecord @ 0x14053EEA0 (HalpCreateErrorRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140425FF0 (WheaInitializeRecordHeader.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpCreateNMIErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // ecx

  v8 = 0;
  memset_0((void *)a3, 0, a4);
  v9 = 72 * *(_DWORD *)(a1 + 24) + 128;
  if ( v9 > a4 )
    return (unsigned int)-1073741789;
  WheaInitializeRecordHeader((_DWORD *)a3);
  v12 = v9;
  v13 = v9 + 192;
  *(_WORD *)(a3 + 10) = 3;
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a3 + 20) = a4;
  *(GUID *)(a3 + 80) = NMI_NOTIFY_TYPE_GUID;
  if ( v13 > a4 )
    return (unsigned int)-1073741789;
  guard_dispatch_icall_no_overrides(a3 + 128, a3 + v12, v10, v11);
  *(_DWORD *)(a3 + 212) |= 1u;
  *(_DWORD *)(a3 + 128) = v12;
  *(_DWORD *)(a3 + 200) = v13;
  *(_WORD *)(a3 + 208) = 768;
  *(_DWORD *)(a3 + 204) = 12;
  v14 = v13;
  v15 = v13 + 12;
  *(GUID *)(a3 + 216) = NMI_SECTION_GUID;
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(a2 + 20);
  if ( v15 > a4 )
    return (unsigned int)-1073741789;
  *(_QWORD *)(v14 + a3) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(v14 + a3 + 8) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a3 + 272) = v15;
  v16 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a3 + 276) = v16;
  *(_WORD *)(a3 + 280) = 768;
  *(GUID *)(a3 + 288) = WHEA_ERROR_PACKET_SECTION_GUID;
  *(_DWORD *)(a3 + 320) = *(_DWORD *)(a2 + 20);
  if ( v16 + v15 > a4 )
    return (unsigned int)-1073741789;
  else
    memmove((void *)(a3 + v15), (const void *)a2, *(unsigned int *)(a2 + 8));
  return v8;
}
