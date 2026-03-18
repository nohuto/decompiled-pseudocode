/*
 * XREFs of HvpApplyLegacyLogFile @ 0x1407E6070
 * Callers:
 *     HvApplyLogFiles @ 0x1407E5F88 (HvApplyLogFiles.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGenerateLogMetadata @ 0x14097F1C8 (HvpGenerateLogMetadata.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140A6E9D0 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpIsMetadataArrayCoherent @ 0x140A8894C (HvpIsMetadataArrayCoherent.c)
 *     HvpUpdateRecoveryVector @ 0x140A9E570 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvpApplyLegacyLogFile(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  ULONG v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v19; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-51h]
  _DWORD BitMapHeader[5]; // [rsp+44h] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-39h]
  __int64 v23; // [rsp+60h] [rbp-31h]
  _DWORD v24[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v25; // [rsp+70h] [rbp-21h]
  int v26; // [rsp+78h] [rbp-19h]
  int v27; // [rsp+7Ch] [rbp-15h]
  __int128 v28; // [rsp+80h] [rbp-11h]

  v23 = a6;
  v9 = a1[10];
  v10 = *(_QWORD *)(a2 + 16);
  v20 = v9 >> 12;
  BugCheckParameter2 = a4;
  BitMapHeader[0] = 0;
  BitMapHeader[2] = 0;
  v19 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v11 = guard_dispatch_icall_no_overrides(v10, 512LL, (v9 >> 12) + 4, &v19);
  if ( v11 >= 0 )
  {
    if ( *v19 == 1414678852 )
    {
      BitMapHeader[1] = a1[10] >> 9;
      *(_QWORD *)&BitMapHeader[3] = v19 + 1;
      v12 = RtlNumberOfSetBits((PRTL_BITMAP)&BitMapHeader[1]);
      if ( v12 )
      {
        v13 = v12 << 9;
        HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1]);
        v15 = guard_dispatch_icall_no_overrides(0LL, 0LL, 859000131LL, v14);
        if ( v15 )
        {
          HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1]);
          v26 = a1[10];
          v24[0] = 1162638920;
          v27 = 0;
          v24[1] = v13 + 40;
          if ( (unsigned __int8)HvpIsMetadataArrayCoherent(v24, v15, 0LL) )
          {
            v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 16), (v20 + 1027) & 0xFFFFFE00, v13, &v19);
            if ( v11 >= 0 )
            {
              v11 = HvpApplyLogEntryDataToFileBackedHive(BugCheckParameter2, v13, (__int64)BitMapHeader);
              if ( v11 >= 0 )
              {
                if ( (v25 & 1) != 0 )
                  a1[36] |= 1u;
                if ( a7 )
                  HvpUpdateRecoveryVector(v15, 0LL, a7);
                v11 = 1073741833;
              }
            }
          }
          else
          {
            v11 = -1073741492;
          }
          guard_dispatch_icall_no_overrides(v15, 0LL, v16, v17);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return 0;
      }
    }
    else if ( BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0 )
    {
      a1[1022] |= 4u;
      return 1073741833;
    }
    else
    {
      return (unsigned int)-1073741492;
    }
  }
  return (unsigned int)v11;
}
