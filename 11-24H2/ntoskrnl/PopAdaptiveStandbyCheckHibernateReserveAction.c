/*
 * XREFs of PopAdaptiveStandbyCheckHibernateReserveAction @ 0x14075FAF4
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckHibernateReserveAction(__int64 a1, unsigned int *a2, int *a3)
{
  unsigned int v5; // r15d
  unsigned __int8 v6; // si
  int v7; // r10d
  unsigned int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  int v11; // edx
  __int64 v12; // r9
  int v13; // r10d
  __int64 v14; // r11
  struct _LIST_ENTRY *ActivityIdThread; // rax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  int *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  unsigned int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  unsigned int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int64 *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]

  v5 = 0;
  v6 = 0;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v7 = 13;
LABEL_3:
    *a3 = v7;
    goto LABEL_17;
  }
  v8 = *(_DWORD *)(a1 + 44);
  if ( !v8 || (v9 = *(_DWORD *)(a1 + 48)) == 0 || (v10 = *(_DWORD *)(a1 + 112)) == 0 )
  {
    *a3 = 5;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a1 + 196) )
  {
    v7 = 12;
    goto LABEL_3;
  }
  if ( v8 > *a2 )
  {
    v7 = 6;
    goto LABEL_3;
  }
  v11 = a2[3];
  if ( v11 <= 20 )
  {
    v5 = 1000
       * (*(_DWORD *)(a1 + 144)
        * ((v11 - *(_DWORD *)(a1 + 52)) & (unsigned int)-(*(_DWORD *)(a1 + 52) < (unsigned int)v11))
        / 0x64)
       / v10;
    if ( v5 <= v9 )
    {
      v6 = 1;
      *(_BYTE *)(a1 + 40) = 1;
      *a3 = 0;
    }
    else
    {
      *a3 = 7;
    }
  }
  else
  {
    *a3 = 8;
  }
LABEL_17:
  if ( (unsigned int)dword_140E08218 > 5 && tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL) )
  {
    v23 = *a2;
    v27 = &v23;
    v17 = *(_DWORD *)(v14 + 4);
    v29 = &v17;
    v18 = a2[3];
    v31 = &v18;
    v33 = &v19;
    v20 = *(_DWORD *)(v12 + 8);
    v35 = &v20;
    v21 = v6;
    v37 = &v21;
    v39 = &v22;
    v24 = *(_QWORD *)(a1 + 240);
    v41 = &v24;
    v43 = &v25;
    v28 = 8LL;
    v30 = 4LL;
    v32 = 4LL;
    v19 = v5;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v22 = v13;
    v40 = 4LL;
    v42 = 8LL;
    v25 = 0x1000000LL;
    v44 = 8LL;
    ActivityIdThread = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)byte_14004E3D1,
      (const GUID *)ActivityIdThread,
      0LL,
      0xBu,
      &v26);
  }
  return v6;
}
