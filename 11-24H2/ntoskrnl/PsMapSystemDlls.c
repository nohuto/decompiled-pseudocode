/*
 * XREFs of PsMapSystemDlls @ 0x14091B210
 * Callers:
 *     MiMapProcessExecutable @ 0x14091B024 (MiMapProcessExecutable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     PspMapSystemDll @ 0x1409220D8 (PspMapSystemDll.c)
 */

__int64 __fastcall PsMapSystemDlls(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v7; // r14d
  int v8; // ebp
  int v9; // r15d
  __int64 i; // rsi
  _UNKNOWN **v11; // rdx
  _OWORD v13[3]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  memset(v13, 0, sizeof(v13));
  if ( (_KPROCESS *)a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v13);
  }
  v8 = *(_QWORD *)(a1 + 784) != 0LL;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    v8 = 2;
  v9 = 0;
  for ( i = 0LL; i < 6; ++i )
  {
    v11 = PspSystemDlls[i];
    if ( !v11 )
      goto LABEL_11;
    if ( i )
    {
      if ( v8 == 1 )
      {
        if ( v9 != (unsigned int)PsWow64GetProcessNtdllType(a1) )
          goto LABEL_11;
      }
      else if ( v8 != 2 || ((_DWORD)v11[1] & 0x40) == 0 )
      {
        goto LABEL_11;
      }
    }
    v4 = PspMapSystemDll(a1, v11, a2, 0LL);
    if ( v4 < 0 )
    {
      if ( v8 == 1 )
        v4 = -1073741405;
      break;
    }
LABEL_11:
    ++v9;
  }
  if ( v7 )
    KiUnstackDetachProcess((__int64)v13, 0, a3, a4);
  return (unsigned int)v4;
}
