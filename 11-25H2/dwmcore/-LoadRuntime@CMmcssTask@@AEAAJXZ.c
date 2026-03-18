/*
 * XREFs of ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800FE280
 * Callers:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800FEF74 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180266D88 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

__int64 __fastcall CMmcssTask::LoadRuntime(CMmcssTask *this)
{
  signed int v1; // ebx
  HMODULE LibraryW; // rax
  signed int v4; // eax
  unsigned int v5; // eax
  FARPROC ProcAddress; // rax
  FARPROC v8; // rax
  FARPROC v9; // rax
  signed int LastError; // eax
  signed int v11; // eax
  signed int v12; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 6) )
  {
    SetLastError(0);
    LibraryW = LoadLibraryW(L"avrt.dll");
    *((_QWORD *)this + 6) = LibraryW;
    if ( LibraryW )
    {
      SetLastError(0);
      ProcAddress = GetProcAddress(*((HMODULE *)this + 6), "AvRevertMmThreadCharacteristics");
      *((_QWORD *)this + 8) = ProcAddress;
      if ( ProcAddress )
      {
        SetLastError(0);
        v8 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadCharacteristicsW");
        *((_QWORD *)this + 7) = v8;
        if ( v8 )
        {
          SetLastError(0);
          v9 = GetProcAddress(*((HMODULE *)this + 6), "AvSetMmThreadPriority");
          *((_QWORD *)this + 9) = v9;
          if ( v9 )
            return (unsigned int)v1;
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          if ( v1 >= 0 )
            v1 = -2003304445;
          v5 = 337;
        }
        else
        {
          v12 = GetLastError();
          v1 = v12;
          if ( v12 > 0 )
            v1 = (unsigned __int16)v12 | 0x80070000;
          if ( v1 >= 0 )
            v1 = -2003304445;
          v5 = 335;
        }
      }
      else
      {
        v11 = GetLastError();
        v1 = v11;
        if ( v11 > 0 )
          v1 = (unsigned __int16)v11 | 0x80070000;
        if ( v1 >= 0 )
          v1 = -2003304445;
        v5 = 333;
      }
    }
    else
    {
      v4 = GetLastError();
      v1 = v4;
      if ( v4 > 0 )
        v1 = (unsigned __int16)v4 | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      v5 = 330;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, v5, 0LL);
    CMmcssTask::UnloadRuntime(this);
  }
  return (unsigned int)v1;
}
