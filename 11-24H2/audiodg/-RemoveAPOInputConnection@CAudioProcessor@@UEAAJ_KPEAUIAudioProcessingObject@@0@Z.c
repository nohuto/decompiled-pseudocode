/*
 * XREFs of ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400094D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x140008F8C (-FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABEC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000B170 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4D0 (memmove_s.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioProcessor::RemoveAPOInputConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioProcessingObject *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  struct CConnectionNode *ConnectionInObjectCache; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 i; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  errno_t v22; // eax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  errno_t v25; // eax
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-30h]
  int v28; // [rsp+20h] [rbp-30h]
  _QWORD *v29; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v30; // [rsp+38h] [rbp-18h] BYREF
  char v31; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp+40h] BYREF

  if ( !a3 )
  {
    v9 = -2147467261;
    v8 = 2491LL;
    goto LABEL_5;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2492LL;
LABEL_4:
    v9 = -2147024890;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v27);
    return v9;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2493LL;
    goto LABEL_4;
  }
  v30 = (LPCRITICAL_SECTION)((char *)this + 88);
  v31 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v30);
  v11 = *((_QWORD *)this + 96);
  if ( !v11 )
  {
    v9 = -2147024890;
    v26 = 1908LL;
    goto LABEL_48;
  }
  if ( a2 != *(_QWORD *)(v11 + 16) )
  {
    v9 = -2147024890;
    v26 = 1911LL;
    goto LABEL_48;
  }
  if ( *((_BYTE *)this + 777) )
  {
    v9 = -2005139407;
    v26 = 1914LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v27);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C2,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v28);
LABEL_49:
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v30);
    return v9;
  }
  if ( *((_BYTE *)this + 778) )
  {
    v9 = -2005139406;
    v26 = 1915LL;
    goto LABEL_48;
  }
  v29 = 0LL;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD **, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
    *((_QWORD *)this + 99),
    &lpCriticalSection,
    &v29,
    0LL);
  v12 = (_QWORD *)*v29;
  do
  {
    if ( !v12 )
      goto LABEL_16;
    v13 = v12[2];
    v12 = (_QWORD *)*v12;
  }
  while ( *(struct IAudioProcessingObject **)v13 != a3 );
  if ( !v13 )
  {
LABEL_16:
    v14 = (_QWORD *)*((_QWORD *)this + 22);
    while ( v14 )
    {
      v13 = v14[2];
      v14 = (_QWORD *)*v14;
      if ( *(struct IAudioProcessingObject **)v13 == a3 )
      {
        if ( v13 )
          goto LABEL_25;
        break;
      }
    }
    v9 = -2005139430;
    v15 = 2511LL;
    goto LABEL_21;
  }
LABEL_25:
  ConnectionInObjectCache = CAudioProcessor::FindConnectionInObjectCache(this, a4);
  if ( !ConnectionInObjectCache )
  {
    v9 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D2,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C001ALL,
      v27);
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    goto LABEL_49;
  }
  v17 = *(_QWORD *)(v13 + 128);
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v17 )
    {
      v9 = -2005139430;
      v15 = 2518LL;
      goto LABEL_21;
    }
    v19 = *(_QWORD *)(v13 + 120);
    if ( *(struct CConnectionNode **)(v19 + 8 * i) == ConnectionInObjectCache )
      break;
  }
  v20 = i + 1;
  if ( i + 1 > v17 || i == -1LL || v20 < i )
    goto LABEL_44;
  v21 = v17 - v20;
  if ( v21 )
  {
    v22 = memmove_s((void *const)(v19 + 8 * i), 8 * v21, (const void *const)(v19 + 8 * v20), 8 * v21);
    ATL::AtlCrtErrorCheck(v22);
  }
  --*(_QWORD *)(v13 + 128);
  v23 = *(_QWORD *)(v13 + 256);
  if ( v20 > v23 )
LABEL_44:
    ATL::AtlThrowImpl(-2147024809);
  v24 = v23 - v20;
  if ( v24 )
  {
    v25 = memmove_s(
            (void *const)(*(_QWORD *)(v13 + 248) + 8 * i),
            8 * v24,
            (const void *const)(*(_QWORD *)(v13 + 248) + 8 * v20),
            8 * v24);
    ATL::AtlCrtErrorCheck(v25);
  }
  --*(_QWORD *)(v13 + 256);
  --*((_DWORD *)ConnectionInObjectCache + 3);
  v9 = CAudioProcessor::EvaluateConnectionOwnership(this, ConnectionInObjectCache);
  if ( (v9 & 0x80000000) != 0 )
  {
    v15 = 2525LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v27);
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    if ( v31 )
      LeaveCriticalSection(v30);
    return v9;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v31 )
    LeaveCriticalSection(v30);
  return 0LL;
}
