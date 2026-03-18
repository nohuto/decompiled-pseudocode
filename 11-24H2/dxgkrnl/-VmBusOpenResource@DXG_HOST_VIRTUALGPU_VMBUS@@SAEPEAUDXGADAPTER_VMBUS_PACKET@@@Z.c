/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225660
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140050D90 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkOpenResource @ 0x140350590 (DxgkOpenResource.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140395150 (DxgkOpenResourceFromNtHandleInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int v2; // edi
  void *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rax
  _DWORD *v10; // r13
  char v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  const wchar_t *v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-E0h]
  _BYTE v25[24]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[24]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v27[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[20]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+180h] [rbp+80h]
  void *v30; // [rsp+188h] [rbp+88h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v26,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1805;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1805LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
    return 0;
  }
  v30 = 0LL;
  v4 = 0LL;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v6 = v5;
  if ( !v5
    || (v7 = *(_DWORD *)(v5 + 36), v7 > 0x8000)
    || (v29 = 4 * v7 + 8, (v8 = (_DWORD *)operator new[](v29, 0x4B677844u, 64LL)) == 0LL) )
  {
    v11 = 0;
    goto LABEL_37;
  }
  v9 = 80LL * *(unsigned int *)(v6 + 36);
  if ( !is_mul_ok(*(unsigned int *)(v6 + 36), 0x50uLL) )
    v9 = -1LL;
  v10 = (_DWORD *)operator new[](v9, 0x4B677844u, 256LL);
  v11 = 1;
  if ( v10 )
  {
    v13 = *(_DWORD *)(v6 + 40);
    if ( !v13 )
      goto LABEL_40;
    if ( v13 > 0x20000 )
    {
      LODWORD(v12) = -1073741811;
      goto LABEL_35;
    }
    v30 = (void *)operator new[](*(unsigned int *)(v6 + 40), 0x4B677844u, 256LL);
    v4 = v30;
    if ( v30 )
    {
LABEL_40:
      if ( *(_BYTE *)(v6 + 28) )
      {
        memset(v28, 0, 0x68uLL);
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
          (DXGHANDLETABLELOCKSHARED *)v25,
          *((struct DXGPROCESS **)a1 + 12));
        v14 = *((_QWORD *)a1 + 12);
        v15 = (*(_DWORD *)(v6 + 32) >> 6) & 0xFFFFFF;
        if ( v15 >= *(_DWORD *)(v14 + 296) )
          goto LABEL_21;
        v16 = *(_QWORD *)(v14 + 280);
        if ( ((*(_DWORD *)(v6 + 32) >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) )
          goto LABEL_21;
        if ( (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) != 0 )
          goto LABEL_21;
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
        if ( !v17 )
          goto LABEL_21;
        if ( v17 != 13 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_21:
          WdLogSingleEntry1(2LL, *(unsigned int *)(v6 + 32));
          v24 = *(unsigned int *)(v6 + 32);
          WdLogGlobalForLineNumber = 1859;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid shared object handle: 0x%I64x",
            v24,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v12) = -1073741811;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
          goto LABEL_35;
        }
        v18 = *(_QWORD *)(v16 + 16LL * v15);
        if ( !v18 || *(_DWORD *)v18 != 4 || !*(_QWORD *)(v18 + 16) )
          goto LABEL_21;
        v28[1] = *(_QWORD *)(v18 + 16);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
        LODWORD(v28[0]) = *(_DWORD *)(v6 + 24);
        LODWORD(v28[2]) = *(_DWORD *)(v6 + 36);
        LODWORD(v28[8]) = *(_DWORD *)(v6 + 40);
        v28[3] = v10;
        v28[9] = v4;
        v19 = DxgkOpenResourceFromNtHandleInternal(v28, 0LL);
        v12 = v19;
        if ( v19 >= 0 )
        {
          *v8 = v28[10];
          if ( *(_DWORD *)(v6 + 36) )
          {
            do
            {
              v21 = v2++;
              v8[v21 + 2] = v10[20 * v21];
            }
            while ( v2 < *(_DWORD *)(v6 + 36) );
          }
          goto LABEL_35;
        }
        WdLogSingleEntry1(2LL, v19);
        v20 = L"DxgkOpenResourceFromNtHandle failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1878;
      }
      else
      {
        memset(v27, 0, 0x48uLL);
        LODWORD(v27[0]) = *(_DWORD *)(v6 + 24);
        HIDWORD(v27[0]) = *(_DWORD *)(v6 + 32);
        LODWORD(v27[1]) = *(_DWORD *)(v6 + 36);
        LODWORD(v27[8]) = *(_DWORD *)(v6 + 40);
        v27[2] = v10;
        v27[7] = v4;
        v22 = DxgkOpenResource(v27);
        v12 = v22;
        if ( v22 >= 0 )
        {
          *v8 = HIDWORD(v27[8]);
          if ( *(_DWORD *)(v6 + 36) )
          {
            do
            {
              v23 = v2++;
              v8[v23 + 2] = v10[20 * v23];
            }
            while ( v2 < *(_DWORD *)(v6 + 36) );
          }
          goto LABEL_35;
        }
        WdLogSingleEntry1(2LL, v22);
        v20 = L"DxgkOpenResource failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1904;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v20, v12, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_35;
    }
  }
  LODWORD(v12) = -1073741801;
LABEL_35:
  v8[1] = v12;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v8, v29);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v30);
LABEL_37:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  return v11;
}
