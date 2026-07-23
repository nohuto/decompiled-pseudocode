/*
 * XREFs of RawSetInformation @ 0x14077CAF8
 * Callers:
 *     RawDispatch @ 0x1408AD4A0 (RawDispatch.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RawBeginOperation @ 0x1404052F0 (RawBeginOperation.c)
 *     RawEndOperation @ 0x14047ED8C (RawEndOperation.c)
 */

__int64 __fastcall RawSetInformation(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v6; // ebx
  struct _IRP *MasterIrp; // r14
  __int64 v8; // rbp

  v6 = 0;
  if ( RawBeginOperation(a1, *(_QWORD *)(a3 + 48)) )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    v8 = *(_QWORD *)(a3 + 48);
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      if ( (IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(a3 + 48))->AlignmentRequirement & *(_DWORD *)&MasterIrp->Type) != 0 )
        v6 = -1073741811;
      else
        *(_QWORD *)(v8 + 104) = *(_QWORD *)&MasterIrp->Type;
    }
    else
    {
      v6 = -1073741808;
    }
    RawEndOperation(a1, *(_QWORD *)(a3 + 48));
  }
  else
  {
    v6 = -1073741202;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 1);
  return v6;
}
