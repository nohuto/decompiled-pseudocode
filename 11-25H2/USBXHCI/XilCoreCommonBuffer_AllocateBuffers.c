/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffers @ 0x140020234
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x140004284 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x14001F900 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x140020150 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 *     XilCoreCommonBuffer_Create @ 0x140057018 (XilCoreCommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     CommonBuffer_AllocateCommonBufferPage @ 0x1400205B8 (CommonBuffer_AllocateCommonBufferPage.c)
 *     WPP_RECORDER_SF_qDD @ 0x14002064C (WPP_RECORDER_SF_qDD.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C8A8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x140056CBC (WPP_RECORDER_SF_ddqDddd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AllocateBuffers(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  unsigned int v7; // r13d
  __int64 result; // rax
  unsigned int i; // r12d
  int v10; // edx
  __int64 *v11; // r15
  __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // r14
  _QWORD *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  int v23; // edx
  int v24; // r9d
  int v25; // eax
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  int v29; // [rsp+38h] [rbp-60h]
  __int64 v30; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp+18h]

  v3 = 0;
  v31 = 0LL;
  v5 = a2;
  v30 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v29 = *(_DWORD *)(a2 + 28);
    v25 = *(_DWORD *)(a2 + 24);
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      8,
      12,
      (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids,
      v5,
      v25,
      v29);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 208));
  v7 = ((unsigned int)(a3 * *(_DWORD *)v5) >> 12) + (((a3 * *(_DWORD *)v5) & 0xFFF) != 0);
  result = 0x1000u / *(_DWORD *)v5;
  v32 = 0x1000u / *(_DWORD *)v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v28) = result;
    LODWORD(v27) = v7;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      8u,
      0xDu,
      (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids,
      v27,
      v28);
    result = v32;
  }
  for ( i = 0; i < v7; ++i )
  {
    result = CommonBuffer_AllocateCommonBufferPage(
               *(_QWORD *)a1,
               104 * (int)result + 32,
               4096,
               (unsigned int)&v30,
               (__int64)&v31);
    if ( (int)result < 0 )
      break;
    v11 = (__int64 *)v30;
    if ( (*(_DWORD *)(v30 + 8) & 0xFFF) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v10,
          8,
          14,
          (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids);
      }
      if ( *(_BYTE *)(*(_QWORD *)a1 + 80LL) )
        SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(**(_QWORD **)a1 + 104LL), v11);
      else
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v11[2]);
    }
    else
    {
      v12 = a1 + 16;
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
      v14 = v31;
      *(_BYTE *)(a1 + 25) = v13;
      ++*(_DWORD *)(a1 + 200);
      *(_QWORD *)(v14 + 24) = v11;
      *(_BYTE *)(v14 + 16) = 1;
      v15 = *(_QWORD **)(v5 + 56);
      if ( *v15 != v5 + 48 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)v14 = v5 + 48;
      *(_QWORD *)(v14 + 8) = v15;
      *v15 = v14;
      *(_QWORD *)(v5 + 56) = v14;
      if ( v32 )
      {
        v16 = v5 + 32;
        v17 = (_QWORD *)(v14 + 80);
        do
        {
          v18 = *v11;
          *(v17 - 4) = *v11;
          *(v17 - 4) = v18 + *(_DWORD *)v5 * v3;
          v19 = v11[1];
          *(v17 - 3) = v19;
          v20 = *(_DWORD *)v5 * v3;
          *(v17 - 2) = v14;
          *(v17 - 3) = v19 + v20;
          *((_DWORD *)v17 - 2) = *(_DWORD *)v5;
          v21 = *(_QWORD **)(v16 + 8);
          if ( *v21 != v16 )
            goto LABEL_20;
          *(v17 - 5) = v21;
          *(v17 - 6) = v16;
          *v21 = v17 - 6;
          *(_QWORD *)(v16 + 8) = v17 - 6;
          v22 = *(_QWORD **)(a1 + 168);
          if ( *v22 != a1 + 160 )
            goto LABEL_20;
          *v17 = a1 + 160;
          v17[1] = v22;
          *v22 = v17;
          *(_QWORD *)(a1 + 168) = v17;
          v23 = *(_DWORD *)(v5 + 24) + 1;
          v24 = *(_DWORD *)(v5 + 28) + 1;
          *(_DWORD *)(v5 + 24) = v23;
          *(_DWORD *)(v5 + 28) = v24;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddqDddd(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                v23,
                v16,
                v24,
                v26,
                i,
                v3,
                *(v17 - 4),
                *((_DWORD *)v17 - 6),
                *((_DWORD *)v17 - 2),
                v23,
                v24);
              v16 = v5 + 32;
            }
          }
          ++v3;
          v17 += 13;
        }
        while ( v3 < v32 );
        v12 = a1 + 16;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v12, *(_BYTE *)(v12 + 9));
      v3 = 0;
    }
    result = v32;
  }
  return result;
}
