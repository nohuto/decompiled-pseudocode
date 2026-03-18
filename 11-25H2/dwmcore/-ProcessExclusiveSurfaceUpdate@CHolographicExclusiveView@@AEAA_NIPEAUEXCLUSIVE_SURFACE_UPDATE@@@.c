/*
 * XREFs of ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1802DB324
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802DDB60 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1802DAFDC (-CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802DB1D0 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 */

char __fastcall CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(
        CHolographicExclusiveView *this,
        unsigned int a2,
        struct EXCLUSIVE_SURFACE_UPDATE *a3)
{
  char v6; // bl
  int AnalogExclusiveSurfaceUpdates; // eax
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  int v12; // edx
  __int16 v13; // cx
  int v14; // [rsp+30h] [rbp-1B8h] BYREF
  _DWORD v15[3]; // [rsp+34h] [rbp-1B4h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-198h]
  unsigned int v18; // [rsp+58h] [rbp-190h]
  int v19; // [rsp+5Ch] [rbp-18Ch]
  int v20; // [rsp+1A8h] [rbp-40h]

  memset_0(v16, 0, 0x178uLL);
  v6 = 0;
  v14 = 0;
  v15[0] = 0;
  if ( !*((_BYTE *)this + 89) )
    return 0;
  AnalogExclusiveSurfaceUpdates = NtTokenManagerGetAnalogExclusiveSurfaceUpdates(a2, v16, 1LL, &v14, v15);
  if ( AnalogExclusiveSurfaceUpdates >= 0 )
  {
    if ( v14 )
    {
      if ( v17 == *((_QWORD *)this + 18)
        || (*((_QWORD *)this + 18) = v17,
            CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this),
            v9 = CHolographicExclusiveView::OpenSurfaceHandles(this),
            v9 >= 0) )
      {
        v10 = v19;
        v11 = v18;
        *((_DWORD *)this + 30) = v19;
        *(_QWORD *)a3 = *((_QWORD *)this + v11 + 21);
        if ( v10 )
          v12 = v10 - 1;
        else
          v12 = 0;
        v13 = v20;
        *((_DWORD *)a3 + 2) = v12;
        *((_DWORD *)a3 + 3) = *((_DWORD *)this + 21);
        *((_BYTE *)a3 + 18) = 0;
        *((_BYTE *)a3 + 16) = (v13 & 2) != 0;
        v6 = 1;
        *((_BYTE *)a3 + 17) = v13 & 1;
        *((_BYTE *)a3 + 19) = (v13 & 0x100) == 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1D8u, 0LL);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AnalogExclusiveSurfaceUpdates | 0x10000000, 0x1CEu, 0LL);
  }
  return v6;
}
