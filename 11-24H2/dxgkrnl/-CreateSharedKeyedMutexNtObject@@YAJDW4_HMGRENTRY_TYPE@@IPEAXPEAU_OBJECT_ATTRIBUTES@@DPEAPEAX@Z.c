/*
 * XREFs of ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E07FC
 * Callers:
 *     DxgkCreateBundleObjectInternal @ 0x1403F5DB0 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140041BF8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedKeyedMutexNtObject(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  PVOID v15; // rcx
  DXGKEYEDMUTEX *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a3;
  Object = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( !Current )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 240;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, Current);
  v11 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)v10 + 74) )
    goto LABEL_9;
  v12 = *((_QWORD *)v10 + 35);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
  if ( !v13 )
    goto LABEL_9;
  if ( v13 != 9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v14 = v7;
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    WdLogGlobalForLineNumber = 260;
LABEL_10:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    goto LABEL_11;
  }
  v17 = *(DXGKEYEDMUTEX **)(v12 + 16LL * v11);
  if ( !v17 )
    goto LABEL_9;
  if ( (*((_DWORD *)v17 + 43) & 1) == 0 )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 270;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      (__int64)v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_10;
  }
  DXGKEYEDMUTEX::AcquireReference(v17);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  LOBYTE(v18) = 1;
  LOBYTE(v19) = a1;
  v20 = ObCreateObject(v19, g_pDxgkSharedKeyedMutexObjectType, a5, v18, 0LL, 8, 0, 0, &Object);
  v7 = v20;
  if ( v20 >= 0 )
  {
    *(_QWORD *)Object = v17;
    v15 = Object;
    goto LABEL_13;
  }
  if ( Object )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 296;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pObject == NULL", 296LL, 0LL, 0LL, 0LL, 0LL);
  }
  WdLogSingleEntry2(3LL, v10, v7);
  WdLogGlobalForLineNumber = 299;
  DXGKEYEDMUTEX::ReleaseReference(v17);
LABEL_11:
  v15 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v15 = 0LL;
  }
LABEL_13:
  *a7 = v15;
  return (unsigned int)v7;
}
