/*
 * XREFs of NtUserGetCIMSSM @ 0x1402416E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1402404B8 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetCIMSSM(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // rdx
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h]
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  Src = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  if ( a1 && (unsigned int)_GetCurrentInputMessageSource(0LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src) && !Src )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(1LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src);
    if ( CurrentInputMessageSource )
    {
      v6 = (unsigned int)Src;
      v7 = (unsigned int)(Src - 18);
      if ( (v7 & 0xFFFFFFEF) == 0 )
        v6 = 2LL;
      LODWORD(Src) = v6;
      if ( PsGetCurrentProcessWow64Process(v7, v6, v5) )
      {
        v11 = 1LL;
      }
      else
      {
        v11 = 4LL;
        v2 = 3LL;
      }
      if ( (v2 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v8 = (_BYTE *)MmUserProbeAddress;
      *v8 = *v8;
      v8[7] = v8[7];
      RtlCopyVolatileMemory((void *)a1, &Src, 8uLL);
    }
  }
  else
  {
    UserSetLastError(87);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return CurrentInputMessageSource;
}
