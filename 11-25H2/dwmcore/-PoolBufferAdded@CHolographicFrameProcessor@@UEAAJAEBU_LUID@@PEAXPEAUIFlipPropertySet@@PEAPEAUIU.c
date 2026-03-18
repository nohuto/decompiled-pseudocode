/*
 * XREFs of ?PoolBufferAdded@CHolographicFrameProcessor@@UEAAJAEBU_LUID@@PEAXPEAUIFlipPropertySet@@PEAPEAUIUnknown@@@Z @ 0x1802DF8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicFrameProcessor::PoolBufferAdded(
        CHolographicFrameProcessor *this,
        const struct _LUID *a2,
        void *a3,
        struct IFlipPropertySet *a4,
        struct IUnknown **a5)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
  v13 = 0LL;
  v8 = **v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v9 = v8(v5, &GUID_77db970f_6276_48ba_ba28_070143b4392c, &v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xBAu, 0LL);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, GUID *, struct IUnknown **))(**((_QWORD **)this + 8) + 384LL))(
            *((_QWORD *)this + 8),
            a3,
            &GUID_00000000_0000_0000_c000_000000000046,
            a5);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xBBu, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v10;
}
