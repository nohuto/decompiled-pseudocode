/*
 * XREFs of ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EF230
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140101DE8 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessPendingOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rbp
  VIDMM_GLOBAL *v3; // r12
  VIDMM_GLOBAL *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  VIDMM_GLOBAL *v7; // r15
  char v8; // r13
  VIDMM_GLOBAL **v9; // rcx
  struct VIDMM_GLOBAL_ALLOC *v10; // rdi
  VIDMM_GLOBAL *v11; // rbx
  VIDMM_GLOBAL **v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int16 v15; // cx
  VIDMM_SEGMENT *v16; // rcx
  VIDMM_GLOBAL **v17; // rcx
  __int64 v18; // rax

  if ( qword_140081450 )
  {
    v2 = (char *)this + 39904;
    v3 = (VIDMM_GLOBAL *)((char *)this + 39888);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v2 + 6) != -1 && (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      ExAcquirePushLockSharedEx(v2, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)v2 + 4);
    v4 = *(VIDMM_GLOBAL **)v3;
    _InterlockedDecrement((volatile signed __int32 *)v2 + 4);
    if ( v4 == v3 )
    {
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
      if ( (*((_DWORD *)this + 1746) & 0x8000) != 0
        || (v5 = *((_QWORD *)this + 570) - *((_QWORD *)this + 881), v5 >= qword_140081450) )
      {
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
        v7 = *(VIDMM_GLOBAL **)v3;
        if ( *(VIDMM_GLOBAL **)v3 == v3 )
        {
          v8 = 0;
        }
        else
        {
          v8 = 1;
          VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0x3E9u);
          do
          {
            v9 = *(VIDMM_GLOBAL ***)v7;
            v10 = (VIDMM_GLOBAL *)((char *)v7 - 264);
            v11 = v7;
            v7 = (VIDMM_GLOBAL *)v9;
            if ( v9[1] != v11 || (v12 = (VIDMM_GLOBAL **)*((_QWORD *)v11 + 1), *v12 != v11) )
              __fastfail(3u);
            *v12 = (VIDMM_GLOBAL *)v9;
            v9[1] = (VIDMM_GLOBAL *)v12;
            v13 = *((_QWORD *)v10 + 47);
            *(_QWORD *)v11 = 0LL;
            v14 = *(_QWORD *)v10;
            v15 = *(_WORD *)(v13 + 8);
            if ( v15 && v15 != 3 )
            {
              if ( (byte_140081241 & 1) != 0 )
                McTemplateK0p_EtwWriteTransfer();
              v16 = *(VIDMM_SEGMENT **)(v14 + 64);
              if ( !v16 || (*((_DWORD *)v16 + 26) & 0x1001) != 0 )
              {
                v17 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4995);
                if ( *v17 != (VIDMM_GLOBAL *)((char *)this + 39952) )
                  __fastfail(3u);
                *(_QWORD *)v11 = (char *)this + 39952;
                *((_QWORD *)v11 + 1) = v17;
                *v17 = v11;
                *((_QWORD *)this + 4995) = v11;
              }
              else if ( *((_DWORD *)v10 + 18) == 2 )
              {
                VIDMM_SEGMENT::OfferAllocation(v16, v10);
              }
            }
          }
          while ( v7 != v3 );
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)v2 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)this + 881) = *((_QWORD *)this + 570);
        v6 = -qword_140081450;
        if ( v8 )
          VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        v6 = v5 - qword_140081450;
      }
      v18 = *(_QWORD *)this;
      if ( v6 > *(_QWORD *)(*(_QWORD *)this + 128LL) )
      {
        *(_QWORD *)(v18 + 128) = v6;
        *(_BYTE *)(v18 + 214) = 3;
      }
    }
  }
}
