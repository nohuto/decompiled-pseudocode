/*
 * XREFs of GetObjectTypeName @ 0x14002F744
 * Callers:
 *     WriteField @ 0x14000229C (WriteField.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     ProcessIncDec @ 0x140005D80 (ProcessIncDec.c)
 *     Store @ 0x140006870 (Store.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     Index @ 0x140008710 (Index.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     ObjTypeSizeOf @ 0x140025380 (ObjTypeSizeOf.c)
 *     AMLIEvalPkgDataElement @ 0x14002CC08 (AMLIEvalPkgDataElement.c)
 *     FreeObjData @ 0x14002E368 (FreeObjData.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 *     ResetSignal @ 0x140030AC0 (ResetSignal.c)
 *     Wait @ 0x140030C40 (Wait.c)
 *     NewObjData @ 0x14003620C (NewObjData.c)
 *     CopyObjBuffer @ 0x14003AC48 (CopyObjBuffer.c)
 *     Release @ 0x14003B700 (Release.c)
 *     Acquire @ 0x14003E2D0 (Acquire.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     AMLIEvalPackageElement @ 0x14006AB98 (AMLIEvalPackageElement.c)
 *     DumpObject @ 0x14006BA88 (DumpObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetObjectTypeName(int a1)
{
  __int64 v1; // rdx
  _QWORD *i; // rax

  v1 = 0LL;
  for ( i = &unk_140086F00; i[1]; i += 2 )
  {
    if ( a1 == *(_DWORD *)i )
      return i[1];
  }
  return v1;
}
