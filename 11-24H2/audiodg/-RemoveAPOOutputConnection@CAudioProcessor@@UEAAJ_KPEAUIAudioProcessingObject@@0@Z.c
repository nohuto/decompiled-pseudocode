/*
 * XREFs of ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A7D0
 * Callers:
 *     <none>
 * Callees:
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
__int64 __fastcall CAudioProcessor::RemoveAPOOutputConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioProcessingObject *a3,
        __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  _QWORD *v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  unsigned __int64 i; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  errno_t v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  errno_t v22; // eax
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rbx
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-40h]
  int v29; // [rsp+20h] [rbp-40h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v31; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v33; // [rsp+48h] [rbp-18h] BYREF
  char v34; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  LPCRITICAL_SECTION v36; // [rsp+A0h] [rbp+40h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA80,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL,
      v28);
    return 2147942487LL;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2689LL;
LABEL_4:
    v9 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL,
      v28);
    return v9;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2690LL;
    goto LABEL_4;
  }
  v33 = (LPCRITICAL_SECTION)((char *)this + 88);
  v34 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v33);
  v23 = *((_QWORD *)this + 96);
  if ( !v23 )
  {
    v9 = -2147024890;
    v27 = 1908LL;
    goto LABEL_56;
  }
  if ( a2 != *(_QWORD *)(v23 + 16) )
  {
    v9 = -2147024890;
    v27 = 1911LL;
    goto LABEL_56;
  }
  if ( *((_BYTE *)this + 777) )
  {
    v9 = -2005139407;
    v27 = 1914LL;
    goto LABEL_56;
  }
  if ( *((_BYTE *)this + 778) )
  {
    v9 = -2005139406;
    v27 = 1915LL;
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v28);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA87,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v29);
LABEL_57:
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v33);
    return v9;
  }
  v31 = 0LL;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD **, _QWORD))(**((_QWORD **)this + 99) + 24LL))(
    *((_QWORD *)this + 99),
    &v36,
    &v31,
    0LL);
  v24 = (_QWORD *)*v31;
  do
  {
    if ( !v24 )
      goto LABEL_51;
    v25 = v24[2];
    v24 = (_QWORD *)*v24;
  }
  while ( *(struct IAudioProcessingObject **)v25 != a3 );
  if ( !v25 )
  {
LABEL_51:
    v26 = (_QWORD *)*((_QWORD *)this + 22);
    do
    {
      if ( !v26 )
        goto LABEL_16;
      v25 = v26[2];
      v26 = (_QWORD *)*v26;
    }
    while ( *(struct IAudioProcessingObject **)v25 != a3 );
    if ( !v25 )
    {
LABEL_16:
      v9 = -2005139430;
      v15 = 2708LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)v9,
        v28);
      if ( v36 )
      {
        LeaveCriticalSection(v36);
        v36 = 0LL;
      }
      if ( v34 )
        LeaveCriticalSection(v33);
      return v9;
    }
  }
  v32 = 0LL;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD, _QWORD **))(**((_QWORD **)this + 99) + 24LL))(
    *((_QWORD *)this + 99),
    &lpCriticalSection,
    0LL,
    &v32);
  v11 = (_QWORD *)*v32;
  do
  {
    if ( !v11 )
    {
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_40;
    }
    v12 = v11[2];
    v11 = (_QWORD *)*v11;
  }
  while ( *(_QWORD *)(v12 + 16) != a4 );
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  if ( !v12 )
  {
LABEL_40:
    v9 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA97,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C001ALL,
      v28);
    if ( v36 )
    {
      LeaveCriticalSection(v36);
      v36 = 0LL;
    }
    goto LABEL_57;
  }
  v13 = *(_QWORD *)(v25 + 160);
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v13 )
    {
      v9 = -2005139430;
      v15 = 2715LL;
      goto LABEL_17;
    }
    v16 = *(_QWORD *)(v25 + 152);
    if ( *(_QWORD *)(v16 + 8 * i) == v12 )
      break;
  }
  v17 = i + 1;
  if ( i + 1 > v13 || i == -1LL || v17 < i )
    goto LABEL_36;
  v18 = v13 - v17;
  if ( v18 )
  {
    v19 = memmove_s((void *const)(v16 + 8 * i), 8 * v18, (const void *const)(v16 + 8 * v17), 8 * v18);
    ATL::AtlCrtErrorCheck(v19);
  }
  --*(_QWORD *)(v25 + 160);
  v20 = *(_QWORD *)(v25 + 288);
  if ( v17 > v20 )
LABEL_36:
    ATL::AtlThrowImpl(-2147024809);
  v21 = v20 - v17;
  if ( v21 )
  {
    v22 = memmove_s(
            (void *const)(*(_QWORD *)(v25 + 280) + 8 * i),
            8 * v21,
            (const void *const)(*(_QWORD *)(v25 + 280) + 8 * v17),
            8 * v21);
    ATL::AtlCrtErrorCheck(v22);
  }
  --*(_QWORD *)(v25 + 288);
  --*(_DWORD *)(v12 + 12);
  v9 = CAudioProcessor::EvaluateConnectionOwnership(this, (struct CConnectionNode *)v12);
  if ( (v9 & 0x80000000) != 0 )
  {
    v15 = 2722LL;
    goto LABEL_17;
  }
  if ( v36 )
    LeaveCriticalSection(v36);
  if ( v34 )
    LeaveCriticalSection(v33);
  return 0LL;
}
