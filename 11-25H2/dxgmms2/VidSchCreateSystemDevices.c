/*
 * XREFs of VidSchCreateSystemDevices @ 0x1400D7BAC
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400D773C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140031674 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchiCreateContextInternal @ 0x140032228 (VidSchiCreateContextInternal.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140038378 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x140045BD8 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     VidSchiCreateDeviceInternal @ 0x1400D80E0 (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(struct _VIDSCH_GLOBAL *a1)
{
  __int64 *v1; // r15
  int DeviceInternal; // edi
  __int64 v4; // rcx
  struct _VIDSCH_DEVICE **v5; // r12
  int v6; // eax
  int SoftwareOnlyNodeForDriverEngine; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int i; // edi
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  __int64 ContextInternal; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int j; // esi
  __int64 v22; // rax
  __int64 v23; // r14
  struct _VIDSCH_DEVICE *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int128 v30[2]; // [rsp+70h] [rbp-31h] BYREF
  __int128 v31; // [rsp+90h] [rbp-11h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-1h]
  __int128 v33[2]; // [rsp+B0h] [rbp+Fh] BYREF

  v1 = (__int64 *)((char *)a1 + 256);
  DeviceInternal = VidSchiCreateDeviceInternal(a1);
  if ( DeviceInternal < 0 )
  {
    WdLogSingleEntry1(1LL, *((_QWORD *)a1 + 2));
    v4 = *((_QWORD *)a1 + 2);
    WdLogGlobalForLineNumber = 1126;
LABEL_3:
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return (unsigned int)DeviceInternal;
  }
  v5 = (struct _VIDSCH_DEVICE **)((char *)a1 + 312);
  DeviceInternal = VidSchiCreateDeviceInternal(a1);
  if ( DeviceInternal < 0 )
  {
    WdLogSingleEntry1(1LL, *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 1137;
    goto LABEL_3;
  }
  v31 = 0LL;
  HIDWORD(v31) = 7;
  LODWORD(v31) = 268;
  v6 = *((_DWORD *)a1 + 10) * *((_DWORD *)a1 + 38);
  v32 = 0LL;
  DWORD2(v32) = 2 * v6;
  SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine((__int64)a1, 0);
  v8 = *v1;
  DWORD1(v31) = SoftwareOnlyNodeForDriverEngine;
  v9 = VidSchiCreateContextInternal(v8, &v31, 0LL);
  *((_QWORD *)a1 + 33) = v9;
  if ( !v9 )
  {
    WdLogSingleEntry1(1LL, *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 1166;
LABEL_35:
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return (unsigned int)-1073741823;
  }
  for ( i = 0; i < *((_DWORD *)a1 + 21); ++i )
  {
    v12 = *((_QWORD *)a1 + 86);
    v13 = *((_DWORD *)a1 + 190);
    v14 = v12 + 8LL * i;
    if ( i >= v13 )
      v14 = *((_QWORD *)a1 + 86);
    if ( (*(_DWORD *)(*(_QWORD *)v14 + 12LL) & 2) == 0 )
    {
      v15 = 8LL * i;
      if ( i < v13 )
        v12 += v15;
      if ( (*(_DWORD *)(*(_QWORD *)v12 + 12LL) & 0x40) == 0 )
      {
        HIDWORD(v33[0]) = 7;
        DWORD1(v33[0]) = i;
        LODWORD(v33[0]) = 20;
        v33[1] = 0LL;
        v16 = VidSchiSchedulerNodeToDriverEngine((__int64)a1, i);
        v17 = *v1;
        DWORD2(v33[0]) = v16;
        ContextInternal = VidSchiCreateContextInternal(v17, v33, 0LL);
        v19 = v15 + *((_QWORD *)a1 + 86);
        if ( i >= *((_DWORD *)a1 + 190) )
          v19 = *((_QWORD *)a1 + 86);
        *(_QWORD *)(*(_QWORD *)v19 + 32LL) = ContextInternal;
        v20 = v15 + *((_QWORD *)a1 + 86);
        if ( i >= *((_DWORD *)a1 + 190) )
          v20 = *((_QWORD *)a1 + 86);
        if ( !*(_QWORD *)(*(_QWORD *)v20 + 32LL) )
        {
          WdLogSingleEntry2(1LL, i, *((_QWORD *)a1 + 2));
          WdLogGlobalForLineNumber = 1201;
          goto LABEL_35;
        }
      }
    }
    RtlSetBitEx((char *)a1 + 544, i);
  }
  for ( j = 0; j < *((_DWORD *)a1 + 19); ++j )
  {
    v22 = *((_QWORD *)a1 + 2);
    v30[1] = 0LL;
    v23 = *(_QWORD *)(v22 + 2992) + 344LL * j;
    LODWORD(v22) = *((unsigned __int8 *)a1 + j + 88);
    LODWORD(v30[0]) = 29;
    *((_QWORD *)&v30[0] + 1) = j | 0x700000000LL;
    DWORD1(v30[0]) = v22 + *(unsigned __int16 *)(v23 + 2);
    v24 = *v5;
    if ( *((_BYTE *)a1 + 55) )
    {
      LODWORD(v30[0]) = 2077;
      *(_QWORD *)(*((_QWORD *)a1 + 41) + 8LL * j) = VidSchiCreateHwContextInternal(
                                                      v24,
                                                      (struct _VIDSCH_CONTEXT_DATA *)v30,
                                                      0LL);
      if ( !*(_QWORD *)(*((_QWORD *)a1 + 41) + 8LL * j) )
      {
        WdLogSingleEntry2(1LL, j, *((_QWORD *)a1 + 2));
        WdLogGlobalForLineNumber = 1250;
        goto LABEL_35;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 40) + 8LL * j) = VidSchiCreateContextInternal((__int64)v24, v30, 0LL);
      v25 = *(_QWORD *)(*((_QWORD *)a1 + 40) + 8LL * j);
      if ( !v25 )
      {
        WdLogSingleEntry2(1LL, j, *((_QWORD *)a1 + 2));
        WdLogGlobalForLineNumber = 1265;
        goto LABEL_35;
      }
      *(_BYTE *)(v25 + 641) = 1;
      if ( (*(_BYTE *)(v23 + 16) & 0xC) == 0xC )
      {
        v26 = *(_DWORD *)(v23 + 20) + *((unsigned __int8 *)a1 + j + 88);
        v27 = (__int64)*v5;
        LODWORD(v30[0]) |= 0x200u;
        DWORD1(v30[0]) = v26;
        *(_QWORD *)(*((_QWORD *)a1 + 43) + 8LL * j) = VidSchiCreateContextInternal(v27, v30, 0LL);
        v28 = *(_QWORD *)(*((_QWORD *)a1 + 43) + 8LL * j);
        if ( !v28 )
        {
          WdLogSingleEntry2(1LL, j, *((_QWORD *)a1 + 2));
          WdLogGlobalForLineNumber = 1285;
          goto LABEL_35;
        }
        *(_BYTE *)(v28 + 641) = 1;
      }
    }
  }
  return 0LL;
}
