/*
 * XREFs of ObpAssignSecurity @ 0x140854270
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 *     ObAssignSecurity @ 0x140A9D250 (ObAssignSecurity.c)
 * Callees:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14041D070 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x140424AE0 (SeAssignSecurityEx2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpAssignSecurity(__int64 a1, __int64 a2, __int64 a3, POBJECT_TYPE a4, int a5, char a6)
{
  int v9; // r15d
  __int64 v10; // rdx
  __int64 result; // rax
  int v13; // edi
  __int64 v14; // rdx
  int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // [rsp+40h] [rbp-58h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  PVOID v20; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v21[7]; // [rsp+60h] [rbp-38h] BYREF
  int v22; // [rsp+A0h] [rbp+8h] BYREF

  v21[0] = 0LL;
  v22 = 0;
  v20 = 0LL;
  v9 = a2;
  P = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  LODWORD(v21[0]) = 8;
  result = SeComputeAutoInheritByObjectTypeEx((__int64)a4, v10, a2, &v22, v21);
  if ( (int)result >= 0 )
  {
    v13 = a5 | v22;
    if ( !a6
      || (result = SeAssignSecurityEx2(
                     0,
                     *(_QWORD *)(a1 + 64),
                     (int)&P,
                     0LL,
                     a4 == ObpDirectoryObjectType,
                     0,
                     0LL,
                     a1 + 32,
                     (__int64)&a4->TypeInfo.GenericMapping),
          (int)result >= 0) )
    {
      LODWORD(v14) = (_DWORD)P;
      if ( !P )
        v14 = *(_QWORD *)(a1 + 64);
      v15 = SeAssignSecurityEx2(
              v9,
              v14,
              (int)&v20,
              0LL,
              a4 == ObpDirectoryObjectType,
              v13,
              v21,
              a1 + 32,
              (__int64)&a4->TypeInfo.GenericMapping);
      if ( v15 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        return (unsigned int)v15;
      }
      else
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        LOBYTE(v18) = KeGetCurrentThread()->PreviousMode;
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))a4->TypeInfo.SecurityProcedure == SeDefaultObjectMethod )
          v16 = SeDefaultObjectMethod(a3, 3LL, 0LL, v20, 0LL, 0LL, 1, &a4->TypeInfo.GenericMapping, v18);
        else
          v16 = guard_dispatch_icall_no_overrides(a3, 3LL);
        v17 = v16;
        if ( v16 < 0 )
        {
          if ( v20 )
            ExFreePoolWithTag(v20, 0);
        }
        return v17;
      }
    }
  }
  return result;
}
