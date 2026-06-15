/*
 * XREFs of ?TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F2B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCustomAudioEndpointResourceManagerCache::TryGetResourceManagerService(
        CCustomAudioEndpointResourceManagerCache *this,
        struct CEndpointCharacteristics *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // xmm0_8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v5 = *(_QWORD *)((char *)a2 + 8252);
  v7 = v5 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v8 = *(_QWORD *)((char *)a2 + 8260);
  if ( v5 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v7 = v8 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v7 )
  {
    v9 = v5 - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
    if ( v5 == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
      v9 = v8 + 0x12C28937D3A30176LL;
    if ( v9 )
    {
      v10 = v5 - BLUETOOTHLE_AUDIO_RESOURCE_MANAGER;
      if ( !v10 )
        v10 = v8 + 0x54DCF32F8E93AD5ALL;
      if ( v10 )
      {
        v11 = -2147418113;
        v12 = 254LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
          (const char *)(unsigned int)v11);
        return (unsigned int)v11;
      }
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct CEndpointCharacteristics *, const struct _GUID *))(**((_QWORD **)this + 2) + 24LL))(
            *((_QWORD *)this + 2),
            a2,
            a3);
    if ( v11 < 0 )
    {
      v12 = 255LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
