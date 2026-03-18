/*
 * XREFs of ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14000A1F8
 * Callers:
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14000A110 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140009B60 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x140009FBC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x14000A86C (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x14000EFB4 (-NotifyFrame@CPresentRate@@QEAAXXZ.c)
 *     ?AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@Z @ 0x140050CC8 (-AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x140050F8C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ?RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z @ 0x140056684 (-RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x140057EB0 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z @ 0x140058290 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDHCEDEG@@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::ApplyIncrementalUpdate(
        struct _LIST_ENTRY *this,
        const struct CFlipPresentUpdate *a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // ebx
  unsigned int *v4; // r15
  CEndpointResourceStateManager *v6; // rcx
  CEndpointResourceStateManager *v7; // rcx
  CEndpointResourceStateManager *v8; // rcx
  CEndpointResourceStateManager *v9; // rcx
  CContentResourceState *v10; // rax
  CContentResourceState *v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rax
  CEndpointResourceStateManager *v14; // rcx
  __int64 v15; // rdx
  struct _LIST_ENTRY *v16; // r8
  char v17; // al
  void **v18; // rax
  struct CFlipResourceState *ResourceState; // rax
  __int64 v21; // rax
  char v22; // al
  struct CContentResourceState *v23; // rax
  CEndpointResourceStateManager *v24; // rcx

  v2 = (unsigned int *)*((_QWORD *)a2 + 6);
  v3 = 0;
  v4 = (unsigned int *)((char *)v2 + *((unsigned int *)a2 + 10));
  while ( v2 < v4 )
  {
    v6 = (CEndpointResourceStateManager *)*v2;
    if ( !(_DWORD)v6 )
    {
      ResourceState = CEndpointResourceStateManager::FindResourceState(v6, *((_QWORD *)v2 + 1), this);
      if ( !ResourceState )
        return (unsigned int)-1073741823;
      CEndpointResourceStateManager::RemovePoolBufferState((CEndpointResourceStateManager *)this, ResourceState);
      goto LABEL_17;
    }
    v7 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v7 - 1);
      if ( !(_DWORD)v8 )
      {
        if ( CEndpointResourceStateManager::FindResourceState(v8, *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL), this) )
          return (unsigned int)-1073741823;
        v21 = DXGQUOTAALLOCATOR<256,1935819590>::operator new();
        v15 = v21;
        if ( !v21 )
          return (unsigned int)-1073741801;
        v16 = this;
        *(_QWORD *)(v21 + 24) = *((_QWORD *)v2 + 1);
        v22 = *(_BYTE *)(v21 + 32) & 0xF1;
        *(_QWORD *)v15 = &CFlipResourceState::`vftable';
        *(_BYTE *)(v15 + 32) = v22 | 1;
        *(_QWORD *)(v15 + 16) = v15 + 8;
        *(_QWORD *)(v15 + 8) = v15 + 8;
        ++*(_DWORD *)(*(_QWORD *)(v15 + 24) + 24LL);
        v18 = &CPoolBufferResourceState::`vftable';
        goto LABEL_16;
      }
      v9 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v8 - 1);
      if ( !(_DWORD)v9 )
      {
        if ( CEndpointResourceStateManager::FindResourceState(v9, *(_QWORD *)(*((_QWORD *)v2 + 1) + 40LL), this + 1) )
          return (unsigned int)-1073741823;
        v13 = DXGQUOTAALLOCATOR<256,1936868166>::operator new();
        v15 = v13;
        if ( !v13 )
          return (unsigned int)-1073741801;
        v16 = this + 1;
        *(_QWORD *)(v13 + 24) = *((_QWORD *)v2 + 1);
        v17 = *(_BYTE *)(v13 + 32) & 0xF1;
        *(_QWORD *)v15 = &CFlipResourceState::`vftable';
        *(_BYTE *)(v15 + 32) = v17 | 1;
        *(_QWORD *)(v15 + 16) = v15 + 8;
        *(_QWORD *)(v15 + 8) = v15 + 8;
        ++*(_DWORD *)(*(_QWORD *)(v15 + 24) + 24LL);
        v18 = &CContentResourceState::`vftable';
        *(_BYTE *)(v15 + 64) &= 0xFCu;
        *(_QWORD *)(v15 + 40) = 0LL;
        *(_QWORD *)(v15 + 48) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
LABEL_16:
        *(_QWORD *)v15 = v18;
        CEndpointResourceStateManager::AddResourceState(v14, (struct CFlipResourceState *)v15, v16);
        goto LABEL_17;
      }
      if ( (_DWORD)v9 != 1 )
        return (unsigned int)-1073741823;
      v10 = CEndpointResourceStateManager::FindResourceState(v9, *((_QWORD *)v2 + 1), this + 1);
      v11 = v10;
      if ( !v10 )
        return (unsigned int)-1073741823;
      CContentResourceState::SetBoundBuffer(v10, *((struct CPoolBufferResource **)v2 + 2));
      CContentResourceState::SetBoundPropertySet(v11, *((struct CFlipPropertySet **)v2 + 3));
      *((_QWORD *)v11 + 7) = *((_QWORD *)v2 + 4);
      v12 = *(_QWORD *)(*((_QWORD *)v11 + 3) + 48LL);
      if ( v12 )
      {
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v12 + 48)) >= 0 )
        {
          CPresentRate::NotifyFrame((CPresentRate *)(v12 + 96));
          CPushLock::ReleaseLock((CPushLock *)(v12 + 48));
        }
      }
      v2 += 10;
    }
    else
    {
      v23 = CEndpointResourceStateManager::FindResourceState(v7, *((_QWORD *)v2 + 1), this + 1);
      if ( !v23 )
        return (unsigned int)-1073741823;
      CEndpointResourceStateManager::RemoveContentState(v24, v23);
LABEL_17:
      v2 += 4;
    }
  }
  return v3;
}
