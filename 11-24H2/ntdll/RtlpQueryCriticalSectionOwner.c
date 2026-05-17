/*
 * XREFs of RtlpQueryCriticalSectionOwner @ 0x180045F94
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpQueryCriticalSectionOwner64 @ 0x1800442E0 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlpQueryProcessMachine @ 0x1800443A4 (RtlpQueryProcessMachine.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x180133DA0 (RtlpQueryCriticalSectionOwner32.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenProcess @ 0x180162150 (NtOpenProcess.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 CriticalSectionOwner32; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]
  __int128 v12; // [rsp+50h] [rbp-10h]
  unsigned __int16 v13; // [rsp+88h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF

  v7[1] = 0;
  v11 = 0;
  v13 = 0;
  Handle = 0LL;
  if ( !*(_QWORD *)(a2 + 160) )
    return (unsigned int)-1073741811;
  v6[0] = a1;
  v7[0] = 48;
  v8 = 0LL;
  v10 = 0;
  v9 = 0LL;
  v12 = 0LL;
  v6[1] = 0LL;
  v3 = NtOpenProcess(&Handle, 4112LL, v7, v6);
  if ( v3 >= 0 )
  {
    v3 = RtlpQueryProcessMachine((__int64)Handle, &v13);
    if ( v3 >= 0 )
    {
      if ( v13 == 332 || v13 == 452 )
      {
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner32(Handle, *(_QWORD *)(a2 + 160));
      }
      else
      {
        if ( v13 != 34404 && v13 != 43620 )
        {
          v3 = -1073741811;
          goto LABEL_13;
        }
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner64((__int64)Handle, *(_QWORD *)(a2 + 160));
      }
      *(_QWORD *)(a2 + 168) = CriticalSectionOwner32;
      v3 = 0;
    }
  }
LABEL_13:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
