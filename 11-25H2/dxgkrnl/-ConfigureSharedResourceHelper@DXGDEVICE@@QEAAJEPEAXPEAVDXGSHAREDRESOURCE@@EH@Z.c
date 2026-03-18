/*
 * XREFs of ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x14029E83C
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401E03D4 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x14029EBA4 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 * Callees:
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x140010CA4 (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResourceHelper(
        DXGDEVICE *this,
        char a2,
        void *a3,
        struct DXGSHAREDRESOURCE *a4,
        unsigned __int8 a5,
        int a6)
{
  __int64 v10; // rbp
  PVOID v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 *v14; // rsi
  DXGPROCESSSHAREDACCESS *v15; // rcx
  __int64 *i; // rdx
  char v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  DXGPROCESSSHAREDACCESS *v23; // r8
  DXGPROCESSSHAREDACCESS **v24; // rdx
  _BYTE v25[16]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5527;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 5527LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a4 )
  {
    v10 = *((_QWORD *)a4 + 19);
    if ( v10 )
    {
      if ( !a6 || *(DXGDEVICE **)(v10 + 80) == this )
      {
        v11 = 0LL;
        v12 = 0;
        if ( !a2 )
        {
          Object = 0LL;
          v22 = ObReferenceObjectByHandle(a3, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
          v11 = Object;
          v12 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry1(3LL, a3);
            WdLogGlobalForLineNumber = 5579;
            return v12;
          }
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)(v10 + 8), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
        v14 = (__int64 *)(v10 + 56);
        v15 = 0LL;
        for ( i = *(__int64 **)(v10 + 56); i != v14; i = (__int64 *)*i )
        {
          v17 = *((_BYTE *)i + 16);
          if ( a2 )
          {
            if ( v17 )
              goto LABEL_14;
          }
          else if ( !v17 && (PVOID)i[3] == v11 )
          {
LABEL_14:
            v15 = (DXGPROCESSSHAREDACCESS *)(i - 1);
            break;
          }
        }
        if ( a5 )
        {
          if ( v15 )
          {
LABEL_20:
            if ( v11 )
              ObfDereferenceObject(v11);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
            return v12;
          }
          v18 = operator new(0x28uLL, 0x4B677844u, 256LL, v13);
          if ( !v18 )
          {
            v12 = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            WdLogGlobalForLineNumber = 5629;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              0xFFFFFFFFLL,
              L"Out of memory allocating DXGPROCESSSHAREDACCESS class, returning 0x%I64x",
              -1073741801LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_20;
          }
          *(_BYTE *)(v18 + 24) = a2;
          *(_QWORD *)(v18 + 32) = v11;
          v19 = (_QWORD *)(v18 + 8);
          v20 = *v14;
          if ( *(__int64 **)(*v14 + 8) == v14 )
          {
            *v19 = v20;
            v11 = 0LL;
            v19[1] = v14;
            *(_QWORD *)(v20 + 8) = v19;
            *v14 = (__int64)v19;
            goto LABEL_20;
          }
        }
        else
        {
          if ( !v15 )
            goto LABEL_20;
          v23 = (DXGPROCESSSHAREDACCESS *)*((_QWORD *)v15 + 1);
          if ( *((DXGPROCESSSHAREDACCESS **)v23 + 1) == (DXGPROCESSSHAREDACCESS *)((char *)v15 + 8) )
          {
            v24 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v15 + 2);
            if ( *v24 == (DXGPROCESSSHAREDACCESS *)((char *)v15 + 8) )
            {
              *v24 = v23;
              *((_QWORD *)v23 + 1) = v24;
              DXGPROCESSSHAREDACCESS::`scalar deleting destructor'(v15);
              goto LABEL_20;
            }
          }
        }
        __fastfail(3u);
      }
      WdLogSingleEntry3(3LL, this, a4, -1073741811LL);
      WdLogGlobalForLineNumber = 5557;
    }
    else
    {
      WdLogSingleEntry3(3LL, this, a4, -1073741811LL);
      WdLogGlobalForLineNumber = 5545;
    }
  }
  else
  {
    WdLogSingleEntry3(3LL, this, 0LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5534;
  }
  return 3221225485LL;
}
