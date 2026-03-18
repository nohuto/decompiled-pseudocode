/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18010010C
 * Callers:
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180100010 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x180229CBC (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSurfaceManager::ResetTokenThread(CSurfaceManager *this)
{
  signed int v2; // edi
  char *v3; // rcx
  DWORD ThreadId; // ebx
  signed int LastError; // eax

  v2 = 0;
  v3 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    ThreadId = GetThreadId(v3);
    if ( GetCurrentThreadId() != ThreadId )
    {
      if ( *((_BYTE *)this + 144) )
      {
        return (unsigned int)-2147467260;
      }
      else
      {
        SetLastError(0);
        if ( !SetEvent(*((HANDLE *)this + 16)) )
        {
          LastError = GetLastError();
          v2 = LastError;
          if ( LastError > 0 )
            v2 = (unsigned __int16)LastError | 0x80070000;
          if ( v2 >= 0 )
            v2 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x61u, 0LL);
        }
      }
    }
  }
  return (unsigned int)v2;
}
