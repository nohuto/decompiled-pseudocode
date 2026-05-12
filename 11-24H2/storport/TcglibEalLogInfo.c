/*
 * XREFs of TcglibEalLogInfo @ 0x140085CB8
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x14013B87C (TcglibActivateLockingSpEx.c)
 *     TcglibAssignNamespaceLocking @ 0x14013B9FC (TcglibAssignNamespaceLocking.c)
 *     TcglibDeassignNamespaceLocking @ 0x14013BE18 (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x14013BFF8 (TcglibEraseBand.c)
 *     TcglibRevertLockingSpEx @ 0x14013C434 (TcglibRevertLockingSpEx.c)
 *     TcglibSetBand @ 0x14013C6EC (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x14013C8E8 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandPin @ 0x14013CC20 (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x14013CD8C (TcglibSetSidPin.c)
 *     TcglibpConfigureLockingSp @ 0x14013F864 (TcglibpConfigureLockingSp.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer @ 0x140084B1C (McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibEalLogInfo(int *a1, const char *a2, char a3, char a4, __int64 a5)
{
  int v5; // eax
  const char *v6; // rdi
  int v10; // r11d
  int *v11; // rbx
  const wchar_t *v12; // rsi
  char v13; // r11
  const wchar_t *v14; // rcx
  const char *v15; // r8
  const char *v16; // rdx
  const char *v17; // rdi
  int v19; // [rsp+A0h] [rbp-68h]
  __int128 v20; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-40h] BYREF

  v5 = *a1;
  v6 = 0LL;
  v21 = 0LL;
  v19 = RaidNullAddress;
  v22 = 0LL;
  v20 = 0LL;
  if ( v5 == 1431193940 )
  {
    v10 = a1[26];
    v6 = (const char *)a1;
    v11 = (int *)*((_QWORD *)a1 + 3);
    v22 = *(_OWORD *)(a1 + 526);
    v19 = v10;
  }
  else
  {
    v11 = 0LL;
    if ( v5 == 1094997074 )
      v11 = a1;
  }
  v21 = *(_OWORD *)(v11 + 1266);
  v12 = (const wchar_t *)*((_QWORD *)v11 + 635);
  RaidDriverGetName(*((_QWORD *)v11 + 2), (__int64)&v20);
  if ( (byte_140171468 & 2) != 0 )
  {
    v14 = (const wchar_t *)&unk_140151214;
    if ( v12 )
      v14 = v12;
    if ( v6 )
    {
      v15 = v6 + 242;
      v16 = v6 + 177;
      v17 = v6 + 168;
    }
    else
    {
      v17 = (const char *)&word_140150F48;
      v15 = (const char *)&word_140150F48;
      v16 = (const char *)&word_140150F48;
    }
    McTemplateK0quuujjzssszsxxxx_EtwWriteTransfer(
      (__int64)v14,
      &TcgInfo,
      (__int64)v15,
      v11[14],
      v13,
      SBYTE1(v19),
      SBYTE2(v19),
      (__int64)&v22,
      (__int64)&v21,
      *((const wchar_t **)&v20 + 1),
      v17,
      v16,
      v15,
      v14,
      a2,
      a3,
      a4,
      a5,
      0);
  }
  return 0LL;
}
