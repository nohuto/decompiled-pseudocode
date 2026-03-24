/*
 * XREFs of KeyboardClassDeviceControl @ 0x1C000EF40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00044A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C0004980 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0004D60 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qqdL @ 0x1C0005380 (WPP_RECORDER_SF_qqdL.c)
 *     KeyboardCallAllPorts @ 0x1C0005AC0 (KeyboardCallAllPorts.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C0006D60 (WPP_RECORDER_SF_qqdd.c)
 */

__int64 __fastcall KeyboardClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  struct _IO_REMOVE_LOCK *v7; // r14
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // esi
  IRP *v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // r8
  unsigned int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  unsigned int *Pool2; // rax
  unsigned int *v23; // rdi
  PDRIVER_CONTROL DeviceRoutine; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]
  unsigned int v30; // [rsp+80h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(v2 + 184);
  v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, File, 1u, 0x20u);
  v11 = v8;
  if ( v8 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v8;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 4u, 0x15u, RemlockSize);
  v12 = *(_DWORD *)(v6 + 24);
  if ( v12 == 721512 )
    goto LABEL_8;
  if ( v12 > 0xB0190 )
  {
    if ( v12 <= 0xB1000 )
    {
      if ( v12 != 724992 )
      {
        v9 = 0x1C0000000uLL;
        switch ( v12 )
        {
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
          case 0xB0200u:
            break;
          default:
            goto LABEL_37;
        }
      }
    }
    else if ( v12 != 724996 )
    {
      if ( v12 != 2703680 && v12 != 2703684 )
      {
LABEL_37:
        v14 = -1073741808;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdL(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v9,
            (__int64)&WPP_RECORDER_INITIALIZED,
            v10,
            RemlockSize);
        goto LABEL_39;
      }
LABEL_8:
      if ( *(_BYTE *)(v5 + 64) && v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      {
        ++*(_BYTE *)(v2 + 67);
        v13 = (IRP *)v2;
        *(_QWORD *)(v2 + 184) += 72LL;
LABEL_11:
        v14 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), v13);
        goto LABEL_12;
      }
      goto LABEL_37;
    }
  }
  else
  {
    if ( v12 == 721296 )
      goto LABEL_8;
    v9 = 0x1C0000000uLL;
    switch ( v12 )
    {
      case 0xB0000u:
      case 0xB0020u:
      case 0xB0040u:
      case 0xB0080u:
        break;
      case 0xB0004u:
        goto LABEL_20;
      case 0xB0008u:
        if ( *(_DWORD *)(v6 + 16) < 4u )
        {
          v14 = -1073741789;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqLd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              (__int64)&WPP_RECORDER_INITIALIZED,
              0x16u,
              RemlockSize);
          goto LABEL_39;
        }
        *(_DWORD *)(v5 + 156) = **(_DWORD **)(v2 + 24);
LABEL_20:
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
          v4 = 1;
        break;
      default:
        goto LABEL_37;
    }
  }
  v17 = *(_DWORD *)(v6 + 16);
  v18 = 0;
  if ( v17 )
  {
    if ( v17 < 2 )
    {
      v14 = -1073741789;
      goto LABEL_39;
    }
    v30 = **(unsigned __int16 **)(v2 + 24);
  }
  else
  {
    v30 = 0;
  }
  if ( *(_QWORD *)v5 == *(_QWORD *)(v5 + 8) )
  {
    if ( v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v4 = 0;
      goto LABEL_28;
    }
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v20 = v30;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v30 )
      goto LABEL_43;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v30 + 16)
        || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v30 + 19) )
      {
        v20 = 0;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= v20 )
      {
LABEL_43:
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        v14 = -1073741811;
        goto LABEL_39;
      }
      while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v20 + 16)
           || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v20 + 19) )
      {
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= ++v20 )
          goto LABEL_43;
      }
    }
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > v20 )
    {
      _mm_lfence();
      v5 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v20 + 1);
      *(_QWORD *)(v6 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v20);
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
LABEL_28:
      v19 = *(_QWORD *)(v2 + 184);
      v13 = (IRP *)v2;
      *(_OWORD *)(v19 - 72) = *(_OWORD *)v19;
      *(_OWORD *)(v19 - 56) = *(_OWORD *)(v19 + 16);
      *(_OWORD *)(v19 - 40) = *(_OWORD *)(v19 + 32);
      *(_QWORD *)(v19 - 24) = *(_QWORD *)(v19 + 48);
      *(_BYTE *)(v19 - 69) = 0;
      *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
      if ( v4 )
      {
        if ( IoAcquireRemoveLockEx(v7, (PVOID)v2, File, 1u, 0x20u) < 0
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 4u, 0x17u, RemlockSize);
        }
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        Pool2 = (unsigned int *)ExAllocatePool2(
                                  64LL,
                                  24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 8,
                                  1130652235LL);
        v23 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
          Pool2[1] = 0;
          if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
          {
            do
            {
              DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
              v25 = 3LL * v18;
              *(_OWORD *)&v23[2 * v25 + 2] = *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v18);
              *(_QWORD *)&v23[2 * v25 + 6] = *((_QWORD *)DeviceRoutine + 3 * v18 + 2);
              if ( LOBYTE(v23[6 * v18 + 6])
                && !HIBYTE(v23[6 * v18 + 6])
                && IoAcquireRemoveLockEx(
                     (PIO_REMOVE_LOCK)(*(_QWORD *)&v23[6 * v18 + 4] + 32LL),
                     (PVOID)v2,
                     File,
                     1u,
                     0x20u) < 0
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_qqdd((__int64)WPP_GLOBAL_Control->DeviceExtension, v26, v27, v28, RemlockSize);
              }
              ++v18;
            }
            while ( v18 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
          }
          v14 = KeyboardCallAllPorts(a1, (IRP *)v2, v23);
        }
        else
        {
          v14 = -1073741670;
          *(_QWORD *)(v2 + 56) = 0LL;
          *(_DWORD *)(v2 + 48) = -1073741670;
          IofCompleteRequest((PIRP)v2, 0);
        }
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    goto LABEL_43;
  }
  v14 = -1073741637;
LABEL_39:
  *(_DWORD *)(v2 + 48) = v14;
  *(_QWORD *)(v2 + 56) = 0LL;
  IofCompleteRequest((PIRP)v2, 0);
LABEL_12:
  IoReleaseRemoveLockEx(v7, (PVOID)v2, 0x20u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v15, 0x1Au, RemlockSize);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v21) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v21, 4LL);
      }
    }
  }
  return v14;
}
