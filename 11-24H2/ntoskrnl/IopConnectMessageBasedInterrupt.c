/*
 * XREFs of IopConnectMessageBasedInterrupt @ 0x1409C0F8C
 * Callers:
 *     IoConnectInterruptEx @ 0x1409BFF30 (IoConnectInterruptEx.c)
 * Callees:
 *     HalGetMessageRoutingInfo @ 0x1402B4240 (HalGetMessageRoutingInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopGetInterruptConnectionData @ 0x1409C0224 (IopGetInterruptConnectionData.c)
 *     IoDisconnectInterrupt @ 0x1409C05D0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectMessageBasedInterrupt(
        int a1,
        struct _DEVICE_OBJECT *a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebx
  int v11; // r14d
  unsigned __int8 *v12; // rsi
  unsigned __int8 v13; // r13
  _DWORD *DeviceNode; // rax
  int MessageRoutingInfo; // edi
  NTSTATUS InterruptConnectionData; // eax
  _DWORD *v18; // r12
  unsigned int i; // ecx
  __int64 v20; // rdx
  unsigned __int8 *Pool2; // rax
  __int64 j; // rax
  _OWORD *v23; // r14
  char v24; // al
  __int128 v25; // xmm1
  int v26; // eax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // r15
  __int128 v31; // xmm0
  int v32; // eax
  __int128 v33; // xmm0
  char v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  char v36; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v40; // [rsp+80h] [rbp-80h]
  unsigned __int8 **v41; // [rsp+88h] [rbp-78h]
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-60h]
  _OWORD v44[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v45; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v46[5]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v47; // [rsp+128h] [rbp+28h]

  v7 = 0;
  v41 = a3;
  v40 = a2;
  *a3 = 0LL;
  v39 = a4;
  v38 = 0LL;
  P = 0LL;
  v36 = 0;
  v11 = 0;
  v42 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v43 = 0LL;
  memset(v44, 0, 20);
  memset_0(&v45, 0, 0x60uLL);
  if ( a2 && (DeviceNode = a2->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a4 )
  {
    InterruptConnectionData = IopGetInterruptConnectionData(a2, &P);
    v18 = P;
    MessageRoutingInfo = InterruptConnectionData;
    if ( InterruptConnectionData >= 0 )
    {
      for ( i = 0; i < *(_DWORD *)P; ++i )
      {
        v20 = 88LL * i;
        if ( (unsigned int)(*(_DWORD *)((char *)P + v20 + 8) - 1) <= 2 )
        {
          ++v11;
          if ( a1 == 5 )
          {
            v36 = 1;
          }
          else if ( a1 == 3 )
          {
            if ( a7 )
            {
              if ( a7 < *((_BYTE *)P + v20 + 16) )
                goto LABEL_17;
              v13 = a7;
            }
            else if ( a6 )
            {
              if ( *((_BYTE *)P + v20 + 16) > v13 )
                v13 = *((_BYTE *)P + v20 + 16);
            }
            else
            {
              v13 = 0;
            }
          }
        }
      }
      if ( !v11 )
      {
LABEL_17:
        MessageRoutingInfo = -1073741811;
        goto LABEL_8;
      }
      Pool2 = (unsigned __int8 *)ExAllocatePool2(0x40uLL, (unsigned int)(48 * v11 + 8), 0x6E696F49u);
      v12 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v13;
        for ( j = 0LL; ; j = (unsigned int)((_DWORD)P + 1) )
        {
          LODWORD(P) = j;
          if ( (unsigned int)j >= *v18 )
            break;
          v23 = &v18[22 * j + 2];
          if ( (unsigned int)(*(_DWORD *)v23 - 1) <= 2 )
          {
            if ( v36 )
            {
              v24 = 0;
            }
            else if ( v13 )
            {
              v24 = v13;
            }
            else
            {
              v24 = *((_BYTE *)v23 + 8);
            }
            v25 = v23[1];
            v34 = v24;
            v26 = *((_DWORD *)v12 + 1);
            v46[0] = *v23;
            v27 = v23[2];
            v46[1] = v25;
            v45 = 1;
            v28 = v23[3];
            v46[2] = v27;
            v29 = v23[4];
            v46[3] = v28;
            *(_QWORD *)&v28 = *((_QWORD *)v23 + 10);
            v46[4] = v29;
            v47 = v28;
            MessageRoutingInfo = IopConnectInterrupt(
                                   &v38,
                                   (ULONG_PTR)v40,
                                   0LL,
                                   v39,
                                   a5,
                                   v26,
                                   a6,
                                   v34,
                                   1,
                                   v35,
                                   (__int64)&v45);
            if ( MessageRoutingInfo < 0 )
              goto LABEL_8;
            v30 = 6LL * *((unsigned int *)v12 + 1);
            if ( *(_DWORD *)v23 == 3 )
            {
              v31 = *(_OWORD *)((char *)v23 + 24);
              DWORD2(v42) = *((_DWORD *)v23 + 1);
              v32 = *((_DWORD *)v23 + 18);
              v43 = v31;
              LODWORD(v42) = 0;
              v33 = *(_OWORD *)((char *)v23 + 40);
              LODWORD(v44[0]) = v32;
              *(_OWORD *)((char *)v44 + 4) = v33;
              MessageRoutingInfo = HalGetMessageRoutingInfo((int *)&v42, &v45);
              if ( MessageRoutingInfo < 0 )
                goto LABEL_8;
              v23 = v46;
            }
            *(_QWORD *)&v12[8 * v30 + 8] = *((_QWORD *)v23 + 9);
            *(_DWORD *)&v12[8 * v30 + 32] = *((_DWORD *)v23 + 20);
            *(_QWORD *)&v12[8 * v30 + 16] = *((_QWORD *)v23 + 3);
            *(_QWORD *)&v12[8 * v30 + 24] = v38 + 112;
            *(_DWORD *)&v12[8 * v30 + 36] = *((_DWORD *)v23 + 1);
            v12[8 * v30 + 40] = *((_BYTE *)v23 + 8);
            *(_DWORD *)&v12[8 * v30 + 44] = *((_DWORD *)v23 + 4);
            *(_DWORD *)&v12[8 * v30 + 48] = *((_DWORD *)v23 + 3);
            ++*((_DWORD *)v12 + 1);
          }
        }
        MessageRoutingInfo = 0;
        *v41 = v12;
      }
      else
      {
        MessageRoutingInfo = -1073741670;
      }
    }
LABEL_8:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    if ( MessageRoutingInfo < 0 && v12 )
    {
      if ( *((_DWORD *)v12 + 1) )
      {
        do
          IoDisconnectInterrupt(*(PKINTERRUPT *)&v12[48 * v7++ + 24]);
        while ( v7 < *((_DWORD *)v12 + 1) );
      }
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)MessageRoutingInfo;
}
