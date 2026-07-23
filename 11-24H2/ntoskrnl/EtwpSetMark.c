/*
 * XREFs of EtwpSetMark @ 0x1407AA0B4
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     EtwpLogRefSetAutoMark @ 0x1407B10E4 (EtwpLogRefSetAutoMark.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     MmEmptyAllWorkingSets @ 0x14067A064 (MmEmptyAllWorkingSets.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EC118 (MmIdentifyPhysicalMemory.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpSetMark(unsigned int *a1, _DWORD *a2, unsigned int a3, char a4, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v8; // ebx
  char v9; // r12
  _DWORD *v11; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+54h] [rbp-34h]
  int *v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+64h] [rbp-24h]

  v8 = 0;
  if ( a3 > 4 )
  {
    if ( a3 <= 0xFFDD )
    {
      if ( PreviousMode && ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 0;
      if ( (*a2 & 1) != 0 && a4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          v9 = 1;
          MmEmptyAllWorkingSets();
        }
        else
        {
          v8 = -1073741727;
        }
      }
      v11 = a2 + 1;
      v12 = a3 - 4;
      v13 = 0;
      v14 = &EtwpNull;
      v15 = 2;
      v16 = 0;
      EtwpLogSystemEventUnsafe(
        *((_QWORD *)a1 + 170),
        (__int64)&v11,
        KeGetCurrentThread(),
        *a1,
        2u,
        0xF22u,
        0x3100u,
        PreviousMode);
      if ( v9 )
        MmIdentifyPhysicalMemory(*((_QWORD *)a1 + 170), *a1, 629LL, 1LL);
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
