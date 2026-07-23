/*
 * XREFs of SshpWriteBlocker @ 0x1404859D0
 * Callers:
 *     SshNotifySystemSessionChange @ 0x140A42178 (SshNotifySystemSessionChange.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     SSHSupportAllocatePaged @ 0x140A43F58 (SSHSupportAllocatePaged.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

int __fastcall SshpWriteBlocker(
        __int64 a1,
        ULONGLONG a2,
        ULONGLONG a3,
        char a4,
        char a5,
        char a6,
        PVOID *a7,
        unsigned int *a8)
{
  unsigned int v8; // r11d
  __int64 v9; // rdi
  unsigned __int64 Paged; // rax
  unsigned int *v14; // rax
  unsigned int v15; // ebx
  unsigned int *v16; // r14
  PVOID *v17; // rsi
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  __int64 v19; // rcx
  const EVENT_DESCRIPTOR *v20; // r14
  unsigned int v21; // r10d
  char *v22; // rax
  unsigned int v23; // ecx
  unsigned int *v24; // r9
  __int64 v25; // rax
  _DWORD *v26; // rdx
  const wchar_t *v27; // r8
  const wchar_t *v28; // r9
  const wchar_t *v29; // rcx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  unsigned int *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  char *v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  char *v41; // rsi
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned int v45; // edx
  int v47; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v48; // [rsp+44h] [rbp-Ch] BYREF
  int v49; // [rsp+48h] [rbp-8h] BYREF
  int v50; // [rsp+4Ch] [rbp-4h] BYREF
  char v51; // [rsp+80h] [rbp+30h] BYREF

  v8 = 0;
  v9 = *(_QWORD *)(a1 + 304);
  v51 = a5;
  LODWORD(Paged) = SshpTraceHandleRegistered;
  v49 = 0;
  if ( !SshpTraceHandleRegistered )
    return Paged;
  if ( !a4 )
    goto LABEL_4;
  v14 = *(unsigned int **)(v9 + 96);
  if ( !v14 )
    goto LABEL_4;
  Paged = 2LL * *v14;
  if ( Paged > 0xFFFFFFFF )
    return Paged;
  v15 = Paged + 11;
  if ( (int)Paged + 11 < (unsigned int)Paged )
    return Paged;
  if ( v15 <= 0x15 )
LABEL_4:
    v15 = 21;
  v16 = a8;
  v17 = a7;
  if ( v15 <= *a8 )
    goto LABEL_6;
  if ( *a7 )
  {
    ExFreePoolWithTag(*a7, 0x70687373u);
    *v17 = 0LL;
    *v16 = 0;
  }
  Paged = 16LL * v15;
  if ( Paged <= 0xFFFFFFFF )
  {
    Paged = SSHSupportAllocatePaged((unsigned int)Paged, 1885893491LL);
    v8 = 0;
    *v17 = (PVOID)Paged;
    if ( Paged )
    {
      *v16 = v15;
LABEL_6:
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)*v17;
      if ( a4 )
      {
        v19 = *(_QWORD *)(v9 + 96);
        v20 = &SLEEPSTUDY_EVT_SCENARIO_BLOCKER;
        if ( v19 )
          v20 = &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DETAILED;
        v21 = 7;
        v22 = &a5;
        if ( !v19 )
          v22 = &v51;
        UserData->Ptr = (ULONGLONG)v22;
        UserData->Size = v19 != 0 ? 8 : 1;
        UserData->Reserved = 0;
        UserData[1].Ptr = v9 + 48;
        *(_QWORD *)&UserData[1].Size = 16LL;
        v49 = *(unsigned __int16 *)(v9 + 80) >> 1;
        UserData[2].Ptr = (ULONGLONG)&v49;
        *(_QWORD *)&UserData[2].Size = 4LL;
        v23 = *(unsigned __int16 *)(v9 + 80);
        UserData[3].Ptr = *(_QWORD *)(v9 + 88);
        *(_QWORD *)&UserData[3].Size = v23;
        UserData[4].Ptr = v9 + 64;
        *(_QWORD *)&UserData[4].Size = 16LL;
        UserData[5].Ptr = a2;
        *(_QWORD *)&UserData[5].Size = 8LL;
        v24 = *(unsigned int **)(v9 + 96);
        if ( v24 )
        {
          v34 = *v24;
          v35 = v24 + 2;
          *(_QWORD *)&UserData[6].Size = 2LL;
          v36 = 16LL;
          v21 = 10;
          v37 = 4 * v34 + 12;
          if ( v37 > 0x10 )
            v36 = v37;
          UserData[6].Ptr = (ULONGLONG)(v24 + 1);
          v38 = (char *)v24 + v36;
          UserData[7].Ptr = (ULONGLONG)v35;
          *(_QWORD *)&UserData[7].Size = 4LL;
          v39 = *v35;
          UserData[8].Ptr = (ULONGLONG)v38;
          UserData[8].Size = 2 * v39;
          UserData[8].Reserved = 0;
          v40 = *v35;
          UserData[9].Ptr = (ULONGLONG)v24;
          *(_QWORD *)&UserData[9].Size = 4LL;
          v41 = &v38[2 * v40];
          if ( *v24 )
          {
            do
            {
              v42 = v8++;
              v43 = v21;
              UserData[v43].Ptr = (ULONGLONG)&v24[v42 + 3];
              *(_QWORD *)&UserData[v43].Size = 4LL;
              v44 = v21 + 1;
              v45 = 2 * v24[v42 + 3];
              v21 += 2;
              UserData[v44].Ptr = (ULONGLONG)v41;
              *(_QWORD *)&UserData[v44].Size = v45;
              v41 += 2 * v24[v42 + 3];
            }
            while ( v8 < *v24 );
          }
        }
        else
        {
          *(_QWORD *)&UserData[6].Size = 8LL;
          UserData[6].Ptr = (ULONGLONG)&a5;
        }
        v25 = v21;
        UserData[v25].Ptr = (ULONGLONG)&a6;
        *(_QWORD *)&UserData[v25].Size = 8LL;
        EtwWriteEx(SshpTraceHandle, v20, 0LL, 0, 0LL, 0LL, v21 + 1, UserData);
      }
      v26 = *(_DWORD **)(v9 + 104);
      if ( v26 )
      {
        v27 = (const wchar_t *)(v26 + 3);
        v48 = *v26;
        v47 = v26[1];
        v28 = (const wchar_t *)v26 + v48 + 6;
        v30 = v26[2];
        v29 = &v28[v47];
      }
      else
      {
        v27 = &cchOriginalDestLength;
        v48 = 0;
        v28 = &cchOriginalDestLength;
        v47 = 0;
        v29 = &cchOriginalDestLength;
        v30 = 0;
      }
      v50 = v30;
      *(_QWORD *)&UserData->Size = 8LL;
      UserData->Ptr = (ULONGLONG)&a5;
      UserData[1].Ptr = v9 + 64;
      *(_QWORD *)&UserData[1].Size = 16LL;
      UserData[2].Ptr = v9 + 48;
      *(_QWORD *)&UserData[2].Size = 16LL;
      UserData[3].Ptr = a2;
      *(_QWORD *)&UserData[3].Size = 8LL;
      UserData[4].Ptr = a2 + 88;
      *(_QWORD *)&UserData[4].Size = 20LL;
      UserData[5].Ptr = a2 + 8;
      *(_QWORD *)&UserData[5].Size = 40LL;
      UserData[6].Ptr = a2 + 108;
      *(_QWORD *)&UserData[6].Size = 20LL;
      UserData[7].Ptr = a2 + 48;
      *(_QWORD *)&UserData[7].Size = 40LL;
      UserData[8].Ptr = a3;
      *(_QWORD *)&UserData[8].Size = 8LL;
      UserData[9].Ptr = a3 + 88;
      *(_QWORD *)&UserData[9].Size = 20LL;
      UserData[10].Ptr = a3 + 8;
      *(_QWORD *)&UserData[10].Size = 40LL;
      UserData[11].Ptr = a3 + 108;
      *(_QWORD *)&UserData[11].Size = 20LL;
      UserData[12].Ptr = a3 + 48;
      *(_QWORD *)&UserData[12].Size = 40LL;
      UserData[13].Ptr = v9 + 40;
      *(_QWORD *)&UserData[13].Size = 4LL;
      UserData[14].Ptr = (ULONGLONG)&v47;
      *(_QWORD *)&UserData[14].Size = 4LL;
      v31 = v47;
      UserData[15].Ptr = (ULONGLONG)v28;
      UserData[15].Size = 2 * v31;
      UserData[15].Reserved = 0;
      UserData[16].Ptr = (ULONGLONG)&v48;
      *(_QWORD *)&UserData[16].Size = 4LL;
      v32 = v48;
      UserData[17].Ptr = (ULONGLONG)v27;
      UserData[17].Size = 2 * v32;
      UserData[17].Reserved = 0;
      UserData[18].Ptr = (ULONGLONG)&v50;
      *(_QWORD *)&UserData[18].Size = 4LL;
      v33 = v50;
      UserData[19].Ptr = (ULONGLONG)v29;
      UserData[19].Size = 2 * v33;
      UserData[19].Reserved = 0;
      UserData[20].Ptr = (ULONGLONG)&a6;
      *(_QWORD *)&UserData[20].Size = 8LL;
      LODWORD(Paged) = EtwWriteEx(
                         SshpTraceHandle,
                         &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_VERBOSE_ACCOUNTING,
                         0LL,
                         0,
                         0LL,
                         0LL,
                         0x15u,
                         UserData);
    }
  }
  return Paged;
}
