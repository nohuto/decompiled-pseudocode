/*
 * XREFs of ?Initialize@CMit@@IEAAJXZ @ 0x18022F01C
 * Callers:
 *     ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180254910 (-Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMit::Initialize(CMit *this)
{
  int v2; // eax
  signed int v3; // ebx
  HANDLE EventW; // rax
  signed int LastError; // eax

  v2 = (*(__int64 (__fastcall **)(CMit *))(*(_QWORD *)this + 24LL))(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x42u, 0LL);
  }
  else
  {
    SetLastError(0);
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    *((_QWORD *)this + 3) = EventW;
    if ( !EventW )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x48u, 0LL);
    }
  }
  return (unsigned int)v3;
}
