/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403C7E0C
 * Callers:
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140215C3C (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     DxgkCreateKeyedMutex2 @ 0x1403C77A0 (DxgkCreateKeyedMutex2.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403C7D0C (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 * Callees:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x14000F998 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140042268 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1403C8030 (-Initialize@DXGKEYEDMUTEX@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a3,
        __int64 a4,
        struct DXGKEYEDMUTEX **a5)
{
  unsigned int v5; // r15d
  __int64 v9; // rax
  DXGKEYEDMUTEX *v10; // rdi
  DXGKEYEDMUTEX *v11; // rcx
  _QWORD *v12; // rax
  int v13; // ebx
  DXGKEYEDMUTEX **v14; // rax
  __int64 v15; // rcx

  v5 = a4;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4922;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ppKeyedMutex != NULL", 4922LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a5 = 0LL;
  v9 = operator new(0xB8uLL, 0x4B677844u, 64LL, a4);
  v10 = (DXGKEYEDMUTEX *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = this;
    *(_OWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_DWORD *)(v9 + 32) = 0;
    v11 = (DXGKEYEDMUTEX *)v9;
    *(_QWORD *)(v9 + 56) = 1LL;
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = a2;
    *(_QWORD *)(v9 + 80) = a2;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_QWORD *)(v9 + 120) = 0LL;
    *(_QWORD *)(v9 + 128) = 0LL;
    *(_QWORD *)(v9 + 136) = 0LL;
    *(_DWORD *)(v9 + 144) = 0;
    *(_DWORD *)(v9 + 148) = 34;
    *(_DWORD *)(v9 + 152) = 75;
    *(_QWORD *)(v9 + 160) = 0LL;
    *(_DWORD *)(v9 + 168) = 0;
    *(struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)(v9 + 172) = a3;
    *(_BYTE *)(v9 + 176) = 0;
    v12 = (_QWORD *)(v9 + 96);
    v12[1] = v12;
    *v12 = v12;
    *((_QWORD *)v10 + 6) = (char *)v10 + 40;
    *((_QWORD *)v10 + 5) = (char *)v10 + 40;
    v13 = DXGKEYEDMUTEX::Initialize(v11, v5);
    if ( v13 < 0 )
    {
      DXGKEYEDMUTEX::`scalar deleting destructor'(v10);
    }
    else
    {
      DXGKEYEDMUTEX::AcquireReference(v10);
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 608));
      v14 = (DXGKEYEDMUTEX **)((char *)this + 656);
      v15 = *((_QWORD *)this + 82);
      if ( *(DXGGLOBAL **)(v15 + 8) != (DXGGLOBAL *)((char *)this + 656) )
        __fastfail(3u);
      *(_QWORD *)v10 = v15;
      *((_QWORD *)v10 + 1) = v14;
      *(_QWORD *)(v15 + 8) = v10;
      *v14 = v10;
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 76);
      *a5 = v10;
    }
  }
  else
  {
    v13 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 4937;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating DXGKEYEDMUTEX class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v13;
}
