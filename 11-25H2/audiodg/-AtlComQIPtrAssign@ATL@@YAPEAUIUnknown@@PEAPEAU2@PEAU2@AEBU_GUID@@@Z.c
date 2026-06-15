/*
 * XREFs of ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140037B9C
 * Callers:
 *     ?Initialize@CAudioProcessor@@UEAAJW4AUDIO_FLOW_TYPE@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140037B00 (-Initialize@CAudioProcessor@@UEAAJW4AUDIO_FLOW_TYPE@@PEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14004DC24 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall ATL::AtlComQIPtrAssign(struct IUnknown **a1, struct IUnknown *a2, const struct _GUID *a3)
{
  struct IUnknown *v3; // r9
  __int64 v5; // rdi

  v3 = a2;
  if ( !a1 )
    return 0LL;
  v5 = (__int64)*a1;
  *a1 = 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *, const struct _GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
      a2,
      a3,
      a1);
  if ( v5 )
    (*(void (__fastcall **)(__int64, struct IUnknown *, const struct _GUID *, struct IUnknown *))(*(_QWORD *)v5 + 16LL))(
      v5,
      a2,
      a3,
      v3);
  return *a1;
}
