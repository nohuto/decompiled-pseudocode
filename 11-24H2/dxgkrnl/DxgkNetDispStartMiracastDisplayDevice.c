/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1401AE950
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x14006A918 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x14006AD68 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(const void *a1)
{
  struct _KEVENT *v2; // rdi
  unsigned int v4; // ebx
  struct DXGPROCESS *Current; // rax
  char *v6; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // [rsp+50h] [rbp-258h] BYREF
  PVOID Object; // [rsp+58h] [rbp-250h] BYREF
  HANDLE v10[70]; // [rsp+60h] [rbp-248h] BYREF

  memset(v10, 0, 0x228uLL);
  v2 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return -2147483640LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v10, a1, 0x228uLL);
  if ( LODWORD(v10[0]) == 552 )
  {
    Current = DXGPROCESS::GetCurrent();
    v8 = DxgkNetDispAccessCheck(Current);
    if ( v8 >= 0 )
    {
      v6 = (char *)v10[67] - *(_QWORD *)&GUID_SPM_DEFAULT.Data1;
      if ( v10[67] == *(HANDLE *)&GUID_SPM_DEFAULT.Data1 )
        v6 = (char *)v10[68] - *(_QWORD *)GUID_SPM_DEFAULT.Data4;
      if ( v6 || (v8 = ExUuidCreate((UUID *)&v10[67]), v8 >= 0) )
      {
        if ( v10[66]
          && (Object = 0LL,
              v7 = ObReferenceObjectByHandle(v10[66], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL),
              v2 = (struct _KEVENT *)Object,
              v8 = v7,
              v7 < 0) )
        {
          v4 = -2147483640;
          WdLogSingleEntry1(2LL, v10[66]);
          WdLogGlobalForLineNumber = 9689;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Caller specified event handle (0x%I64x) is not an valid event handle.",
            (__int64)v10[66],
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          return (unsigned int)DxgkMiracastStartMiracastSession((unsigned __int16 *)v10, v2, &v8);
        }
      }
      else
      {
        v4 = -2147483647;
        WdLogSingleEntry1(3LL, -2147483647LL);
        WdLogGlobalForLineNumber = 9671;
      }
    }
    else
    {
      v4 = -2147483643;
      WdLogSingleEntry1(3LL, -2147483643LL);
      WdLogGlobalForLineNumber = 9660;
    }
  }
  else
  {
    v4 = -2147483640;
    WdLogSingleEntry1(3LL, -2147483640LL);
    WdLogGlobalForLineNumber = 9650;
  }
  return v4;
}
