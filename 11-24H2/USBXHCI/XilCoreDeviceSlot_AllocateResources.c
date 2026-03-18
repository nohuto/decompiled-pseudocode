/*
 * XREFs of XilCoreDeviceSlot_AllocateResources @ 0x140056528
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1400463D0 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     CommonBuffer_AcquireBuffers @ 0x1400168C0 (CommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireBuffer @ 0x14001F318 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x140056764 (XilCoreDeviceSlot_FreeResources.c)
 */

__int64 __fastcall XilCoreDeviceSlot_AllocateResources(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // edx
  int v8; // r9d
  int v9; // edx
  __int64 v10; // rax
  int v11; // edx
  int v12; // edi
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 i; // r9
  int v16; // eax
  __int64 Pool2; // rax
  __int64 v18; // rdx
  __int64 v19; // rax

  v1 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(char **)(v3 + 120);
  v5 = *(_QWORD *)(v3 + 88);
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v6 = CommonBuffer_AcquireBuffer(v4, 4096LL, a1, 829713491LL);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 13;
LABEL_17:
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        10,
        v8,
        (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids);
      goto LABEL_18;
    }
    goto LABEL_18;
  }
  v9 = *(_DWORD *)(v5 + 96);
  *(_DWORD *)(a1 + 20) = v9;
  if ( v9 )
  {
    v10 = CommonBuffer_AcquireBuffer(v4, (unsigned int)(8 * v9), a1, 846490707LL);
    *(_QWORD *)(a1 + 32) = v10;
    if ( !v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 14;
        goto LABEL_17;
      }
LABEL_18:
      v12 = -1073741670;
LABEL_19:
      XilCoreDeviceSlot_FreeResources(a1);
      return (unsigned int)v12;
    }
    v12 = CommonBuffer_AcquireBuffers((KSPIN_LOCK *)v4, *(_DWORD *)(a1 + 20), 4096, (int)v1, a1, 863267923, 0LL);
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v11,
          10,
          15,
          (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
          v12);
      }
      goto LABEL_19;
    }
    v13 = 0LL;
    v14 = (_QWORD *)*v1;
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL); (unsigned int)v13 < *(_DWORD *)(a1 + 20); v14 = (_QWORD *)*v14 )
    {
      *(_QWORD *)(i + 8 * v13) = v14[3];
      v13 = (unsigned int)(v13 + 1);
    }
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  }
  v16 = (unsigned __int8)*(_DWORD *)(v5 + 84);
  *(_DWORD *)(a1 + 16) = v16;
  Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)(v16 + 1), 1229146200LL);
  *(_QWORD *)(a1 + 56) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 16;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(v18 + 16);
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 72LL),
      v18,
      10,
      17,
      (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
      v19);
  }
  return 0;
}
