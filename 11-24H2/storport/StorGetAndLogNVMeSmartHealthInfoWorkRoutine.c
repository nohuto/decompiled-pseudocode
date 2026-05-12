/*
 * XREFs of StorGetAndLogNVMeSmartHealthInfoWorkRoutine @ 0x1400C3E80
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400AEDA8 (McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer.c)
 *     StorBuildMFNDGetSingleCCLogPageCommand @ 0x1400C36B0 (StorBuildMFNDGetSingleCCLogPageCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 */

void __fastcall StorGetAndLogNVMeSmartHealthInfoWorkRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  _WORD *v5; // rdi
  char *Pool; // r13
  __int64 v7; // r12
  unsigned int i; // r15d
  unsigned __int16 v9; // r12
  int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rcx
  __int16 v13; // ax
  char v14; // al
  unsigned __int8 v15; // al
  char v16; // al
  unsigned __int8 v17; // al
  char v18; // al
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  _WORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rax
  _BYTE v26[64]; // [rsp+D0h] [rbp-70h] BYREF
  __int128 v27; // [rsp+110h] [rbp-30h] BYREF
  char v28[13]; // [rsp+120h] [rbp-20h] BYREF
  int v29; // [rsp+12Dh] [rbp-13h]
  __int64 v30; // [rsp+138h] [rbp-8h] BYREF
  char v31; // [rsp+140h] [rbp+0h]
  __int128 v32; // [rsp+148h] [rbp+8h] BYREF
  __int128 v33; // [rsp+158h] [rbp+18h]
  __int64 v34; // [rsp+168h] [rbp+28h]
  char v35; // [rsp+170h] [rbp+30h]
  _OWORD v36[2]; // [rsp+178h] [rbp+38h] BYREF
  __int64 v37; // [rsp+198h] [rbp+58h]
  __int16 v38; // [rsp+1A0h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 64);
  memset_0(v26, 0, sizeof(v26));
  v4 = 0;
  v5 = (_WORD *)(a2 + 20);
  Pool = (char *)RaidAllocatePool(64LL, 512LL, 1179476306LL, *(_QWORD *)(v2 + 8));
  v7 = 1LL;
  if ( Pool )
  {
    for ( i = 0; i < (unsigned __int16)*v5; i += v7 )
    {
      v9 = *(_WORD *)(a2 + 2LL * i + 22);
      if ( (unsigned __int16)(v9 - 1) > 0xFFFDu )
      {
        v7 = 1LL;
      }
      else
      {
        memset_0(v26, 0, sizeof(v26));
        StorBuildMFNDGetSingleCCLogPageCommand((__int64)v26, v9, 2, 0, *(_BYTE *)(a2 + 8) & 1, 0x200u);
        v7 = (unsigned int)(v10 + 1);
        if ( (int)StorSendMFNDCommand(v2, (_DWORD)Pool, 0, 512, (__int64)v26) < 0 )
          break;
        if ( StorEtwLoggingEnabled )
        {
          v12 = *(_QWORD *)(v2 + 6000);
          strcpy(v28, "PCI vendor: ");
          v29 = 0;
          v34 = 0LL;
          v35 = 0;
          v30 = 0LL;
          v31 = 0;
          v37 = 0LL;
          v38 = 0;
          v27 = 0LL;
          v32 = 0LL;
          v33 = 0LL;
          memset(v36, 0, sizeof(v36));
          if ( v12 )
          {
            v13 = *(_WORD *)v12 >> 12;
            if ( (unsigned __int8)v13 > 9u )
              v14 = v13 + 55;
            else
              v14 = v13 + 48;
            v28[12] = v14;
            v15 = *(_BYTE *)(v12 + 1) & 0xF;
            if ( v15 > 9u )
              v16 = v15 + 55;
            else
              v16 = v15 + 48;
            LOBYTE(v29) = v16;
            v17 = (*(_BYTE *)v12 >> 4) & 0xF;
            if ( v17 > 9u )
              v18 = v17 + 55;
            else
              v18 = v17 + 48;
            BYTE1(v29) = v18;
            v19 = *(_BYTE *)v12 & 0xF;
            if ( v19 > 9u )
              v20 = v19 + 55;
            else
              v20 = v19 + 48;
            HIWORD(v29) = v20;
            v21 = v36;
            v11 = 20LL;
            v32 = *(_OWORD *)(v12 + 24);
            v33 = *(_OWORD *)(v12 + 40);
            v34 = *(_QWORD *)(v12 + 56);
            v22 = *(_QWORD *)(v12 + 64);
            v23 = (unsigned __int8 *)(v12 + 4);
            v30 = v22;
            do
            {
              v24 = *v23;
              v23 += v7;
              *v21++ = v24;
              v11 -= v7;
            }
            while ( v11 );
          }
          if ( (byte_140171464 & 0x40) != 0 )
            McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
              *(unsigned __int8 *)(v2 + 104) >> 7,
              v2 + 5064,
              v11,
              *(_DWORD *)(v2 + 56),
              255,
              255,
              255,
              (__int64)&v27,
              v2 + 5064,
              *(const wchar_t **)(v2 + 4720),
              v28,
              (const char *)&v32,
              (const wchar_t *)v36,
              (const char *)&v30,
              *(_BYTE *)(v2 + 104) >> 7,
              0,
              *Pool,
              512,
              (__int64)Pool,
              0,
              0,
              0,
              0LL);
        }
      }
    }
    ExFreePoolWithTag(Pool, 0x464D6152u);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 6160) + 64LL) && *v5 )
  {
    do
    {
      v25 = v4;
      v4 += v7;
      _interlockedbittestandreset(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 6160) + 64LL)
                                  + 4 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 2 * v25 + 22) - v7) >> 5)),
        ((unsigned __int8)*(_WORD *)(a2 + 2 * v25 + 22) - 1) & 0x1F);
    }
    while ( v4 < (unsigned __int16)*v5 );
  }
  IoFreeWorkItem(*(PIO_WORKITEM *)a2);
  ExFreePoolWithTag((PVOID)a2, 0x49576152u);
}
