/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F200
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051320 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkOpenResource @ 0x14035B240 (DxgkOpenResource.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x14039EE80 (DxgkOpenResourceFromNtHandleInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int v2; // edi
  void *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r9
  _DWORD *v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  _DWORD *v13; // r13
  char v14; // r12
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  const wchar_t *v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-E0h]
  _BYTE v28[24]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[24]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v30[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v31[20]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+180h] [rbp+80h]
  void *v33; // [rsp+188h] [rbp+88h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v29,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1804;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1804LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    return 0;
  }
  v33 = 0LL;
  v4 = 0LL;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v7 = v5;
  if ( !v5
    || (v8 = *(_DWORD *)(v5 + 36), v8 > 0x8000)
    || (v32 = 4 * v8 + 8, (v10 = (_DWORD *)operator new[](v32, 0x4B677844u, 64LL, v6)) == 0LL) )
  {
    v14 = 0;
    goto LABEL_37;
  }
  v11 = 80LL * *(unsigned int *)(v7 + 36);
  if ( !is_mul_ok(*(unsigned int *)(v7 + 36), 0x50uLL) )
    v11 = -1LL;
  v13 = (_DWORD *)operator new[](v11, 0x4B677844u, 256LL, v9);
  v14 = 1;
  if ( v13 )
  {
    v16 = *(_DWORD *)(v7 + 40);
    if ( !v16 )
      goto LABEL_40;
    if ( v16 > 0x20000 )
    {
      LODWORD(v15) = -1073741811;
      goto LABEL_35;
    }
    v33 = (void *)operator new[](*(unsigned int *)(v7 + 40), 0x4B677844u, 256LL, v12);
    v4 = v33;
    if ( v33 )
    {
LABEL_40:
      if ( *(_BYTE *)(v7 + 28) )
      {
        memset(v31, 0, 0x68uLL);
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
          (DXGHANDLETABLELOCKSHARED *)v28,
          *((struct DXGPROCESS **)a1 + 12));
        v17 = *((_QWORD *)a1 + 12);
        v18 = (*(_DWORD *)(v7 + 32) >> 6) & 0xFFFFFF;
        if ( v18 >= *(_DWORD *)(v17 + 296) )
          goto LABEL_21;
        v19 = *(_QWORD *)(v17 + 280);
        if ( ((*(_DWORD *)(v7 + 32) >> 25) & 0x60) != (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60) )
          goto LABEL_21;
        if ( (*(_DWORD *)(v19 + 16LL * v18 + 8) & 0x2000) != 0 )
          goto LABEL_21;
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8) & 0x1F;
        if ( !v20 )
          goto LABEL_21;
        if ( v20 != 13 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_21:
          WdLogSingleEntry1(2LL, *(unsigned int *)(v7 + 32));
          v27 = *(unsigned int *)(v7 + 32);
          WdLogGlobalForLineNumber = 1858;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Invalid shared object handle: 0x%I64x",
            v27,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v15) = -1073741811;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
          goto LABEL_35;
        }
        v21 = *(_QWORD *)(v19 + 16LL * v18);
        if ( !v21 || *(_DWORD *)v21 != 4 || !*(_QWORD *)(v21 + 16) )
          goto LABEL_21;
        v31[1] = *(_QWORD *)(v21 + 16);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
        LODWORD(v31[0]) = *(_DWORD *)(v7 + 24);
        LODWORD(v31[2]) = *(_DWORD *)(v7 + 36);
        LODWORD(v31[8]) = *(_DWORD *)(v7 + 40);
        v31[3] = v13;
        v31[9] = v4;
        v22 = DxgkOpenResourceFromNtHandleInternal(v31, 0LL);
        v15 = v22;
        if ( v22 >= 0 )
        {
          *v10 = v31[10];
          if ( *(_DWORD *)(v7 + 36) )
          {
            do
            {
              v24 = v2++;
              v10[v24 + 2] = v13[20 * v24];
            }
            while ( v2 < *(_DWORD *)(v7 + 36) );
          }
          goto LABEL_35;
        }
        WdLogSingleEntry1(2LL, v22);
        v23 = L"DxgkOpenResourceFromNtHandle failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1877;
      }
      else
      {
        memset(v30, 0, 0x48uLL);
        LODWORD(v30[0]) = *(_DWORD *)(v7 + 24);
        HIDWORD(v30[0]) = *(_DWORD *)(v7 + 32);
        LODWORD(v30[1]) = *(_DWORD *)(v7 + 36);
        LODWORD(v30[8]) = *(_DWORD *)(v7 + 40);
        v30[2] = v13;
        v30[7] = v4;
        v25 = DxgkOpenResource(v30);
        v15 = v25;
        if ( v25 >= 0 )
        {
          *v10 = HIDWORD(v30[8]);
          if ( *(_DWORD *)(v7 + 36) )
          {
            do
            {
              v26 = v2++;
              v10[v26 + 2] = v13[20 * v26];
            }
            while ( v2 < *(_DWORD *)(v7 + 36) );
          }
          goto LABEL_35;
        }
        WdLogSingleEntry1(2LL, v25);
        v23 = L"DxgkOpenResource failed: 0x%I64x";
        WdLogGlobalForLineNumber = 1903;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v23, v15, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_35;
    }
  }
  LODWORD(v15) = -1073741801;
LABEL_35:
  v10[1] = v15;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v10, v32);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v33);
LABEL_37:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  return v14;
}
