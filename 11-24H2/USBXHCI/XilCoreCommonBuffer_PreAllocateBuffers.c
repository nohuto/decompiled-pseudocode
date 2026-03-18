/*
 * XREFs of XilCoreCommonBuffer_PreAllocateBuffers @ 0x140017250
 * Callers:
 *     CommonBuffer_WorkItem @ 0x140017080 (CommonBuffer_WorkItem.c)
 * Callees:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140017334 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 */

void __fastcall XilCoreCommonBuffer_PreAllocateBuffers(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int i; // edi
  unsigned int v4; // ebp
  KIRQL v5; // al
  int v6; // edx

  v1 = (_DWORD *)(a1 + 44);
  for ( i = 0; i < 2; ++i )
  {
    v4 = 0;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    *(_BYTE *)(a1 + 25) = v5;
    if ( v1[4] < *v1 )
      v4 = v1[1];
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), v5);
    if ( v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v6) = 5;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v6,
            8,
            16,
            (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
            i,
            v4);
        }
      }
      XilCoreCommonBuffer_AllocateBuffers(a1, v1 - 3, v4);
    }
    v1 += 16;
  }
}
