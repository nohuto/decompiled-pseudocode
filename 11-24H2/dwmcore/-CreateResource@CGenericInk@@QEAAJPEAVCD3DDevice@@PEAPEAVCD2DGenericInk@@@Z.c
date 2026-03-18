/*
 * XREFs of ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801A05C8
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801A2290 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801A0754 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x1801A14B0 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::CreateResource(CGenericInk *this, struct CD3DDevice *a2, struct CD2DGenericInk **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct CD2DGenericInk *v8; // rbx
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  struct CMILPoolResource *v15; // [rsp+68h] [rbp+10h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v6 = CD2DContext::CreateGenericInk((struct CD3DDevice *)((char *)a2 + 16), &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1D9u, 0LL);
    v8 = v15;
  }
  else
  {
    v8 = v15;
    v9 = *((_QWORD *)v15 + 9);
    if ( *((_DWORD *)this + 58)
      && (v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 40LL))(
                  *((_QWORD *)v15 + 9),
                  *((_QWORD *)this + 26)),
          v7 = v10,
          v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1E0u, 0LL);
    }
    else
    {
      v11 = *((_DWORD *)this + 66);
      if ( v11
        && (v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v9 + 48LL))(
                    v9,
                    0LL,
                    *((_QWORD *)this + 30),
                    v11 / *((_DWORD *)this + 68),
                    *((_DWORD *)this + 69),
                    *((_DWORD *)this + 68),
                    0LL),
            v7 = v12,
            v12 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1EDu, 0LL);
      }
      else
      {
        v13 = CGenericInk::SetContextMsgRoutingInfo(this, a2);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1F0u, 0LL);
        }
        else
        {
          *a3 = v8;
          v8 = 0LL;
          (*(void (__fastcall **)(CGenericInk *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
        }
      }
    }
  }
  if ( v8 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v8);
  return v7;
}
