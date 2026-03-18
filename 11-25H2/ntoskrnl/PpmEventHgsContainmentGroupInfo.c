/*
 * XREFs of PpmEventHgsContainmentGroupInfo @ 0x1405D4700
 * Callers:
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D2974 (PpmHeteroHgsRegisterContainmentGroups.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHgsContainmentGroupInfo(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  _DWORD *v4; // rsi
  char *Pool2; // rdi
  int v6; // r11d
  _QWORD *v7; // r8
  ULONG UserDataCount; // r9d
  _BYTE *v9; // r14
  ULONGLONG v10; // r10
  unsigned int v11; // ebp
  __int64 *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+40h] [rbp-D8h] BYREF
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
        v4 = *(_DWORD **)(a1 + 192);
        v17 = *v4;
        Pool2 = (char *)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          UserData[0].Reserved = 0;
          UserData[0].Ptr = (ULONGLONG)&v17;
          v6 = 0;
          UserData[0].Size = 4;
          v7 = Pool2 + 5;
          UserDataCount = 1;
          v9 = v4 + 2;
          v10 = (ULONGLONG)(Pool2 + 5);
          v11 = 3;
          v12 = (__int64 *)(v4 + 6);
          do
          {
            *(_DWORD *)((char *)v7 - 5) = v6++;
            v13 = UserDataCount;
            UserDataCount += 3;
            *(&UserData[0].Reserved + 1 * v13) = 0;
            UserData[v13].Ptr = v10 - 5;
            UserData[v13].Size = 1;
            v14 = v11 - 1;
            *((_BYTE *)v7 - 1) = *v9++;
            *(&UserData[0].Reserved + 1 * v14) = 0;
            UserData[v14].Ptr = v10 - 1;
            UserData[v14].Size = 1;
            v15 = *v12;
            v12 += 33;
            *v7 = v15;
            v7 = (_QWORD *)((char *)v7 + 13);
            v16 = v11;
            v11 += 3;
            v16 *= 2LL;
            *(&UserData[0].Reserved + 2 * v16) = 0;
            *(&UserData[0].Ptr + v16) = v10;
            v10 += 13LL;
            *(&UserData[0].Size + 2 * v16) = 8;
          }
          while ( v6 < 3 );
          EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
          ExFreePoolWithTag(Pool2, 0x654D5050u);
        }
      }
    }
  }
}
