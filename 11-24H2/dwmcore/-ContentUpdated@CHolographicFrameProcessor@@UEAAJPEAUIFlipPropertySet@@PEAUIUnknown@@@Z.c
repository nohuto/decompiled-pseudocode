/*
 * XREFs of ?ContentUpdated@CHolographicFrameProcessor@@UEAAJPEAUIFlipPropertySet@@PEAUIUnknown@@@Z @ 0x1802D5EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicFrameProcessor::ContentUpdated(
        CHolographicFrameProcessor *this,
        struct IFlipPropertySet *a2,
        struct IUnknown *a3)
{
  unsigned int v3; // ebx
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    lpVtbl = a3->lpVtbl;
    v14 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a3,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v14);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xCBu, 0LL);
    }
    else
    {
      v8 = *((_QWORD *)this + 3);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, v14);
      v9 = *((_QWORD *)this + 9);
      v10 = *((_QWORD *)this + 13);
      ++*((_QWORD *)this + 14);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 1176LL))(v9, v10);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xD4u, 0LL);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct IUnknown *))(**((_QWORD **)this + 12) + 48LL))(
                *((_QWORD *)this + 12),
                *((_QWORD *)this + 13),
                *((_QWORD *)this + 14),
                a3);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xD5u, 0LL);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  }
  return v3;
}
