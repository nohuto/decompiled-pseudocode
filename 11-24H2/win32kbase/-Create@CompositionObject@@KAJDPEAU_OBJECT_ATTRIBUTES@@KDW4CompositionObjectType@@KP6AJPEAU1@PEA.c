/*
 * XREFs of ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x140016284
 * Callers:
 *     DCompositionCreateSynchronizationObject @ 0x1402228F0 (DCompositionCreateSynchronizationObject.c)
 *     NtDCompositionCreateBufferCollection @ 0x140222DD0 (NtDCompositionCreateBufferCollection.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionObject::Create(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 (__fastcall *a7)(_QWORD, __int64, __int64),
        __int64 a8,
        void **Handle)
{
  NTSTATUS Object; // ebx

  if ( (unsigned int)(a5 - 1) <= 5 )
  {
    Object = ObCreateObject(0LL, ExCompositionObjectType, a2);
    if ( Object >= 0 )
    {
      MEMORY[0] = W32GetCurrentWin32kSessionId();
      Object = ZwAllocateLocallyUniqueId((PLUID)0x10);
      if ( Object < 0 || (Object = a7(0LL, a8, 8LL), Object < 0) )
        ObfDereferenceObject(0LL);
      else
        return (unsigned int)ObInsertObject(0LL, 0LL, a3, 0, 0LL, Handle);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Object;
}
