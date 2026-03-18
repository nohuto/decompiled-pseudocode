/*
 * XREFs of ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401DB880
 * Callers:
 *     DxgkShareObjectsInternal @ 0x14029DC00 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1403FBE18 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1400761A8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1400761D8 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedProtectedSessionNtObject(
        char a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rbp
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // edx
  DXGPROTECTEDSESSION *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // eax
  _QWORD *v20; // rbx
  PVOID v21; // rcx
  _BYTE v23[16]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a3;
  Object = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    LODWORD(v11) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 519;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v23, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v13 >= *((_DWORD *)Current + 74) )
    goto LABEL_9;
  v14 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v15 = *(_DWORD *)(v14 + 16LL * v13 + 8) & 0x1F;
  if ( !v15 )
    goto LABEL_9;
  if ( a2 != v15 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v16 = 0LL;
    goto LABEL_10;
  }
  v16 = *(DXGPROTECTEDSESSION **)(v14 + 16LL * v13);
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v16 )
  {
    LOBYTE(v18) = a6;
    LOBYTE(v17) = a1;
    v19 = ObCreateObject(v17, g_pDxgkSharedProtectedSessionObjectType, a5, v18, 0LL, 8, 0, 0, &Object);
    v11 = v19;
    if ( v19 >= 0 )
    {
      v20 = Object;
      DXGPROTECTEDSESSION::AddReference(v16, 0);
      *v20 = v16;
    }
    else
    {
      if ( Object )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 555;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pObject == NULL", 555LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(3LL, Current, v11);
      WdLogGlobalForLineNumber = 558;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
    if ( (int)v11 >= 0 )
    {
      v21 = Object;
      goto LABEL_22;
    }
  }
  else
  {
    LODWORD(v11) = -1073741811;
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 534;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  }
LABEL_19:
  v21 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v21 = 0LL;
  }
LABEL_22:
  *a7 = v21;
  return (unsigned int)v11;
}
