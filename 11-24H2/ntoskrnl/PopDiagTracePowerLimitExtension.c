/*
 * XREFs of PopDiagTracePowerLimitExtension @ 0x1407554EC
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407493A8 (PopAssociatePowerLimitRequest.c)
 *     PopDisablePowerLimitExtension @ 0x140749628 (PopDisablePowerLimitExtension.c)
 *     PopPowerLimitPnpNotification @ 0x140749CA0 (PopPowerLimitPnpNotification.c)
 *     PopRundownPowerLimitRequests @ 0x140A2DB24 (PopRundownPowerLimitRequests.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerLimitExtension(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  _DWORD *v4; // rsi
  unsigned int v5; // r15d
  char *Pool2; // rdi
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v8; // r14
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // ecx
  int v16; // [rsp+30h] [rbp-39h] BYREF
  __int64 i; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  int *v19; // [rsp+50h] [rbp-19h]
  int v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+5Ch] [rbp-Dh]
  __int64 v22; // [rsp+60h] [rbp-9h]
  int v23; // [rsp+68h] [rbp-1h]
  int v24; // [rsp+6Ch] [rbp+3h]
  __int64 v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+7Ch] [rbp+13h]
  char *v28; // [rsp+80h] [rbp+17h]
  unsigned int v29; // [rsp+88h] [rbp+1Fh]
  int v30; // [rsp+8Ch] [rbp+23h]

  v16 = 0;
  i = 0LL;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, a2) )
    {
      v4 = (_DWORD *)(a1 + 72);
      v5 = 44 * *(_DWORD *)(a1 + 72);
      if ( v5 )
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL, v5, 0x67696450u);
        if ( Pool2 )
        {
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 56), 0x67446F50u);
          v8 = DeviceAttachmentBaseRefWithTag;
          if ( DeviceAttachmentBaseRefWithTag )
          {
            v9 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
            if ( v9 )
            {
              v10 = 0LL;
              v16 = *(unsigned __int16 *)(v9 + 128) >> 1;
              for ( i = a1;
                    (unsigned int)v10 < *v4;
                    *(_DWORD *)&Pool2[v13 + 40] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v12 + 12) )
              {
                v11 = 9 * v10;
                v12 = (unsigned int)v10;
                v10 = (unsigned int)(v10 + 1);
                v13 = 44 * v12;
                v12 *= 2LL;
                *(_DWORD *)&Pool2[v13] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11);
                *(_DWORD *)&Pool2[v13 + 4] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 4);
                *(_DWORD *)&Pool2[v13 + 8] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 12);
                *(_DWORD *)&Pool2[v13 + 12] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 8);
                *(_DWORD *)&Pool2[v13 + 16] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 16);
                *(_DWORD *)&Pool2[v13 + 20] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 20);
                *(_DWORD *)&Pool2[v13 + 24] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 24);
                *(_DWORD *)&Pool2[v13 + 28] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 28);
                *(_DWORD *)&Pool2[v13 + 32] = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v11 + 32);
                *(_DWORD *)&Pool2[v13 + 36] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v12 + 8);
              }
              UserData.Reserved = 0;
              v21 = 0;
              UserData.Ptr = (ULONGLONG)&i;
              v20 = 4;
              v19 = &v16;
              UserData.Size = 8;
              v14 = *(_QWORD *)(v9 + 136);
              v15 = *(unsigned __int16 *)(v9 + 128);
              v24 = 0;
              v27 = 0;
              v30 = 0;
              v22 = v14;
              v23 = v15;
              v26 = 4;
              v25 = a1 + 72;
              v28 = Pool2;
              v29 = v5;
              EtwWrite(PopDiagHandle, a2, 0LL, 5u, &UserData);
            }
            ObfDereferenceObjectWithTag(v8, 0x67446F50u);
          }
          ExFreePoolWithTag(Pool2, 0x67696450u);
        }
      }
    }
  }
}
