/*
 * XREFs of ??1GazeProcessor@@MEAA@XZ @ 0x1801B0B2C
 * Callers:
 *     ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1801B0CA0 (--_GGazeProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GazeProcessor::~GazeProcessor(GazeProcessor *this)
{
  __int64 *v2; // rbp
  __int64 v3; // rcx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  char *v7; // rcx
  char *v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  v2 = (__int64 *)((char *)this + 344);
  v3 = *((_QWORD *)this + 43);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v9 = 0LL;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7)
                                                                                          + 64LL))(*((_QWORD *)this + 7));
  v5 = **v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  if ( v5(v4, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v9) >= 0 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 32LL))(v9, (char *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v6 = *((_QWORD *)this + 44);
  **(_QWORD **)(v6 + 8) = 0LL;
  v7 = *(char **)v6;
  if ( v7 )
  {
    do
    {
      v8 = *(char **)v7;
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x18);
      v7 = v8;
    }
    while ( v8 );
  }
  std::_Deallocate<16,0>(*((char **)this + 44), (const struct std::nothrow_t *)0x18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 41);
  NonPointerProcessor::~NonPointerProcessor((GazeProcessor *)((char *)this + 24));
}
