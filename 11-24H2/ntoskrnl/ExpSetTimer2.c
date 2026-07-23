/*
 * XREFs of ExpSetTimer2 @ 0x1403B07F0
 * Callers:
 *     NtSetTimer2 @ 0x1403B07C0 (NtSetTimer2.c)
 *     NtCancelTimer2 @ 0x1404859B0 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x14049B350 (NtSetIRTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int128 *v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v19; // [rsp+88h] [rbp+10h]

  v19 = a2;
  v14 = (__int128 *)a4;
  v5 = 0;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  if ( a2 && KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v19 < 0x7FFFFFFF0000LL )
      v7 = (__int64)v19;
    v15 = *(_QWORD *)v7;
    v19 = &v15;
    if ( a3 )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( a3 < 0x7FFFFFFF0000LL )
        v8 = a3;
      v16 = *(_QWORD *)v8;
    }
    if ( a4 )
    {
      if ( a4 < 0x7FFFFFFF0000LL )
        v6 = a4;
      RtlCopyVolatileMemory(&v18, (const void *)v6, 0x10uLL);
      v14 = &v18;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, ExpIRTimerObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v11 = v16;
    v12 = Object;
    if ( v16 && (*((_BYTE *)Object + 129) & 2) != 0 )
    {
      v5 = -1073741811;
    }
    else if ( v14 && (*(_DWORD *)v14 || *((__int64 *)v14 + 1) < -1) )
    {
      v5 = -1073741583;
    }
    else
    {
      if ( v19 )
        v13 = *v19;
      else
        v13 = 0LL;
      *((_QWORD *)Object + 18) = v13;
      v12[19] = 0LL;
      if ( v14 )
        v12[19] = *((_QWORD *)v14 + 1);
      if ( v19 )
        KeSetTimer2(v12, v13, v11, v14);
      else
        KeCancelTimer2((__int64)v12, 0LL, v11, (__int64)v14);
    }
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    return v5;
  }
  return result;
}
