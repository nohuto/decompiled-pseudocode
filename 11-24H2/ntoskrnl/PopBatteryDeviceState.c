/*
 * XREFs of PopBatteryDeviceState @ 0x140A5A0BC
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(_WORD *a1, __int64 a2)
{
  signed int v4; // ebx
  __int64 v5; // rcx
  _WORD *v6; // rax
  unsigned __int16 Length; // r8
  __int16 v9; // dx
  unsigned __int16 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r10d
  __int64 *v13; // rdi
  wchar_t *v14; // rax
  __int64 *v15; // rbx
  __int128 v16; // xmm0
  UNICODE_STRING String1; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0;
  String1 = 0LL;
  if ( !a1 )
    goto LABEL_24;
  v5 = 0x7FFFLL;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v4 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    Length = 2 * (0x7FFF - v5);
  else
LABEL_24:
    Length = String1.Length;
  if ( v4 >= 0 )
  {
    if ( Length > 8u
      && ((PsGetCurrentServerSiloGlobals(), v10 >= 8u) && *(_QWORD *)L"\\??\\" == *(_QWORD *)v11
       || (PsGetCurrentServerSiloGlobals(), v12 >= 8) && *(_QWORD *)L"\\\\?\\" == *(_QWORD *)v11) )
    {
      String1.Length = v10 - 8;
      String1.MaximumLength = v9 - 8;
      String1.Buffer = (wchar_t *)(v11 + 8);
      PopAcquireRwLockShared(&PopPolicyDeviceLock);
      PopAcquireRwLockShared((volatile signed __int64 *)&PopCB);
      v13 = (__int64 *)qword_140F0BCA0;
      if ( (__int64 *)qword_140F0BCA0 == &qword_140F0BCA0 )
        goto LABEL_22;
      do
      {
        v14 = (wchar_t *)(v13[5] + 8);
        *(_QWORD *)&String2.Length = v13[4];
        String2.Length -= 8;
        String2.MaximumLength -= 8;
        v15 = v13;
        String2.Buffer = v14;
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          break;
        v13 = (__int64 *)*v13;
        v15 = 0LL;
      }
      while ( v13 != &qword_140F0BCA0 );
      if ( !v15 )
      {
LABEL_22:
        v4 = -1073741772;
      }
      else if ( *((_DWORD *)v15 + 26) == 3 )
      {
        *(_OWORD *)a2 = *((_OWORD *)v15 + 7);
        *(_OWORD *)(a2 + 16) = *((_OWORD *)v15 + 8);
        *(_DWORD *)(a2 + 32) = *((_DWORD *)v15 + 36);
        v16 = *(_OWORD *)((char *)v15 + 148);
        v4 = 0;
        *(_OWORD *)(a2 + 36) = v16;
      }
      else
      {
        v4 = -1073741661;
      }
      PopReleaseRwLock((signed __int64 *)&PopCB);
      PopReleaseRwLock(&PopPolicyDeviceLock);
    }
    else
    {
      return (unsigned int)-1073741773;
    }
  }
  return (unsigned int)v4;
}
