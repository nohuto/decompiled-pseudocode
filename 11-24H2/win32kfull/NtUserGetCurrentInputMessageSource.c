/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x140241FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1402404B8 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagTHREADINFO *v11; // rax
  _BYTE *v12; // rdx
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]
  char v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  Src = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v16, 1LL);
  if ( !a1 )
  {
    UserSetLastError(87);
    CurrentInputMessageSource = 0;
    goto LABEL_21;
  }
  CurrentInputMessageSource = _GetCurrentInputMessageSource(0LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src);
  if ( !CurrentInputMessageSource )
    goto LABEL_21;
  if ( !(unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(v3, v5, v6, v7) )
  {
    v9 = (unsigned int)Src;
    if ( (((_DWORD)Src - 18) & 0xFFFFFFEF) == 0 )
      v9 = 2LL;
    LODWORD(Src) = v9;
    goto LABEL_13;
  }
  if ( (_DWORD)Src == 34 )
    goto LABEL_9;
  if ( (_DWORD)Src == 18 )
  {
    v11 = PtiCurrent(v9, v8);
    if ( (unsigned int)IsTouchpadCapable(v11, 0LL) )
    {
      LODWORD(Src) = 16;
      goto LABEL_13;
    }
LABEL_9:
    LODWORD(Src) = 2;
  }
LABEL_13:
  if ( PsGetCurrentProcessWow64Process(v9, v8, v10) )
  {
    v15 = 1LL;
  }
  else
  {
    v15 = 4LL;
    v2 = 3LL;
  }
  if ( (v2 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_BYTE *)MmUserProbeAddress;
  *v12 = *v12;
  v12[7] = v12[7];
  RtlCopyVolatileMemory((void *)a1, &Src, 8uLL);
LABEL_21:
  UserSessionSwitchLeaveCrit(v3);
  return CurrentInputMessageSource;
}
