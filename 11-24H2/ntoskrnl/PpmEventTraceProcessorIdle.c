/*
 * XREFs of PpmEventTraceProcessorIdle @ 0x140A67844
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorIdle(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  int v4; // ecx
  ULONG v5; // ebp
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r9
  struct _EVENT_DATA_DESCRIPTOR *v13; // rax
  const wchar_t *v14; // r11
  int v15; // eax
  struct _EVENT_DATA_DESCRIPTOR *v16; // rcx
  __int16 v17; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF
  int v19; // [rsp+68h] [rbp+20h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN) )
  {
    v2 = *(_QWORD *)(a1 + 34880);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 40);
      v18 = v3;
      v4 = *(_DWORD *)(v2 + 44);
    }
    else
    {
      v18 = 0;
      v4 = 0;
      v3 = 0;
    }
    v5 = 2 * v3 + 5;
    v19 = v4;
    Pool2 = ExAllocatePool2(0x100uLL, 16 * v5 + 37 * v3, 0x654D5050u);
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
    if ( Pool2 )
    {
      v8 = 0;
      v17 = *(unsigned __int8 *)(a1 + 208);
      *(_DWORD *)(Pool2 + 12) = 0;
      *(_DWORD *)(Pool2 + 8) = 2;
      v9 = Pool2 + 16LL * v5;
      v10 = 4LL;
      *(_QWORD *)Pool2 = &v17;
      *(_DWORD *)(Pool2 + 28) = 0;
      *(_QWORD *)(Pool2 + 16) = a1 + 209;
      *(_DWORD *)(Pool2 + 24) = 1;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_QWORD *)(Pool2 + 32) = &v19;
      *(_DWORD *)(Pool2 + 40) = 4;
      *(_DWORD *)(Pool2 + 60) = 0;
      *(_QWORD *)(Pool2 + 48) = &v18;
      for ( *(_DWORD *)(Pool2 + 56) = 4; v8 < v18; ++v8 )
      {
        v11 = 344LL * v8;
        v12 = (unsigned int)(v10 + 1);
        *(_DWORD *)v9 = *(_DWORD *)(v11 + v2 + 1336);
        *(_DWORD *)(v9 + 4) = *(_DWORD *)(v11 + v2 + 1340);
        *(_BYTE *)(v9 + 8) = *(_BYTE *)(v11 + v2 + 1392);
        *(_DWORD *)(v9 + 9) = *(unsigned __int8 *)(v11 + v2 + 1393);
        *(_DWORD *)(v9 + 13) = *(unsigned __int8 *)(v11 + v2 + 1394);
        *(_DWORD *)(v9 + 17) = *(unsigned __int8 *)(v11 + v2 + 1395);
        *(_DWORD *)(v9 + 21) = *(unsigned __int8 *)(v11 + v2 + 1396);
        *(_DWORD *)(v9 + 25) = *(unsigned __int8 *)(v11 + v2 + 1397);
        *(_DWORD *)(v9 + 29) = *(unsigned __int8 *)(v11 + v2 + 1398);
        *(_DWORD *)(v9 + 33) = *(unsigned __int8 *)(v11 + v2 + 1399);
        v13 = &UserData[(unsigned int)v10];
        v13->Reserved = 0;
        v13->Ptr = v9;
        v13->Size = 37;
        v14 = *(const wchar_t **)(v11 + v2 + 1328);
        if ( v14 )
        {
          v15 = *(unsigned __int16 *)(v11 + v2 + 1322);
        }
        else
        {
          v15 = 28;
          v14 = L"<unspecified>";
        }
        UserData[(unsigned int)(v10 + 1)].Ptr = (ULONGLONG)v14;
        v9 += 37LL;
        UserData[(unsigned int)(v10 + 1)].Size = v15;
        v10 = (unsigned int)(v10 + 2);
        UserData[v12].Reserved = 0;
      }
      v16 = &UserData[v10];
      v16->Reserved = 0;
      v16->Ptr = a1 + 34936;
      v16->Size = 4;
      EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN, 0LL, v5, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
