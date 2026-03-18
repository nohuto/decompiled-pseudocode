/*
 * XREFs of ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x14021A944
 * Callers:
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x14020E204 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217880 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1402207AC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x140221370 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendPTPInertiaInput(
        IVRootDeliver::Pointer *this,
        void *a2,
        int a3,
        const struct CONTAINER_ID *a4)
{
  void *v4; // rdi
  __int64 UserSessionState; // rax
  __int64 result; // rax
  struct _UNICODE_STRING v11; // xmm6
  int v12; // ebx
  struct _UNICODE_STRING *v13; // rsi
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING *v16; // [rsp+40h] [rbp-30h]

  v4 = 0LL;
  *(_QWORD *)&v14.Length = 0LL;
  UserSessionState = W32GetUserSessionState(this);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 16840) + 1272LL)) )
    return 0LL;
  v11 = 0LL;
  if ( this )
  {
    result = RawInputManagerDeviceObjectResolveHandle((char *)this, 3u, a3 == 0, (PVOID *)&v14);
    if ( (int)result < 0 )
      return result;
    v4 = *(void **)&v14.Length;
    v11 = *(struct _UNICODE_STRING *)(*(_QWORD *)&v14.Length + 264LL);
  }
  CIVSerializer::CIVSerializer((__int64)v15, 8);
  v15[0] = &CIVGenericSerializer::`vftable';
  if ( v16 )
  {
    v14 = v11;
    v12 = CIVSerializer::Serialize((CIVSerializer *)v15, v16, &v14, 1);
    if ( v12 >= 0 )
    {
      v12 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v15);
      if ( v12 >= 0 )
      {
        v13 = v16;
        v14 = v11;
        v12 = CIVSerializer::Serialize((CIVSerializer *)v15, v16, &v14, 0);
        if ( v12 >= 0 )
        {
          *(_QWORD *)&v13[1].Length = a2;
          v12 = ivrIVSend((const struct CIVSerializer *)v15, 2u, a4);
        }
      }
    }
  }
  else
  {
    v12 = -1073741801;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  v15[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v15);
  return (unsigned int)v12;
}
