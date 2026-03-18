/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x1405FCDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402914F4 (SepInternalSetSecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140477B20 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepSetSingletonEntry @ 0x1405FCF90 (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SeSetSecurityAttributesTokenEx(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        int *a5,
        __int64 a6,
        _BYTE *a7)
{
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v9; // rsi
  _QWORD *v10; // rdi
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v13 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( !a4 || (SepTokenSingletonAttributesConfig & 3) != 3 )
  {
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, (__int64)a5, a6);
  }
  if ( a2 )
    return (unsigned int)-1073741790;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (PERESOURCE *)Object;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v9[6], 1u);
    _InterlockedOr(v12, 0);
    v10 = Object;
    if ( (int)SepGetProcUniqueLuidAndIndexFromTokenEx(1, (__int64)Object, (__int64)&v13, (__int64)v15) >= 0 )
    {
      v7 = SepSetSingletonEntry(v13, a5, a6);
      if ( v7 >= 0 )
      {
        *a7 = 1;
LABEL_13:
        v10[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      }
    }
    else
    {
      *a7 = 0;
      v7 = AuthzBasepSetSecurityAttributesToken(v10[97], a5, a6);
      if ( v7 >= 0 )
        goto LABEL_13;
    }
    _InterlockedOr(v12, 0);
    ExReleaseResourceLite(v9[6]);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v7;
}
