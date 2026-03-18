/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x14065CEFC
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1402BB410 (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiProcessTupleStartFromHandle(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  int v4; // eax
  PVOID Object; // [rsp+38h] [rbp-19h] BYREF
  __int128 v7; // [rsp+40h] [rbp-11h] BYREF
  __int64 v8; // [rsp+50h] [rbp-1h] BYREF
  __int64 v9; // [rsp+58h] [rbp+7h] BYREF
  __int64 v10; // [rsp+60h] [rbp+Fh] BYREF
  _OWORD v11[3]; // [rsp+68h] [rbp+17h] BYREF

  Object = 0LL;
  memset(v11, 0, sizeof(v11));
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
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v11);
    v7 = 0uLL;
    LODWORD(Object) = 0;
    v4 = MmQueryWorkingSetInformation(&v10, &v9, &v8, &v7, (_QWORD *)&v7 + 1, &Object);
    if ( v4 >= 0 )
      xmmword_140EF6A80 = v7;
    v3 = 0;
    if ( v4 < 0 )
      v3 = v4;
    KiUnstackDetachProcess((__int64)v11, 0LL);
    if ( v3 >= 0 )
      return 0;
  }
  return (unsigned int)v3;
}
