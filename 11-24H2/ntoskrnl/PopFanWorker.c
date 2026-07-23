/*
 * XREFs of PopFanWorker @ 0x140A7E230
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopFanSetNoiseImpact @ 0x14075BEDC (PopFanSetNoiseImpact.c)
 *     PopPrepareIoctl @ 0x140A54F18 (PopPrepareIoctl.c)
 *     PopFanSetupRpmBuckets @ 0x140A7E7AC (PopFanSetupRpmBuckets.c)
 *     PopFanUpdateSpeed @ 0x140A908FC (PopFanUpdateSpeed.c)
 *     PopFanUpdateRunningState @ 0x140AB45D8 (PopFanUpdateRunningState.c)
 */

__int64 __fastcall PopFanWorker(__int64 a1)
{
  IRP *v1; // r13
  unsigned __int8 v3; // si
  char v4; // r15
  char v5; // r12
  __int64 v6; // rcx
  int Status; // eax
  int v8; // ecx
  int v9; // ecx
  __int64 *v10; // rax
  char *v11; // rdx
  char v12; // al
  IRP *v13; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  __int64 v18; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  int v20; // [rsp+48h] [rbp-39h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v22[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v23; // [rsp+78h] [rbp-9h]
  __int64 v24; // [rsp+80h] [rbp-1h]
  __int64 *v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+90h] [rbp+Fh]
  __int64 *v27; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+A0h] [rbp+1Fh]

  v1 = *(IRP **)(a1 + 56);
  DeviceObject = *(PDEVICE_OBJECT *)(a1 + 48);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 400));
  if ( *(_BYTE *)(a1 + 440) )
  {
    *(_BYTE *)(a1 + 64) = 4;
LABEL_3:
    if ( *(_BYTE *)(a1 + 80) )
    {
      v5 = 1;
      *(_BYTE *)(a1 + 80) = 0;
    }
    KeSetEvent((PRKEVENT)(a1 + 416), 0, 0);
    goto LABEL_59;
  }
  Status = v1->IoStatus.Status;
  if ( Status >= 0 )
  {
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v18 = a1;
      v23 = &v18;
      v20 = *(unsigned __int8 *)(a1 + 64);
      v24 = 8LL;
      v25 = (__int64 *)&v20;
      v26 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)word_14004D55A, 0LL, 0LL, 4u, v22);
    }
    v6 = *(unsigned __int8 *)(a1 + 64);
    if ( !*(_BYTE *)(a1 + 64) )
    {
      if ( (unsigned int)dword_140E07680 <= 2 )
        goto LABEL_47;
      v19 = a1;
      v10 = &v19;
      v11 = byte_14004D94D;
      goto LABEL_32;
    }
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v6 = (unsigned int)(v9 - 1);
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 == 1 )
          {
            if ( (unsigned int)dword_140E07680 <= 2 )
              goto LABEL_47;
            v18 = a1;
            v10 = &v18;
            v11 = (char *)&word_14004D926;
          }
          else
          {
            if ( (unsigned int)dword_140E07680 <= 2 )
              goto LABEL_47;
            v18 = a1;
            v10 = &v18;
            v11 = &byte_14004D8F7;
          }
LABEL_32:
          v23 = v10;
          v24 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)v11, 0LL, 0LL, 3u, v22);
          goto LABEL_47;
        }
        if ( (unsigned int)dword_140E07680 > 5 )
        {
          v19 = a1;
          v23 = &v19;
          v20 = *(_DWORD *)(a1 + 92);
          v24 = 8LL;
          v25 = (__int64 *)&v20;
          LODWORD(v18) = *(_DWORD *)(a1 + 96);
          v27 = &v18;
          v26 = 4LL;
          v28 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E07680,
            (unsigned __int8 *)&byte_14004D977,
            0LL,
            0LL,
            5u,
            v22);
        }
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 92);
        *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 96);
        goto LABEL_43;
      }
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        v19 = a1;
        v23 = &v19;
        LODWORD(v18) = *(unsigned __int8 *)(a1 + 72);
        v24 = 8LL;
        v25 = &v18;
        v20 = *(_DWORD *)(a1 + 76);
        v27 = (__int64 *)&v20;
        v26 = 4LL;
        v28 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)&word_14004D51E,
          0LL,
          0LL,
          5u,
          v22);
      }
      v12 = *(_BYTE *)(a1 + 72);
      if ( *(_BYTE *)(a1 + 80) )
      {
        if ( !v12 )
        {
LABEL_27:
          v5 = 1;
          *(_BYTE *)(a1 + 80) = v12;
          v4 = v12;
        }
      }
      else if ( v12 )
      {
        goto LABEL_27;
      }
      PopFanUpdateSpeed(a1, *(unsigned int *)(a1 + 76));
      v3 = (*(_BYTE *)(a1 + 88) != 0) + 2;
      goto LABEL_47;
    }
    PopFanSetupRpmBuckets(a1);
