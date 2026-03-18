/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x140035038
 * Callers:
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140033450 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048230 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x14001DE44 (XilCommonBuffer_AcquireBufferEx.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x14003F1D8 (CommonBuffer_AcquireSecureBuffer.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x140046D84 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // r12d
  void *v10; // r15
  unsigned int v11; // ebp
  int v12; // ebx
  __int64 *v13; // rsi
  char v14; // cl
  bool v15; // al
  int v16; // edx
  unsigned __int16 v17; // r9
  __int64 Pool2; // rax
  __int64 v20; // rax
  int v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v24 = 0LL;
  v7 = *(_DWORD *)(a1 + 12);
  v23 = 0LL;
  v8 = *(_QWORD *)v4;
  v9 = 1 << (v7 + 1);
  v10 = *(void **)(*(_QWORD *)v4 + 120LL);
  v11 = 16 * v9;
  if ( !*(_BYTE *)(*(_QWORD *)v4 + 1001LL) )
  {
    v16 = 1;
    v13 = (__int64 *)(v4 + 16);
    goto LABEL_31;
  }
  switch ( *(_DWORD *)(*(_QWORD *)(v8 + 88) + 80LL) )
  {
    case 1:
      v13 = (__int64 *)(v4 + 16);
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 16) + 664LL) )
        goto LABEL_22;
      v15 = 1;
      v16 = 3;
LABEL_14:
      if ( !v15 )
      {
        if ( v16 != 2 )
        {
          if ( v16 == 3 )
          {
            v5 = CommonBuffer_AcquireSecureBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL), v11, v4, 829714501LL);
            if ( !v5 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v17 = 16;
                v22 = *(_DWORD *)(v4 + 152);
                v21 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 143LL);
LABEL_20:
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(v4 + 80),
                  2u,
                  0xDu,
                  v17,
                  (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
                  v21,
                  v22);
                return (unsigned int)-1073741670;
              }
              return (unsigned int)-1073741670;
            }
          }
LABEL_25:
          *(_QWORD *)(a1 + 32) = v5;
          return 0;
        }
LABEL_22:
        Pool2 = ExAllocatePool2(64LL, v11 + 104, 1229146200LL);
        v5 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 40) = v11 + 104;
          *(_QWORD *)(Pool2 + 16) = Pool2 + 104;
          *(_DWORD *)(Pool2 + 44) = v11;
          *(_DWORD *)(Pool2 + 64) = 829714501;
          *(_QWORD *)(Pool2 + 72) = v4;
          *(_DWORD *)(Pool2 + 80) = 2;
          v12 = XilEndpoint_SendRequestToAllocateSecureStreamContextArray(v4 + 1328, v9, &v24, &v23);
          if ( v12 < 0 )
          {
            CommonBuffer_ReleaseBuffer((__int64)v10, v5);
            return (unsigned int)v12;
          }
          *(_QWORD *)(v5 + 24) = v23;
          *(_QWORD *)(a1 + 40) = v24;
          goto LABEL_25;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = *(_QWORD *)(v4 + 16);
          v17 = 15;
LABEL_34:
          v22 = *(_DWORD *)(v4 + 152);
          v21 = *(unsigned __int8 *)(v20 + 143);
          goto LABEL_20;
        }
        return (unsigned int)-1073741670;
      }
LABEL_31:
      v5 = XilCommonBuffer_AcquireBufferEx(v10, v11, v4, 0x31747045u, v16);
      if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741670;
        v20 = *v13;
        v17 = 17;
        goto LABEL_34;
      }
      goto LABEL_25;
    case 2:
    case 3:
      v13 = (__int64 *)(v4 + 16);
      v14 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 664LL);
      v15 = v14 == 0;
      v16 = (v14 != 0) + 1;
      goto LABEL_14;
    case 4:
      goto LABEL_22;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, *(_DWORD *)(*(_QWORD *)(v8 + 88) + 80LL) - 3, 1, a4);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return (unsigned int)-1073741808;
}
