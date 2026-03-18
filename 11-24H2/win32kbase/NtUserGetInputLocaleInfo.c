/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x14016CC70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011BE88 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     HKLtoPKLq @ 0x140131E10 (HKLtoPKLq.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, ULONG64 a2)
{
  int v3; // ebx
  __int64 v4; // r8
  _DWORD *v5; // rdx
  void *v6; // rcx
  __int64 v8; // [rsp+38h] [rbp-80h] BYREF
  ULONG64 v9; // [rsp+40h] [rbp-78h]
  _QWORD Src[8]; // [rsp+60h] [rbp-58h] BYREF

  v9 = a2;
  memset(Src, 0, sizeof(Src));
  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  v3 = 0;
  if ( a1 )
    v4 = HKLtoPKLq(v8, a1);
  else
    v4 = *(_QWORD *)(v8 + 480);
  if ( v4 )
  {
    v5 = (_DWORD *)v9;
    if ( v9 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    if ( *v5 == 64 )
    {
      LODWORD(Src[0]) = 64;
      Src[1] = *(_QWORD *)(v4 + 40);
      LODWORD(Src[2]) = *(_DWORD *)(v4 + 112);
      HIDWORD(Src[2]) = *(unsigned __int16 *)(v4 + 72);
      Src[3] = *(_QWORD *)(v4 + 64);
      RtlStringCchCopyNW((char *)&Src[4], 16LL, (char *)(v4 + 124), 0x10uLL);
      HIDWORD(Src[0]) = 0;
      v6 = (void *)v9;
      if ( v9 >= MmUserProbeAddress )
        v6 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v6, Src, 0x40uLL);
      v3 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v3;
}
