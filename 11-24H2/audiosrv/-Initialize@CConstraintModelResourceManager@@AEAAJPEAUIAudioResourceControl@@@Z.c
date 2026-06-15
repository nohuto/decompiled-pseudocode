/*
 * XREFs of ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x1800EDB0C
 * Callers:
 *     ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x1800EC4D8 (-Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ?SetupKeywordDetectorPriority@CConstraintModelResourceManager@@AEAAJXZ @ 0x1800EF69C (-SetupKeywordDetectorPriority@CConstraintModelResourceManager@@AEAAJXZ.c)
 *     ??0CConstraintModel@@QEAA@XZ @ 0x18015FE24 (--0CConstraintModel@@QEAA@XZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18016151C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 */

__int64 __fastcall CConstraintModelResourceManager::Initialize(
        CConstraintModelResourceManager *this,
        struct IAudioResourceControl *a2)
{
  signed int v2; // r8d
  __int64 v3; // rax
  char *EventW; // rax
  signed int LastError; // eax
  HANDLE v7; // rax
  signed int v8; // eax
  CConstraintModel *v9; // rax
  CConstraintModel *v10; // rax
  struct _TP_WAIT *ThreadpoolWait; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 8) + 1LL;
  *((_QWORD *)this + 21) = a2;
  if ( (v3 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 8) = EventW;
    if ( (unsigned __int64)(EventW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
    }
    else
    {
      v2 = 0;
    }
  }
  if ( ((*((_QWORD *)this + 23) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 23) = v7;
    if ( (((unsigned __int64)v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_11;
    v8 = GetLastError();
    v2 = v8;
    if ( v8 > 0 )
      v2 = (unsigned __int16)v8 | 0x80070000;
  }
  if ( v2 < 0 )
    return (unsigned int)v2;
LABEL_11:
  v9 = (CConstraintModel *)operator new(0xF0uLL);
  if ( !v9 )
  {
    *((_QWORD *)this + 7) = 0LL;
    return (unsigned int)-2147024882;
  }
  v10 = CConstraintModel::CConstraintModel(v9);
  *((_QWORD *)this + 7) = v10;
  if ( !v10 )
    return (unsigned int)-2147024882;
  v2 = CConstraintModel::Initialize(v10);
  if ( v2 >= 0 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       (PTP_WAIT_CALLBACK)CConstraintModelResourceManager::s_WorkerThreadProc,
                       this,
                       0LL);
    *((_QWORD *)this + 22) = ThreadpoolWait;
    v2 = ThreadpoolWait == 0LL ? 0x8007000E : 0;
    if ( ThreadpoolWait )
    {
      SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)this + 23), 0LL);
      *((_QWORD *)this + 9) = CreateMutexW(0LL, 0, L"Global\\AudioResourceAcquisitionMutex");
      return (unsigned int)CConstraintModelResourceManager::SetupKeywordDetectorPriority(this);
    }
  }
  return (unsigned int)v2;
}
