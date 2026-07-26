/*
 * XREFs of NdisMStartBufferPhysicalMapping @ 0x1400A9AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMStartBufferPhysicalMapping(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_BUFFER Buffer,
        ULONG PhysicalMapRegister,
        BOOLEAN WriteToDevice,
        PNDIS_PHYSICAL_ADDRESS_UNIT PhysicalAddressArray,
        PUINT ArraySize)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  char *v9; // r15
  ULONG ByteCount; // r13d
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  __int64 v14; // rbx
  NDIS_PHYSICAL_ADDRESS v15; // rax
  PNDIS_PHYSICAL_ADDRESS_UNIT v16; // rcx
  int v17; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *i)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // [rsp+80h] [rbp+8h]
  ULONG v19; // [rsp+98h] [rbp+20h] BYREF

  v6 = *((_QWORD *)MiniportAdapterHandle + 63);
  v7 = 0;
  v9 = (char *)Buffer->StartVa + Buffer->ByteOffset;
  ByteCount = Buffer->ByteCount;
  v12 = 16LL * PhysicalMapRegister;
  v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL)
                                                                                 + 64LL);
  v19 = 0;
  for ( i = v13; ByteCount; v13 = i )
  {
    v19 = ByteCount;
    LOBYTE(v17) = WriteToDevice;
    v14 = v7;
    v15.QuadPart = v13(*(_QWORD *)(v6 + 40), Buffer, *(_QWORD *)(*(_QWORD *)(v6 + 152) + v12), v9, &v19, v17);
    v16 = PhysicalAddressArray;
    ++v7;
    PhysicalAddressArray[v14].PhysicalAddress = v15;
    v15.LowPart = v19;
    v9 += v19;
    v16[v14].Length = v19;
    ByteCount -= v15.LowPart;
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 152) + v12 + 8) = WriteToDevice;
  *ArraySize = v7;
}
