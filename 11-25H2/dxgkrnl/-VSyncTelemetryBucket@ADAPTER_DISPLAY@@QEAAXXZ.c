/*
 * XREFs of ?VSyncTelemetryBucket@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14006790C
 * Callers:
 *     ?VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z @ 0x140067CB0 (-VSyncTelemetryTimerDpc@ADAPTER_DISPLAY@@SAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U_tlgWrapperBinary@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@555AEBU_tlgWrapperBinary@@6@Z @ 0x14000286C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall ADAPTER_DISPLAY::VSyncTelemetryBucket(ADAPTER_DISPLAY *this)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // eax
  char v4; // r14
  _DWORD *v5; // rdx
  char *v6; // rbx
  int v7; // r10d
  int v8; // r8d
  __int64 v9; // r10
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r11d
  __int64 v16; // rcx
  __int16 v17; // ax
  int v18; // eax
  void *v19; // rcx
  void *v20; // rcx
  int v21; // [rsp+70h] [rbp-39h] BYREF
  int v22; // [rsp+74h] [rbp-35h] BYREF
  int v23; // [rsp+78h] [rbp-31h] BYREF
  __int64 v24; // [rsp+80h] [rbp-29h] BYREF
  __int64 v25; // [rsp+88h] [rbp-21h] BYREF
  __int16 v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h] BYREF
  __int16 v28; // [rsp+A0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-1h] BYREF
  __int16 v30; // [rsp+110h] [rbp+67h] BYREF
  __int16 v31; // [rsp+118h] [rbp+6Fh] BYREF
  __int16 v32; // [rsp+120h] [rbp+77h] BYREF
  int v33; // [rsp+128h] [rbp+7Fh] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)this + 2) + 4384LL), &LockHandle);
  v3 = *((_DWORD *)this + 184) + 1;
  *((_DWORD *)this + 184) = v3;
  if ( v3 >= 0x384 || (v4 = 0, (unsigned int)(v2 - *((_DWORD *)this + 185)) > 0xE10) )
    v4 = 1;
  v5 = (_DWORD *)*((_QWORD *)this + 128);
  v6 = (char *)this + 80;
  if ( v5 )
  {
    v7 = *((_DWORD *)this + 246);
    v8 = *((_DWORD *)this + 244);
    if ( v7 == v8 )
    {
      if ( !*((_DWORD *)this + 238) )
      {
LABEL_14:
        v6 = (char *)this + 80;
        goto LABEL_15;
      }
      if ( !v8 )
      {
        *v5 &= 0xFC03FFFF;
        **((_DWORD **)this + 128) ^= (*((_DWORD *)this + 184) ^ **((_DWORD **)this + 128)) & 0x3FFFF;
        *((_DWORD *)this + 245) = 1;
        goto LABEL_14;
      }
      v9 = *((unsigned int *)this + 245);
      v10 = v5[(unsigned int)(v9 - 1)];
      if ( (v10 & 0x3FC0000) == 0 )
      {
        v5[(unsigned int)(v9 - 1)] = v10 ^ (v10 ^ (v10 + 1)) & 0x3FFFF;
        goto LABEL_14;
      }
      v5[v9] &= 0xFC03FFFF;
      *(_DWORD *)(*((_QWORD *)this + 128) + 4LL * *((unsigned int *)this + 245)) = *(_DWORD *)(*((_QWORD *)this + 128)
                                                                                             + 4LL
                                                                                             * *((unsigned int *)this
                                                                                               + 245)) & 0xFFFC0000 | 1;
    }
    else
    {
      v5[*((unsigned int *)this + 245)] ^= (v5[*((unsigned int *)this + 245)] ^ ((v8 - v7) << 18)) & 0x3FC0000;
      *(_DWORD *)(*((_QWORD *)this + 128) + 4LL * *((unsigned int *)this + 245)) ^= (*((_DWORD *)this + 247) ^ *(_DWORD *)(*((_QWORD *)this + 128) + 4LL * *((unsigned int *)this + 245))) & 0x3FFFF;
      *((_QWORD *)this + 123) = *((unsigned int *)this + 244);
    }
    ++*((_DWORD *)this + 245);
    goto LABEL_14;
  }
LABEL_15:
  if ( !v4 )
    goto LABEL_34;
  if ( *((_DWORD *)this + 244) )
    goto LABEL_19;
  if ( *((_DWORD *)this + 243) )
  {
    v6 = (char *)this + 80;
LABEL_19:
    if ( (unsigned int)dword_14015B5F0 > 4 && tlgKeywordOn((__int64)&dword_14015B5F0, 0x400000002000LL) )
    {
      if ( v12 > 5 && tlgKeywordOn((__int64)&dword_14015B5F0, v11) )
      {
        v16 = *((_QWORD *)this + 128);
        if ( v16 )
          v17 = 4 * *((_WORD *)this + 490);
        else
          v17 = 0;
        v26 = v17;
        v27 = *((_QWORD *)this + 127);
        v25 = v16;
        v22 = v15;
        v31 = 1;
        v28 = v27 != 0 ? 0x180 : 0;
        v18 = 2 * *((_DWORD *)this + 248);
        v24 = 0x1000000LL;
        v33 = v18;
        v21 = *((_DWORD *)this + 243);
        v23 = v2 - *((_DWORD *)this + 185);
        v30 = *((_WORD *)this + 482);
        v32 = 2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
          v16,
          (__int64)&unk_140139525,
          v13,
          v14,
          (__int64)&v24,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v33,
          &v27,
          &v25);
      }
      v6 = (char *)this + 80;
    }
  }
  v19 = (void *)*((_QWORD *)this + 127);
  if ( v19 )
    memset(v19, 0, 0x180uLL);
  v20 = (void *)*((_QWORD *)this + 128);
  if ( v20 )
    memset(v20, 0, 4LL * *((unsigned int *)v6 + 225));
  ++*((_DWORD *)v6 + 221);
  *(_QWORD *)(v6 + 892) = 0LL;
  *(_QWORD *)(v6 + 900) = 0LL;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 185) = v2;
LABEL_34:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
