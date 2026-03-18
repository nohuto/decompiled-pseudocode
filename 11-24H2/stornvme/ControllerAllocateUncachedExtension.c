/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1400174A0
 * Callers:
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 * Callees:
 *     memset @ 0x1400314C0 (memset.c)
 */

char __fastcall ControllerAllocateUncachedExtension(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  void *UncachedExtension; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 PhysicalAddress; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = 0;
  v3 = *(_BYTE *)(a1 + 20) != 0 ? 40960 : 53248;
  UncachedExtension = (void *)StorPortGetUncachedExtension(a1, a2, v3);
  *(_QWORD *)(a1 + 1576) = UncachedExtension;
  if ( UncachedExtension )
  {
    memset(UncachedExtension, 0, 4LL * (v3 >> 2));
    v5 = *(_QWORD *)(a1 + 1576);
    if ( *(_BYTE *)(a1 + 20) )
    {
      v5 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(a1 + 1576) = v5;
    }
    *(_QWORD *)(a1 + 1560) = v5;
    *(_QWORD *)(a1 + 1568) = StorPortGetPhysicalAddress(a1, 0LL, v5, &v18);
    v6 = *(_QWORD *)(a1 + 1576) + 4096LL;
    v7 = *(_BYTE *)(a1 + 20) == 0;
    *(_QWORD *)(a1 + 1104) = v6;
    v8 = v6 + 0x2000;
    *(_QWORD *)(a1 + 1576) = v6 + 0x2000;
    if ( v7 )
    {
      v9 = (__int64 *)(a1 + 1232);
      v10 = 2LL;
      do
      {
        *v9 = v8;
        v9 += 16;
        v8 = *(_QWORD *)(a1 + 1576) + 0x2000LL;
        *(_QWORD *)(a1 + 1576) = v8;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(a1 + 1656) = v8;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v8, &v18);
    v12 = *(_QWORD *)(a1 + 1576);
    *(_QWORD *)(a1 + 1664) = PhysicalAddress;
    v12 += 4096LL;
    v13 = (unsigned __int64)*(unsigned __int16 *)(a1 + 324) << 6;
    *(_QWORD *)(a1 + 336) = v12;
    v14 = v13 + v12;
    if ( (v14 & 0xFFF) != 0 )
      v14 = v14 - (v14 & 0xFFF) + 4096;
    v7 = *(_BYTE *)(a1 + 20) == 0;
    v15 = v14 + 4096;
    *(_QWORD *)(a1 + 1576) = v14 + 4096;
    *(_QWORD *)(a1 + 544) = v14;
    if ( !v7 )
    {
      v16 = v14 + 12288;
      *(_QWORD *)(a1 + 1576) = v16;
      *(_QWORD *)(a1 + 944) = v16 - 392;
      *(_QWORD *)(a1 + 936) = v16 - 600;
      *(_QWORD *)(v16 - 600) = v15;
      **(_QWORD **)(a1 + 944) = v15 + 4096;
    }
    LOBYTE(UncachedExtension) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 1;
  }
  return (char)UncachedExtension;
}
