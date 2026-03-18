/*
 * XREFs of PspQueryQuotaLimits @ 0x1409CDB50
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1402BB410 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
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
  int v13; // r8d
  int v14; // r8d
  int v15; // [rsp+40h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD Src[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v19[7]; // [rsp+68h] [rbp-C0h] BYREF
  int v20; // [rsp+A0h] [rbp-88h]
  __int64 v21; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-70h] BYREF
  _OWORD v23[3]; // [rsp+C0h] [rbp-68h] BYREF

  v6 = a4;
  memset_0(Src, 0, 0x58uLL);
  Object = 0LL;
  v15 = 0;
  memset(v23, 0, sizeof(v23));
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
    v19[1] = v10[40];
    v19[3] = v10[56];
    v19[2] = -1LL;
    v11 = Object;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v23);
    v12 = MmQueryWorkingSetInformation(&v22, &v21, &Object, &v18, v19, &v15);
    KiUnstackDetachProcess((__int64)v23, 0LL);
    v13 = 2 - ((v15 & 4) != 0);
    if ( (v15 & 1) != 0 )
      v14 = v13 | 4;
    else
      v14 = v13 | 8;
    v20 = v14;
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
