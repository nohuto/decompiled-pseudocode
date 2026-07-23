/*
 * XREFs of PspQueryQuotaLimits @ 0x1409AF220
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MmQueryWorkingSetInformation @ 0x1404103B0 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryQuotaLimits(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  size_t v6; // rbx
  __int64 result; // rax
  _QWORD *v10; // rcx
  PVOID v11; // r15
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r8d
  int v16; // r8d
  int v17; // [rsp+40h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD Src[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v21[7]; // [rsp+68h] [rbp-C0h] BYREF
  int v22; // [rsp+A0h] [rbp-88h]
  __int64 v23; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-70h] BYREF
  _OWORD v25[3]; // [rsp+C0h] [rbp-68h] BYREF

  v6 = a4;
  memset_0(Src, 0, 0x58uLL);
  Object = 0LL;
  v17 = 0;
  memset(v25, 0, sizeof(v25));
  if ( (_DWORD)v6 != 48 && (_DWORD)v6 != 88 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             4096,
             (__int64)PsProcessType,
             a6,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (_QWORD *)*((_QWORD *)Object + 95);
    Src[0] = v10[24];
    Src[1] = v10[8];
    v21[1] = v10[40];
    v21[3] = v10[56];
    v21[2] = -1LL;
    v11 = Object;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v25);
    v12 = MmQueryWorkingSetInformation(&v24, &v23, &Object, &v20, v21, &v17);
    KiUnstackDetachProcess((__int64)v25, 0, v13, v14);
    v15 = 2 - ((v17 & 4) != 0);
    if ( (v17 & 1) != 0 )
      v16 = v15 | 4;
    else
      v16 = v15 | 8;
    v22 = v16;
    ObfDereferenceObjectWithTag(v11, 0x79517350u);
    if ( v12 >= 0 )
    {
      memmove(a3, Src, v6);
      if ( a5 )
        *a5 = v6;
    }
    return (unsigned int)v12;
  }
  return result;
}
