/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x140669BA4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407D87A0 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MmQueryWorkingSetInformation @ 0x1404103B0 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiProcessTupleStartFromHandle(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID Object; // [rsp+38h] [rbp-19h] BYREF
  __int128 v9; // [rsp+40h] [rbp-11h] BYREF
  __int64 v10; // [rsp+50h] [rbp-1h] BYREF
  __int64 v11; // [rsp+58h] [rbp+7h] BYREF
  __int64 v12; // [rsp+60h] [rbp+Fh] BYREF
  _OWORD v13[3]; // [rsp+68h] [rbp+17h] BYREF

  Object = 0LL;
  memset(v13, 0, sizeof(v13));
  v3 = ObReferenceObjectByHandle(a2, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
  if ( v3 < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    *(_QWORD *)&CmpRegistryProcess = a2;
    *((_QWORD *)&CmpRegistryProcess + 1) = Object;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v13);
    v9 = 0uLL;
    LODWORD(Object) = 0;
    v4 = MmQueryWorkingSetInformation(&v12, &v11, &v10, &v9, (_QWORD *)&v9 + 1, &Object);
    if ( v4 >= 0 )
      xmmword_140EF7060 = v9;
    v3 = 0;
    if ( v4 < 0 )
      v3 = v4;
    KiUnstackDetachProcess((__int64)v13, 0, v5, v6);
    if ( v3 >= 0 )
      return 0;
  }
  return (unsigned int)v3;
}
