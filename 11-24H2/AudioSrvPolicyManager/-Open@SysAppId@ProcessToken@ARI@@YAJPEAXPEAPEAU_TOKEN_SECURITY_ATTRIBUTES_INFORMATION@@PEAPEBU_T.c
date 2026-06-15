/*
 * XREFs of ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180047B6C
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180014C90 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ??$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@_K@Z @ 0x1800478D0 (--$Allocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFO.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180047950 (-Free@ARI@@YAXPEAX@Z.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::Open(
        HANDLE TokenHandle,
        _QWORD *a2,
        struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION **a3,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **a4)
{
  NTSTATUS v7; // eax
  PVOID v9; // rax
  void *v10; // rdx
  PVOID v11; // rbx
  ULONG v12; // edi
  int v13; // eax
  __int64 v14; // rdi
  struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *v15; // rsi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h]
  ULONG Size; // [rsp+88h] [rbp+20h] BYREF
  int Size_4; // [rsp+8Ch] [rbp+24h]

  Size_4 = HIDWORD(a4);
  Size = 0;
  v7 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, &Size);
  if ( v7 == -1073741789 )
  {
    v9 = ARI::Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(Size);
    v11 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, Size);
      v13 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v11, Size, &Size);
      if ( v13 >= 0 )
      {
        if ( *((_DWORD *)v11 + 1) )
        {
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
          v14 = 0LL;
          v17 = 0LL;
          while ( (unsigned int)v14 < *((_DWORD *)v11 + 1) )
          {
            v15 = (struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION *)(*((_QWORD *)v11 + 1) + 40 * v14);
            if ( !RtlCompareUnicodeString(&DestinationString, (PCUNICODE_STRING)v15, 1u) )
            {
              *a3 = v15;
              *a2 = v11;
              ARI::Free(0LL, v10);
              return 0;
            }
            v14 = (unsigned int)(v14 + 1);
          }
        }
        v12 = 1168;
      }
      else
      {
        v12 = RtlNtStatusToDosErrorNoTeb(v13);
      }
    }
    else
    {
      v12 = 8;
    }
    ARI::Free(v11, v10);
    return v12;
  }
  else if ( v7 )
  {
    return RtlNtStatusToDosErrorNoTeb(v7);
  }
  else
  {
    return 1359;
  }
}
