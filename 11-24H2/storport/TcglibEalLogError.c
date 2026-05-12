/*
 * XREFs of TcglibEalLogError @ 0x140085AEC
 * Callers:
 *     ParseAssignNamespace @ 0x14013D4F0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x14013D640 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x14013D7F0 (ParseLockingObjectInfo.c)
 *     ParseGetTableColumnData @ 0x14013EA80 (ParseGetTableColumnData.c)
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 *     TcglibpConfigureLockingSp @ 0x14013F864 (TcglibpConfigureLockingSp.c)
 *     ParseSecretProtection @ 0x140140530 (ParseSecretProtection.c)
 *     ParseBooleanData @ 0x140140C80 (ParseBooleanData.c)
 *     ParseSyncSessionData @ 0x140140DC0 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140140F20 (ParseTPerProperties.c)
 *     TcglibpCloseSession @ 0x14014155C (TcglibpCloseSession.c)
 *     TcglibpOpenSessionWithRetry @ 0x140141998 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer @ 0x140084B1C (McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibEalLogError(int *a1, const char *a2, char a3, char a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  const char *v7; // rdi
  int v11; // r11d
  int *v12; // rbx
  const wchar_t *v13; // rsi
  char v14; // r11
  const wchar_t *v15; // rcx
  const char *v16; // r8
  const char *v17; // rdx
  const char *v18; // rdi
  int v20; // [rsp+A0h] [rbp-68h]
  __int128 v21; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-40h] BYREF

  v6 = *a1;
  v7 = 0LL;
  v22 = 0LL;
  v20 = RaidNullAddress;
  v23 = 0LL;
  v21 = 0LL;
  if ( v6 == 1431193940 )
  {
    v11 = a1[26];
    v7 = (const char *)a1;
    v12 = (int *)*((_QWORD *)a1 + 3);
    v23 = *(_OWORD *)(a1 + 526);
    v20 = v11;
  }
  else
  {
    v12 = 0LL;
    if ( v6 == 1094997074 )
      v12 = a1;
  }
  v22 = *(_OWORD *)(v12 + 1266);
  v13 = (const wchar_t *)*((_QWORD *)v12 + 635);
  RaidDriverGetName(*((_QWORD *)v12 + 2), (__int64)&v21);
  if ( (byte_140171467 & 2) != 0 )
  {
    v15 = (const wchar_t *)&unk_140151214;
    if ( v13 )
      v15 = v13;
    if ( v7 )
    {
      v16 = v7 + 242;
      v17 = v7 + 177;
      v18 = v7 + 168;
    }
    else
    {
      v18 = (const char *)&word_140150F48;
      v16 = (const char *)&word_140150F48;
      v17 = (const char *)&word_140150F48;
    }
    McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer(
      (__int64)v15,
      &TcgError,
      (__int64)v16,
      v12[14],
      v14,
      SBYTE1(v20),
      SBYTE2(v20),
      (__int64)&v23,
      (__int64)&v22,
      *((const wchar_t **)&v21 + 1),
      v18,
      v17,
      v16,
      v15,
      a2,
      a3,
      a4,
      a5,
      a6);
  }
  return 0LL;
}
