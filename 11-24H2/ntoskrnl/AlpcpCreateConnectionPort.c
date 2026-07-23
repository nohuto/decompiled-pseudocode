/*
 * XREFs of AlpcpCreateConnectionPort @ 0x14086671C
 * Callers:
 *     NtCreatePort @ 0x14073F420 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x14073F460 (NtCreateWaitablePort.c)
 *     NtAlpcCreatePort @ 0x140866500 (NtAlpcCreatePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     AlpcpCreatePort @ 0x1408669C4 (AlpcpCreatePort.c)
 *     AlpcpSetOwnerProcessPort @ 0x140867A08 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140867A60 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x140867CBC (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x140867D10 (AlpcpInitializePort.c)
 *     AlpcpAllocateBlob @ 0x140893EF0 (AlpcpAllocateBlob.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(HANDLE *a1, __int64 a2, unsigned __int64 a3, int a4, char a5, char a6)
{
  __int64 v10; // rcx
  char PreviousMode; // bl
  __int64 result; // rax
  __int64 v13; // r8
  char v14; // al
  struct _FILE_OBJECT *v15; // rbx
  int v16; // r14d
  unsigned __int64 v17; // r14
  int v18; // edi
  __int64 Blob; // rax
  ULONG *p_SerialNumber; // rax
  int v21; // eax
  int inserted; // ebx
  __int64 v23; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v26[4]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v27; // [rsp+90h] [rbp-58h]

  memset_0(v26, 0, 0x48uLL);
  Object = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a1;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v23 = a3;
      RtlCopyVolatileMemory(v26, (const void *)v23, 0x48uLL);
    }
  }
  else if ( a3 )
  {
    v26[0] = *(_OWORD *)a3;
    v26[1] = *(_OWORD *)(a3 + 16);
    v26[2] = *(_OWORD *)(a3 + 32);
    v26[3] = *(_OWORD *)(a3 + 48);
    v27 = *(_QWORD *)(a3 + 64);
  }
  LOBYTE(v10) = PreviousMode;
  result = AlpcpCreatePort(v10, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = a5;
      if ( (v26[0] & 0x40000) != 0 )
        v14 = 1;
      a5 = v14;
    }
    LOBYTE(v13) = a5;
    v15 = (struct _FILE_OBJECT *)Object;
    v16 = AlpcpInitializePort(Object, 1LL, v13);
    if ( v16 < 0 )
    {
      ObfDereferenceObject(v15);
      return (unsigned int)v16;
    }
    v17 = (unsigned __int64)v26 & -(__int64)(a3 != 0);
    v18 = AlpcpValidateAndSetPortAttributes((_DWORD)v15, v17, (_DWORD)v15, 0, a4, a5, a6);
    if ( v18 >= 0 )
    {
      if ( a6 )
        LODWORD(v15[1].IrpList.Blink) |= 0x3000u;
      AlpcpSetOwnerProcessPort(v15, v17);
      Blob = AlpcpAllocateBlob(AlpcConnectionType, 80LL, 1LL);
      v15->Vpb = (PVPB)Blob;
      if ( Blob )
      {
        *(_QWORD *)(Blob + 16) = 0LL;
        *(_QWORD *)v15->Vpb = v15;
        v15->Vpb->DeviceObject = 0LL;
        *(_QWORD *)&v15->Vpb->VolumeLabel[20] = 0LL;
        p_SerialNumber = &v15->Vpb->SerialNumber;
        *((_QWORD *)p_SerialNumber + 1) = p_SerialNumber;
        *(_QWORD *)p_SerialNumber = p_SerialNumber;
        v21 = AlpcInitializeHandleTable(&v15->Vpb->VolumeLabel[4]);
        if ( v21 >= 0 )
        {
          inserted = ObInsertObjectEx(v15, 0LL, 2031617, 0, 0, 0LL, (__int64)&Handle);
          if ( inserted >= 0 )
            *a1 = Handle;
          return (unsigned int)inserted;
        }
        v18 = v21;
      }
      else
      {
        v18 = -1073741801;
      }
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v18;
  }
  return result;
}
