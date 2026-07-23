/*
 * XREFs of PpmEventHgsContainmentGroupInfo @ 0x1405D660C
 * Callers:
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHgsContainmentGroupInfo(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  _DWORD *v4; // rsi
  ULONG_PTR v5; // rdx
  char *Pool2; // rdi
  int v7; // r11d
  _QWORD *v8; // r8
  ULONG UserDataCount; // r9d
  __int64 *v10; // r14
  ULONGLONG v11; // r10
  unsigned int v12; // ebp
  _BYTE *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+50h] [rbp-C8h] BYREF

  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_GROUP_INFO_RUNDOWN;
    if ( !a2 )
      v3 = &PPM_ETW_WPS_CONTAINMENT_GROUP_INFO;
    if ( PpmEtwRegistered )
    {
      if ( EtwEventEnabled(PpmEtwHandle, v3) )
      {
        v4 = *(_DWORD **)(a1 + 1280);
        v5 = (unsigned int)(13 * *v4);
        v18 = *v4;
        Pool2 = (char *)ExAllocatePool2(0x40uLL, v5, 0x654D5050u);
        if ( Pool2 )
        {
          UserData[0].Reserved = 0;
          UserData[0].Ptr = (ULONGLONG)&v18;
          v7 = 0;
          UserData[0].Size = 4;
          v8 = Pool2 + 5;
          UserDataCount = 1;
          v10 = (__int64 *)(v4 + 6);
          v11 = (ULONGLONG)(Pool2 + 5);
          v12 = 3;
          v13 = v4 + 2;
          do
          {
            *(_DWORD *)((char *)v8 - 5) = v7++;
            v14 = UserDataCount;
            UserDataCount += 3;
            *(&UserData[0].Reserved + 1 * v14) = 0;
            UserData[v14].Ptr = v11 - 5;
            UserData[v14].Size = 1;
            v15 = v12 - 1;
            *((_BYTE *)v8 - 1) = *v13;
            v13 += 2;
            *(&UserData[0].Reserved + 1 * v15) = 0;
            UserData[v15].Ptr = v11 - 1;
            UserData[v15].Size = 1;
            v16 = *v10;
            v10 += 33;
            *v8 = v16;
            v8 = (_QWORD *)((char *)v8 + 13);
            v17 = v12;
            v12 += 3;
            v17 *= 2LL;
            *(&UserData[0].Reserved + 2 * v17) = 0;
            *(&UserData[0].Ptr + v17) = v11;
            v11 += 13LL;
            *(&UserData[0].Size + 2 * v17) = 8;
          }
          while ( v7 < 3 );
          EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
          ExFreePoolWithTag(Pool2, 0x654D5050u);
        }
      }
    }
  }
}
