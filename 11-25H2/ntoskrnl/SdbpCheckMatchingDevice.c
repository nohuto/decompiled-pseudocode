/*
 * XREFs of SdbpCheckMatchingDevice @ 0x1407F2C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v7; // ebx
  const char *v10; // r9
  int v11; // r8d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax

  v6 = *(_QWORD *)(a2 + 1744);
  v7 = 0;
  *a1 = 0;
  if ( !v6 )
  {
    v10 = "No device query callback specified";
    v11 = 2267;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", v11, (_DWORD)v10);
    return v7;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( !FirstTag )
  {
    v10 = "Failed to read HWID attribute";
    v11 = 2273;
    goto LABEL_3;
  }
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    v10 = "Failed to get HWID";
    v11 = 2279;
    goto LABEL_3;
  }
  v7 = 1;
  *a1 = guard_dispatch_icall_no_overrides(StringTagPtr);
  if ( a6 )
    *(_DWORD *)(a6 + 80) = 1;
  return v7;
}
