/*
 * XREFs of CmpTraceHiveSaveStart @ 0x140ABA48C
 * Callers:
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 */

void __fastcall CmpTraceHiveSaveStart(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  ULONGLONG *v5; // rax
  ULONGLONG *v6; // rbx
  ULONG v7; // edx
  __int16 v8; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  __int16 *v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp-10h]

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v8 = 0;
    v5 = (ULONGLONG *)CmpConstructName(a1, v2, v3, v4);
    v6 = v5;
    if ( v5 )
    {
      v7 = *(unsigned __int16 *)v5;
      UserData.Ptr = v5[1];
      v11 = &v8;
      UserData.Size = v7;
      UserData.Reserved = 0;
      v12 = 2LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
      CmpFreeTransientPoolWithTag(v6, 0x624E4D43u);
    }
  }
}
