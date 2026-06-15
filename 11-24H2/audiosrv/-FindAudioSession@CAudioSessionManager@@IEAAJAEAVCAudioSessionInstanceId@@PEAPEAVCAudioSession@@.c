/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180013760
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     AudioSessionManagerGetExistingSession @ 0x18007A240 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014D00 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014E40 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SS @ 0x1800C51D0 (WPP_SF_SS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        struct CAudioSessionInstanceId *a2,
        struct CAudioSession **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  _WORD *v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  unsigned int v10; // ebx
  unsigned __int16 i; // ax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  struct CAudioSession *v20; // rcx
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v21 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( (int)CAudioSessionInstanceId::ToString(a2, &v21) < 0 )
  {
    ATL::CStringData::Release((ATL::CStringData *)(v21 - 24));
    v10 = 0;
  }
  else
  {
    v7 = (_WORD *)v21;
    v8 = *(int *)(v21 - 16);
    if ( ((1 - *(_DWORD *)(v21 - 8)) | (*(_DWORD *)(v21 - 12) - (int)v8)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v21, (unsigned int)v8);
      v7 = (_WORD *)v21;
    }
    _o__wcsupr_s(v7, (int)v8 + 1);
    if ( (int)v8 < 0 || (v9 = v7 - 12, (int)v8 > *((_DWORD *)v7 - 3)) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v9 + 2) = v8;
    v7[v8] = 0;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147467259);
    v10 = 0;
    for ( i = *v7; *v7; i = *v7 )
    {
      v10 = i + 33 * v10;
      ++v7;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
  }
  v12 = 2 * (v10 & *((_QWORD *)this + 12));
  v13 = *((_QWORD *)this + 9);
  v14 = *(_QWORD *)(v13 + 16 * (v10 & *((_QWORD *)this + 12)) + 8);
  if ( v14 == *((_QWORD *)this + 7) )
  {
LABEL_25:
    v14 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v13 + 8 * v12);
    while ( 1 )
    {
      if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)a2, *(_QWORD *)(v14 + 16)) )
      {
        v16 = *((_DWORD *)a2 + 16);
        if ( v16 == *(_DWORD *)(v14 + 80) && (v16 || *((_DWORD *)a2 + 14) == *(_DWORD *)(v14 + 72)) )
        {
          v17 = *((_DWORD *)a2 + 12);
          if ( v17 == *(_DWORD *)(v14 + 64)
            && (v17 || !(unsigned int)_o__wcsicmp(*((_QWORD *)a2 + 1), *(_QWORD *)(v14 + 24))) )
          {
            v18 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v14 + 40);
            if ( !v18 )
              v18 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v14 + 48);
            if ( !v18 )
              break;
          }
        }
      }
      if ( v14 == v15 )
        goto LABEL_25;
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  if ( v14 && v14 != *((_QWORD *)this + 7) )
  {
    v20 = *(struct CAudioSession **)(v14 + 96);
    if ( v20 )
    {
      *a3 = v20;
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v20 + 8LL))(v20);
    }
    else
    {
      *a3 = 0LL;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10,
        (unsigned int)&WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
        0,
        *((_QWORD *)a2 + 9));
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
  else
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2147942402LL;
  }
}
