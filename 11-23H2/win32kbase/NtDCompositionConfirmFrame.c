/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C0085100
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0066854 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0083E50 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0085BE0 (-SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRA.c)
 *     ?DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z @ 0x1C0085DA0 (-DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0087120 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C00B4258 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     DirectComposition::Memory::Allocate @ 0x1C00E77F6 (DirectComposition--Memory--Allocate.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 *v3; // rbx
  _BYTE *v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r13d
  int v8; // ebx
  int v9; // eax
  size_t v10; // r8
  const void *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v15; // rbx
  volatile signed __int32 *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rbx
  int v23; // eax
  bool v24; // zf
  int v25; // ecx
  unsigned int v26; // edi
  __int64 v27; // rbx
  bool v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _ERESOURCE *v31; // rbx
  __int64 *v32; // r12
  struct _ERESOURCE *v33; // rbx
  unsigned __int64 v34; // rdi
  _QWORD *v35; // rbx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // rcx
  _QWORD *i; // rbx
  char v42; // r9
  unsigned int v43; // esi
  unsigned int v44; // edx
  char v45; // al
  DirectComposition::CConnection *v46; // rcx
  __int64 *v47; // r15
  __int64 v48; // rdx
  unsigned int v49; // r9d
  char v50; // r12
  unsigned int v51; // r11d
  char *v52; // r8
  int v53; // eax
  __int64 v55; // r12
  __int64 *v56; // rdx
  __int64 v57; // r9
  int v58; // eax
  unsigned int v59; // r8d
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 *v62; // rbx
  unsigned int v63; // edx
  __int64 v64; // r13
  void *v65; // rcx
  __int64 v66; // rcx
  unsigned int v67; // edi
  __int64 v68; // rsi
  struct _ERESOURCE *v69; // rbx
  __int64 v70; // rcx
  char v71; // [rsp+20h] [rbp-2D8h]
  int v72; // [rsp+28h] [rbp-2D0h]
  _BYTE *v73; // [rsp+30h] [rbp-2C8h]
  __int64 v74; // [rsp+40h] [rbp-2B8h] BYREF
  __int64 v75; // [rsp+48h] [rbp-2B0h] BYREF
  __int64 v76; // [rsp+50h] [rbp-2A8h]
  __int64 *v77; // [rsp+58h] [rbp-2A0h]
  __int128 v78; // [rsp+60h] [rbp-298h] BYREF
  __int128 v79; // [rsp+70h] [rbp-288h]
  void *Src[2]; // [rsp+80h] [rbp-278h]
  unsigned __int64 v81; // [rsp+90h] [rbp-268h]
  __int128 v82; // [rsp+98h] [rbp-260h]
  DirectComposition::CConnection *v83; // [rsp+A8h] [rbp-250h]
  __int128 v84; // [rsp+B0h] [rbp-248h]
  __int128 v85; // [rsp+C0h] [rbp-238h]
  __int128 v86; // [rsp+D0h] [rbp-228h]
  int v87; // [rsp+E0h] [rbp-218h] BYREF
  int v88; // [rsp+E4h] [rbp-214h]
  int v89; // [rsp+E8h] [rbp-210h]
  __int128 v90; // [rsp+ECh] [rbp-20Ch]
  int v91; // [rsp+FCh] [rbp-1FCh]
  int v92; // [rsp+100h] [rbp-1F8h] BYREF
  int v93; // [rsp+104h] [rbp-1F4h]
  int v94; // [rsp+108h] [rbp-1F0h]
  __int128 v95; // [rsp+10Ch] [rbp-1ECh]
  int v96; // [rsp+11Ch] [rbp-1DCh]
  _BYTE v97[416]; // [rsp+120h] [rbp-1D8h] BYREF

  v3 = a2;
  v78 = 0LL;
  v79 = 0LL;
  *(_OWORD *)Src = 0LL;
  v5 = 0LL;
  v73 = 0LL;
  v6 = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3) != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    return 3221225506LL;
  if ( v3 )
  {
    if ( v3 + 3 < v3 || (unsigned __int64)(v3 + 3) > MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v84 = *v3;
    v85 = v3[1];
    v86 = v3[2];
    v78 = v84;
    v79 = v85;
    *(_OWORD *)Src = v86;
    if ( !(_QWORD)v84 )
    {
      v8 = -1073741811;
      v7 = (unsigned int)Src[0];
      goto LABEL_21;
    }
    v7 = 256;
    if ( (unsigned int)v86 > 0x100 )
    {
      LODWORD(Src[0]) = 256;
    }
    else
    {
      if ( (unsigned int)v86 <= 4 )
      {
        v5 = v97;
        v73 = v97;
        v8 = 0;
        v9 = 0;
        v7 = (unsigned int)Src[0];
        goto LABEL_9;
      }
      v7 = (unsigned int)Src[0];
    }
    v5 = (_BYTE *)DirectComposition::Memory::Allocate(104LL * v7, 0x61644344u);
    v73 = v5;
    if ( v5 )
    {
      v8 = 0;
      v9 = 0;
    }
    else
    {
      v8 = -1073741801;
      v9 = -1073741801;
    }
LABEL_9:
    if ( v9 >= 0 )
    {
      v10 = 104LL * v7;
      v11 = Src[1];
      if ( (char *)Src[1] + v10 < Src[1] || (char *)Src[1] + v10 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v5, v11, v10);
      Src[1] = v5;
    }
LABEL_21:
    if ( v8 >= 0 )
    {
      KeEnterCriticalRegion();
      v12 = 0LL;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
      {
        if ( !*CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        if ( CurrentProcessWin32Process )
          v12 = CurrentProcessWin32Process[32];
      }
      if ( v12 )
      {
        v15 = *(struct _ERESOURCE **)(v12 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v15, 1u);
        v16 = *(volatile signed __int32 **)(v12 + 24);
        if ( v16 && a1 == *(_QWORD *)(v12 + 16) )
        {
          _InterlockedIncrement(v16);
          v6 = *(_QWORD *)(v12 + 24);
          v8 = 0;
          v7 = (unsigned int)Src[0];
          v5 = v73;
        }
        else
        {
          v8 = -1073741790;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
        KeLeaveCriticalRegion();
      }
      else
      {
        v8 = -1073741823;
      }
      if ( v8 >= 0 )
      {
        v17 = 0LL;
        v74 = 0LL;
        v18 = -1073741275;
        v72 = -1073741275;
        v19 = *(_QWORD *)(v6 + 184);
        v20 = v78;
        v81 = v78;
        if ( v19 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 32LL))(v19, v78, &v74);
          v72 = v18;
          v17 = v74;
        }
        if ( v18 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 8LL))(v74);
        }
        v21 = 0LL;
        v76 = 0LL;
        v22 = v6 + 344;
        ExAcquirePushLockExclusiveEx(v6 + 344, 0LL);
        *(_BYTE *)(v6 + 352) = 1;
        *(_QWORD *)(v6 + 376) = v20;
        v23 = 300 * (v20 / 0x12C);
        v24 = (_DWORD)v78 == v23;
        v25 = v78 - v23;
        *(_DWORD *)(v6 + 360) = v78 - v23;
        if ( v24 )
          v26 = 299;
        else
          v26 = v25 - 1;
        if ( v26 != v25 )
        {
          while ( 1 )
          {
            v27 = v6 + 464LL * v26;
            if ( *(_BYTE *)(v27 + 392) )
              goto LABEL_41;
            v42 = 0;
            v71 = 0;
            v43 = 0;
            v44 = *(_DWORD *)(v27 + 396);
            v45 = 0;
            v46 = (DirectComposition::CConnection *)(v27 + 432);
            if ( !v44 )
              goto LABEL_103;
            v47 = (__int64 *)(v27 + 432);
            do
            {
              v48 = *v47 + 104LL * v43;
              if ( !*(_QWORD *)(v48 + 40) )
                goto LABEL_101;
              v49 = *(_DWORD *)(v48 + 56);
              if ( !v49 || *(_DWORD *)(v48 + 80) )
                goto LABEL_100;
              v50 = 0;
              v51 = 0;
              if ( !v7 )
                goto LABEL_130;
              while ( 1 )
              {
                v52 = (char *)Src[1] + 104 * v51;
                if ( *(_DWORD *)v48 == *(_DWORD *)v52
                  && *(_DWORD *)(v48 + 4) == *((_DWORD *)v52 + 1)
                  && *(_DWORD *)(v48 + 8) == *((_DWORD *)v52 + 2)
                  && *(_DWORD *)(v48 + 12) == *((_DWORD *)v52 + 3)
                  && *(_DWORD *)(v48 + 16) == *((_DWORD *)v52 + 4)
                  && *(_DWORD *)(v48 + 20) == *((_DWORD *)v52 + 5) )
                {
                  v53 = *(_DWORD *)(v48 + 24);
                  v46 = (DirectComposition::CConnection *)*((unsigned int *)v52 + 6);
                  if ( v53 == (_DWORD)v46 || !v53 || !(_DWORD)v46 )
                    break;
                }
                if ( ++v51 >= v7 )
                  goto LABEL_130;
              }
              v50 = 1;
              if ( v49 <= *((_DWORD *)v52 + 20) )
              {
                *(_OWORD *)(v48 + 80) = *((_OWORD *)v52 + 5);
                *(_QWORD *)(v48 + 96) = *((_QWORD *)v52 + 12);
                v42 = 1;
                v71 = 1;
              }
              else
              {
LABEL_130:
                v42 = v71;
              }
              if ( !v43 && !*(_BYTE *)(v27 + 393) )
              {
                if ( v42 )
                {
                  v55 = *v47;
                  v56 = *(__int64 **)(v27 + 400);
                  v77 = v56;
                  v83 = DirectComposition::CConnection::s_pSessionConnection;
                  v57 = 0LL;
                  v75 = 0LL;
                  v58 = -1073741275;
                  v46 = (DirectComposition::CConnection *)*((_QWORD *)DirectComposition::CConnection::s_pSessionConnection
                                                          + 23);
                  if ( v46 )
                  {
                    v58 = (*(__int64 (__fastcall **)(DirectComposition::CConnection *, __int64 *, __int64 *))(*(_QWORD *)v46 + 32LL))(
                            v46,
                            v56,
                            &v75);
                    v57 = v75;
                  }
                  if ( v58 >= 0 )
                  {
                    v92 = *(_DWORD *)(v55 + 80);
                    v93 = *(_DWORD *)(v55 + 88);
                    v94 = v93;
                    v95 = 0LL;
                    v96 = 0;
                    *(_QWORD *)((char *)&v95 + 4) = *(_QWORD *)(v55 + 96);
                    v87 = v92;
                    v88 = *(_DWORD *)(v55 + 84);
                    v89 = v88;
                    v90 = 0LL;
                    v91 = 0;
                    *(_QWORD *)((char *)&v90 + 4) = *(_QWORD *)((char *)&v95 + 4);
                    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v57 + 24LL))(v57, &v92, &v87);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
                    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v83 + 23) + 24LL))(
                      *((_QWORD *)v83 + 23),
                      v77);
                  }
                  goto LABEL_99;
                }
                if ( !v50 )
                {
                  DirectComposition::CConnection::DiscardFrame(v46, *(_QWORD *)(v27 + 400));
LABEL_99:
                  *(_BYTE *)(v27 + 393) = 1;
LABEL_100:
                  v42 = v71;
                }
              }
LABEL_101:
              ++v43;
              v44 = *(_DWORD *)(v27 + 396);
            }
            while ( v43 < v44 );
            v20 = v81;
            v45 = *(_BYTE *)(v27 + 392);
            v46 = (DirectComposition::CConnection *)(v27 + 432);
