/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402A8958
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1401EF9C0 (DxgkReleaseKeyedMutex.c)
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221040 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402A8390 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1402A8640 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1400397D0 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x140181FC8 (-VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::ReleaseSync(
        void **this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char *Src,
        size_t Size,
        bool a7)
{
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // esi
  void *v16; // r9
  char *v17; // rcx
  char v18; // si
  DXGKEYEDMUTEX *i; // rax
  struct _KEVENT *v20; // rcx
  DXG_GUEST_GLOBAL_VMBUS *v21; // rbx
  __int64 v22; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v24[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v24, (struct DXGKEYEDMUTEX *)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v12 = 0;
  if ( !*((_BYTE *)this + 176) )
  {
    v13 = *((_DWORD *)this + 14);
    if ( v13 == 3 )
    {
      v14 = 128;
      WdLogSingleEntry2(3LL, this, 128LL);
      WdLogGlobalForLineNumber = 4785;
      goto LABEL_8;
    }
    if ( v13 || !a2 || *((_DWORD *)this + 15) != a2 || this[8] != DXGPROCESS::GetCurrent(v11) )
    {
      v14 = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4792;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Keyed mutex 0x%I64x is not owned by this device, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_8:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
      return v14;
    }
  }
  if ( Src )
  {
    if ( !(_DWORD)Size )
    {
      v14 = -1073741811;
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4810;
      goto LABEL_8;
    }
    if ( (_DWORD)Size != *((_DWORD *)this + 42) )
    {
      v14 = -1073741811;
      WdLogSingleEntry4(3LL, this, (unsigned int)Size, *((unsigned int *)this + 42), -1073741811LL);
      WdLogGlobalForLineNumber = 4819;
      goto LABEL_8;
    }
    if ( a7 )
    {
      v16 = this[20];
      v17 = &Src[(unsigned int)Size];
      if ( v17 < Src || (unsigned __int64)v17 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, Src, (unsigned int)Size);
    }
    else
    {
      memmove(this[20], Src, (unsigned int)Size);
    }
  }
  else if ( (_DWORD)Size )
  {
    v14 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4802;
    goto LABEL_8;
  }
  *((_DWORD *)this + 15) = 0;
  this[8] = 0LL;
  if ( *((_BYTE *)this + 176) )
  {
    v21 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 206);
    Current = DXGPROCESS::GetCurrent(v22);
    v12 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendReleaseKeyedMutexSync(v21, Current, (const void **)this, a2, a3, a4);
  }
  else
  {
    v18 = 0;
    for ( i = (DXGKEYEDMUTEX *)this[12]; i != (DXGKEYEDMUTEX *)(this + 12); i = *(DXGKEYEDMUTEX **)i )
    {
      v20 = (struct _KEVENT *)((char *)i - 64);
      if ( *((_QWORD *)i - 8) == a3 )
      {
        v18 = 1;
        *((_DWORD *)this + 14) = 2;
        this[11] = v20;
        v20[2].Header.LockNV = 0;
        v20[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a4;
        KeSetEvent(v20 + 1, 0, 0);
        break;
      }
    }
    if ( !v18 )
    {
      *((_DWORD *)this + 14) = 1;
      this[9] = (void *)a3;
      this[10] = (void *)a4;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  return v12;
}
