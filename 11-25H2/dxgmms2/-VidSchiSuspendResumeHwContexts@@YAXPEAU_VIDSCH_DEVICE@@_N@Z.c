/*
 * XREFs of ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14002BFA8
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x14002BAF0 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x14002A61C (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x14002B380 (VidSchiSuspendResumeHwContext.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400AD5C4 (VidSchRegisterCompletionEvent.c)
 *     VidSchUnregisterCompletionEvent @ 0x140101AB4 (VidSchUnregisterCompletionEvent.c)
 */

void __fastcall VidSchiSuspendResumeHwContexts(struct _VIDSCH_DEVICE *a1, char a2)
{
  __int64 v2; // rsi
  int v5; // eax
  char v6; // r14
  __int64 *v8; // rax
  char *v9; // rdi
  __int64 v10; // rax
  char **v11; // rcx
  char ***v12; // rdx
  int v13; // eax
  char *v14; // [rsp+28h] [rbp-A9h] BYREF
  char **v15; // [rsp+30h] [rbp-A1h]
  _QWORD v16[4]; // [rsp+38h] [rbp-99h] BYREF
  __int16 v17; // [rsp+58h] [rbp-79h]
  _QWORD v18[20]; // [rsp+68h] [rbp-69h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  if ( !*((_BYTE *)a1 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)a1 + 50, 0, 0)
    && !*(_DWORD *)(v2 + 3244) )
  {
    v5 = *((_DWORD *)a1 + 414);
    v6 = 0;
    if ( a2 ? v5 <= 1 : v5 <= 0 )
    {
      v17 = 0;
      v15 = &v14;
      v14 = (char *)&v14;
      v16[0] = v2 + 1984;
      AcquireSpinLock::Acquire((AcquireSpinLock *)v16);
      v8 = (__int64 *)*((_QWORD *)a1 + 11);
      if ( v8 != (__int64 *)((char *)a1 + 88) )
      {
        v11 = v15;
        do
        {
          if ( !*((_DWORD *)v8 + 13) )
          {
            v12 = (char ***)(v8 - 2);
            if ( *v11 != (char *)&v14 )
LABEL_19:
              __fastfail(3u);
            v12[1] = v11;
            *v12 = &v14;
            *v11 = (char *)v12;
            v11 = (char **)(v8 - 2);
            v15 = (char **)(v8 - 2);
          }
          v8 = (__int64 *)*v8;
        }
        while ( v8 != (__int64 *)((char *)a1 + 88) );
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v16);
      while ( 1 )
      {
        v9 = v14;
        if ( *((char ***)v14 + 1) != &v14 )
          goto LABEL_19;
        v10 = *(_QWORD *)v14;
        if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
          goto LABEL_19;
        v14 = *(char **)v14;
        *(_QWORD *)(v10 + 8) = &v14;
        if ( v9 == (char *)&v14 )
          break;
        v13 = VidSchiSuspendResumeHwContext(v9 - 240, a2);
        *(_QWORD *)v9 = 0LL;
        if ( v13 == 259 )
          v6 = 1;
        *((_QWORD *)v9 + 1) = 0LL;
      }
      if ( v6 )
      {
        memset(v18, 0, sizeof(v18));
        LODWORD(v18[2]) = 6;
        v18[3] = a1;
        VidSchRegisterCompletionEvent(v2, v18);
        while ( !VidSchiIsDeviceSuspended(a1) && (int)VidSchWaitForCompletionEvent(v2, v18, 83LL) >= 0 )
          ;
        VidSchUnregisterCompletionEvent(v2, v18);
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v16);
    }
  }
}
