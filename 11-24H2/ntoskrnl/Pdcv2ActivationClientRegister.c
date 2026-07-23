/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x14078D88C
 * Callers:
 *     PnpBootPhaseComplete @ 0x140718154 (PnpBootPhaseComplete.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x140760F10 (PopAdaptiveStandbyInitializeActivator.c)
 *     PopInitializeWin32kActivator @ 0x140C304C4 (PopInitializeWin32kActivator.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeInitializeMutex @ 0x140473080 (KeInitializeMutex.c)
 *     PdcInitializeETW @ 0x14060506C (PdcInitializeETW.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x140605350 (Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER.c)
 *     PdcPortOpenCommon @ 0x14078DE74 (PdcPortOpenCommon.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140A45F04 (PdcAcquireRwLockExclusive2.c)
 *     PdcReleaseRwLockExclusive2 @ 0x140A52844 (PdcReleaseRwLockExclusive2.c)
 *     PdcAllocate @ 0x140A71990 (PdcAllocate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(__int64 a1, __int128 *a2, _QWORD *a3)
{
  int v5; // ebp
  unsigned int v6; // edi
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // r15
  struct _KMUTANT *v10; // rdi
  struct _KEVENT *v11; // rax
  struct _KEVENT *v12; // rdi
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+38h] [rbp-30h]
  __int64 (__fastcall *v20)(); // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v5 = a1;
  if ( *(_DWORD *)a2 == 1 && *((_QWORD *)a2 + 1) )
  {
    LOBYTE(a1) = 1;
    v7 = PdcAllocate(a1, 280LL, 843138128LL);
    v8 = (char *)v7;
    if ( v7 )
    {
      v9 = v7 + 8;
      v10 = (struct _KMUTANT *)PdcAllocate(0LL, 56LL, 1281582160LL);
      if ( v10 )
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        KeInitializeMutex(v10, 0);
        *(_QWORD *)v9 = v10;
        PdcAcquireRwLockExclusive2(v9, 0LL);
        v11 = (struct _KEVENT *)PdcAllocate(0LL, 24LL, 1164141648LL);
        v12 = v11;
        if ( v11 )
          KeInitializeEvent(v11, NotificationEvent, 1u);
        *((_QWORD *)v8 + 13) = v12;
        if ( v12 )
        {
          *(_DWORD *)v8 = 843138128;
          *((_DWORD *)v8 + 8) = v5;
          v8[72] = 1;
          *((_QWORD *)v8 + 11) = v8 + 80;
          *((_QWORD *)v8 + 10) = v8 + 80;
          v13 = *a2;
          v20 = Pdcv2pActivationClientCallback;
          *((_OWORD *)v8 + 3) = v13;
          *((_QWORD *)v8 + 8) = *((_QWORD *)a2 + 2);
          v6 = PdcPortOpenCommon(v5, 7, (int)v8, (int)&v20, v17, v18, 0LL, v19, (__int64)(v8 + 40));
          if ( !v6 )
          {
            *a3 = v8;
            PdcInitializeETW(v15, v14);
            Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER((__int64)v8, 0LL);
            PdcReleaseRwLockExclusive2(v9, 0LL);
            return v6;
          }
          SddlpFree(*((_QWORD *)v8 + 13));
        }
        else
        {
          v6 = -1073741670;
        }
        PdcReleaseRwLockExclusive2(v8 + 8, 0LL);
        ExFreePoolWithTag(*((PVOID *)v8 + 1), 0);
        *((_QWORD *)v8 + 1) = 0LL;
      }
      else
      {
        v6 = -1073741801;
      }
      ExFreePoolWithTag(v8, 0);
      return v6;
    }
    return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741584;
  }
}
