/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0
 * Callers:
 *     ?EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006EE7C (-EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006F01C (-EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006F250 (-EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ??$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140079E14 (--$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007A0F4 (--$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposi.c)
 *     ??$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007B118 (--$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposit.c)
 *     ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007B480 (--$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectC.c)
 *     ??$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007C5D0 (--$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14007D930 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DBE0 (-EmitReleaseCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x14007DCE8 (-EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14007F0C0 (-EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14007FE34 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1400B85F4 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE1D0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1400BEA9C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 *     ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BECB0 (-EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1400CF354 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 *     ?EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400D21AC (-EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E0800 (-EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E8ADC (-EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400EDE00 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_102dfb2d34a03fd5ee7126208604c48c___lambda_0bc58e56ac4a9aab059b2d62d77c79a6___ @ 0x1400F5F38 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_102dfb2d34a03fd5ee7126208604c48.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___ @ 0x1400FFC24 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d68.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x14010020C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20e___lambda_c8e4717179366f347b5fcb735f2cbba9___ @ 0x1401003D0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20.c)
 *     ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140102FC0 (-EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140108C84 (--$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140129688 (--$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NP.c)
 *     ??$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140144C1C (--$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectCompositi.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x140155AE4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91a.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140224F2C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 * Callees:
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x14006D790 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x14006E0EC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x14007FA14 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        int a2,
        char a3,
        char a4,
        bool a5)
{
  struct DirectComposition::CBatch *v5; // rsi
  char v7; // bl
  int v8; // ebp
  struct DirectComposition::CBatch *v10; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v11; // r14
  struct DirectComposition::CBatchSharedMemoryPool *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rcx
  struct DirectComposition::CBatchSharedMemoryPool **v15; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v16; // rcx
  struct DirectComposition::CBatchSharedMemoryPool *v17; // rax
  __int64 v18; // rax
  struct _ERESOURCE *v19; // rcx
  int v21; // ebp
  struct DirectComposition::CBatchSharedMemoryPool *v22; // [rsp+20h] [rbp-48h] BYREF
  struct DirectComposition::CBatch *v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+78h] [rbp+10h]
  char v25; // [rsp+80h] [rbp+18h]

  v25 = a3;
  v24 = a2;
  v5 = 0LL;
  v23 = 0LL;
  v7 = a3;
  v8 = a2;
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v10 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 22);
  if ( v10 )
  {
    *((_QWORD *)this + 22) = 0LL;
    v5 = v10;
  }
  else
  {
    v11 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
    while ( 1 )
    {
      v12 = *(struct DirectComposition::CBatchSharedMemoryPool **)v11;
      v13 = 0LL;
      v22 = 0LL;
      while ( v12 != v11 )
      {
        if ( !*((_BYTE *)v12 + 64) )
        {
          v14 = *((_QWORD *)v12 + 5);
          if ( (unsigned __int64)(4096 - v14) >= 0x228 )
          {
            *((_BYTE *)v12 + 64) = 1;
            v13 = v14;
            v15 = (struct DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v12 + 1);
            if ( v15 != (struct DirectComposition::CBatchSharedMemoryPool **)v11 )
            {
              v16 = *(struct DirectComposition::CBatchSharedMemoryPool **)v12;
              if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v12 + 8LL) == v12 && *v15 == v12 )
              {
                *v15 = v16;
                *((_QWORD *)v16 + 1) = v15;
                goto LABEL_12;
              }
              goto LABEL_27;
            }
            goto LABEL_14;
          }
        }
        v12 = *(struct DirectComposition::CBatchSharedMemoryPool **)v12;
      }
      if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                  (DirectComposition::CApplicationChannel *)((char *)this + 2632),
                  *((_BYTE *)this + 2656),
                  &v22) >= 0 )
        break;
      if ( !a5 )
        return v5;
      DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
    }
    v12 = v22;
    if ( !*((_BYTE *)v22 + 64) && (unsigned __int64)(4096LL - *((_QWORD *)v22 + 5)) >= 0x228 )
    {
      v13 = *((_QWORD *)v22 + 5);
      *((_BYTE *)v22 + 64) = 1;
    }
LABEL_12:
    v17 = *(struct DirectComposition::CBatchSharedMemoryPool **)v11;
    if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v11 + 8LL) != v11 )
LABEL_27:
      __fastfail(3u);
    *(_QWORD *)v12 = v17;
    *((_QWORD *)v12 + 1) = v11;
    *((_QWORD *)v17 + 1) = v12;
    *(_QWORD *)v11 = v12;
LABEL_14:
    if ( !v12 )
      return v5;
    v18 = *((_QWORD *)v12 + 5);
    if ( (unsigned __int64)(4096 - v18) >= 0x28 )
      *((_QWORD *)v12 + 5) = v18 + 40;
    v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
    if ( v5 )
    {
      *((_QWORD *)this + 24) = *(_QWORD *)v5;
    }
    else
    {
      do
      {
        v21 = DirectComposition::CApplicationChannel::CreateBatch(this, &v23);
        if ( v21 < 0
          && *((int *)this + 63) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
          v21 = 0;
          v23 = v5;
          *((_QWORD *)this + 24) = *(_QWORD *)v5;
        }
        else
        {
          v5 = v23;
        }
      }
      while ( a5 && v21 < 0 );
    }
    v8 = v24;
    if ( v5 )
    {
      *((_QWORD *)v5 + 17) = v12;
      *((_QWORD *)v5 + 18) = v13;
    }
    else
    {
      *((_BYTE *)v12 + 64) = 0;
    }
    v7 = v25;
  }
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) = v8;
    *((_BYTE *)v5 + 32) = v7 | *((_BYTE *)v5 + 32) & 0xFE;
    *(_QWORD *)v5 = 0LL;
    if ( a4 )
    {
      ++*((_DWORD *)this + 63);
      *((_BYTE *)this + 264) |= 8u;
      v19 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
      if ( v19 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(v19);
        if ( ++*((_DWORD *)this + 62) == 1 )
          KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 48) + 8LL));
        ExReleaseResourceLite(*((PERESOURCE *)this + 49));
        KeLeaveCriticalRegion();
      }
    }
  }
  return v5;
}
