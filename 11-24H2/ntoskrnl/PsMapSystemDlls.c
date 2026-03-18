/*
 * XREFs of PsMapSystemDlls @ 0x1408F8E70
 * Callers:
 *     MiMapProcessExecutable @ 0x1408F8C84 (MiMapProcessExecutable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x1408FF7F8 (PspMapSystemDll.c)
 *     PsWow64GetProcessNtdllType @ 0x140908828 (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PsMapSystemDlls(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  int v5; // r14d
  int v6; // ebp
  int v7; // r15d
  __int64 i; // rsi
  _UNKNOWN **v9; // rdx
  _OWORD v11[3]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  memset(v11, 0, sizeof(v11));
  if ( (_KPROCESS *)a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  v6 = *(_QWORD *)(a1 + 784) != 0LL;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    v6 = 2;
  v7 = 0;
  for ( i = 0LL; i < 6; ++i )
  {
    v9 = PspSystemDlls[i];
    if ( !v9 )
      goto LABEL_11;
    if ( i )
    {
      if ( v6 == 1 )
      {
        if ( v7 != (unsigned int)PsWow64GetProcessNtdllType(a1) )
          goto LABEL_11;
      }
      else if ( v6 != 2 || ((_DWORD)v9[1] & 0x40) == 0 )
      {
        goto LABEL_11;
      }
    }
    v2 = PspMapSystemDll(a1, v9, a2, 0LL);
    if ( v2 < 0 )
    {
      if ( v6 == 1 )
        v2 = -1073741405;
      break;
    }
LABEL_11:
    ++v7;
  }
  if ( v5 )
    KiUnstackDetachProcess((__int64)v11, 0);
  return (unsigned int)v2;
}
