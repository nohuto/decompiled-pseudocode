/*
 * XREFs of AlpcpAllocateBlob @ 0x14093F8B0
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x14086210C (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     AlpcpCreateRegion @ 0x14093ED50 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14093F21C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403FA0E0 (ExAllocateFromPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcpAllocateBuffer @ 0x14093FEC0 (AlpcpAllocateBuffer.c)
 *     AlpcpAllocateMessageFunction @ 0x14093FEE0 (AlpcpAllocateMessageFunction.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  char v7; // dl
  char v8; // cl
  unsigned int v9; // ecx
  __int64 (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rax

  v4 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v4 )
  {
    v9 = *(_DWORD *)(a1 + 4);
    if ( *(_QWORD *)(a1 + 48) )
    {
      v10 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)&AlpcpLookasides.L.AllocateEx
                                                            + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8));
      if ( v10 == AlpcpAllocateBuffer )
      {
        result = AlpcpAllocateBuffer(1LL, v4, v9);
        v7 = 0;
      }
      else
      {
        if ( v10 == AlpcpAllocateMessageFunction )
          result = AlpcpAllocateMessageFunction(1LL, v4, v9);
        else
          result = guard_dispatch_icall_no_overrides(1LL, v4, v9, a4);
        v7 = 0;
      }
    }
    else
    {
      result = ExAllocatePool2(0x100uLL);
      v7 = 0;
    }
  }
  else
  {
    result = (__int64)ExAllocateFromPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v7 = 2;
  }
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 40) = 0LL;
    *(_QWORD *)(result + 32) = 0LL;
    *(_BYTE *)(result + 17) = *(_BYTE *)a1;
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)result = result;
    v8 = *(_BYTE *)(result + 16);
    *(_QWORD *)(result + 24) = 1LL;
    *(_BYTE *)(result + 16) = v7 | v8 & 0xFD;
    result += 48LL;
  }
  return result;
}
