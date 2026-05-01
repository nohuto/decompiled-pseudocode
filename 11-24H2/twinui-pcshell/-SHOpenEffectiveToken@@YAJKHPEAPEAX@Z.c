/*
 * XREFs of ?SHOpenEffectiveToken@@YAJKHPEAPEAX@Z @ 0x180675164
 * Callers:
 *     ?SetPrivilegeAttribute@@YAKPEBGKPEAK@Z @ 0x180675224 (-SetPrivilegeAttribute@@YAKPEBGKPEAK@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 */

int __fastcall SHOpenEffectiveToken(__int64 a1, __int64 a2, void **a3)
{
  HANDLE CurrentThread; // rax
  int result; // eax
  HANDLE v6; // rax
  HANDLE CurrentProcess; // rax

  *a3 = 0LL;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 0x28u, 0, a3) )
    return 0;
  result = ResultFromKnownLastError();
  if ( result >= 0 )
    return result;
  if ( result == -2147024891 )
  {
    v6 = GetCurrentThread();
    if ( !OpenThreadToken(v6, 0x28u, 1, a3) )
    {
      result = ResultFromKnownLastError();
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  if ( result != -2147023888 )
    return result;
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x28u, a3) )
    return 0;
  return ResultFromKnownLastError();
}
