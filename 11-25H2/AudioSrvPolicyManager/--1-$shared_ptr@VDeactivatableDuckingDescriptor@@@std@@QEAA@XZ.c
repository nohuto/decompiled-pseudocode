/*
 * XREFs of ??1?$shared_ptr@VDeactivatableDuckingDescriptor@@@std@@QEAA@XZ @ 0x1800177D4
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$7 @ 0x18004B9C0 (_QueueGenericWorkItem_--_1_--dtor$7.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$1 @ 0x18004BCF4 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$1 @ 0x18004BF90 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::shared_ptr<DeactivatableDuckingDescriptor>::~shared_ptr<DeactivatableDuckingDescriptor>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
