/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x140050B98
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14005F804 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018C3F8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021C60C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     IsMouseIVEnabled @ 0x140050CD0 (IsMouseIVEnabled.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x14019D408 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x14019D900 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1401F3574 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x14021CC94 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x14021EAFC (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  bool v4; // si
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rbp
  char v13; // dl
  char v14; // cl
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned __int8)IsMouseIVEnabled() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v7) + 19504) )
    {
      v10 = *(_DWORD *)(W32GetUserSessionState(v8) + 19508);
      if ( (unsigned int)W32GetCurrentWin32kSessionId() == v10 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v11) + 19560) )
        {
          CInputDest::GetContainerId(a3, &v15);
          ContainerInfo = CInputDest::GetContainerInfo(a3);
          v13 = 1;
          v4 = ContainerInfo != 0LL;
          if ( *((_WORD *)this + 2572) != (_WORD)v15 || (v14 = 1, *((_WORD *)this + 2573) != HIWORD(v15)) )
            v14 = 0;
          if ( *((_WORD *)this + 2556) )
            v13 = 0;
          else
            *((_DWORD *)this + 1286) = v15;
          if ( ContainerInfo && v13 && v14 )
            goto LABEL_18;
          if ( *((_BYTE *)this + 5129) )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor *)((char *)this + 4088),
              a2);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 4088));
          }
          if ( ContainerInfo )
LABEL_18:
            CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
              (CMouseProcessor *)((char *)this + 4088),
              a2,
              a3);
        }
      }
    }
  }
  return v4;
}
