/*
 * XREFs of KseRegisterShimEx @ 0x140732BD0
 * Callers:
 *     KseRegisterShim @ 0x140732BB0 (KseRegisterShim.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x14048E720 (KsepLogInfo.c)
 *     KsepLogError @ 0x14048E750 (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404A0CB0 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A64EC (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     KsepValidateShimProviderAndData @ 0x1407332B0 (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x140734060 (KsepGetLoadedModulesList.c)
 *     KsepIsShimRegistered @ 0x140AB1ADC (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  __int64 v9; // rax
  _QWORD *Paged; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // r14
  unsigned int **v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // rax
  unsigned int **v18; // rdi
  __int64 v19; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v21; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140E66814 != 2 )
    return 3221225473LL;
  v21 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v21);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v21, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v12 = KeAbPreAcquire((__int64)&qword_140E66840, 0LL);
        v14 = v12;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66840, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140E66840, v12, (__int64)&qword_140E66840);
        if ( v14 )
          *((_BYTE *)v14 + 10) = 1;
        v15 = (unsigned int **)(a1 + 8);
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v13, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66840);
          KeAbPostRelease((ULONG_PTR)&qword_140E66840);
          KeLeaveCriticalRegion();
          LoadedModulesList = -1073741771;
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0ECA4[2 * v16] = -1073741771;
          KsepHistoryErrors[2 * v16] = 131310;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(2LL, (int)"KSE: Attempt to re-register shim [0x%08X]\n", **v15);
          KsepLogError(2LL, (__int64)"KSE: Attempt to re-register shim [0x%08X]\n", **v15);
          KsepPoolFreePaged(Paged);
        }
        else
        {
          *((_DWORD *)Paged + 6) = 0;
          Paged[2] = a1;
          *((_DWORD *)Paged + 7) = a3;
          Paged[4] = a4;
          v17 = (_QWORD *)qword_140E66828;
          if ( *(_UNKNOWN **)qword_140E66828 != &unk_140E66820 )
            __fastfail(3u);
          *Paged = &unk_140E66820;
          Paged[1] = v17;
          *v17 = Paged;
          qword_140E66828 = (__int64)Paged;
          v18 = (unsigned int **)(a1 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66840);
            v18 = (unsigned int **)(a1 + 8);
          }
          KeAbPostRelease((ULONG_PTR)&qword_140E66840);
          KeLeaveCriticalRegion();
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_140E66848;
          v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v19]) = 0;
          LODWORD(KsepHistoryMessages[v19]) = 131353;
          if ( (KsepDebugFlag & 1) != 0 )
          {
            KsepDebugPrint(2LL, (int)"KSE: Succeeded shim [0x%08X] registration\n", **v15);
            v15 = v18;
          }
          KsepLogInfo(2LL, (__int64)"KSE: Succeeded shim [0x%08X] registration\n", **v15);
        }
      }
      else
      {
        LoadedModulesList = -1073741670;
      }
    }
    else
    {
      LoadedModulesList = -1073741823;
      v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140F0ECA4[2 * v9] = -1073741823;
      KsepHistoryErrors[2 * v9] = 131277;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, (int)"KSE: Shim [0x%08X] is not valid\n", **(unsigned int **)(a1 + 8));
      KsepLogError(2LL, (__int64)"KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v21 )
    KsepPoolFreePaged(v21);
  return (unsigned int)LoadedModulesList;
}
