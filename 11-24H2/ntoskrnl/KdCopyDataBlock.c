/*
 * XREFs of KdCopyDataBlock @ 0x1405AC454
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 *     IoFillTriageDumpBuffer @ 0x14058E2EC (IoFillTriageDumpBuffer.c)
 *     IopInitializeInMemoryDumpData @ 0x1405918B0 (IopInitializeInMemoryDumpData.c)
 *     KdDecodeDataBlock @ 0x1405AC518 (KdDecodeDataBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KdCopyDataBlock(_OWORD *a1)
{
  _OWORD *v1; // rdx
  _OWORD *v2; // r8
  int v3; // r9d
  unsigned __int64 result; // rax
  __int128 v5; // xmm1

  v1 = &KdDebuggerDataBlock;
  v2 = a1;
  if ( KdpDataBlockEncoded )
  {
    v3 = 116;
    do
    {
      result = KiWaitAlways ^ _byteswap_uint64((unsigned __int64)&KdpDataBlockEncoded ^ __ROL8__(
                                                                                          KiWaitNever ^ *(_QWORD *)v1,
                                                                                          KiWaitNever));
      *(_QWORD *)((char *)v1 + (char *)a1 - (char *)&KdDebuggerDataBlock) = result;
      v1 = (_OWORD *)((char *)v1 + 8);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    result = 7LL;
    do
    {
      *v2 = *v1;
      v2[1] = v1[1];
      v2[2] = v1[2];
      v2[3] = v1[3];
      v2[4] = v1[4];
      v2[5] = v1[5];
      v2[6] = v1[6];
      v2 += 8;
      v5 = v1[7];
      v1 += 8;
      *(v2 - 1) = v5;
      --result;
    }
    while ( result );
    *v2 = *v1;
    v2[1] = v1[1];
  }
  return result;
}
