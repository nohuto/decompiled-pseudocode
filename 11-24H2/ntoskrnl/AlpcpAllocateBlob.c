/*
 * XREFs of AlpcpAllocateBlob @ 0x140893EF0
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x14086671C (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     AlpcpCreateRegion @ 0x140893390 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14089385C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcpAllocateBuffer @ 0x140894500 (AlpcpAllocateBuffer.c)
 *     AlpcpAllocateMessageFunction @ 0x140894520 (AlpcpAllocateMessageFunction.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  ULONG_PTR v3; // rdx
  __int64 result; // rax
  char v6; // dl
  char v7; // cl
  ULONG v8; // ecx
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD); // rax

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    if ( *(_QWORD *)(a1 + 48) )
    {
      v9 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)&AlpcpLookasides.L.AllocateEx
                                                           + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8));
      if ( v9 == AlpcpAllocateBuffer )
      {
        result = AlpcpAllocateBuffer(1LL, v3, v8);
        v6 = 0;
      }
      else
      {
        if ( v9 == AlpcpAllocateMessageFunction )
          result = AlpcpAllocateMessageFunction(1LL, v3, v8);
        else
          result = guard_dispatch_icall_no_overrides(1LL, v3);
        v6 = 0;
      }
    }
    else
    {
      result = ExAllocatePool2(0x100uLL, v3, v8);
      v6 = 0;
    }
  }
  else
  {
    result = (__int64)ExAllocateFromPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
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
    v7 = *(_BYTE *)(result + 16);
    *(_QWORD *)(result + 24) = 1LL;
    *(_BYTE *)(result + 16) = v6 | v7 & 0xFD;
    result += 48LL;
  }
  return result;
}
