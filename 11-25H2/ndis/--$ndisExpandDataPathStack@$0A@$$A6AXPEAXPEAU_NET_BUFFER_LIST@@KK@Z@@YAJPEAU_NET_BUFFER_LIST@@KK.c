/*
 * XREFs of ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x14003CA30
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14001F9A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 * Callees:
 *     PktMonClientNblLogNdis @ 0x14003BE50 (PktMonClientNblLogNdis.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall ndisExpandDataPathStack<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(__int64, __int64, _QWORD, _QWORD))
{
  unsigned __int64 v7; // rdi
  __int64 v10; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 HighLimit; // [rsp+48h] [rbp-40h] BYREF
  _QWORD Parameter[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+70h] [rbp-18h]
  int v22; // [rsp+74h] [rbp-14h]
  unsigned int v23; // [rsp+78h] [rbp-10h]
  int v24; // [rsp+7Ch] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  v7 = (unsigned int)Size;
  v10 = KeGetPcr()->Prcb.Number << 12;
  v12 = *(_QWORD *)(v10 + qword_1401270F8);
  LowLimit = v12;
  v13 = *(_QWORD *)(v10 + qword_1401270F0);
  HighLimit = v13;
  if ( v12 > (unsigned __int64)&retaddr || (unsigned __int64)&retaddr >= v13 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    v12 = LowLimit;
  }
  if ( (unsigned __int64)&retaddr - v12 < v7 )
  {
    Parameter[0] = a5;
    v16 = 24576;
    Parameter[1] = a6;
    Parameter[2] = a7;
    v24 = 0;
    Parameter[3] = a1;
    v22 = 0;
    v21 = a2;
    v23 = a4;
    if ( (unsigned int)Size > 0x6000 )
      v16 = Size;
    return KeExpandKernelStackAndCalloutEx(
             ndisDataPathExpandStackCallback<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>,
             Parameter,
             v16,
             0,
             0LL);
  }
  else
  {
    if ( byte_1401278B0 )
    {
      if ( *(_BYTE *)a5 == 5 )
      {
        v15 = *(_QWORD *)(a5 + 912);
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 56) & 1) != 0 )
            PktMonClientNblLogNdis(a5 + 888, a1, v10, 2);
        }
      }
    }
    if ( ndisVerifierNdisDispatch && *(_BYTE *)a5 == 5 && (v17 = *(_QWORD *)(a5 + 776)) != 0 )
      (*((void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, void (__fastcall *)(__int64, __int64, _QWORD, _QWORD)))ndisVerifierNdisDispatch
       + 10))(
        a6,
        a1,
        a2,
        a4,
        v17,
        a7);
    else
      a7(a6, a1, a2, a4);
    return 0;
  }
}
