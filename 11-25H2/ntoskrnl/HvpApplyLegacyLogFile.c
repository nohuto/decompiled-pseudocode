/*
 * XREFs of HvpApplyLegacyLogFile @ 0x1407D61EC
 * Callers:
 *     HvApplyLogFiles @ 0x1407D6104 (HvApplyLogFiles.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGenerateLogMetadata @ 0x140A0C540 (HvpGenerateLogMetadata.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140A6C7A4 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpIsMetadataArrayCoherent @ 0x140A83E50 (HvpIsMetadataArrayCoherent.c)
 *     HvpUpdateRecoveryVector @ 0x140A9972C (HvpUpdateRecoveryVector.c)
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
  __int64 v9; // rcx
  int v10; // ebx
  ULONG v11; // r14d
  int v12; // r14d
  __int64 v13; // rsi
  _DWORD BitMapHeader[5]; // [rsp+44h] [rbp-4Dh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-39h]
  __int64 v17; // [rsp+60h] [rbp-31h]
  _DWORD v18[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v19; // [rsp+70h] [rbp-21h]
  int v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+7Ch] [rbp-15h]
  __int128 v22; // [rsp+80h] [rbp-11h]

  v17 = a6;
  v9 = *(_QWORD *)(a2 + 16);
  BugCheckParameter2 = a4;
  BitMapHeader[0] = 0;
  BitMapHeader[2] = 0;
  v19 = 0LL;
  v22 = 0LL;
  v10 = guard_dispatch_icall_no_overrides(v9);
  if ( v10 >= 0 )
  {
    if ( MEMORY[0] == 1414678852 )
    {
      BitMapHeader[1] = a1[10] >> 9;
      *(_QWORD *)&BitMapHeader[3] = 4LL;
      v11 = RtlNumberOfSetBits((PRTL_BITMAP)&BitMapHeader[1]);
      if ( v11 )
      {
        v12 = v11 << 9;
        HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1]);
        v13 = guard_dispatch_icall_no_overrides(0LL);
        if ( v13 )
        {
          HvpGenerateLogMetadata((PRTL_BITMAP)&BitMapHeader[1]);
          v20 = a1[10];
          v18[0] = 1162638920;
          v21 = 0;
          v18[1] = v12 + 40;
          if ( (unsigned __int8)HvpIsMetadataArrayCoherent(v18, v13, 0LL) )
          {
            v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 16));
            if ( v10 >= 0 )
            {
              v10 = HvpApplyLogEntryDataToFileBackedHive(BugCheckParameter2, v12, (__int64)BitMapHeader);
              if ( v10 >= 0 )
              {
                if ( (v19 & 1) != 0 )
                  a1[36] |= 1u;
                if ( a7 )
                  HvpUpdateRecoveryVector(v13, 0LL, a7);
                v10 = 1073741833;
              }
            }
          }
          else
          {
            v10 = -1073741492;
          }
          guard_dispatch_icall_no_overrides(v13);
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
  return (unsigned int)v10;
}
