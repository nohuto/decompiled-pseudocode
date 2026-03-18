/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffers @ 0x140017334
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x140016A00 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x140017250 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x14001F364 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_Create @ 0x140056438 (XilCoreCommonBuffer_Create.c)
 * Callees:
 *     DmaEnabler_AllocateCommonBufferPage @ 0x140018768 (DmaEnabler_AllocateCommonBufferPage.c)
 *     WPP_RECORDER_SF_qDD @ 0x140018934 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C838 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x14005611C (WPP_RECORDER_SF_ddqDddd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x140083898 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AllocateBuffers(__int64 **a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  unsigned int v7; // r13d
  __int64 result; // rax
  unsigned int v9; // edx
  unsigned int i; // r12d
  int v11; // edx
  __int64 v12; // rcx
  int v13; // edx
  __int64 *v14; // r15
  __int64 **v15; // rdi
  KIRQL v16; // al
  __int64 v17; // r14
  _QWORD *v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 ***v25; // rcx
  int v26; // edx
  int v27; // r9d
  int v28; // eax
  int v29; // [rsp+20h] [rbp-78h]
  int v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+18h]

  v3 = 0;
  v32 = 0LL;
  v5 = a2;
  v31 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v30 = *(_DWORD *)(a2 + 28);
    v28 = *(_DWORD *)(a2 + 24);
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qDD(a1[1][9], a2, 8, 12, (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids, v5, v28, v30);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 52);
  v7 = ((unsigned int)(a3 * *(_DWORD *)v5) >> 12) + (((a3 * *(_DWORD *)v5) & 0xFFF) != 0);
  v9 = 0x1000u % *(_DWORD *)v5;
  result = 0x1000u / *(_DWORD *)v5;
  v33 = 0x1000u / *(_DWORD *)v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_dD(a1[1][9], v9, 8, 13, (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids, v7, result);
    result = v33;
  }
  for ( i = 0; i < v7; ++i )
  {
    v11 = 104 * result + 32;
    v12 = **a1;
    result = *((_BYTE *)*a1 + 80)
           ? SecureDmaEnabler_AllocateCommonBufferPage(
               *(_QWORD *)(v12 + 104),
               v11,
               4096,
               (unsigned int)&v31,
               (__int64)&v32)
           : DmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v12 + 96), v11, 4096, (unsigned int)&v31, (__int64)&v32);
    if ( (int)result < 0 )
      break;
    v14 = (__int64 *)v31;
    if ( (*(_DWORD *)(v31 + 8) & 0xFFF) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 3;
        WPP_RECORDER_SF_(a1[1][9], v13, 8, 14, (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids);
      }
      if ( *((_BYTE *)*a1 + 80) )
        SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(**a1 + 104), v14);
      else
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v14[2]);
    }
    else
    {
      v15 = a1 + 2;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 2);
      v17 = v32;
      *((_BYTE *)a1 + 25) = v16;
      ++*((_DWORD *)a1 + 50);
      *(_QWORD *)(v17 + 24) = v14;
      *(_BYTE *)(v17 + 16) = 1;
      v18 = *(_QWORD **)(v5 + 56);
      if ( *v18 != v5 + 48 )
LABEL_22:
        __fastfail(3u);
      *(_QWORD *)v17 = v5 + 48;
      *(_QWORD *)(v17 + 8) = v18;
      *v18 = v17;
      *(_QWORD *)(v5 + 56) = v17;
      if ( v33 )
      {
        v19 = v5 + 32;
        v20 = (_QWORD *)(v17 + 80);
        do
        {
          v21 = *v14;
          *(v20 - 4) = *v14;
          *(v20 - 4) = v21 + *(_DWORD *)v5 * v3;
          v22 = v14[1];
          *(v20 - 3) = v22;
          v23 = *(_DWORD *)v5 * v3;
          *(v20 - 2) = v17;
          *(v20 - 3) = v22 + v23;
          *((_DWORD *)v20 - 2) = *(_DWORD *)v5;
          v24 = *(_QWORD **)(v19 + 8);
          if ( *v24 != v19 )
            goto LABEL_22;
          *(v20 - 5) = v24;
          *(v20 - 6) = v19;
          *v24 = v20 - 6;
          *(_QWORD *)(v19 + 8) = v20 - 6;
          v25 = (__int64 ***)a1[21];
          if ( *v25 != a1 + 20 )
            goto LABEL_22;
          *v20 = a1 + 20;
          v20[1] = v25;
          *v25 = (__int64 **)v20;
          a1[21] = v20;
          v26 = *(_DWORD *)(v5 + 24) + 1;
          v27 = *(_DWORD *)(v5 + 28) + 1;
          *(_DWORD *)(v5 + 24) = v26;
          *(_DWORD *)(v5 + 28) = v27;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddqDddd(
                a1[1][9],
                v26,
                v19,
                v27,
                v29,
                i,
                v3,
                *(v20 - 4),
                *((_DWORD *)v20 - 6),
                *((_DWORD *)v20 - 2),
                v26,
                v27);
              v19 = v5 + 32;
            }
          }
          ++v3;
          v20 += 13;
        }
        while ( v3 < v33 );
        v15 = a1 + 2;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v15, *((_BYTE *)v15 + 9));
      v3 = 0;
    }
    result = v33;
  }
  return result;
}
