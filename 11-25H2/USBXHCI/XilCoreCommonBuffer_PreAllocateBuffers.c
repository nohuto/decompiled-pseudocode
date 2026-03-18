/*
 * XREFs of XilCoreCommonBuffer_PreAllocateBuffers @ 0x140020150
 * Callers:
 *     CommonBuffer_WorkItem @ 0x14001FF80 (CommonBuffer_WorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140020234 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

void __fastcall XilCoreCommonBuffer_PreAllocateBuffers(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int i; // edi
  unsigned int v4; // ebp
  KIRQL v5; // al
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]

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
          LODWORD(v7) = v4;
          LODWORD(v6) = i;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            5u,
            8u,
            0x10u,
            (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids,
            v6,
            v7);
        }
      }
      XilCoreCommonBuffer_AllocateBuffers(a1, v1 - 3, v4);
    }
    v1 += 16;
  }
}
