/*
 * XREFs of AlpcpAllocateBlob @ 0x1408AF0C0
 * Callers:
 *     AlpcpCreateRegion @ 0x1408ADF04 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x1408AE108 (AlpcpCreateSection.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1408AE47C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1409DFF40 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcpAllocateMessageFunction @ 0x1408AE3F0 (AlpcpAllocateMessageFunction.c)
 *     AlpcpAllocateBuffer @ 0x1408AE890 (AlpcpAllocateBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char v6; // dl
  char v7; // cl
  void *(*v8)(); // rax

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v8 = (void *(*)())*((_QWORD *)&AlpcpLookasides.L.AllocateEx + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8));
      if ( (char *)v8 == (char *)AlpcpAllocateBuffer )
      {
        result = AlpcpAllocateBuffer();
        v6 = 0;
      }
      else
      {
        if ( v8 == AlpcpAllocateMessageFunction )
          result = (__int64)AlpcpAllocateMessageFunction();
        else
          result = guard_dispatch_icall_no_overrides(1LL);
        v6 = 0;
      }
    }
    else
    {
      result = ExAllocatePool2(0x100uLL);
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
