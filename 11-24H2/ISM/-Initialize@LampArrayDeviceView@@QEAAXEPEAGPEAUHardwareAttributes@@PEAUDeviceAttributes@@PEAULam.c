/*
 * XREFs of ?Initialize@LampArrayDeviceView@@QEAAXEPEAGPEAUHardwareAttributes@@PEAUDeviceAttributes@@PEAULampAttributes@@PEAI@Z @ 0x1800EA698
 * Callers:
 *     ?CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@EPEAPEAULampArrayDeviceView@@@Z @ 0x1800E9C28 (-CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@EPEAPEAULampArrayDeviceView@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LampArrayDeviceView::Initialize(
        LampArrayDeviceView *this,
        unsigned __int8 a2,
        unsigned __int16 *a3,
        struct HardwareAttributes *a4,
        struct DeviceAttributes *a5,
        struct LampAttributes *a6,
        unsigned int *a7)
{
  int v10; // r8d
  struct LampAttributes *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  __int128 v14; // xmm0
  unsigned int v15; // eax
  __int64 v16; // rdx

  *(_DWORD *)this = a2;
  _o_wcscpy_s((char *)this + 4, 257LL, a3);
  v10 = 0;
  *(_DWORD *)((char *)this + 518) = *(_DWORD *)a4;
  *((_WORD *)this + 261) = *((_WORD *)a4 + 2);
  *(_OWORD *)((char *)this + 524) = *(_OWORD *)a5;
  *(_QWORD *)((char *)this + 540) = *((_QWORD *)a5 + 2);
  _InterlockedExchange((volatile __int32 *)this + 1024, 0);
  _InterlockedExchange((volatile __int32 *)this + 1025, 0);
  _InterlockedExchange((volatile __int32 *)this + 1046, 0);
  _InterlockedExchange((volatile __int32 *)this + 1047, 0);
  _InterlockedExchange((volatile __int32 *)this + 1050, 0);
  _InterlockedExchange((volatile __int32 *)this + 1051, 0);
  if ( a2 == 1 && *((int *)this + 135) >= 12 )
    *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 4112) = 0;
  *((_DWORD *)this + 1026) = 0;
  _InterlockedExchange((volatile __int32 *)this + 1027, 0);
  *((_BYTE *)this + 4113) = 0;
  *(_OWORD *)((char *)this + 4114) = 0LL;
  *(_OWORD *)((char *)this + 4130) = 0LL;
  *(_OWORD *)((char *)this + 4146) = 0LL;
  *(_QWORD *)((char *)this + 4162) = 0LL;
  *(_DWORD *)((char *)this + 4170) = 0;
  *((_WORD *)this + 2087) = 0;
  *((_BYTE *)this + 4176) = 0;
  *((_QWORD *)this + 524) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 1045) = -2147418113;
  if ( *(int *)a5 > 0 )
  {
    v11 = a6;
    v12 = this - a6;
    v13 = 0LL;
    do
    {
      v14 = *(_OWORD *)v11;
      ++v10;
      v11 = (struct LampAttributes *)((char *)v11 + 36);
      *(_OWORD *)((char *)v11 + v12 + 5188) = v14;
      *(_OWORD *)((char *)v11 + v12 + 5204) = *(_OWORD *)((char *)v11 - 20);
      *(_DWORD *)((char *)v11 + v12 + 5220) = *((_DWORD *)v11 - 1);
      v15 = a7[v13];
      v16 = v13 + 10LL * *((int *)this + 131);
      ++v13;
      *((_DWORD *)this + v16 + 1306) = v15;
    }
    while ( v10 < *(_DWORD *)a5 );
  }
}
