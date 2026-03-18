/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x1400DB0BC
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1400A7608 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1400AB234 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall SleepstudyHelper_RegisterComponentEx(
        SS_LIBRARY__ *InitializeHandle,
        _GUID *ParentGuid,
        _GUID *ComponentGuid,
        _UNICODE_STRING *FriendlyName,
        SS_COMPONENT__ **Handle)
{
  _GUID v9; // xmm1
  int result; // eax
  _GUID v11; // xmm1
  _GUID v12; // [rsp+30h] [rbp-38h] BYREF
  _GUID v13; // [rsp+40h] [rbp-28h] BYREF

  if ( Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( SleepstudyHelperRoutineBlock.RegisterComponentEx )
    {
      v9 = *ParentGuid;
      v12 = *ComponentGuid;
      v13 = v9;
      return ((int (__fastcall *)(SS_LIBRARY__ *, _GUID *__struct_ptr, _GUID *__struct_ptr, _UNICODE_STRING *, SS_COMPONENT__ **))SleepstudyHelperRoutineBlock.RegisterComponentEx)(
               InitializeHandle,
               &v13,
               &v12,
               FriendlyName,
               Handle);
    }
    else
    {
      return -1073741637;
    }
  }
  else if ( InitializeHandle == (SS_LIBRARY__ *)&SleepstudyHelperUnsupportedHandle
         || (!SleepstudyHelperRoutineBlock.RegisterComponentEx
           ? (result = -1073741637)
           : (v11 = *ParentGuid,
              v13 = *ComponentGuid,
              v12 = v11,
              result = ((int (__fastcall *)(SS_LIBRARY__ *, _GUID *__struct_ptr, _GUID *__struct_ptr, _UNICODE_STRING *, SS_COMPONENT__ **))SleepstudyHelperRoutineBlock.RegisterComponentEx)(
                         InitializeHandle,
                         &v12,
                         &v13,
                         FriendlyName,
                         Handle)),
             result == -1073741637) )
  {
    *Handle = (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle;
    return 0;
  }
  return result;
}
