/*
 * XREFs of HamAssociateActivityContext @ 0x18001A630
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x180002D0C (CempLockAcquireExclusive.c)
 *     HampIpcChannelAcquireLock @ 0x1800054D0 (HampIpcChannelAcquireLock.c)
 *     HamFreeBuffer @ 0x1800091E0 (HamFreeBuffer.c)
 *     HampIpcChannelAddCallbackUnsafe @ 0x180009AC0 (HampIpcChannelAddCallbackUnsafe.c)
 *     HampConnectionObjectCreate @ 0x18000C930 (HampConnectionObjectCreate.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000E1D0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18000ED00 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HamAssociateActivityContext(__int64 a1, __int64 *a2, __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v15; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16; // [rsp+38h] [rbp-31h] BYREF
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-19h] BYREF
  _QWORD **v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  __int64 *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  __int64 *v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+98h] [rbp+2Fh]
  int v27; // [rsp+9Ch] [rbp+33h]

  if ( (unsigned int)dword_18002F038 > 5 && (byte_18002F048 & 1) != 0 && (qword_18002F050 & 1) == qword_18002F050 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      a1,
      byte_180028512);
  v15 = 0LL;
  v6 = HampConnectionObjectCreate(a3, a1, &v15);
  if ( v6 >= 0 )
  {
    CempLockAcquireExclusive(a1 + 120);
    v7 = *(_QWORD *)(a1 + 136);
    if ( v7 )
    {
      if ( (unsigned __int64)a2 >= v7 && v7 + 160LL * *(unsigned int *)(a1 + 152) > (unsigned __int64)a2 )
      {
        v8 = *((_DWORD *)a2 + 38);
        if ( (v8 & 1) == 0 )
        {
          *((_DWORD *)a2 + 38) = v8 | 1;
          *(_DWORD *)(a1 + 128) = 0;
          RtlReleaseSRWLockExclusive(a1 + 120);
          v9 = v15;
          v15[6] = *a2;
          v10 = v9[5];
          HampIpcChannelAcquireLock(v10);
          HampIpcChannelAddCallbackUnsafe((__int64)v9, v11, v12);
          *(_DWORD *)(v10 + 16) = 0;
          RtlReleaseSRWLockExclusive(v10 + 8);
          v6 = 0;
          goto LABEL_16;
        }
      }
      v6 = -1073741584;
    }
    else
    {
      v6 = -1073741436;
    }
    *(_DWORD *)(a1 + 128) = 0;
    RtlReleaseSRWLockExclusive(a1 + 120);
  }
  if ( v15 )
    HamFreeBuffer(v15);
LABEL_16:
  if ( (unsigned int)dword_18002F038 > 4 && (byte_18002F048 & 3) != 0 && (qword_18002F050 & 3) == qword_18002F050 )
  {
    v13 = *a2;
    v27 = 0;
    v24 = 0;
    v21 = 0;
    v16 = v13;
    v25 = &v16;
    v22 = &v17;
    v19 = &v15;
    v26 = 8;
    v23 = 8;
    v17 = a1;
    LODWORD(v15) = v6;
    v20 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_18002F038, byte_18002853A, 0LL, 0LL, 5u, &v18);
  }
  return (unsigned int)v6;
}
