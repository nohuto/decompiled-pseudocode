/*
 * XREFs of ?Start@CMit@@QEAAJXZ @ 0x18022281C
 * Callers:
 *     ?Reset@CMit@@QEAAJXZ @ 0x18022C9A8 (-Reset@CMit@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMit::Start(HANDLE *this)
{
  unsigned int v2; // ebx
  HANDLE v3; // rax
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 32) )
  {
    v2 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180395AE8, 2u, -2147467260, 0x61u, 0LL);
  }
  else
  {
    ThreadId = 0;
    v3 = CreateThread(0LL, 0LL, CMit::RunInputThreadStatic, this, 4u, &ThreadId);
    this[2] = v3;
    if ( v3 )
    {
      SetThreadDescription(v3, L"DWM Master Input Thread");
      SetThreadPriority(this[2], 16);
      ResumeThread(this[2]);
      return 0;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180395AE8, 2u, -2147024882, 0x73u, 0LL);
    }
  }
  return v2;
}
