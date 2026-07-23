/*
 * XREFs of RawFileSystemControl @ 0x1408AE108
 * Callers:
 *     RawDispatch @ 0x1408AD4A0 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RawVerifyVolume @ 0x1405E4500 (RawVerifyVolume.c)
 *     RawMountVolume @ 0x1408ACB4C (RawMountVolume.c)
 *     RawUserFsCtrl @ 0x1408AE174 (RawUserFsCtrl.c)
 */

__int64 __fastcall RawFileSystemControl(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( *(_BYTE *)(a3 + 1) )
  {
    if ( *(_BYTE *)(a3 + 1) == 1 )
    {
      v4 = RawMountVolume((_QWORD *)a3);
    }
    else
    {
      if ( *(_BYTE *)(a3 + 1) != 2 )
      {
        v5 = -1073741808;
        goto LABEL_4;
      }
      v4 = RawVerifyVolume(a3, a1);
    }
  }
  else
  {
    v4 = RawUserFsCtrl(a2, a3, a1);
  }
  v5 = v4;
LABEL_4:
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 1);
  return v5;
}
