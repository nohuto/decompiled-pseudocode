/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x14021DCCC
 * Callers:
 *     PostMouseInputMessage @ 0x140213164 (PostMouseInputMessage.c)
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14005F804 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018AF58 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018C3F8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x14019D900 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x14021B950 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021C60C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x14021CC94 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z @ 0x14021DF5C (-PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x14021E78C (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

char __fastcall CMouseProcessor::PostMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        void *a4,
        struct _mouseCursorEvent *a5)
{
  char v5; // r12
  struct CMouseProcessor::MouseInputMessage *v9; // rax
  char v10; // bl
  struct CMouseProcessor::MouseInputMessage *v11; // rdi
  char v12; // r14
  const struct CMouseProcessor::CMouseEvent *v13; // rsi
  const struct tagINPUTDEST *v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct ContainerMouseInput *v23; // r8
  _OWORD v25[7]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v26[7]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v27[7]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v28[32]; // [rsp+190h] [rbp+90h] BYREF

  v5 = a3;
  InputTraceLogging::Mouse::PostMouseInputMessage(a2, a3, a4);
  v9 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 4040),
         a2);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    if ( !*((_DWORD *)v9 + 6) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1276);
    v12 = 0;
    memset(v25, 0, sizeof(v25));
    if ( (v5 & 3) == 3 )
    {
      if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a4, 4, (struct tagINPUTDEST *)v25) )
      {
        v12 = 1;
LABEL_8:
        if ( (v5 & 1) != 0 || v12 )
        {
          v13 = 0LL;
          if ( v12 )
          {
            v14 = (const struct tagINPUTDEST *)v26;
            v26[0] = v25[0];
            v26[2] = v25[2];
            v26[1] = v25[1];
            v26[4] = v25[4];
            v26[3] = v25[3];
            v26[6] = v25[6];
            v26[5] = v25[5];
          }
          else
          {
            v14 = (const struct tagINPUTDEST *)v27;
            v15 = *(_OWORD *)((char *)v11 + 40);
            v27[0] = *(_OWORD *)((char *)v11 + 24);
            v16 = *(_OWORD *)((char *)v11 + 56);
            v27[1] = v15;
            v17 = *(_OWORD *)((char *)v11 + 72);
            v27[2] = v16;
            v18 = *(_OWORD *)((char *)v11 + 88);
            v27[3] = v17;
            v19 = *(_OWORD *)((char *)v11 + 104);
            v27[4] = v18;
            v20 = *(_OWORD *)((char *)v11 + 120);
            v27[5] = v19;
            v27[6] = v20;
          }
          CInputDest::CInputDest((CInputDest *)v28, v14);
          if ( v12 && !v28[0] )
          {
            CInputDest::~CInputDest((CInputDest *)v28);
            goto LABEL_28;
          }
          switch ( *((_DWORD *)v11 + 42) )
          {
            case 1:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseMoveToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v28,
                (struct tagPOINT *)v11 + 18,
                a5);
              break;
            case 2:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseButtonToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v28,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
            case 3:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseWheelToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v28,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
          }
          if ( IsMouseIVEnabled() && isRootPartition(v21) && v13 )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 4088),
              v13);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 4088),
              v22,
              v23);
          }
          CInputDest::~CInputDest((CInputDest *)v28);
        }
        v10 = 1;
      }
    }
    else if ( !a4 )
    {
      goto LABEL_8;
    }
LABEL_28:
    CMouseProcessor::MouseInputMessage::`scalar deleting destructor'((char *)v11);
    LOBYTE(v9) = v10;
  }
  return (char)v9;
}
