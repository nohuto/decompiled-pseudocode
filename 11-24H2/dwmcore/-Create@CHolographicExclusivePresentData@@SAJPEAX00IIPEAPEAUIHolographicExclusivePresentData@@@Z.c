/*
 * XREFs of ?Create@CHolographicExclusivePresentData@@SAJPEAX00IIPEAPEAUIHolographicExclusivePresentData@@@Z @ 0x1802D695C
 * Callers:
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1802D22A0 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicExclusivePresentData::Create(
        void *a1,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct IHolographicExclusivePresentData **a6)
{
  unsigned int v7; // edi
  struct IHolographicExclusivePresentData *v11; // rax
  struct IHolographicExclusivePresentData *v12; // rbx

  v7 = 0;
  v11 = (struct IHolographicExclusivePresentData *)operator new(0x38uLL);
  v12 = v11;
  if ( v11 )
  {
    *((_DWORD *)v11 + 4) = 0;
    *((_DWORD *)v11 + 7) = a4;
    *(_QWORD *)v11 = &CHolographicExclusivePresentData::`vftable'{for `IHolographicExclusivePresentData'};
    *((_QWORD *)v11 + 1) = &CHolographicExclusivePresentData::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    *((_DWORD *)v11 + 6) = a5;
    *((_QWORD *)v11 + 4) = a3;
    *((_QWORD *)v11 + 5) = a1;
    *((_QWORD *)v11 + 6) = a2;
    (*(void (__fastcall **)(struct IHolographicExclusivePresentData *))(*(_QWORD *)v11 + 8LL))(v11);
    *a6 = v12;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x12u, 0LL);
  }
  return v7;
}
