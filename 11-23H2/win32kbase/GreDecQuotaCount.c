/*
 * XREFs of GreDecQuotaCount @ 0x1C0098AF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BBC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // r8d
  __int64 v15; // rcx
  struct _ERESOURCE *v16; // rcx

  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v5 = *(struct _ERESOURCE **)(v4 + 1912);
  if ( v5 )
  {
    PsEnterPriorityRegion(v3, v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  v6 = *(_QWORD *)(v4 + 1912);
  v8 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  if ( *(_DWORD *)(v8 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v8, v7, v9, v6, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
  --*(_DWORD *)(a1 + 60);
  v10 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  v11 = *(_QWORD *)(v10 + 1912);
  result = SGDGetSessionState(v12);
  v15 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v15 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v15,
               (unsigned int)&LockRelease,
               v14,
               v11,
               (__int64)L"GreBaseGlobals.hsemHmgr");
  v16 = *(struct _ERESOURCE **)(v10 + 1912);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    return PsLeavePriorityRegion();
  }
  return result;
}
