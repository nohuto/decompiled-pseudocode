/*
 * XREFs of ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14000E600
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x14000E2C4 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x14000EFB4 (-NotifyFrame@CPresentRate@@QEAAXXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14000F050 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x14000F46C (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x14000F7EC (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14000F818 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1400102F8 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z @ 0x1400629E0 (-InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x140062B24 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x140099D60 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

int __fastcall CFlipToken::InitializeCompleted(
        CFlipToken *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        char a3)
{
  __int64 v6; // rax
  UINT v7; // edi
  LONG top; // eax
  char v9; // cl
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  UINT PlaneIndex; // eax
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  unsigned __int8 v18; // di
  __int64 v19; // r15
  char v20; // bl
  int v21; // esi
  int v22; // ebp
  __int64 v23; // r14
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int); // r12
  __int64 v25; // rdi
  unsigned int v26; // eax
  int result; // eax
  __int64 v28; // rdi
  int v29; // esi
  HANDLE CurrentThreadId; // rax
  __int64 v31; // rcx
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  UINT NumBlts; // ecx
  UINT v39; // ecx
  struct CCompositionBuffer *v40; // rbp
  _QWORD *i; // rax
  CFlipExBuffer *v42; // rbp
  int inserted; // eax
  __int64 v44; // rdx
  char *v45; // rax
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  unsigned __int64 v56; // rbx
  __int128 v57; // xmm1
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r8
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int64 v62; // rax
  bool v63; // [rsp+60h] [rbp-238h] BYREF
  int v64; // [rsp+64h] [rbp-234h]
  int v65; // [rsp+68h] [rbp-230h]
  unsigned __int64 v66; // [rsp+70h] [rbp-228h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp-220h] BYREF
  _BYTE v68[464]; // [rsp+80h] [rbp-218h] BYREF

  *((_DWORD *)this + 6) = 0;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2604;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v36, v35, v37, 0, 2, -1, (__int64)L"m_pGlobal != NULL", 44, 0, 0, 0, 0);
    }
  }
  v64 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304872LL) + 40LL))((char *)this + 96);
  v6 = *(_QWORD *)this;
  if ( v64 < 0 )
  {
    (*(void (__fastcall **)(CFlipToken *))(v6 + 56))(this);
  }
  else
  {
    (*(void (__fastcall **)(CFlipToken *))(v6 + 24))(this);
    if ( (a2->Flags.Value & 0x180) == 0 || (a2->Flags.Value & 0x180) == 0x80 || (a2->Flags.Value & 0x180) == 0x180 )
    {
      v7 = 0;
      *((_QWORD *)this + 13) = a2->FenceValue;
      top = a2->ScrollRect.top;
      v64 = 0;
      if ( (signed int)a2->RemainingTokens >= top || a2->ScrollRect.left >= a2->ScrollRect.right )
      {
        v64 = 0;
      }
      else
      {
        *((_DWORD *)this + 17) = 1;
        *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a2->RemainingTokens;
        *((_QWORD *)this + 11) = *(_QWORD *)&a2->ScrollRect.bottom;
      }
      *((_DWORD *)this + 32) = a2->FlipInterval;
      *((_DWORD *)this + 31) = a2->ScrollOffset.y;
      *((_DWORD *)this + 30) = a2->SwapChainIndex;
      *((_DWORD *)this + 57) = LODWORD(a2->Transform[4]);
      *((_BYTE *)this + 132) = (a2->Flags.Value & 0x800000) != 0;
      *((_BYTE *)this + 134) = (a2->Flags.Value & 2) != 0;
      *((_BYTE *)this + 152) = (a2->Flags.Value & 8) != 0;
      *((_BYTE *)this + 153) = (a2->Flags.Value & 0x10) != 0;
      *((_BYTE *)this + 133) = (a2->Flags.Value & 0x20) != 0;
      v9 = (a2->Flags.Value & 0x40) != 0;
      *((_BYTE *)this + 154) = v9;
      *((_DWORD *)this + 39) = (a2->Flags.Value >> 7) & 3;
      *((_DWORD *)this + 34) = a2->PresentCount;
      *((_DWORD *)this + 35) = LODWORD(a2->RevealColor[0]);
      *((_DWORD *)this + 36) = LODWORD(a2->RevealColor[1]);
      *((_DWORD *)this + 37) = LODWORD(a2->RevealColor[2]);
      *((_DWORD *)this + 40) = LODWORD(a2->RevealColor[3]);
      *(_OWORD *)((char *)this + 164) = *(_OWORD *)((char *)&a2->1 + 580);
      *(_OWORD *)((char *)this + 180) = *(_OWORD *)&a2->DestWidth;
      *((_DWORD *)this + 49) = a2->SourceRect.right;
      *((_DWORD *)this + 50) = a2->SourceRect.bottom;
      *((_DWORD *)this + 143) = a2->ScatterBlts.Blts[11].DestinationOffset.x;
      *((_BYTE *)this + 579) = (a2->Flags.Value & 0x2000) != 0;
      *((_QWORD *)this + 74) = a2->dxgContext;
      *((_DWORD *)this + 152) = a2->VidPnSourceId;
      *((_DWORD *)this + 58) = a2->CustomDurationFlipInterval;
      *((_DWORD *)this + 153) = a2->CustomDuration;
      *((_BYTE *)this + 584) = (a2->Flags.Value & 0x8000000) != 0;
      *((_DWORD *)this + 51) = a2->TargetRect.right;
      *((_DWORD *)this + 52) = a2->TargetRect.bottom;
      *((_DWORD *)this + 53) = LODWORD(a2->Transform[0]);
      *((_DWORD *)this + 54) = LODWORD(a2->Transform[1]);
      *((_DWORD *)this + 55) = LODWORD(a2->Transform[2]);
      *((_DWORD *)this + 56) = LODWORD(a2->Transform[3]);
      if ( !a2->PresentLimitSemaphoreId )
        *((_BYTE *)this + 578) = 1;
      *((_BYTE *)this + 582) = a3;
      Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a2->Flags.Value;
      if ( (*(_DWORD *)&Value & 0x100000) != 0 )
      {
        *((_QWORD *)this + 75) = a2->confirmationCookie;
        *((_BYTE *)this + 580) = 1;
      }
      else if ( (*(_DWORD *)&Value & 0x1000000) != 0 )
      {
        *((_BYTE *)this + 581) = 1;
      }
      PlaneIndex = a2->PlaneIndex;
      if ( PlaneIndex )
      {
        if ( PlaneIndex > 0x10 )
        {
          v64 = -1073741811;
        }
        else
        {
          *((_DWORD *)this + 78) = PlaneIndex;
          if ( a2->PlaneIndex )
          {
            do
            {
              *(_OWORD *)((char *)this + 16 * v7 + 316) = *((_OWORD *)&a2->ColorSpace + v7);
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12));
              ++v7;
            }
            while ( v7 < a2->PlaneIndex );
            v9 = *((_BYTE *)this + 154);
          }
        }
      }
      if ( v9 )
      {
        NumBlts = a2->ScatterBlts.NumBlts;
        *((_DWORD *)this + 59) = NumBlts;
        v39 = NumBlts - 1;
        if ( v39 )
        {
          if ( v39 == 1 )
          {
            *((_OWORD *)this + 15) = *(_OWORD *)((char *)&a2->hSyncObject + 4);
            *((_OWORD *)this + 16) = *(_OWORD *)&a2->HDRMetaDataHDR10Plus.Data[8];
            *((_OWORD *)this + 17) = *(_OWORD *)&a2->HDRMetaDataHDR10Plus.Data[24];
            *((_OWORD *)this + 18) = *(_OWORD *)&a2->HDRMetaDataHDR10Plus.Data[40];
            *((_QWORD *)this + 38) = *(_QWORD *)&a2->HDRMetaDataHDR10Plus.Data[56];
          }
        }
        else
        {
          *((_OWORD *)this + 15) = *(_OWORD *)((char *)&a2->hSyncObject + 4);
          *((_QWORD *)this + 32) = *(_QWORD *)&a2->HDRMetaDataHDR10Plus.Data[8];
          *((_DWORD *)this + 66) = a2->HDRMetaDataHDR10.MaxMasteringLuminance;
        }
      }
      if ( (a2->Flags.Value & 0x20000000) != 0
        && (!(*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this)
         || (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 152LL))(this)) )
      {
        CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 1);
      }
    }
    else
    {
      v64 = -1073741811;
    }
  }
  v12 = *((_DWORD *)this + 6) == 3;
  v65 = 0;
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 6);
    v14 = *((_QWORD *)this + 7);
    KeEnterCriticalRegion();
    v15 = v13 + 48;
    ExAcquirePushLockSharedEx(v13 + 48, 0LL);
    if ( *(_DWORD *)(v13 + 136) )
    {
      v16 = *(_QWORD **)(v13 + 120);
      v17 = (_QWORD *)(v13 + 120);
      while ( v16 != v17 )
      {
        if ( *(v16 - 1) == v14 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD *))(*(v16 - 3) + 40LL))(v16 - 3);
          goto LABEL_24;
        }
        v16 = (_QWORD *)*v16;
      }
    }
    v18 = 0;
LABEL_24:
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v15 + 8) )
    {
      *(_QWORD *)(v15 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v15, 0LL);
    }
    KeLeaveCriticalRegion();
    v65 = v18;
  }
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2604;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v33, v32, v34, 0, 2, -1, (__int64)L"m_pGlobal != NULL", 44, 0, 0, 0, 0);
    }
  }
  v19 = *((_QWORD *)this + 7);
  v20 = *((_BYTE *)this + 582);
  v21 = *((unsigned __int8 *)this + 579);
  v22 = *((_DWORD *)this + 6);
  v23 = *((_QWORD *)this + 13);
  v24 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304872LL) + 432LL);
  v25 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
  v26 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v24(*((_QWORD *)this + 6), *((unsigned int *)this + 30), v26, v23, v22, v21, v20 == 0, v25, v19, v65);
  result = v64;
  if ( v64 >= 0 )
  {
    v28 = *((_QWORD *)this + 6);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v28 + 48, 0LL);
    *(_QWORD *)(v28 + 56) = PsGetCurrentThreadId();
    v29 = 0;
    CPresentRate::NotifyFrame((CPresentRate *)(v28 + 96));
    if ( *(_QWORD *)(v28 + 160) )
    {
      v40 = 0LL;
      v29 = -1073741275;
      if ( *(_DWORD *)(v28 + 136) )
      {
        for ( i = *(_QWORD **)(v28 + 120); i != (_QWORD *)(v28 + 120); i = (_QWORD *)*i )
        {
          if ( *(i - 1) == *((_QWORD *)this + 7) )
          {
            v40 = (struct CCompositionBuffer *)(i - 3);
            v29 = 0;
            break;
          }
        }
      }
      if ( v29 >= 0 )
      {
        v67 = 0LL;
        v66 = 0LL;
        memset(v68, 0, 0x1C8uLL);
        v42 = CFlipExBuffer::FromBuffer(v40);
        inserted = CFlipExBuffer::InsertCascadedTokenWait(v42, &v67, &v66);
        v29 = inserted;
        if ( inserted >= 0
          || inserted == -1073741267
          && (CFlipExBuffer::DisableCascadedSignaling(v42),
              LOBYTE(v44) = 1,
              v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v28 + 160) + 32LL))(
                      *(_QWORD *)(v28 + 160),
                      v44),
              v29 >= 0)
          && (v29 = CCompositionSurface::PairBind((CCompositionSurface *)(v28 + 40), v42), v29 >= 0)
          && (v29 = CFlipExBuffer::InsertCascadedTokenWait(v42, &v67, &v66), v29 >= 0) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 168LL))(this) )
          {
            v45 = (char *)this + 120;
            v46 = 3LL;
            v47 = v68;
            do
            {
              v47 += 128;
              v48 = *(_OWORD *)v45;
              v49 = *((_OWORD *)v45 + 1);
              v45 += 128;
              *((_OWORD *)v47 - 8) = v48;
              v50 = *((_OWORD *)v45 - 6);
              *((_OWORD *)v47 - 7) = v49;
              v51 = *((_OWORD *)v45 - 5);
              *((_OWORD *)v47 - 6) = v50;
              v52 = *((_OWORD *)v45 - 4);
              *((_OWORD *)v47 - 5) = v51;
              v53 = *((_OWORD *)v45 - 3);
              *((_OWORD *)v47 - 4) = v52;
              v54 = *((_OWORD *)v45 - 2);
              *((_OWORD *)v47 - 3) = v53;
              v55 = *((_OWORD *)v45 - 1);
              *((_OWORD *)v47 - 2) = v54;
              *((_OWORD *)v47 - 1) = v55;
              --v46;
            }
            while ( v46 );
            v56 = v66;
            v57 = *((_OWORD *)v45 + 1);
            v58 = v67;
            v59 = v66;
            *(_OWORD *)v47 = *(_OWORD *)v45;
            v60 = *((_OWORD *)v45 + 2);
            *((_OWORD *)v47 + 1) = v57;
            v61 = *((_OWORD *)v45 + 3);
            v62 = *((_QWORD *)v45 + 8);
            *((_OWORD *)v47 + 2) = v60;
            *((_OWORD *)v47 + 3) = v61;
            *((_QWORD *)v47 + 8) = v62;
            v29 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _BYTE *))(**(_QWORD **)(v28 + 160)
                                                                                                 + 40LL))(
                    *(_QWORD *)(v28 + 160),
                    v58,
                    v59,
                    v68);
            if ( v29 < 0 )
              CFlipExBuffer::InsertCascadedTokenSignal(v42, v56);
          }
        }
      }
    }
    CurrentThreadId = PsGetCurrentThreadId();
    v31 = v28 + 48;
    if ( CurrentThreadId == *(HANDLE *)(v28 + 56) )
    {
      *(_QWORD *)(v28 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v31, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v31, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v29 < 0 || *((_BYTE *)this + 582) )
    {
      return v29;
    }
    else
    {
      v63 = 0;
      *((_DWORD *)this + 6) = 3;
      CFlipToken::TraceStateChanged(this);
      return CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 6), this, &v63, 0LL);
    }
  }
  return result;
}