LABEL_103:
            if ( v42 )
            {
              v59 = 0;
              if ( v44 )
              {
                v60 = *(_QWORD *)v46;
                while ( 1 )
                {
                  v61 = 104LL * v59;
                  if ( *(_QWORD *)(v61 + v60 + 40) )
                  {
                    if ( *(_DWORD *)(v61 + v60 + 56) && !*(_DWORD *)(v61 + v60 + 80) )
                      break;
                  }
                  if ( ++v59 >= v44 )
                    goto LABEL_110;
                }
                v45 = 0;
              }
              else
              {
LABEL_110:
                v45 = 1;
              }
              *(_BYTE *)(v27 + 392) = v45;
            }
            v21 = v76;
            if ( !v45 )
            {
              v21 = *(_QWORD *)(v27 + 400);
              v76 = v21;
            }
LABEL_41:
            if ( *(_QWORD *)(v27 + 400) > *(_QWORD *)(v6 + 384) )
            {
              if ( v26 )
                --v26;
              else
                v26 = 299;
              if ( v26 != *(_DWORD *)(v6 + 360) )
                continue;
            }
            v22 = v6 + 344;
            break;
          }
        }
        v28 = DirectComposition::CConnection::CFrameStats::SetCurrentStats(
                (DirectComposition::CConnection::CFrameStats *)(v6 + 464LL * *(unsigned int *)(v6 + 360) + 392),
                (struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)&v78);
        if ( v21 )
        {
          v29 = v21 - 1;
        }
        else
        {
          v29 = *(_QWORD *)(v6 + 376);
          if ( !v28 )
            --v29;
        }
        *(_QWORD *)(v6 + 384) = v29;
        v30 = *(_QWORD *)(v6 + 184);
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
        if ( *(_BYTE *)(v22 + 8) )
          ExReleasePushLockExclusiveEx(v22, 0LL);
        else
          ExReleasePushLockSharedEx(v22, 0LL);
        v31 = *(struct _ERESOURCE **)(v6 + 8);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v31, 1u);
        v32 = *(__int64 **)(v6 + 120);
        *(_QWORD *)(v6 + 120) = 0LL;
        *(_QWORD *)(v6 + 128) = 0LL;
        if ( v32 )
        {
          do
          {
            v62 = (__int64 *)*v32;
            v77 = (__int64 *)*v32;
            *((_BYTE *)v32 + 32) &= ~2u;
            v63 = *((_DWORD *)v32 + 28);
            if ( v63 )
            {
              DirectComposition::CConnection::ReleaseShellResourceAccess(
                *(DirectComposition::CConnection **)(v32[1] + 40),
                v63);
              *((_DWORD *)v32 + 28) = 0;
            }
            if ( (v32[4] & 4) == 0 )
              DirectComposition::CApplicationChannel::NotifyBatchProcessed(
                (DirectComposition::CApplicationChannel *)v32[1],
                (struct DirectComposition::CBatch *)v32);
            v64 = v32[1];
            v65 = (void *)v32[12];
            if ( v65 )
              ObfDereferenceObject(v65);
            v32[12] = 0LL;
            *((_BYTE *)v32 + 32) &= ~0x20u;
            if ( *((_DWORD *)v32 + 5) == 6 )
            {
              v67 = *(_DWORD *)(v64 + 28);
              v68 = *(_QWORD *)(v64 + 40);
              v69 = *(struct _ERESOURCE **)(v68 + 72);
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite(v69, 1u);
              DirectComposition::CLinearObjectTableBase::ReleaseHandle(
                (DirectComposition::CLinearObjectTableBase *)(v68 + 16),
                v67);
              ExReleaseResourceLite(*(PERESOURCE *)(v68 + 72));
              KeLeaveCriticalRegion();
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v32);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 32LL))(v64, 1LL);
              v62 = v77;
            }
            else
            {
              *(_DWORD *)(v64 + 388) = *((_DWORD *)v32 + 4);
              *(_QWORD *)&v82 = *((unsigned int *)v32 + 4);
              *((_QWORD *)&v82 + 1) = v32[7];
              *(_OWORD *)(v64 + 16 * (v82 & 0x7F) + 536) = v82;
              v66 = *(_QWORD *)(v64 + 360);
              if ( v66 && !*(_QWORD *)(v64 + 368) )
                KeSetEvent(*(PRKEVENT *)(v66 + 8), 1, 0);
              if ( (v32[4] & 8) != 0 )
                *(_BYTE *)(v64 + 242) = 0;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v64 + 192), (PSLIST_ENTRY)v32);
              KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v64 + 216) + 8LL), 1, 0);
            }
            v32 = v62;
          }
          while ( v62 );
        }
        v33 = *(struct _ERESOURCE **)(v6 + 72);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v33, 1u);
        v34 = 0LL;
        v35 = (_QWORD *)(v6 + 48);
        while ( 1 )
        {
          v36 = v34;
          v37 = *(_QWORD *)(v6 + 40);
          if ( v34 < v37 )
          {
            v38 = (_QWORD *)(*(_QWORD *)(v6 + 16) + v34 * *v35);
            do
            {
              if ( *v38 )
                break;
              ++v36;
              v38 = (_QWORD *)((char *)v38 + *v35);
            }
            while ( v36 < v37 );
          }
          if ( v36 >= v37 )
          {
            v39 = 0LL;
            v35 = (_QWORD *)(v6 + 48);
          }
          else
          {
            _mm_lfence();
            v34 = v36 + 1;
            v39 = *(_QWORD *)(*v35 * v36 + *(_QWORD *)(v6 + 16));
            v20 = v78;
          }
          if ( !v39 )
            break;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v39 + 16LL))(v39, v20);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 72));
        KeLeaveCriticalRegion();
        for ( i = *(_QWORD **)(v6 + 192); i != (_QWORD *)(v6 + 192); i = (_QWORD *)*i )
        {
          if ( i[6] )
          {
            v70 = *(_QWORD *)(i[2] + 16LL);
            if ( v70 )
              MmUnmapViewOfSection(v70);
            i[6] = 0LL;
          }
          i[4] = 0LL;
          i[5] = 0LL;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 8));
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'((DirectComposition::CConnection *)v6);
        v5 = 0LL;
        v8 = v72;
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_68;
  }
  v8 = -1073741811;
LABEL_68:
  if ( v5 )
  {
    if ( v5 != v97 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
  return (unsigned int)v8;
}
