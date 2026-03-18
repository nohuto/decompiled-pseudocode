/*
 * XREFs of IopRetrieveTransactionParametersFromOpenPacket @ 0x140861C74
 * Callers:
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14042F260 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByPointer @ 0x140435FB0 (ObReferenceObjectByPointer.c)
 *     IopCheckStackForTransactionSupport @ 0x1404B38C4 (IopCheckStackForTransactionSupport.c)
 */

NTSTATUS __fastcall IopRetrieveTransactionParametersFromOpenPacket(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int SetSpecificExtension; // edi
  NTSTATUS result; // eax
  __int64 v9; // rax
  void *v10; // rsi
  _OWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  SetSpecificExtension = 0;
  if ( (*(_DWORD *)(a2 + 152) & 4) == 0 )
    return SetSpecificExtension;
  v11 = 0LL;
  if ( !IopCheckStackForTransactionSupport(a1)
    && (*(_DWORD *)(a2 + 88) != 1 || (*(_BYTE *)(a2 + 70) & 6) != 0 || (a3 & 0xFEEDFF56) != 0)
    && !*(_BYTE *)(a2 + 137) )
  {
    return -1072103361;
  }
  v9 = *(_QWORD *)(a2 + 184);
  if ( !v9 )
    return -1073741811;
  if ( *(_WORD *)v9 != 16 )
    return -1073741811;
  v10 = *(void **)(v9 + 8);
  if ( !v10 )
    return -1073741811;
  result = ObReferenceObjectByPointer(*(PVOID *)(v9 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
  if ( result >= 0 )
  {
    SetSpecificExtension = IopGetSetSpecificExtension(a4, 0, 16LL, 1, &v11, 0LL);
    if ( SetSpecificExtension >= 0 )
      *v11 = *(_OWORD *)*(_QWORD *)(a2 + 184);
    else
      ObfDereferenceObject(v10);
    return SetSpecificExtension;
  }
  return result;
}
