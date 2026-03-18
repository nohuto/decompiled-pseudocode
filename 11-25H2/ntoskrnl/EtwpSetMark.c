/*
 * XREFs of EtwpSetMark @ 0x14079ABA4
 * Callers:
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     EtwpLogRefSetAutoMark @ 0x1407A18C4 (EtwpLogRefSetAutoMark.c)
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     MmEmptyAllWorkingSets @ 0x14066D578 (MmEmptyAllWorkingSets.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MmIdentifyPhysicalMemory @ 0x1407DBCA8 (MmIdentifyPhysicalMemory.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpSetMark(unsigned int *a1, int *a2, unsigned int a3, char a4, KPROCESSOR_MODE PreviousMode)
{
  unsigned int v8; // ebx
  char v9; // r12
  int v11; // [rsp+40h] [rbp-48h]
  _DWORD *v12; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+54h] [rbp-34h]
  __int64 *v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+64h] [rbp-24h]

  v8 = 0;
  if ( a3 > 4 )
  {
    if ( a3 <= 0xFFDD )
    {
      if ( PreviousMode && ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = *a2;
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
      v12 = a2 + 1;
      v13 = a3 - 4;
      v14 = 0;
      v15 = &EtwpNull;
      v16 = 2;
      v17 = 0;
      EtwpLogSystemEventUnsafe(
        *((_QWORD *)a1 + 170),
        (__int64)&v12,
        KeGetCurrentThread(),
        *a1,
        2u,
        0xF22u,
        0x3100u,
        PreviousMode,
        v11);
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
