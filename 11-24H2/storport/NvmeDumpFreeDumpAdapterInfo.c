/*
 * XREFs of NvmeDumpFreeDumpAdapterInfo @ 0x14019F718
 * Callers:
 *     NvmeDumpCreateDumpAdapterInfo @ 0x14019F024 (NvmeDumpCreateDumpAdapterInfo.c)
 *     NvmeDumpFreeStorageDumpInfo @ 0x14019F97C (NvmeDumpFreeStorageDumpInfo.c)
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x14019FE00 (NvmeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     StorFreeContiguousMemory @ 0x140184F04 (StorFreeContiguousMemory.c)
 */

void __fastcall NvmeDumpFreeDumpAdapterInfo(PVOID *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD); // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]

  v2 = *((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 )
    {
      if ( *(_QWORD *)(v2 + 64) )
      {
        StorPortExtendedFunction(1u, *(_QWORD *)(v2 + 16));
        *(_QWORD *)(v2 + 64) = 0LL;
      }
      v9 = 0;
      if ( v2 != -72 )
      {
        v4 = *(_DWORD *)(v2 + 256);
        if ( v4 )
        {
          v7[0] = *(_QWORD *)(v2 + 240);
          v5 = *(_QWORD *)(v2 + 248);
          v8 = v4;
          v7[1] = v5;
          StorFreeContiguousMemory((_QWORD *)(v3 + 1144), (__int64)v7);
        }
      }
      if ( *(_WORD *)(v3 + 106) )
      {
        v6 = *(void (__fastcall **)(_QWORD))(v3 + 128);
        if ( v6 )
          v6(*(_QWORD *)(v3 + 112));
      }
      ObfDereferenceObject(*(PVOID *)(v3 + 8));
    }
    ExFreePoolWithTag((PVOID)v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
}
