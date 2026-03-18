/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x140115870
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiAcceptsIncomingWork @ 0x140028DE0 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiIsFlipQueueBusy @ 0x140034480 (VidSchiIsFlipQueueBusy.c)
 *     VidSchIsTDRPending @ 0x1400362C0 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     VidSchiCheckHwProgress @ 0x1400AD870 (VidSchiCheckHwProgress.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(struct _VIDSCH_GLOBAL *a1)
{
  struct _KEVENT *v2; // r15
  __int64 *v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // edi
  __int64 v6; // rbp
  int v7; // eax
  bool v8; // si
  char IsFlipQueueBusy; // bp
  union _LARGE_INTEGER *Timeout; // r9
  ULONG v11; // r10d
  LARGE_INTEGER v12; // r8
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned int v16; // r10d
  unsigned int i; // edx
  __int64 *v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  struct _KEVENT *v30; // rcx
  _BYTE v32[8]; // [rsp+40h] [rbp-88h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-68h] BYREF
  char *v36; // [rsp+70h] [rbp-58h]
  PVOID Object[2]; // [rsp+78h] [rbp-50h] BYREF
  __int128 v38; // [rsp+88h] [rbp-40h]

  v35[0] = (char *)a1 + 1504;
  v2 = (struct _KEVENT *)((char *)a1 + 1448);
  v35[1] = (char *)a1 + 1448;
  v36 = (char *)a1 + 1616;
  while ( 1 )
  {
    v3 = v35;
    v4 = VidSchiAcceptsIncomingWork((__int64)a1) + 1;
    v5 = 0;
    while ( 1 )
    {
      v6 = *v3;
      *(_QWORD *)(v6 + 48) = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent((PRKEVENT)v6) )
        break;
      ++v5;
      ++v3;
      if ( v5 >= v4 )
        goto LABEL_7;
    }
    *(_QWORD *)(v6 + 40) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)v6);
LABEL_7:
    if ( v5 == v4 )
    {
      VidSchiProfilePerformanceTick(14, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        if ( (*((_DWORD *)a1 + 698) & 2) != 0 )
          ExReleaseResourceLite((PERESOURCE)((char *)a1 + 1136));
        do
        {
          v7 = *((_DWORD *)a1 + 196);
          v34[0] = 0LL;
          v8 = v7 || *((_DWORD *)a1 + 17) || *((_DWORD *)a1 + 18);
          IsFlipQueueBusy = VidSchiIsFlipQueueBusy((__int64)a1);
          if ( VidSchiAcceptsIncomingWork((__int64)a1) )
          {
            PerformanceFrequency.QuadPart = 0LL;
            v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
            v13 = (unsigned __int64)v12.QuadPart * (unsigned __int128)0x989680uLL;
            v34[1] = *((_QWORD *)&v13 + 1);
            if ( is_mul_ok(v12.QuadPart, 0x989680uLL) )
              v14 = v13 / (unsigned __int64)PerformanceFrequency.QuadPart;
            else
              v14 = 10000000 * (v12.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
                  + 10000000
                  * (v12.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart;
            v15 = -1LL;
            if ( *((_BYTE *)a1 + 3384) )
              v15 = *((_QWORD *)a1 + 421);
            v16 = *((_DWORD *)a1 + 20);
            for ( i = 0; i < v16; ++i )
            {
              if ( i >= *((_DWORD *)a1 + 190) )
                v18 = (__int64 *)*((_QWORD *)a1 + 86);
              else
                v18 = (__int64 *)(*((_QWORD *)a1 + 86) + 8LL * i);
              v19 = *v18;
              v20 = *(_QWORD *)(v19 + 128);
              if ( v20 && v15 >= v20 )
                v15 = *(_QWORD *)(v19 + 128);
            }
            if ( (v8 || IsFlipQueueBusy) && v15 >= v14 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
              v15 = v14 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
            v11 = 3;
            if ( v15 == -1LL )
            {
              Timeout = 0LL;
              *((_BYTE *)a1 + 772) = 1;
            }
            else
            {
              Timeout = (union _LARGE_INTEGER *)v34;
              v21 = v14 - v15;
              if ( v15 <= v14 )
                v21 = 0LL;
              v34[0] = v21;
              *((_BYTE *)a1 + 772) = 0;
            }
          }
          else
          {
            Timeout = 0LL;
            v11 = 1;
            *((_BYTE *)a1 + 772) = 0;
          }
          v22 = v11;
          *(_OWORD *)Object = 0LL;
          v23 = 0LL;
          v38 = 0LL;
          v24 = MEMORY[0xFFFFF78000000320];
          do
          {
            v25 = (_QWORD *)v35[v23++];
            v25[3] = v24;
            Object[v23 - 1] = v25;
            --v22;
          }
          while ( v22 );
          v26 = KeWaitForMultipleObjects(v11, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          *((_BYTE *)a1 + 772) = 0;
          v5 = v26;
        }
        while ( v26 > 1 && v26 != 258 );
        if ( (*((_DWORD *)a1 + 698) & 2) != 0 )
          ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1136), 1u);
        v32[0] = 0;
        if ( v5 != 258 || !(unsigned int)VidSchiCheckHwProgress((__int64)a1, v32) )
          break;
        if ( v32[0] )
        {
          v5 = 1;
          break;
        }
      }
      VidSchiProfilePerformanceTick(15, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v5 )
      break;
    v27 = *((_DWORD *)a1 + 93);
    if ( *((_DWORD *)a1 + 92) != v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            *((_DWORD *)a1 + 811) = 3;
            VidSchFlushAdapter(a1, 17);
            *((_DWORD *)a1 + 92) = 3;
            v30 = (struct _KEVENT *)((char *)a1 + 1560);
            *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
LABEL_60:
            KeSetEvent(v30, 0, 0);
          }
        }
        else
        {
          VidSchTerminateAdapter(a1);
        }
      }
      else
      {
        *((_DWORD *)a1 + 92) = 1;
        *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)a1 + 65, 0, 0);
        if ( *((_DWORD *)a1 + 195) )
        {
          *((_QWORD *)a1 + 185) = MEMORY[0xFFFFF78000000320];
          v30 = v2;
          goto LABEL_60;
        }
      }
    }
    if ( VidSchIsTDRPending((__int64)a1) )
      return 258LL;
  }
  if ( VidSchIsTDRPending((__int64)a1) )
    return 258;
  return v5;
}
