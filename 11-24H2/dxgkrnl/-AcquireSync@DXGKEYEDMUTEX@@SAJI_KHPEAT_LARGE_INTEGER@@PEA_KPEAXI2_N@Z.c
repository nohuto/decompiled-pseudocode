/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B513C
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1401F5120 (DxgkAcquireKeyedMutex.c)
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021EE10 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B4BCC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1402B4DB0 (DxgkAcquireKeyedMutex2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140036FE4 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x14003932C (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x140042294 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x140058C64 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1403DF7A8 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8,
        bool a9)
{
  __int64 v9; // rbx
  unsigned __int64 *v10; // r12
  unsigned int v11; // esi
  struct _KTHREAD **Current; // r13
  struct DXGKEYEDMUTEX *v13; // rdi
  __int64 v14; // rcx
  void *v15; // r15
  unsigned int v16; // r14d
  int v17; // eax
  int v18; // eax
  struct _LIST_ENTRY *Flink; // rax
  unsigned __int64 *v20; // rcx
  const void *v21; // rdx
  ULONG64 v22; // rax
  __int64 v24; // rcx
  struct _LIST_ENTRY ***v25; // rcx
  volatile unsigned int Lock; // r13d
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v28; // rax
  int v29; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGKEYEDMUTEX *v31; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v32[24]; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT v33[5]; // [rsp+70h] [rbp-88h] BYREF

  v9 = (unsigned int)a1;
  v10 = (unsigned __int64 *)a5;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4540;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pFenceValue", 4540LL, 0LL, 0LL, 0LL, 0LL);
  }
  *v10 = 0LL;
  v11 = 0;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v31 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v9, Current, &v31);
  v13 = v31;
  if ( !v31 )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 4553;
LABEL_30:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return v11;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v32, v31);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  v15 = a6;
  if ( a6 )
  {
    v16 = Size;
    if ( !(_DWORD)Size )
    {
      v11 = -1073741811;
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
      WdLogGlobalForLineNumber = 4574;
      goto LABEL_29;
    }
    if ( (_DWORD)Size != *((_DWORD *)v13 + 42) )
    {
      v11 = -1073741811;
      WdLogSingleEntry4(3LL, v13, (unsigned int)Size, *((unsigned int *)v13 + 42), -1073741811LL);
      WdLogGlobalForLineNumber = 4583;
      goto LABEL_29;
    }
  }
  else
  {
    v16 = Size;
    if ( (_DWORD)Size )
    {
      v11 = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4566;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
      DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&a5);
      return v11;
    }
  }
  if ( *((_BYTE *)v13 + 176) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 210),
            (struct DXGPROCESS *)Current,
            v13,
            v9,
            a2,
            a3,
            a4,
            v10,
            a8);
LABEL_23:
    if ( v15 )
    {
      if ( a9 )
      {
        v21 = (const void *)*((_QWORD *)v13 + 20);
        v22 = (ULONG64)v15 + v16;
        if ( v22 <= (unsigned __int64)v15 || v22 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v15, v21, v16);
      }
      else
      {
        memmove(v15, *((const void **)v13 + 20), v16);
      }
    }
    goto LABEL_29;
  }
  v17 = *((_DWORD *)v13 + 14);
  if ( v17 == 3 )
  {
    WdLogSingleEntry2(3LL, v13, 128LL);
    WdLogGlobalForLineNumber = 4609;
LABEL_58:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return 128LL;
  }
  if ( !v17
    && (_DWORD)v9
    && *((_DWORD *)v13 + 15) == (_DWORD)v9
    && *((struct DXGPROCESS **)v13 + 8) == DXGPROCESS::GetCurrent(v14) )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v13, v9);
    WdLogGlobalForLineNumber = 4616;
LABEL_50:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Keyed mutex does not support recursive Acquire's, returning 0x%I64x, pKeyedMutex  = 0x%I64x, hKeyedMutex = 0x%I64x",
      -1073741811LL,
      (__int64)v13,
      v9,
      0LL,
      0LL);
LABEL_29:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
    goto LABEL_30;
  }
  if ( *((_DWORD *)v13 + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGPROCESS ***)v13 + 11)) )
  {
    v11 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v13, v9);
    WdLogGlobalForLineNumber = 4623;
    goto LABEL_50;
  }
  v18 = *((_DWORD *)v13 + 14);
  if ( (v18 & 0xFFFFFFFD) != 0 && (v18 != 1 || a2 == *((_QWORD *)v13 + 9) || a3) )
  {
    Flink = (struct _LIST_ENTRY *)*((_QWORD *)v13 + 10);
LABEL_18:
    *v10 = (unsigned __int64)Flink;
    v20 = a8;
    if ( a8 )
      *a8 = *((_QWORD *)v13 + 9);
    if ( (unsigned int)(*((_DWORD *)v13 + 14) - 1) > 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4717;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pKeyedMutex->m_OwnershipState == STATE_EVENT_SIGNALLED) || (pKeyedMutex->m_OwnershipState == STATE_PENDING_RELEASE)",
        4717LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_DWORD *)v13 + 14) = 0;
    *((_DWORD *)v13 + 15) = v9;
    *((_QWORD *)v13 + 8) = DXGPROCESS::GetCurrent((__int64)v20);
    *((_QWORD *)v13 + 11) = 0LL;
    goto LABEL_23;
  }
  memset(v33, 0, 0x50uLL);
  LODWORD(v33[0].Header.WaitListHead.Flink) = v9;
  v33[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DXGPROCESS::GetCurrent(v24);
  *(_QWORD *)&v33[0].Header.Lock = a2;
  v33[2].Header.LockNV = 0;
  KeInitializeEvent(&v33[1], NotificationEvent, 0);
  v25 = (struct _LIST_ENTRY ***)*((_QWORD *)v13 + 13);
  if ( *v25 != (struct _LIST_ENTRY **)((char *)v13 + 96) )
LABEL_45:
    __fastfail(3u);
  v33[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v13 + 96);
  *(_QWORD *)&v33[3].Header.Lock = v25;
  *v25 = &v33[2].Header.WaitListHead.Blink;
  *((_QWORD *)v13 + 13) = &v33[2].Header.WaitListHead.Blink;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  v11 = KeWaitForSingleObject(&v33[1], Executive, 0, 1u, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  Lock = v33[2].Header.Lock;
  if ( !v33[2].Header.LockNV )
  {
    Blink = v33[2].Header.WaitListHead.Blink;
    v28 = *(struct _LIST_ENTRY **)&v33[3].Header.Lock;
    if ( (struct _LIST_ENTRY **)v33[2].Header.WaitListHead.Blink->Blink == &v33[2].Header.WaitListHead.Blink
      && **(struct _KEVENT ***)&v33[3].Header.Lock == (struct _KEVENT *)&v33[2].Header.WaitListHead.Blink )
    {
      **(_QWORD **)&v33[3].Header.Lock = v33[2].Header.WaitListHead.Blink;
      Blink->Blink = v28;
      v29 = *((_DWORD *)v13 + 14);
      if ( v29 == 2 && *((struct _KEVENT **)v13 + 11) == v33 )
        v11 = 0;
      if ( v11 )
        goto LABEL_29;
      if ( v29 != 3 )
      {
        Flink = v33[2].Header.WaitListHead.Flink;
        goto LABEL_18;
      }
      WdLogSingleEntry2(3LL, v13, 128LL);
      WdLogGlobalForLineNumber = 4693;
      goto LABEL_58;
    }
    goto LABEL_45;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5);
  return Lock;
}