LABEL_43:
    v3 = 2;
    goto LABEL_47;
  }
  if ( Status == -1073741667 || Status == -1073741536 )
  {
    if ( *(_BYTE *)(a1 + 64) == 1 )
      PopFanSetNoiseImpact(a1, 0);
    v3 = *(_BYTE *)(a1 + 64);
  }
  else
  {
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v19 = a1;
      v23 = &v19;
      LODWORD(v18) = *(unsigned __int8 *)(a1 + 64);
      v24 = 8LL;
      v25 = &v18;
      v26 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)word_14004DA6A, 0LL, 0LL, 4u, v22);
    }
    if ( *(_BYTE *)(a1 + 64) == 1 )
      goto LABEL_42;
    v6 = (unsigned int)*(unsigned __int8 *)(a1 + 64) - 2;
    if ( *(_BYTE *)(a1 + 64) == 2 )
      goto LABEL_3;
    if ( *(_BYTE *)(a1 + 64) == 3 )
    {
      if ( (unsigned int)dword_140E07680 > 2 )
      {
        v19 = a1;
        v23 = &v19;
        v24 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)byte_14004DA37,
          0LL,
          0LL,
          3u,
          v22);
      }
LABEL_42:
      PopFanSetNoiseImpact(a1, 0);
      goto LABEL_43;
    }
  }
LABEL_47:
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    v23 = &v19;
    v19 = a1;
    v25 = &v18;
    v24 = 8LL;
    LODWORD(v18) = v3;
    v26 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004DA01, 0LL, 0LL, 4u, v22);
  }
  switch ( v3 )
  {
    case 1u:
      v13 = *(IRP **)(a1 + 56);
      IoReuseIrp(v13, -1073741637);
      CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.Create.Options = 0;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2703940;
      CurrentStackLocation[-1].Parameters.Read.Length = 20;
      v13->AssociatedIrp.MasterIrp = (struct _IRP *)(a1 + 108);
      goto LABEL_58;
    case 2u:
      PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294240u, 1, (struct _IRP *)(a1 + 68), 0xCu, 0xCu);
      goto LABEL_58;
    case 3u:
      PopPrepareIoctl(*(IRP **)(a1 + 56), 0x298248u, 1, (struct _IRP *)(a1 + 92), 8u, 0);
LABEL_58:
      v15 = v1->Tail.Overlay.CurrentStackLocation;
      v15[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopFanIrpComplete;
      v16 = DeviceObject;
      v15[-1].Context = (PVOID)a1;
      v15[-1].Control = -32;
      *(_BYTE *)(a1 + 64) = v3;
      IofCallDriver(v16, v1);
      goto LABEL_59;
  }
  if ( (unsigned int)dword_140E07680 > 2 )
  {
    v19 = a1;
    v23 = &v19;
    LODWORD(v18) = *(unsigned __int8 *)(a1 + 64);
    v24 = 8LL;
    v25 = &v18;
    v26 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004D9C1, 0LL, 0LL, 4u, v22);
  }
LABEL_59:
  if ( v5 )
  {
    LOBYTE(v6) = v4;
    PopFanUpdateRunningState(v6);
  }
  return PopReleaseRwLock((signed __int64 *)(a1 + 400));
}
