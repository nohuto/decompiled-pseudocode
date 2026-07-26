/*
 * XREFs of ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x14013B890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLLd @ 0x1400A53B8 (WPP_RECORDER_SF_qLLd.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisPDPIQueueControl(
        struct _NDIS_PD_QUEUE *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int *a8)
{
  _QWORD *v8; // rsi
  unsigned int v10; // r14d
  int v11; // r15d
  __int64 v13; // rbx
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned int v17; // eax
  unsigned __int16 v18; // r9
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+90h] [rbp+18h] BYREF

  v8 = a1->PDPlatformReserved[1];
  v10 = a3;
  v11 = a2;
  v13 = v8[4];
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Du,
      0x34u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      a2,
      a3);
  if ( v10 == 1 )
    goto LABEL_9;
  if ( v10 == 2 || v10 == 3 )
  {
    if ( *((_BYTE *)v8 + 60) )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( v10 != 4 )
  {
    if ( v10 != 5 )
    {
      v14 = -1073741637;
      goto LABEL_13;
    }
LABEL_9:
    if ( v11 || !a4 || (v15 = a5, a5 < 4) )
    {
LABEL_12:
      v14 = -1073741811;
      goto LABEL_13;
    }
    goto LABEL_28;
  }
  if ( !*((_BYTE *)v8 + 60) )
  {
LABEL_17:
    v14 = -1073741808;
    goto LABEL_13;
  }
  if ( *((_BYTE *)v8 + 61) )
  {
    v14 = -1073741436;
    goto LABEL_13;
  }
  if ( v11 || !a4 || a5 < 4 )
    goto LABEL_12;
  a2 = *a4;
  v21 = a2;
  if ( (unsigned int)a2 > 0xFFFF )
  {
    v14 = -1073741585;
    goto LABEL_13;
  }
  if ( (_DWORD)a2 )
    v21 = a2 | (*(unsigned __int16 *)(*(_QWORD *)(v13 + 56) + 104LL) << 16);
  a4 = (unsigned int *)&v21;
  v15 = 4;
LABEL_28:
  v14 = (*(__int64 (__fastcall **)(struct _NDIS_PD_QUEUE *, _QWORD, _QWORD, unsigned int *, unsigned int, void *, unsigned int, unsigned int *))(*(_QWORD *)(v13 + 80) + 88LL))(
          a1,
          0LL,
          v10,
          a4,
          v15,
          a6,
          a7,
          a8);
  if ( (v14 & 0x80000000) == 0 )
  {
    switch ( v10 )
    {
      case 1u:
        v17 = *a4;
        *((_DWORD *)v8 + 48) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v14;
        v18 = 53;
        break;
      case 2u:
        v17 = *a4;
        *((_DWORD *)v8 + 18) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v14;
        v18 = 55;
        break;
      case 3u:
        v17 = *a4;
        *((_DWORD *)v8 + 19) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v14;
        v18 = 56;
        break;
      case 4u:
        v17 = *a4;
        *((_DWORD *)v8 + 20) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v14;
        v18 = 54;
        break;
      default:
        v17 = *a4;
        *((_DWORD *)v8 + 49) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v14;
        v18 = 57;
        break;
    }
    LODWORD(v20) = v17;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      v18,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      v20);
  }
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x3Au, v19);
  return v14;
}
