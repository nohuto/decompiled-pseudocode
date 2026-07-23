/*
 * XREFs of PopDiagTracePowerLimitRequest @ 0x140755880
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407493A8 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x140749BB8 (PopOrphanPowerLimitExtension.c)
 *     PopPowerLimitPnpNotification @ 0x140749CA0 (PopPowerLimitPnpNotification.c)
 *     PopRundownPowerLimitRequests @ 0x140A2DB24 (PopRundownPowerLimitRequests.c)
 * Callees:
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerLimitRequest(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 *v3; // rbx
  unsigned int *v4; // r12
  unsigned int v5; // esi
  _DWORD *Pool2; // r14
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v8; // r15
  __int64 v9; // r13
  unsigned __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // r10d
  char *v13; // r11
  char *v14; // rcx
  char *v15; // rax
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG_PTR v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  char *v27; // [rsp+50h] [rbp-B0h]
  char *v28; // [rsp+58h] [rbp-A8h]
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  int *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  int *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  char *v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DCh] [rbp-24h]
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  char *v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  _DWORD *v53; // [rsp+110h] [rbp+10h]
  unsigned int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]

  EventDescriptor = a2;
  v24 = 0;
  v3 = 0LL;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0LL;
  v26 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, a2) )
    {
      v4 = (unsigned int *)(a1 + 32);
      v5 = 16 * *(_DWORD *)(a1 + 32);
      if ( v5 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v5, 0x67696450u);
        if ( Pool2 )
        {
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(
                                             *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                                             0x67446F50u);
          v8 = DeviceAttachmentBaseRefWithTag;
          if ( DeviceAttachmentBaseRefWithTag )
          {
            v9 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
            if ( v9 )
            {
              PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &v25);
              v10 = (unsigned __int64 *)ExAllocatePool2(0x100uLL, v25, 0x50455654u);
              v3 = v10;
              if ( v10 )
              {
                v11 = PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), v10, &v25);
                v12 = 0;
                if ( v11 >= 0 )
                {
                  v13 = (char *)v3 + v3[2];
                  v14 = (char *)v3 + v3[3];
                  v15 = (char *)v3 + v3[4];
                  v16 = v25 - *((_DWORD *)v3 + 8);
                  v17 = -1LL;
                  v27 = v14;
                  v18 = -1LL;
                  v28 = v15;
                  v23 = v16;
                  do
                    ++v18;
                  while ( *(_WORD *)&v13[2 * v18] );
                  v21 = v18;
                  do
                    ++v17;
                  while ( *(_WORD *)&v14[2 * v17] );
                  v22 = v17;
                  v24 = *(unsigned __int16 *)(v9 + 128) >> 1;
                  v26 = a1;
                  if ( *v4 )
                  {
                    do
                    {
                      v19 = v12++;
                      v19 *= 2LL;
                      Pool2[2 * v19] = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v19);
                      Pool2[2 * v19 + 1] = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v19 + 4);
                      Pool2[2 * v19 + 2] = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v19 + 8);
                      Pool2[2 * v19 + 3] = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8 * v19 + 12);
                    }
                    while ( v12 < *v4 );
                    LODWORD(v18) = v21;
                    LODWORD(v17) = v22;
                    v16 = v23;
                  }
                  *(_QWORD *)&UserData.Size = 8LL;
                  UserData.Ptr = (ULONGLONG)&v26;
                  v31 = &v24;
                  v32 = 4LL;
                  v20 = *(unsigned __int16 *)(v9 + 128);
                  v33 = *(_QWORD *)(v9 + 136);
                  v36 = &v21;
                  v39 = 2 * v18;
                  v34 = v20;
                  v41 = &v22;
                  v43 = v27;
                  v44 = 2 * v17;
                  v46 = &v23;
                  v48 = v28;
                  v49 = v16;
                  v35 = 0;
                  v40 = 0;
                  v45 = 0;
                  v50 = 0;
                  v55 = 0;
                  v37 = 4LL;
                  v38 = v13;
                  v42 = 4LL;
                  v47 = 4LL;
                  v51 = a1 + 32;
                  v52 = 4LL;
                  v53 = Pool2;
                  v54 = v5;
                  EtwWrite(PopDiagHandle, EventDescriptor, 0LL, 0xBu, &UserData);
                }
              }
            }
            ObfDereferenceObjectWithTag(v8, 0x67446F50u);
            if ( v3 )
              ExFreePoolWithTag(v3, 0x50455654u);
          }
          ExFreePoolWithTag(Pool2, 0x50455654u);
        }
      }
    }
  }
}
