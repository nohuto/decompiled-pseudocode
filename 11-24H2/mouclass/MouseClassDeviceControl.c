/*
 * XREFs of MouseClassDeviceControl @ 0x1C000F310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C0004620 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C000645C (WPP_RECORDER_SF_qqLd.c)
 */

__int64 __fastcall MouseClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // r13
  struct _IO_REMOVE_LOCK *v6; // r14
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rax
  ULONG RemlockSize; // [rsp+20h] [rbp-58h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v2 + 184);
  v6 = (struct _IO_REMOVE_LOCK *)(v4 + 32);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), (PVOID)v2, File, 1u, 0x20u);
  v11 = v7;
  if ( v7 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v7;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 24);
  v12 = *(_DWORD *)(v5 + 24);
  if ( v12 != 721512 )
  {
    if ( v12 <= 0xF0000 )
    {
      if ( v12 != 983040 )
      {
        switch ( v12 )
        {
          case 0xB0190u:
          case 0xB0191u:
          case 0xB0192u:
          case 0xB0193u:
          case 0xB0194u:
          case 0xB0197u:
          case 0xB0198u:
          case 0xB019Au:
          case 0xB019Cu:
          case 0xB019Eu:
          case 0xB01A0u:
          case 0xB01A4u:
          case 0xB01A8u:
          case 0xB01BAu:
          case 0xB01BEu:
          case 0xB01C2u:
          case 0xB01E2u:
            goto LABEL_8;
          default:
            goto LABEL_20;
        }
      }
      v17 = *(_DWORD *)(v5 + 16);
      if ( v17 )
      {
        if ( v17 < 2 )
        {
          v13 = -1073741789;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, RemlockSize);
          goto LABEL_21;
        }
        v18 = **(unsigned __int16 **)(v2 + 24);
      }
      else
      {
        v18 = 0LL;
      }
      if ( *(_QWORD *)v4 == *(_QWORD *)(v4 + 8) )
      {
        if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        {
          ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= (unsigned int)v18 )
            goto LABEL_45;
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
          {
            if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v18 + 16)
              || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v18 + 19) )
            {
              v18 = 0LL;
            }
            while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v18 + 16)
                 || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v18 + 19) )
            {
              if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= (unsigned int)v18 )
                goto LABEL_45;
              v18 = (unsigned int)(v18 + 1);
            }
          }
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= (unsigned int)v18 )
          {
LABEL_45:
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            v13 = -1073741811;
            goto LABEL_21;
          }
          _mm_lfence();
          v4 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v18 + 1);
          *(_QWORD *)(v5 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v18);
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
        v19 = *(_QWORD *)(v2 + 184);
        *(_OWORD *)(v19 - 72) = *(_OWORD *)v19;
        *(_OWORD *)(v19 - 56) = *(_OWORD *)(v19 + 16);
        *(_OWORD *)(v19 - 40) = *(_OWORD *)(v19 + 32);
        *(_QWORD *)(v19 - 24) = *(_QWORD *)(v19 + 48);
        *(_BYTE *)(v19 - 69) = 0;
        *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
        goto LABEL_11;
      }
      v13 = -1073741637;
LABEL_21:
      *(_DWORD *)(v2 + 48) = v13;
      *(_QWORD *)(v2 + 56) = 0LL;
      IofCompleteRequest((PIRP)v2, 0);
      goto LABEL_12;
    }
    v16 = v12 - 2703680;
    if ( v16 )
    {
      if ( v16 != 4 )
      {
LABEL_20:
        v13 = -1073741808;
        goto LABEL_21;
      }
    }
  }
LABEL_8:
  if ( !*(_BYTE *)(v4 + 64) || v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    goto LABEL_20;
  ++*(_BYTE *)(v2 + 67);
  *(_QWORD *)(v2 + 184) += 72LL;
LABEL_11:
  v13 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), (PIRP)v2);
LABEL_12:
  IoReleaseRemoveLockEx(v6, (PVOID)v2, 0x20u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 4LL);
    }
  }
  return v13;
}
