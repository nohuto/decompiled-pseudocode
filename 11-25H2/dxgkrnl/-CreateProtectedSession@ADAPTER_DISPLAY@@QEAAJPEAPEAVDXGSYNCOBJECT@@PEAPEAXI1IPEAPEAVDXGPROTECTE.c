/*
 * XREFs of ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401EA108
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1401EACF0 (DxgkCreateProtectedSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x140077424 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x140077610 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1401EA5F4 (-Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateProtectedSession(
        DXGADAPTER **this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        unsigned int a4,
        void **a5,
        unsigned int a6,
        struct DXGPROTECTEDSESSION **a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  DXGPROTECTEDSESSION *v15; // rbx
  int v16; // ebp
  DXGPROTECTEDSESSION **v18; // rax
  DXGADAPTER *v19; // rcx
  _BYTE v20[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 864;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceSharedOwner()",
      864LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 866;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ppProtectedSession", 866LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a7 = 0LL;
  v14 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(160LL, v11, v12, v13);
  v15 = (DXGPROTECTEDSESSION *)v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 16) = this;
    *(_OWORD *)v14 = 0LL;
    *(_DWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 40) = 0LL;
    *(_DWORD *)(v14 + 68) = -1;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_DWORD *)(v14 + 64) = 0;
    *(_DWORD *)(v14 + 72) = 75;
    *(_DWORD *)(v14 + 80) = 0;
    *(_QWORD *)(v14 + 88) = 0LL;
    *(_DWORD *)(v14 + 96) = 0;
    *(_QWORD *)(v14 + 104) = 0LL;
    *(_DWORD *)(v14 + 112) = 0;
    *(_QWORD *)(v14 + 120) = 0LL;
    *(_QWORD *)(v14 + 128) = 0LL;
    *(_BYTE *)(v14 + 144) = 0;
    *(_DWORD *)(v14 + 148) = 1;
    *(_QWORD *)(v14 + 152) = 0LL;
    ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v14 + 136));
    v16 = DXGPROTECTEDSESSION::Initialize(v15, a2, a3, a4, a5, a6);
    if ( v16 >= 0 )
    {
      DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        (DXGPROTECTEDSESSIONMUTEX *)v20,
        (struct ADAPTER_DISPLAY *)this);
      v18 = this + 90;
      v19 = this[90];
      if ( *((DXGADAPTER ***)v19 + 1) != this + 90 )
        __fastfail(3u);
      *(_QWORD *)v15 = v19;
      *((_QWORD *)v15 + 1) = v18;
      *((_QWORD *)v19 + 1) = v15;
      *v18 = v15;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
      *a7 = v15;
      return 0LL;
    }
    else
    {
      DXGPROTECTEDSESSION::`scalar deleting destructor'(v15);
      return (unsigned int)v16;
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 875;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"ADAPTER_DISPLAY 0x%I64x: Unable to allocate protected session object, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
