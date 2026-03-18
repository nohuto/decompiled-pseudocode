/*
 * XREFs of ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140058F38
 * Callers:
 *     ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1400970B8 (-MoveContexts@FxObject@@QEAAJPEAV1@@Z.c)
 *     VfAddContextToHandle @ 0x1400E2070 (VfAddContextToHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::AddContext(
        FxObject *this,
        FxContextHeader *Header,
        void **Context,
        _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  __int64 m_ObjectSize; // rax
  unsigned int v5; // ebx
  char *v10; // rdi
  KIRQL v11; // dl
  volatile __int64 *v12; // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rax

  m_ObjectSize = this->m_ObjectSize;
  v5 = 0;
  v10 = 0LL;
  if ( (_WORD)m_ObjectSize )
    v10 = (char *)this + m_ObjectSize;
  v11 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 && v10 )
  {
    v12 = (volatile __int64 *)(v10 + 8);
    while ( 1 )
    {
      if ( !v10 )
      {
        _InterlockedExchange64(v12, (__int64)Header);
        if ( Context )
          *Context = Header->Context;
        if ( Attributes )
        {
          Header->EvtDestroyCallback = Attributes->EvtDestroyCallback;
          EvtCleanupCallback = Attributes->EvtCleanupCallback;
          if ( !EvtCleanupCallback )
            goto LABEL_13;
          Header->EvtCleanupCallback = EvtCleanupCallback;
        }
        else if ( !Header->EvtCleanupCallback )
        {
          goto LABEL_13;
        }
        this->m_ObjectFlags |= 0x400u;
        goto LABEL_13;
      }
      if ( (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)*((_QWORD *)v10 + 4) == Header->ContextTypeInfo )
        break;
      v12 = (volatile __int64 *)(v10 + 8);
      v10 = (char *)*((_QWORD *)v10 + 1);
    }
    if ( Context )
      *Context = v10 + 48;
    v5 = 0x40000000;
  }
  else
  {
    v5 = -1073741738;
  }
LABEL_13:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v11);
  return v5;
}
