/*
 * XREFs of PopDiagTracePowerLimitExtensionValueUpdate @ 0x140755730
 * Callers:
 *     PopEvaluatePowerLimitChange @ 0x140749704 (PopEvaluatePowerLimitChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerLimitExtensionValueUpdate(__int64 a1)
{
  unsigned int *v2; // rsi
  unsigned int v3; // ebx
  _DWORD *Pool2; // r14
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 i; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  _DWORD *v12; // [rsp+58h] [rbp-18h]
  unsigned int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_LIMIT_EXTENSION_UPDATE) )
    {
      v2 = (unsigned int *)(a1 + 72);
      v3 = 16 * *(_DWORD *)(a1 + 72);
      if ( v3 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v3, 0x67696450u);
        if ( Pool2 )
        {
          v5 = 0;
          for ( i = a1; v5 < *v2; Pool2[2 * v6 + 3] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6 + 12) )
          {
            v6 = v5++;
            v6 *= 2LL;
            Pool2[2 * v6] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6);
            Pool2[2 * v6 + 1] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6 + 4);
            Pool2[2 * v6 + 2] = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6 + 8);
          }
          UserData.Reserved = 0;
          v11 = 0;
          v14 = 0;
          UserData.Ptr = (ULONGLONG)&i;
          UserData.Size = 8;
          v9 = a1 + 72;
          v10 = 4;
          v12 = Pool2;
          v13 = v3;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_LIMIT_EXTENSION_UPDATE, 0LL, 3u, &UserData);
          ExFreePoolWithTag(Pool2, 0x67696450u);
        }
      }
    }
  }
}
