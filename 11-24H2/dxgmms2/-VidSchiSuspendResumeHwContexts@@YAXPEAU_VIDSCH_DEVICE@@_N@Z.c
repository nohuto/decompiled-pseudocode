/*
 * XREFs of ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14001F968
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x14001EEF8 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSuspendResumeHwContext @ 0x140020730 (VidSchiSuspendResumeHwContext.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400B5974 (VidSchRegisterCompletionEvent.c)
 *     VidSchUnregisterCompletionEvent @ 0x1401007DC (VidSchUnregisterCompletionEvent.c)
 */

void __fastcall VidSchiSuspendResumeHwContexts(struct _VIDSCH_DEVICE *a1, char a2)
{
  __int64 v2; // rsi
  int v4; // eax
  char v5; // r14
  __int64 *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  int v12; // eax
  _QWORD **v13; // [rsp+28h] [rbp-A9h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-A1h]
  _QWORD v15[4]; // [rsp+38h] [rbp-99h] BYREF
  __int16 v16; // [rsp+58h] [rbp-79h]
  _QWORD v17[20]; // [rsp+68h] [rbp-69h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  if ( !*((_BYTE *)a1 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)a1 + 50, 0, 0)
    && !*(_DWORD *)(v2 + 3244) )
  {
    v4 = *((_DWORD *)a1 + 414);
    v5 = 0;
    if ( a2 ? v4 <= 1 : v4 <= 0 )
    {
      v16 = 0;
      v14 = (__int64 *)&v13;
      v13 = &v13;
      v15[0] = v2 + 1984;
      AcquireSpinLock::Acquire((AcquireSpinLock *)v15);
      v7 = (__int64 *)*((_QWORD *)a1 + 11);
      if ( v7 != (__int64 *)((char *)a1 + 88) )
      {
        v10 = v14;
        do
        {
          if ( !*((_DWORD *)v7 + 14) )
          {
            v11 = v7 - 2;
            if ( (_QWORD ***)*v10 != &v13 )
LABEL_19:
              __fastfail(3u);
            v11[1] = (__int64)v10;
            *v11 = (__int64)&v13;
            *v10 = (__int64)v11;
            v10 = v7 - 2;
            v14 = v7 - 2;
          }
          v7 = (__int64 *)*v7;
        }
        while ( v7 != (__int64 *)((char *)a1 + 88) );
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v15);
      while ( 1 )
      {
        v8 = v13;
        if ( v13[1] != &v13 )
          goto LABEL_19;
        v9 = (__int64)*v13;
        if ( (_QWORD **)(*v13)[1] != v13 )
          goto LABEL_19;
        v13 = (_QWORD **)*v13;
        *(_QWORD *)(v9 + 8) = &v13;
        if ( v8 == &v13 )
          break;
        v12 = VidSchiSuspendResumeHwContext(v8 - 30);
        *v8 = 0LL;
        if ( v12 == 259 )
          v5 = 1;
        v8[1] = 0LL;
      }
      if ( v5 )
      {
        memset(v17, 0, sizeof(v17));
        LODWORD(v17[2]) = 6;
        v17[3] = a1;
        VidSchRegisterCompletionEvent(v2, v17);
        while ( !VidSchiIsDeviceSuspended(a1) && (int)VidSchWaitForCompletionEvent(v2, v17, 83LL) >= 0 )
          ;
        VidSchUnregisterCompletionEvent(v2, v17);
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v15);
    }
  }
}
