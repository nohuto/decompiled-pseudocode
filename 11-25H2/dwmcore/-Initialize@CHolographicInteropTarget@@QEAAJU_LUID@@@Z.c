/*
 * XREFs of ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x1802D9684
 * Callers:
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802D9270 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180040744 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180282028 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Initialize(CHolographicInteropTarget *this, struct _LUID a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 i; // rbx
  HANDLE Event; // rax
  HANDLE v9; // rax
  bool v10; // zf
  int Device; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  *((struct _LUID *)this + 24) = a2;
  *((_DWORD *)this + 56) = -6;
  *((_DWORD *)this + 57) = -6;
  v3 = *((_QWORD *)this + 3);
  *((struct _LUID *)this + 26) = a2;
  *((struct _LUID *)this + 27) = a2;
  *((_DWORD *)this + 58) = (_DWORD)this;
  v4 = *(_QWORD *)(v3 + 664);
  *((_QWORD *)this + 23) = v4;
  if ( !v4 )
  {
    v5 = -2147418113;
    v6 = -2147418113;
    v13 = 74;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v13, 0LL);
    return v5;
  }
  *((_DWORD *)this + 62) = 87;
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)this + i + 34) = Event;
    if ( !Event )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x52u, 0LL);
      return v5;
    }
    v9 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
    v10 = *((_QWORD *)this + i + 34) == 0LL;
    *((_QWORD *)this + i + 35) = v9;
    if ( v10 )
    {
      v6 = -2147024882;
      v5 = -2147024882;
      v13 = 84;
      goto LABEL_12;
    }
  }
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease((CD3DDevice **)this + 25);
  Device = CDeviceManager::GetDevice(
             (CDeviceManager *)&g_DeviceManager,
             *(struct _LUID *)((char *)this + 192),
             (struct CD3DDevice **)this + 25);
  v5 = Device;
  if ( Device < 0 )
  {
    v6 = Device;
    v13 = 87;
    goto LABEL_12;
  }
  return v5;
}
