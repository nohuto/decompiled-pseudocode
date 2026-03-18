/*
 * XREFs of SetHandleFlag @ 0x1400DDD30
 * Callers:
 *     CloseProtectedHandle @ 0x1400DDCE8 (CloseProtectedHandle.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(__int64 a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  ULONG v11; // eax
  __int64 v12; // rax
  ULONG *v14; // rax
  ULONG *v15; // r14
  const void *v16; // rdx

  v4 = 1;
  v5 = a2 + 2 * ((unsigned int)a1 >> 2) + ((unsigned int)a1 >> 2);
  UserSessionState = W32GetUserSessionState(a1);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 19864));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
  {
    v10 = (unsigned int *)(CurrentProcessWin32Process + 712);
    v11 = *(_DWORD *)(CurrentProcessWin32Process + 712);
    if ( a3 )
    {
      if ( v5 >= v11 )
      {
        v14 = (ULONG *)Win32AllocPoolWithQuotaZInitImpl(
                         v9,
                         (unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3,
                         0x69707355u);
        v15 = v14;
        if ( !v14 )
        {
          v4 = 0;
          goto LABEL_6;
        }
        v16 = (const void *)*((_QWORD *)v10 + 1);
        if ( v16 )
        {
          memmove(v14, v16, (unsigned __int64)*v10 >> 3);
          GreDeleteFastMutex(*((char **)v10 + 1));
        }
        RtlInitializeBitMap((PRTL_BITMAP)v10, v15, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits((PRTL_BITMAP)v10, v5, 1u);
    }
    else if ( v5 < v11 )
    {
      RtlClearBits((PRTL_BITMAP)v10, v5, 1u);
    }
  }
LABEL_6:
  v12 = W32GetUserSessionState(v9);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v12 + 19864));
  return v4;
}
