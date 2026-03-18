/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x14007424C
 * Callers:
 *     NtDCompositionBeginFrame @ 0x140194290 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006CD70 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1400746F0 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400748D4 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400750F0 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  struct _ERESOURCE *v5; // rbx
  char v7; // cl
  __int64 DCompSessionState; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r14
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  unsigned __int64 v20; // rbx
  PSLIST_ENTRY v21; // rcx
  struct DirectComposition::CBatch *v22; // rdx
  __int64 v23; // rax
  struct _SLIST_ENTRY *Next; // r9
  _QWORD *p_Next; // r8
  struct DirectComposition::CBatch *v26; // rcx
  struct DirectComposition::CBatch *v27; // rdx
  int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  char *v31; // rcx
  struct DirectComposition::CBatch **v33; // r8
  struct DirectComposition::CBatch *v34; // rax
  int v35; // eax
  DirectComposition::CChannel *v36; // rcx
  __int64 *v37; // [rsp+50h] [rbp+30h] BYREF
  struct DirectComposition::CBatch *v38; // [rsp+58h] [rbp+38h] BYREF

  *a3 = 0LL;
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v5, 1u);
  if ( !*((_DWORD *)a2 + 32) || (v7 = 1, *((_DWORD *)this + 92)) )
    v7 = 0;
  *((_OWORD *)this + 22) = *((_OWORD *)a2 + 7);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 32);
  if ( v7 )
  {
    ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
    *((_BYTE *)this + 208) = 0;
    if ( !*((_BYTE *)this + 252) && *((_DWORD *)this + 62) )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
      v35 = DirectComposition::CSystemChannel::BoostCompositorClock(
              *((DirectComposition::CSystemChannel **)this + 19),
              1);
      v36 = (DirectComposition::CChannel *)*((_QWORD *)this + 19);
      *((_BYTE *)this + 252) = v35 >= 0;
      DirectComposition::CChannel::Unlock(v36);
    }
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  }
  if ( *((_DWORD *)this + 54) != *((_DWORD *)a2 + 8)
    || *((_DWORD *)this + 55) != *((_DWORD *)a2 + 9)
    || *((_DWORD *)this + 58) != *((_DWORD *)a2 + 12) )
  {
    ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
    *((_BYTE *)this + 208) = 1;
    *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 2);
    *((_QWORD *)this + 29) = *((_QWORD *)a2 + 6);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 14);
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  }
  DCompSessionState = W32GetDCompSessionState();
  v10 = *(_QWORD *)(W32GetUserSessionState(v9) + 70808);
  if ( PsGetCurrentProcess(v12, v11, v13, v14) == v10 && !*(_QWORD *)(DCompSessionState + 8) )
    *(_QWORD *)(DCompSessionState + 8) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    v15 = (_QWORD *)((char *)this + 296);
    if ( *((_QWORD *)this + 24) || (v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 176LL))(*v15), v17 >= 0) )
    {
      v16 = *v15;
      v37 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, const struct COMPOSITION_FRAME_INFO *, __int64 **))(*(_QWORD *)v16
                                                                                                  + 184LL))(
              v16,
              a2,
              &v37);
      if ( v17 >= 0 )
      {
        v18 = *v15;
        *((_QWORD *)this + 34) = *((_QWORD *)a2 + 17);
        *((_QWORD *)this + 35) = *((_QWORD *)a2 + 18);
        *((_DWORD *)this + 72) = *((_DWORD *)a2 + 38);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = v37;
        *((_QWORD *)this + 20) = *(_QWORD *)a2;
        v20 = (*(__int64 (__fastcall **)(__int64 *))(*v19 + 72))(v19);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
        {
          v17 = -1073740024;
          v28 = -1073740024;
        }
        else
        {
          v21 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
          v22 = 0LL;
          if ( v21 )
          {
            do
            {
              v23 = *((_QWORD *)&v21[1].Next + 1);
              Next = v21->Next;
              if ( v23 )
              {
                p_Next = *(_QWORD **)(v23 + 24);
                *(_QWORD *)(v23 + 24) = 0LL;
                v21->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v21[1].Next + 1);
                *((_QWORD *)&v21[1].Next + 1) = 0LL;
              }
              else
              {
                p_Next = &v21->Next;
              }
              *p_Next = v22;
              v22 = (struct DirectComposition::CBatch *)v21;
              v21 = Next;
            }
            while ( Next );
          }
          v26 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
          v38 = v22;
          if ( v26 )
          {
            do
            {
              v33 = (struct DirectComposition::CBatch **)v26;
              *(_BYTE *)(*((_QWORD *)v26 + 1) + 49LL) = 0;
              v26 = *(struct DirectComposition::CBatch **)v26;
            }
            while ( v26 );
            v34 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
            *((_QWORD *)this + 17) = 0LL;
            *v33 = v22;
            v38 = v34;
          }
          DirectComposition::CConnection::KeepOrDeferBatches(this, v20, &v38);
          v15 = (_QWORD *)((char *)this + 296);
          v27 = v38;
          v17 = 0;
          *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
          *((_QWORD *)this + 22) = *((_QWORD *)a2 + 2);
          if ( v27 )
            (*(void (__fastcall **)(__int64 *, __int64))(*v37 + 56))(v37, (__int64)v27 + 120);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 37) + 80LL))(*((_QWORD *)this + 37), v37);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 24) + 16LL))(*((_QWORD *)this + 24), v37);
          v28 = 0;
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 24LL))(*v15);
        v29 = *v37;
        if ( v28 < 0 )
        {
          (*(void (**)(void))(v29 + 32))();
        }
        else
        {
          v30 = (*(__int64 (**)(void))(v29 + 72))();
          ExAcquirePushLockExclusiveEx((char *)this + 376, 0LL);
          *((_BYTE *)this + 384) = 1;
          *((_QWORD *)this + 50) = v30;
          v31 = (char *)this + 376;
          if ( *((_BYTE *)this + 384) )
            ExReleasePushLockExclusiveEx(v31, 0LL);
          else
            ExReleasePushLockSharedEx(v31, 0LL);
          *a3 = v30;
        }
        (*(void (__fastcall **)(__int64 *))(*v37 + 8))(v37);
        *((_QWORD *)this + 35) = 0LL;
        *((_DWORD *)this + 72) = 0;
      }
    }
  }
  else
  {
    v17 = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
