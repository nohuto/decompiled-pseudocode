/*
 * XREFs of PopReadLegacySimulatedArchitecturalClasses @ 0x140C32E38
 * Callers:
 *     PopReadSimulatedArchitecturalClasses @ 0x140C32F84 (PopReadSimulatedArchitecturalClasses.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PopReadLegacySimulatedArchitecturalClasses(__int64 a1, unsigned __int16 a2, void *a3, unsigned int a4)
{
  char v8; // si
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdi
  int v12; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[264]; // [rsp+68h] [rbp-98h] BYREF

  ResultLength = 0;
  ValueName.Buffer = L"SmallProcessorMask";
  *(_QWORD *)&ValueName.Length = 2490404LL;
  memset_0(v18, 0, 0x100uLL);
  v17[1] = 0;
  v17[0] = 2097153;
  KeyValueInformation = 0LL;
  v8 = 0;
  memset_0(v18, 0, 0x100uLL);
  if ( ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformationAlign64, &KeyValueInformation, 0x10u, &ResultLength) >= 0
    && ((_DWORD)KeyValueInformation == 4 || (_DWORD)KeyValueInformation == 11) )
  {
    if ( DWORD1(KeyValueInformation) == 4 )
    {
      v9 = DWORD2(KeyValueInformation);
      *((_QWORD *)&KeyValueInformation + 1) = DWORD2(KeyValueInformation);
    }
    else
    {
      if ( DWORD1(KeyValueInformation) != 8 )
        return v8;
      v9 = *((_QWORD *)&KeyValueInformation + 1);
    }
    v8 = 1;
    if ( a1 )
    {
      KeAddGroupAffinityEx((unsigned __int16 *)v17, a2, v9);
      v10 = 0;
      if ( a4 )
      {
        v11 = 0LL;
        do
        {
          v12 = KeCheckProcessorAffinityEx((unsigned __int16 *)v17, v10++);
          *(_BYTE *)(a1 + v11++) = v12 == 0;
        }
        while ( v10 < a4 );
      }
    }
  }
  return v8;
}
