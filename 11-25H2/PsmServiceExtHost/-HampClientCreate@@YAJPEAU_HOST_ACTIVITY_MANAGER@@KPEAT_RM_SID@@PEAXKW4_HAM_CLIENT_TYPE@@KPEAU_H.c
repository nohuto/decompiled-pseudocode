/*
 * XREFs of ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003EC6C
 * Callers:
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E590 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800847DC (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z @ 0x18003D138 (-HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z.c)
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18003D1E8 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003D79C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     CempLockInitialize @ 0x180040C1C (CempLockInitialize.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180071E1C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall HampClientCreate(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        void *a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        __int128 *a8,
        __int64 a9,
        const unsigned __int16 **a10,
        struct _HAM_CLIENT_CONTEXT **a11)
{
  int v11; // eax
  unsigned int v15; // edi
  unsigned int v16; // r14d
  char *Heap; // rax
  char *v18; // rbx
  signed __int64 v19; // rax
  __int16 v20; // cx
  struct _HAM_CLIENT_CONTEXT *v21; // rsi
  int v22; // edi
  __int128 v24; // xmm0
  struct _HAM_CLIENT_CONTEXT *v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  v11 = 0;
  v26 = 0LL;
  v25 = 0LL;
  if ( !a6 && a10 && *a10 )
  {
    v22 = RtlStringCchLengthW(*a10, a2, &v26);
    if ( v22 < 0 )
      return (unsigned int)v22;
    v11 = v26;
  }
  v15 = v11 + 1;
  v16 = 2 * (v11 + 1) + 220;
  Heap = (char *)HampAllocateHeap(v16);
  v18 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, v16);
    CempLockInitialize(v18 + 40);
    *(_QWORD *)v18 = 0LL;
    *((_QWORD *)v18 + 1) = 0LL;
    *((_QWORD *)v18 + 2) = -1LL;
    *((_QWORD *)v18 + 3) = 1LL;
    *((_QWORD *)v18 + 4) = a1 + 48LL * a6 + 16;
    *((_QWORD *)v18 + 8) = v18 + 56;
    *((_QWORD *)v18 + 7) = v18 + 56;
    *(_OWORD *)(v18 + 72) = 0LL;
    *(_OWORD *)(v18 + 88) = 0LL;
    *(_OWORD *)(v18 + 104) = 0LL;
    *((_QWORD *)v18 + 10) = 0LL;
    RtlInitializeSRWLock(v18 + 88);
    RtlInitializeConditionVariable(v18 + 104);
    *((_QWORD *)v18 + 12) = HampClientPkgDestroy;
    *((_DWORD *)v18 + 42) = a5;
    v18[164] = a6;
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 1uLL);
    *((_DWORD *)v18 + 40) = a7;
    *((_QWORD *)v18 + 19) = v19 + 1;
    *((_WORD *)v18 + 110) = 0;
    v20 = 0;
    *((_DWORD *)v18 + 50) = 0;
    if ( a10 )
    {
      if ( a6 == 6 )
      {
        *((_DWORD *)v18 + 43) = *(_DWORD *)*a10;
        v20 = 0;
      }
      else if ( !a6 && *a10 )
      {
        RtlStringCchCopyW((unsigned __int16 *)v18 + 110, v15, *a10);
        v20 = *((_WORD *)v18 + 110);
      }
    }
    if ( a8 )
    {
      v24 = *a8;
      *((_DWORD *)v18 + 36) |= 1u;
      *(_OWORD *)(v18 + 120) = v24;
      *((_QWORD *)v18 + 17) = a9;
    }
    if ( v20
      && (v22 = TpAllocTimer(
                  v18 + 208,
                  HampClientRundownTimerCallback,
                  v18,
                  (*((_QWORD *)v18 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 48 * (20LL - (unsigned __int8)v18[164])),
          v22 < 0) )
    {
      v21 = v25;
    }
    else
    {
      HampClientFindOrInsert((struct _HAM_CLIENT_CONTEXT *)v18, &v25);
      v21 = v25;
      v22 = HampClientStart(v25, a3, a4, v27, a7, (struct _HAM_CLIENT_CONNECTION_PARAMETERS *)a10);
      if ( v22 >= 0 )
      {
        v22 = 0;
        *a11 = v21;
      }
    }
    CemRcObjectDereference(v18);
    if ( v21 )
      CemRcObjectDereference(v21);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v22;
}
