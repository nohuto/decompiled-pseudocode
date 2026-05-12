/*
 * XREFs of StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400BA1F0
 * Callers:
 *     StorpAdapterHealthWorkItemRoutine @ 0x1400AF450 (StorpAdapterHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline @ 0x1400AAB64 (Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendAdapterUfsHealthInfo(__int64 a1)
{
  __int64 v1; // r9
  _DWORD *OutputBuffer; // rdi
  PIRP v4; // rax
  NTSTATUS Status; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  const wchar_t *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // r10d
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  __int16 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v16; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v24; // [rsp+C8h] [rbp-40h]
  int v25; // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D4h] [rbp-34h]
  __int64 v27; // [rsp+D8h] [rbp-30h]
  int v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E4h] [rbp-24h]
  _BYTE v30[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 *v31; // [rsp+F8h] [rbp-10h]
  int v32; // [rsp+100h] [rbp-8h]
  int v33; // [rsp+104h] [rbp-4h]
  __int16 *v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  int v36; // [rsp+114h] [rbp+Ch]
  __int64 *v37; // [rsp+118h] [rbp+10h]
  int v38; // [rsp+120h] [rbp+18h]
  int v39; // [rsp+124h] [rbp+1Ch]
  __int64 *v40; // [rsp+128h] [rbp+20h]
  int v41; // [rsp+130h] [rbp+28h]
  int v42; // [rsp+134h] [rbp+2Ch]
  struct _KEVENT *p_Event; // [rsp+138h] [rbp+30h]
  int v44; // [rsp+140h] [rbp+38h]
  int v45; // [rsp+144h] [rbp+3Ch]

  v1 = *(_QWORD *)(a1 + 8);
  v21 = 0LL;
  IoStatusBlock = 0LL;
  Event.Header.WaitListHead = 0LL;
  OutputBuffer = (_DWORD *)RaidAllocatePool(64LL, 93LL, 1700028754LL, v1);
  OutputBuffer[1] = 0;
  *OutputBuffer = 49;
  OutputBuffer[5] = 0;
  OutputBuffer[2] = 5;
  OutputBuffer[3] = 1;
  OutputBuffer[4] = 9;
  OutputBuffer[6] = 40;
  OutputBuffer[7] = 45;
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         OutputBuffer,
         0x5Du,
         OutputBuffer,
         0x5Du,
         0,
         (PKEVENT)&Event.Header.WaitListHead,
         &IoStatusBlock);
  if ( v4 )
  {
    v4->IoStatus.Status = -1073741637;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      if ( *OutputBuffer != 48 )
        goto LABEL_18;
      if ( OutputBuffer[1] != 48 )
        goto LABEL_18;
      v7 = OutputBuffer[6];
      if ( v7 < 0x28 )
        goto LABEL_18;
      if ( (_DWORD *)((char *)OutputBuffer + v7 + 8)
        && (unsigned int)dword_140170178 > 5
        && tlgKeywordOn(v6, 0x400000000000LL) )
      {
        v8 = *(const wchar_t **)(a1 + 4720);
        v26 = 0;
        v29 = 0;
        v24 = &v18;
        v27 = a1 + 5064;
        v18 = 0x1000000LL;
        v25 = 8;
        v28 = 16;
        tlgCreate1Sz_wchar_t((__int64)v30, v8);
        v10 = *(unsigned __int8 *)(v9 + 3);
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v45 = 0;
        v31 = &v15;
        v16 = *(unsigned __int8 *)(v9 + 4);
        v34 = &v16;
        LOWORD(v17) = *(unsigned __int8 *)(v9 + 2);
        v37 = &v17;
        v19 = *(unsigned int *)(v9 + 37);
        v40 = &v19;
        *(_QWORD *)&Event.Header.Lock = *(unsigned int *)(v9 + 41);
        p_Event = &Event;
        v15 = v10;
        v32 = 2;
        v35 = 2;
        v38 = 2;
        v41 = v11;
        v44 = v11;
        tlgWriteTransfer_EtwWriteTransfer(v10, (unsigned __int8 *)dword_14015F4BF, v12, v9, 0xAu, &v23);
      }
    }
    if ( (unsigned int)Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (*(_DWORD *)(a1 + 5344) & 0x10) == 0 )
      {
        v13 = StorpTelemetrySendAdapterSurfaceUfsHealthInfo(a1);
        if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741670 )
        {
          v14 = *(_DWORD *)(a1 + 5344);
          if ( (v14 & 2) == 0 )
            *(_DWORD *)(a1 + 5344) = v14 | 0x10;
        }
      }
    }
  }
LABEL_18:
  ExFreePoolWithTag(OutputBuffer, 0x65546152u);
}
